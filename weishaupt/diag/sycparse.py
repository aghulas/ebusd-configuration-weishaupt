import struct
import os

def parse_syc_file(filepath):
    """
    Parses a Weishaupt .SYC firmware symbol file and extracts the 
    variable names, hex addresses, and memory banks.
    """
    print(f"--- Parsing {os.path.basename(filepath)} ---")
    variables = []
    
    with open(filepath, 'rb') as f:
        data = f.read()

    # The parser FSM State 0: Look for the Magic Byte 'z' (0x7A)
    start_idx = data.find(b'z')
    if start_idx == -1:
        print("Error: Magic byte 'z' not found. Not a valid Weishaupt SYC file.")
        return []

    # Start parsing immediately after the magic byte
    idx = start_idx + 1

    while idx < len(data):
        try:
            # 1. Read String Length (Pascal String format)
            name_len = data[idx]
            idx += 1

            # Break if we hit EOF padding or an impossible length
            if name_len == 0 or idx + name_len > len(data):
                break

            # 2. Extract the Variable Name
            var_name_bytes = data[idx : idx + name_len]
            var_name = var_name_bytes.decode('ascii', errors='ignore').strip()
            idx += name_len

            # 3. Read the 4-byte payload (2-byte Address + 1-byte Bank + 1-byte Delimiter)
            if idx + 4 > len(data):
                break
                
            # Unpack 2 bytes as an unsigned short (Little Endian)
            address = struct.unpack('<H', data[idx : idx + 2])[0]
            
            # The next byte dictates the memory bank (RAM, XRAM, Bit, SFR)
            bank_type = data[idx + 2]
            
            idx += 4

            # Basic sanity check to ignore garbage data at the end of the file
            if var_name.isprintable() and len(var_name) >= 2:
                variables.append({
                    "name": var_name,
                    "address": address,
                    "bank": bank_type
                })
                
        except Exception as e:
            print(f"Parsing stopped at offset {hex(idx)}: {e}")
            break

    # --- Output the Results ---
    print(f"Found {len(variables)} variables in dictionary.\n")
    print(f"{'Variable Name':<25} | {'Hex ID':<8} | {'Dec ID':<8} | {'Mem Bank'}")
    print("-" * 60)
    
    for var in variables:
        # Formatting the output nicely for your ebusd CSV creation!
        print(f"{var['name']:<25} | 0x{var['address']:04X} | {var['address']:<8} | 0x{var['bank']:02X}")

    return variables

# ==========================================
# Example usage:
# ==========================================
if __name__ == "__main__":
    # Point this to one of the files you uploaded earlier, like WH11928.SYC
    file_to_parse = "0051366.SYC" 
    
    if os.path.exists(file_to_parse):
        parsed_data = parse_syc_file(file_to_parse)
    else:
        print(f"Please place {file_to_parse} in the same directory as this script.")