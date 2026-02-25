import string

def decode_syc_with_sections_file_order(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()

    # Define the section headers we know exist in the Weishaupt firmware files
    section_headers = [
        b"Liste der RAM-Daten",
        b"Bit-Liste",
        b"SFR-Liste",
        b"Liste der Konstanten",
        b"Liste der XRAM-Daten"
    ]
    
    # Find the exact byte offset where each section begins in the binary
    sections = []
    for header in section_headers:
        pos = data.find(header)
        if pos != -1:
            sections.append((pos, header.decode('ascii')))
    
    # Sort sections by their byte offset so we can track them sequentially
    sections.sort()
    
    # Helper function: Give it a byte offset, it tells you what section you are in
    def get_section_for_offset(offset):
        current_sec = "Global / Header"
        for sec_pos, sec_name in sections:
            if offset > sec_pos:
                current_sec = sec_name
            else:
                break
        return current_sec

    # Standard dictionaries in Python 3.7+ preserve insertion order automatically
    results = {}
    
    # Define valid characters for a variable name (A-Z, a-z, 0-9, _)
    valid_chars = set(string.ascii_letters.encode('ascii') + string.digits.encode('ascii') + b'_')
    valid_start = set(string.ascii_letters.encode('ascii') + b'_')

    i = 0
    while i < len(data) - 40:
        length = data[i]
        
        # Look for reasonable length variable names (between 2 and 35 characters)
        if 2 <= length <= 35:
            name_bytes = data[i+1 : i+1+length]
            
            # Verify string strictly follows variable naming rules
            if name_bytes[0] in valid_start and all(b in valid_chars for b in name_bytes):
                
                name = name_bytes.decode('ascii')
                
                # Grab the next 2 bytes as the Hex Address
                addr_bytes = data[i+1+length : i+1+length+2]
                
                # SWAP ENDIANNESS: Reverse the bytes so 6E 00 becomes 00 6E
                hex_id = addr_bytes[::-1].hex().upper()
                
                # Determine which section this variable belongs to
                section_name = get_section_for_offset(i)
                
                # Initialize the section dictionary if it doesn't exist yet
                if section_name not in results:
                    results[section_name] = {}
                    
                # Save it. Because we process linearly, this preserves the exact file order!
                results[section_name][name] = hex_id
                
                # Skip past this string so we don't overlap
                i += length
        i += 1

    # --- PRINT THE FORMATTED RESULTS IN FILE ORDER ---
    total_vars = sum(len(items) for items in results.values())
    print(f"--- EXTRACTED {total_vars} VARIABLES (IN FILE ORDER) ---")
    
    # Print grouped by section, exactly as they appear in the file
    for section, variables in results.items():
        print(f"\n[{section}]")
        print("=" * 40)
        
        # Iterate over the variables without sorting them
        for var_name, hex_val in variables.items():
            print(f"{var_name:<30} = 0x{hex_val}")

if __name__ == "__main__":
    decode_syc_with_sections_file_order("WH11928.SYC")