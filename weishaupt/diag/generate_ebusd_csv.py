import os
import glob

def calculate_weishaupt_crc_multi(hex_payload_string):
    """
    Calculates the Weishaupt 1-byte checksum for a payload of any length.
    """
    data_bytes = bytes.fromhex(hex_payload_string)
    
    if not data_bytes:
        return 0
        
    crc = data_bytes[0]
    
    for next_byte in data_bytes[1:]:
        for _ in range(8):
            if crc & 0x80:
                crc = ((crc << 1) ^ 0x5C) & 0xFF
            else:
                crc = (crc << 1) & 0xFF
        crc ^= next_byte
        
    return crc

def generate_ebusd_lines(section, name, address):
    """
    Applies the specific formatting and CRC generation rules based on the
    memory section and the CC byte of the address. Generates both read (r) 
    and write (w) lines.
    """
    cc = address >> 8      # High byte
    yy = address & 0xFF    # Low byte
    yy_hex = f"{yy:02X}"
    
    payload = None
    
    if section == "RAM":
        if cc == 0x00:
            payload = f"01{yy_hex}"
            
    elif section == "Konstanten":
        if cc == 0x00:
            payload = f"02{yy_hex}"
        elif cc == 0x01:
            payload = f"060102{yy_hex}"
        elif cc == 0x02:
            payload = f"060202{yy_hex}"
        elif cc == 0x03:
            payload = f"060302{yy_hex}"
            
    elif section == "External RAM (XRAM)":
        if cc == 0xF0:
            payload = f"03{yy_hex}"
            
    elif section == "SFR":
        if cc == 0x00:
            payload = f"04{yy_hex}"

    # If the address matched a rule, calculate the CRC and return the formatted lines
    if payload:
        crc_val = calculate_weishaupt_crc_multi(payload)
        crc_hex = f"{crc_val:02X}"
        
        # Build the Read line
        r_line = f'r,,{name},,,,,"{crc_hex}{payload}",,s,_8_Skip,,, ,,s,_{name},,,'
        # Build the Write line
        w_line = f'w,,{name},,,,,"{crc_hex}{payload}",,m,_{name},,,'
        
        return f"{r_line}\n{w_line}"
        
    return None

def parse_syc_to_ebusd(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()
    
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

    section_idx = 0
    current_section = actual_sections[section_idx]
    
    # List to hold all our parsed records before printing
    parsed_records = []

    offset = 0
    while offset < len(data) - 2:
        # 1. Check for section footer to advance state machine
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
                    address = int.from_bytes(meta, byteorder='little')
                    
                    # Generate the ebusd lines (read and write) for this specific register
                    ebusd_lines = generate_ebusd_lines(current_section, name, address)
                    
                    # Store it in our list if it generated valid lines
                    if ebusd_lines:
                        parsed_records.append({
                            'section': current_section,
                            'section_idx': section_idx,
                            'cc': address >> 8,
                            'yy': address & 0xFF,
                            'name': name,
                            'lines': ebusd_lines
                        })
                    
                    # Jump forward: Length byte + string length + 2 address bytes
                    offset += 1 + length + 2
                    
                    # Skip the 79 05 marker if it exists
                    if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                        offset += 2
                        
                    continue
        offset += 1

    # --- Sorting the Data ---
    parsed_records.sort(key=lambda r: (r['section_idx'], r['cc'], r['yy']))

    # --- File Output Generation ---
    out_filepath = os.path.splitext(filepath)[0] + ".inc"
    
    with open(out_filepath, 'w') as out_f:
        # Write Headers
        out_f.write("# type,circuit,name,comment,QQ,ZZ,PBSB,ID,class,name,type,divider,unit,str\n")
        out_f.write('*r,,,,,,"5000",,,,,,,\n')
        out_f.write('*w,,,,,,"5001",,,,,,,\n')
        
        current_print_section = None
        
        # Write Sorted Records
        for record in parsed_records:
            if record['section'] != current_print_section:
                current_print_section = record['section']
                out_f.write(f"\n# --- {current_print_section} ---\n")
                
            out_f.write(record['lines'] + "\n")
            
    print(f"  -> Generated {out_filepath} ({len(parsed_records)} registers mapped)")

if __name__ == "__main__":
    # Find all .SYC files in the current folder (handles both .SYC and .syc)
    syc_files = glob.glob("*.SYC") + glob.glob("*.syc")
    
    # Remove duplicates just in case (useful on Windows where glob is case-insensitive)
    syc_files = list(set(syc_files))
    
    if not syc_files:
        print("No .SYC files found in the current directory.")
    else:
        print(f"Found {len(syc_files)} symbol files. Starting batch processing...\n")
        
        for file in syc_files:
            print(f"Processing {file}...")
            parse_syc_to_ebusd(file)
            
        print("\nAll files processed successfully!")