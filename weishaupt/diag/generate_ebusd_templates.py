import os
import glob

def generate_template_files():
    # Find all .SYC files in the current folder (handles both .SYC and .syc)
    syc_files = glob.glob("*.SYC") + glob.glob("*.syc")
    syc_files = list(set(syc_files))
    
    if not syc_files:
        print("No .SYC files found in the current directory.")
        return

    actual_sections = [
        "RAM",
        "Bits",
        "SFR",
        "Konstanten",
        "External RAM (XRAM)",
        "EOF"
    ]

    section_footers = [
        b"Liste der RAM-Daten",
        b"Bit-Liste",
        b"SFR-Liste",
        b"Liste der Konstanten",
        b"Liste der XRAM-Daten"
    ]

    print(f"Found {len(syc_files)} symbol files. Generating grouped templates...\n")

    for filepath in syc_files:
        print(f"Processing {filepath}...")
        with open(filepath, 'rb') as f:
            data = f.read()

        section_idx = 0
        current_section = actual_sections[section_idx]
        
        # Dictionary to group templates by section: { "RAM": {}, "Bits": {}, ... }
        grouped_templates = {sec: {} for sec in actual_sections}
        
        # Set to keep track of globally seen names to prevent ebusd duplication errors
        seen_names = set()

        offset = 0
        while offset < len(data) - 2:
            # 1. Check if we hit a footer string to change sections
            found_footer = False
            for footer in section_footers:
                if data[offset:offset+len(footer)] == footer:
                    section_idx += 1
                    if section_idx < len(actual_sections):
                        current_section = actual_sections[section_idx]
                    
                    offset += len(footer)
                    found_footer = True
                    break
            
            if found_footer:
                continue

            # 2. Extract Variable Record
            length = data[offset]
            if 2 < length < 40:
                name_bytes = data[offset+1 : offset+1+length]
                valid_chars = b'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_+'
                
                # Check if it's a valid variable name
                if all(b in valid_chars for b in name_bytes):
                    name = name_bytes.decode('ascii')
                    meta = data[offset+1+length : offset+1+length+2]
                    
                    if len(meta) == 2:
                        # Only process if we haven't seen this specific name yet
                        if name not in seen_names:
                            seen_names.add(name)
                            
                            # Apply the Bits logic vs Everything Else logic
                            if current_section == "Bits":
                                template_line = f"_{name}:{name},BI0,,,"
                            else:
                                template_line = f"_{name}:{name},UCH,,,"
                                
                            # Add to the specific section group
                            grouped_templates[current_section][name] = template_line
                        
                        # Jump forward: Length byte + string length + 2 address bytes
                        offset += 1 + length + 2
                        
                        # Skip the 79 05 marker if it exists
                        if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                            offset += 2
                            
                        continue
            offset += 1

        # --- File Output Generation ---
        # Create the output filename by replacing .SYC with _template.inc
        out_filepath = os.path.splitext(filepath)[0] + "_template.inc"
        
        with open(out_filepath, 'w') as out_f:
            out_f.write("# ebusd template definitions\n")
            
            # Iterate through sections in their natural order
            for section in actual_sections:
                # If there are actually templates in this section, print them
                if grouped_templates[section]:
                    # Write the section separator
                    out_f.write(f"\n# =========================================\n")
                    out_f.write(f"# --- {section} ---\n")
                    out_f.write(f"# =========================================\n")
                    
                    # Sort the templates alphabetically within this section
                    sorted_names = sorted(grouped_templates[section].keys())
                    for name in sorted_names:
                        out_f.write(grouped_templates[section][name] + "\n")
                
        print(f"  -> Generated {out_filepath} ({len(seen_names)} unique templates)")

    print("\nAll template files generated successfully!")

if __name__ == "__main__":
    generate_template_files()
    