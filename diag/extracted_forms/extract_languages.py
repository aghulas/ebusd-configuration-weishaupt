import pefile
import re
import os

# Standard Windows Language IDs (LCID)
LANGUAGES = {
    1031: "German", 1033: "English", 1036: "French", 
    1040: "Italian", 1043: "Dutch", 1045: "Polish", 
    1050: "Croatian", 1060: "Slovenian", 0: "Neutral"
}

def get_language_name(lang_id):
    return LANGUAGES.get(lang_id, f"LangID_{lang_id}")

def extract_translations(exe_path):
    print(f"Analyzing {exe_path} for Multi-Language Resources...\n")
    try:
        pe = pefile.PE(exe_path)
    except Exception as e:
        print(f"Error loading EXE: {e}")
        return

    RT_STRING = 6
    RT_RCDATA = 10
    
    # Create the main output directory
    out_dir = "Extracted_Translations"
    os.makedirs(out_dir, exist_ok=True)
    
    # ==========================================
    # PART 1: EXTRACT WINDOWS STRING TABLES
    # ==========================================
    print("Extracting Global String Tables...")
    string_tables = {} # Dictionary to group string blocks by language
    
    if hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if resource_type.struct.Id == RT_STRING:
                for resource_id in resource_type.directory.entries:
                    for resource_lang in resource_id.directory.entries:
                        lang_name = get_language_name(resource_lang.struct.Id)
                        
                        if lang_name not in string_tables:
                            string_tables[lang_name] = []
                            
                        offset = resource_lang.data.struct.OffsetToData
                        size = resource_lang.data.struct.Size
                        data = pe.get_memory_mapped_image()[offset:offset+size]
                        
                        idx = 0
                        block_id = (resource_id.struct.Id - 1) * 16
                        
                        block_lines = [f"\n--- String Block {block_id} ---"]
                        found_any = False
                        
                        while idx < len(data):
                            length = int.from_bytes(data[idx:idx+2], byteorder='little')
                            idx += 2
                            if length > 0 and idx + (length*2) <= len(data):
                                try:
                                    s = data[idx:idx+(length*2)].decode('utf-16-le')
                                    block_lines.append(f"  ID {block_id}: {s}")
                                    found_any = True
                                except UnicodeDecodeError:
                                    pass
                            idx += length * 2
                            block_id += 1
                            
                        if found_any:
                            string_tables[lang_name].extend(block_lines)

    # Save the string tables to individual files per language
    for lang, lines in string_tables.items():
        safe_lang = lang.replace("/", "_")
        filepath = os.path.join(out_dir, f"Global_Strings_{safe_lang}.txt")
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write("========================================================\n")
            f.write(f" GLOBAL STRING TABLE - {lang.upper()}\n")
            f.write("========================================================\n")
            f.write("\n".join(lines))
        print(f" -> Saved: {filepath}")

    # ==========================================
    # PART 2: EXTRACT DFM TRANSLATION ARRAYS
    # ==========================================
    print("\nExtracting DFM UI Forms...")
    forms_dir = os.path.join(out_dir, "Forms")
    os.makedirs(forms_dir, exist_ok=True)
    
    if hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if resource_type.struct.Id == RT_RCDATA:
                for resource_id in resource_type.directory.entries:
                    form_name = str(resource_id.name) if resource_id.name else f"ID_{resource_id.struct.Id}"
                    
                    for resource_lang in resource_id.directory.entries:
                        lang_name = get_language_name(resource_lang.struct.Id)
                        safe_lang = lang_name.replace("/", "_")
                        
                        offset = resource_lang.data.struct.OffsetToData
                        size = resource_lang.data.struct.Size
                        data = pe.get_memory_mapped_image()[offset:offset+size]
                        
                        # Extract strings keeping Windows-1252 encoding (German chars)
                        pattern = b'[\x20-\x7E\x80-\xFF]{3,}'
                        raw_matches = re.findall(pattern, data)
                        
                        strings = []
                        for match in raw_matches:
                            try:
                                s = match.decode('cp1252').strip()
                                if len(s) > 2:
                                    strings.append(s)
                            except UnicodeDecodeError:
                                pass
                                
                        if strings:
                            form_output = []
                            ui_prefixes = ('Lbl', 'Btn', 'ChkBx', 'Grp', 'GrpBx', 'StrGrid', 'Pnl', 'TbSht', 'ChkGrp', 'RGrp', 'Edt', 'CbBx', 'strc')
                            
                            i = 0
                            while i < len(strings):
                                current_str = strings[i]
                                
                                if current_str.startswith(ui_prefixes) or 'Strings' in current_str:
                                    form_output.append(f"\n[Component]: {current_str}")
                                    lookahead = 1
                                    
                                    # Keep grabbing values until we hit the next UI component
                                    while (i + lookahead < len(strings)):
                                        next_str = strings[i+lookahead]
                                        if next_str.startswith(ui_prefixes) or 'Strings' in next_str:
                                            break
                                            
                                        # Filter out standard Delphi noise properties
                                        if next_str not in ('Caption', 'Text', 'Hint', 'ItemIndex', 'Left', 'Width', 'Top', 'Height', 'Color', 'Font', 'object'):
                                            form_output.append(f"   -> {next_str}")
                                        lookahead += 1
                                        
                                    i += lookahead
                                else:
                                    i += 1
                            
                            # Only write a file if we actually mapped UI components
                            if len(form_output) > 0:
                                filepath = os.path.join(forms_dir, f"{form_name}_{safe_lang}.txt")
                                with open(filepath, 'w', encoding='utf-8') as f:
                                    f.write(f"--- Form: {form_name} [{lang_name}] ---\n")
                                    f.write("\n".join(form_output))
                                print(f" -> Saved: {filepath}")

    print(f"\nExtraction complete! All files saved successfully in the '{out_dir}' directory.")

if __name__ == "__main__":
    # ---> CHANGE THIS to your executable name <---
    extract_translations("WCMDiag5519b.exe")