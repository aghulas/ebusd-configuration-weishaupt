import re

def build_mapping_table(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    lines = content.split('\n')
    
    chars_by_addr = {}
    strings_by_addr = {}
    
    # 1. Extract characters and horizontal strings
    for line in lines:
        # Match vertical character definitions (e.g. 005b5ddf 65 ?? 65h e)
        char_match = re.search(r'^\s*([0-9a-fA-F]{8})\s+[0-9a-fA-F]{2}\s+\?\?\s+[0-9a-fA-F]{2}h\s+([\x20-\x7E])', line)
        if char_match:
            addr = int(char_match.group(1), 16)
            char = char_match.group(2)
            chars_by_addr[addr] = char
            continue
            
        # Match horizontal string definitions (e.g. ds "TCFLASTAB")
        ds_match = re.search(r'^\s*([0-9a-fA-F]{8}).*?ds\s+"([^"]+)"', line)
        if ds_match:
            addr = int(ds_match.group(1), 16)
            text = ds_match.group(2)
            strings_by_addr[addr] = text

    # 2. Extract pointers from the raw data
    references = []
    current_addr = None
    for line in lines:
        # Keep track of the current memory address
        addr_match = re.search(r'^\s*([0-9a-fA-F]{8})\s', line)
        if addr_match:
            current_addr = int(addr_match.group(1), 16)
            
        # Look for the Ghidra pointer annotation: ? -> 005be34c
        ptr_match = re.search(r'\?\s*->\s*([0-9a-fA-F]{8})', line, re.IGNORECASE)
        if ptr_match and current_addr is not None:
            target_addr = int(ptr_match.group(1), 16)
            references.append({
                'instr_addr': current_addr,
                'target_addr': target_addr
            })

    # Sort references by the order they appear in memory
    references.sort(key=lambda x: x['instr_addr'])

    # 3. Reconstruct strings that the pointers point to
    for ref in references:
        target = ref['target_addr']
        if target not in strings_by_addr:
            s = ""
            addr = target
            while addr in chars_by_addr:
                s += chars_by_addr[addr]
                addr += 1
            if len(s) > 1:
                # Clean off any trailing garbage bytes
                s = re.sub(r'[^A-Za-z0-9_].*$', '', s)
                if len(s) > 2:
                    strings_by_addr[target] = s

    # 4. Pair up adjacent UI names and SYC Variables
    mappings = []
    # Delphi component prefixes used in the executable
    ui_prefixes = ('Lbl', 'Btn', 'ChkBx', 'Grp', 'StrGrid', 'EGrp', 'Pnl', 'TbSht', 'ChkGrp', 'RGrp', 'Edt')
    
    for i in range(len(references) - 1):
        ref1 = references[i]
        ref2 = references[i+1]
        
        # If pointers are within 80 bytes of each other, they are assigning the same UI mapping
        if ref2['instr_addr'] - ref1['instr_addr'] <= 80:
            target1 = ref1['target_addr']
            target2 = ref2['target_addr']
            
            if target1 in strings_by_addr and target2 in strings_by_addr:
                text1 = strings_by_addr[target1]
                text2 = strings_by_addr[target2]
                
                is_ui1 = text1.startswith(ui_prefixes)
                is_ui2 = text2.startswith(ui_prefixes)
                
                if is_ui1 and not is_ui2:
                    mappings.append((text1, text2))
                elif is_ui2 and not is_ui1:
                    mappings.append((text2, text1))

    # 5. Print out the final mapping table
    print(f"{'UI COMPONENT':<35} | {'SYC VARIABLE'}")
    print("=" * 65)
    
    unique_mappings = sorted(list(set(mappings)))
    if not unique_mappings:
        print("No mappings found. Ensure the file path is correct.")
    else:
        for ui, syc in unique_mappings:
            print(f"{ui:<35} | {syc}")

if __name__ == "__main__":
    # Ensure this matches the name of the dump file you saved
    build_mapping_table("FUN_005b5c6c.txt")