import os
import glob

def generate_template_files():
    # Find all .SYC files in the current folder (handles both .SYC and .syc)
    syc_files = glob.glob("*.SYC") + glob.glob("*.syc")
    syc_files = list(set(syc_files))
    
    if not syc_files:
        print("No .SYC files found in the current directory.")
        return

    actual_sections = ["RAM", "Bits", "SFR", "Konstanten", "External RAM (XRAM)", "EOF"]
    section_footers = [
        b"Liste der RAM-Daten", b"Bit-Liste", b"SFR-Liste",
        b"Liste der Konstanten", b"Liste der XRAM-Daten"
    ]

    print(f"Found {len(syc_files)} symbol files. Generating templates...\n")

    for filepath in syc_files:
        print(f"Processing {filepath}...")
        with open(filepath, 'rb') as f:
            data = f.read()

        section_idx = 0
        current_section = actual_sections[section_idx]
        
        grouped_templates = {sec: {} for sec in actual_sections}
        seen_names = set()

        offset = 0
        while offset < len(data) - 2:
            found_footer = False
            for footer in section_footers:
                if data[offset:offset+len(footer)] == footer:
                    section_idx += 1
                    if section_idx < len(actual_sections):
                        current_section = actual_sections[section_idx]
                    offset += len(footer)
                    found_footer = True
                    break
            
            if found_footer: continue

            length = data[offset]
            if 2 < length < 40:
                name_bytes = data[offset+1 : offset+1+length]
                valid_chars = b'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_+'
                
                if all(b in valid_chars for b in name_bytes):
                    name = name_bytes.decode('ascii')
                    meta = data[offset+1+length : offset+1+length+2]
                    
                    if len(meta) == 2:
                        # We still check seen_names so we don't write identical lines 
                        # if the exact same name appears twice in the SYC file.
                        if name not in seen_names:
                            seen_names.add(name)
                            address = int.from_bytes(meta, byteorder='little')
                            
                            if current_section == "Bits":
                                bit_pos = address % 8
                                template_line = f"_{name}:{name},BI{bit_pos},,,"
                            else:
                                template_line = f"_{name}:{name},UCH,,,"
                                
                            template_line = f"{template_line:<40} # 0x{address:04X}"
                            
                            grouped_templates[current_section][name] = {
                                'address': address,
                                'line': template_line
                            }
                        
                        offset += 1 + length + 2
                        if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                            offset += 2
                        continue
            offset += 1

        out_filepath = os.path.splitext(filepath)[0] + "_template.inc"
        
        with open(out_filepath, 'w') as out_f:
            out_f.write("# ebusd template definitions\n")
            for section in actual_sections:
                if grouped_templates[section]:
                    out_f.write(f"\n# =========================================\n")
                    out_f.write(f"# --- {section} ---\n")
                    out_f.write(f"# =========================================\n")
                    
                    sorted_items = sorted(grouped_templates[section].values(), key=lambda item: item['address'])
                    prev_byte_addr = None
                    
                    for item in sorted_items:
                        address = item['address']
                        if section == "Bits":
                            byte_addr = address // 8
                            if prev_byte_addr is not None and byte_addr != prev_byte_addr:
                                out_f.write("\n")
                            prev_byte_addr = byte_addr
                        out_f.write(item['line'] + "\n")
                        
        print(f"  -> Generated {out_filepath} ({len(seen_names)} active templates)")

if __name__ == "__main__":
    generate_template_files()