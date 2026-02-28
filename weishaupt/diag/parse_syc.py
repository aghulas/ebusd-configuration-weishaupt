def parse_syc_file(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()

    print(f"{'VARIABLE NAME':<30} | {'ADDRESS':<8}")
    print("=" * 45)

    # The actual verified sections
    actual_sections = [
        "RAM",
        "Bits",
        "SFR",
        "Konstanten",
        "External RAM (XRAM)",
        "EOF"
    ]

    # The strings that mark the END of a section
    section_footers = [
        b"Liste der RAM-Daten",
        b"Bit-Liste",
        b"SFR-Liste",
        b"Liste der Konstanten",
        b"Liste der XRAM-Daten"
    ]

    section_idx = 0
    current_section = actual_sections[section_idx]
    print(f"\n--- {current_section} ---")

    offset = 0
    while offset < len(data) - 2:
        # 1. Check if we hit a footer string to change sections
        found_footer = False
        for footer in section_footers:
            if data[offset:offset+len(footer)] == footer:
                section_idx += 1
                if section_idx < len(actual_sections):
                    current_section = actual_sections[section_idx]
                    print(f"\n--- {current_section} ---")
                
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
            
            # If the string is valid ASCII
            if all(b in valid_chars for b in name_bytes):
                name = name_bytes.decode('ascii')
                
                # Grab exactly 2 bytes for the memory address
                meta = data[offset+1+length : offset+1+length+2]
                if len(meta) == 2:
                    address = int.from_bytes(meta, byteorder='little')
                    
                    print(f"{name:<30} | 0x{address:04X}")
                    
                    # Jump forward: 1 (Length) + length (String) + 2 (Address)
                    offset += 1 + length + 2
                    
                    # Skip the 79 05 marker if it exists
                    if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                        offset += 2
                        
                    continue
        offset += 1

if __name__ == "__main__":
    parse_syc_file("WH11928.SYC")