import os
import glob

def calculate_weishaupt_crc_multi(hex_payload_string):
    data_bytes = bytes.fromhex(hex_payload_string)
    if not data_bytes: return 0
    crc = data_bytes[0]
    for next_byte in data_bytes[1:]:
        for _ in range(8):
            if crc & 0x80:
                crc = ((crc << 1) ^ 0x5C) & 0xFF
            else:
                crc = (crc << 1) & 0xFF
        crc ^= next_byte
    return crc

def generate_ebusd_lines(section, name, address, is_duplicate, original_name):
    cc = address >> 8
    yy = address & 0xFF
    yy_hex = f"{yy:02X}"
    
    payload = None
    
    if section == "RAM" and cc == 0x00: payload = f"01{yy_hex}"
    elif section == "Konstanten":
        if cc == 0x00: payload = f"02{yy_hex}"
        elif cc == 0x01: payload = f"060102{yy_hex}"
        elif cc == 0x02: payload = f"060202{yy_hex}"
        elif cc == 0x03: payload = f"060302{yy_hex}"
    elif section == "External RAM (XRAM)" and cc == 0xF0: payload = f"03{yy_hex}"
    elif section == "SFR" and cc == 0x00: payload = f"04{yy_hex}"

    if payload:
        crc_val = calculate_weishaupt_crc_multi(payload)
        crc_hex = f"{crc_val:02X}"
        
        r_line = f'r,,{name},,,,,"{crc_hex}{payload}",,s,_8_Skip,,, ,,s,_{name},,,'
        w_line = f'w,,{name},,,,,"{crc_hex}{payload}",,m,_{name},,,'
        
        # Comment out the line if it is a duplicate payload
        if is_duplicate:
            r_line = f"# {r_line:<75} # Alias of {original_name}"
            w_line = f"# {w_line:<75} # Alias of {original_name}"
            
        return f"{r_line}\n{w_line}"
    return None

def get_payload_key(section, address):
    # Dummy wrapper to get the same key logic
    cc = address >> 8
    yy = address & 0xFF
    yy_hex = f"{yy:02X}"
    if section == "RAM" and cc == 0x00: return f"01{yy_hex}"
    if section == "Konstanten":
        if cc == 0x00: return f"02{yy_hex}"
        if cc == 0x01: return f"060102{yy_hex}"
        if cc == 0x02: return f"060202{yy_hex}"
        if cc == 0x03: return f"060302{yy_hex}"
    if section == "External RAM (XRAM)" and cc == 0xF0: return f"03{yy_hex}"
    if section == "SFR" and cc == 0x00: return f"04{yy_hex}"
    return f"UNKNOWN_{section}_{address:04X}"

def parse_syc_to_ebusd(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()
    
    actual_sections = ["RAM", "Bits", "SFR", "Konstanten", "External RAM (XRAM)", "EOF"]

    section_footers = [
        b"Liste der RAM-Daten", b"Bit-Liste", b"SFR-Liste",
        b"Liste der Konstanten", b"Liste der XRAM-Daten"
    ]

    section_idx = 0
    current_section = actual_sections[section_idx]
    
    parsed_records = []
    seen_names = set()
    seen_payloads = {}

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
                    if name not in seen_names:
                        seen_names.add(name)
                        address = int.from_bytes(meta, byteorder='little')
                        
                        payload_key = get_payload_key(current_section, address)
                        is_duplicate = payload_key in seen_payloads
                        original_name = seen_payloads.get(payload_key, "")
                        
                        ebusd_lines = generate_ebusd_lines(current_section, name, address, is_duplicate, original_name)
                        
                        if not is_duplicate:
                            seen_payloads[payload_key] = name
                        
                        if ebusd_lines:
                            parsed_records.append({
                                'section': current_section,
                                'section_idx': section_idx,
                                'cc': address >> 8,
                                'yy': address & 0xFF,
                                'name': name,
                                'lines': ebusd_lines
                            })
                    
                    offset += 1 + length + 2
                    if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                        offset += 2
                    continue
        offset += 1

    parsed_records.sort(key=lambda r: (r['section_idx'], r['cc'], r['yy']))

    out_filepath = os.path.splitext(filepath)[0] + ".inc"
    
    with open(out_filepath, 'w') as out_f:
        out_f.write("# type,circuit,name,comment,QQ,ZZ,PBSB,ID,class,name,type,divider,unit,str\n")
        out_f.write('*r,,,,,,"5000",,,,,,,\n')
        out_f.write('*w,,,,,,"5001",,,,,,,\n')
        
        current_print_section = None
        for record in parsed_records:
            if record['section'] != current_print_section:
                current_print_section = record['section']
                out_f.write(f"\n# --- {current_print_section} ---\n")
            out_f.write(record['lines'] + "\n")
            
    print(f"  -> Generated {out_filepath}")

if __name__ == "__main__":
    syc_files = glob.glob("*.SYC") + glob.glob("*.syc")
    syc_files = list(set(syc_files))
    
    if not syc_files:
        print("No .SYC files found in the current directory.")
    else:
        print(f"Found {len(syc_files)} symbol files. Starting batch processing...\n")
        for file in syc_files:
            print(f"Processing {file}...")
            parse_syc_to_ebusd(file)
        print("\nAll files processed successfully!")