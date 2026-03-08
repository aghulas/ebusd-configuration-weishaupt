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

def get_payload_key(section, address):
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

def parse_syc_to_tsp(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()
    
    actual_sections = ["RAM", "Bits", "SFR", "Konstanten", "External RAM (XRAM)", "EOF"]
    section_footers = [
        b"Liste der RAM-Daten", b"Bit-Liste", b"SFR-Liste",
        b"Liste der Konstanten", b"Liste der XRAM-Daten"
    ]

    section_idx = 0
    current_section = actual_sections[section_idx]
    
    raw_registers = []
    parent_map = {}
    raw_bits = []
    seen_names = set()

    offset = 0
    
    # --- PASS 1: Extract all variables ---
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
                        
                        if current_section == "Bits":
                            raw_bits.append({'name': name, 'address': address})
                        else:
                            reg_obj = {
                                'name': name, 'section': current_section,
                                'section_idx': section_idx, 'address': address, 'bits': []
                            }
                            raw_registers.append(reg_obj)
                            parent_key = (current_section, address)
                            if parent_key not in parent_map:
                                parent_map[parent_key] = []
                            parent_map[parent_key].append(reg_obj)
                    
                    offset += 1 + length + 2
                    if offset + 1 < len(data) and data[offset] == 0x79 and data[offset+1] == 0x05:
                        offset += 2
                    continue
        offset += 1

    # --- PASS 2: 8051 Math to Link Bits to Parents ---
    for bit in raw_bits:
        bit_addr = bit['address']
        
        if bit_addr < 0x80:
            parent_sec = "RAM"
            parent_idx = actual_sections.index("RAM")
            parent_addr = 0x20 + (bit_addr // 8)
        else:
            parent_sec = "SFR"
            parent_idx = actual_sections.index("SFR")
            parent_addr = bit_addr & 0xF8
            
        parent_key = (parent_sec, parent_addr)
        
        # If a bit doesn't have a named parent byte in the SYC, create a generic BYTE_XX parent
        if parent_key not in parent_map:
            reg_obj = {
                'name': f"BYTE_{parent_addr:02X}", 'section': parent_sec,
                'section_idx': parent_idx, 'address': parent_addr, 'bits': []
            }
            raw_registers.append(reg_obj)
            parent_map[parent_key] = [reg_obj]
            
        for p_reg in parent_map[parent_key]:
            p_reg['bits'].append({'name': bit['name'], 'pos': bit_addr % 8})

    # --- PASS 3: Generate the TSP Domain Specific Language code ---
    parsed_records = []
    seen_payloads = {}

    for reg in raw_registers:
        payload = get_payload_key(reg['section'], reg['address'])
        if "UNKNOWN" in payload: continue
            
        crc_val = calculate_weishaupt_crc_multi(payload)
        crc_hex = f"{crc_val:02x}"
        payload_bytes_formatted = ", ".join([f"0x{payload[i:i+2]}" for i in range(0, len(payload), 2)])
        
        # Handle Aliases
        is_dup = payload in seen_payloads
        original_name = seen_payloads.get(payload, "")
        if not is_dup:
            seen_payloads[payload] = reg['name']
            
        prefix = "    // " if is_dup else "    "
        dsl_block = ""
        if is_dup:
            dsl_block += f"    // Alias of {original_name}\n"
        
        if len(reg['bits']) > 0:
            # 1. It's a Struct containing bits
            
            # Sort descending (BI7 down to BI0) and remove accidental exact name duplicates
            reg['bits'].sort(key=lambda b: b['pos'], reverse=True)
            clean_bits = []
            seen_bit_names = set()
            for b in reg['bits']:
                if b['name'] not in seen_bit_names:
                    seen_bit_names.add(b['name'])
                    clean_bits.append(b)
            
            dsl_block += f"{prefix}@ext(0x{crc_hex}, {payload_bytes_formatted})\n"
            dsl_block += f"{prefix}/** {reg['section']} 0x{reg['address']:04X} {reg['name']} */\n"
            dsl_block += f"{prefix}@inherit(memr, memw)\n"
            dsl_block += f"{prefix}model {reg['name']} {{\n"
            
            bit_lines = []
            for b in clean_bits:
                # Add an extra 4 spaces of indentation for the properties inside the struct
                bit_lines.append(f"{prefix}    {b['name']}: BI{b['pos']}")
                
            dsl_block += ",\n".join(bit_lines) + "\n"
            dsl_block += f"{prefix}}}\n"
            
        else:
            # 2. It's a standard Byte Register
            if reg['name'].startswith("BYTE_"):
                continue
                
            dsl_block += f"{prefix}/** {reg['section']} 0x{reg['address']:04X} {reg['name']} */\n"
            dsl_block += f"{prefix}@ext(0x{crc_hex}, {payload_bytes_formatted})\n"
            dsl_block += f"{prefix}model {reg['name']} is Memory<UCH>;\n"
            
        if dsl_block.strip():
            parsed_records.append({
                'section': reg['section'],
                'section_idx': reg['section_idx'],
                'cc': reg['address'] >> 8,
                'yy': reg['address'] & 0xFF,
                'text': dsl_block
            })

    # Sort chronologically
    parsed_records.sort(key=lambda r: (r['section_idx'], r['cc'], r['yy']))

    # --- PASS 4: Write the file with Header and Footer ---
    out_filepath = os.path.splitext(filepath)[0] + ".tsp"
    with open(out_filepath, 'w') as out_f:
        
        out_f.write('import "@ebusd/ebus-typespec";\n')
        out_f.write('import "./_templates.tsp";\n\n')
        out_f.write('using Ebus;\n')
        out_f.write('using Ebus.Num;\n')
        out_f.write('using Ebus.Dtm;\n')
        out_f.write('using Ebus.Str;\n\n')
        out_f.write('namespace Weishaupt;\n\n')
        out_f.write('namespace memory {\n')
        
        current_print_section = None
        for record in parsed_records:
            if record['section'] != current_print_section:
                current_print_section = record['section']
                out_f.write(f"\n    // ====================================\n")
                out_f.write(f"    // --- {current_print_section} ---\n")
                out_f.write(f"    // ====================================\n\n")
                
            out_f.write(record['text'] + "\n")
            
        out_f.write("}\n")
            
    print(f"  -> Generated {out_filepath} ({len(parsed_records)} modeled variables)")

if __name__ == "__main__":
    syc_files = glob.glob("*.SYC") + glob.glob("*.syc")
    syc_files = list(set(syc_files))
    
    if not syc_files:
        print("No .SYC files found in the current directory.")
    else:
        print(f"Found {len(syc_files)} symbol files. Generating .tsp models...\n")
        for file in syc_files:
            print(f"Processing {file}...")
            parse_syc_to_tsp(file)
        print("\nAll files processed successfully!")