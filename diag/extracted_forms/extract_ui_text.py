import pefile
import re

def extract_all_translations(exe_path):
    print(f"Loading {exe_path} and scanning for UI components...\n")
    try:
        pe = pefile.PE(exe_path)
    except Exception as e:
        print(f"Error loading EXE: {e}")
        return

    RT_RCDATA = 10 # Windows Resource ID for Delphi Forms
    all_mappings = {}
    
    # Standard Delphi UI prefixes we want to track
    ui_prefixes = ('Lbl', 'Btn', 'ChkBx', 'Grp', 'GrpBx', 'StrGrid', 'Pnl', 'TbSht', 'ChkGrp', 'RGrp', 'Edt', 'CbBx')

    if hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            if resource_type.struct.Id == RT_RCDATA:
                for resource_id in resource_type.directory.entries:
                    for resource_lang in resource_id.directory.entries:
                        
                        offset = resource_lang.data.struct.OffsetToData
                        size = resource_lang.data.struct.Size
                        raw_data = pe.get_memory_mapped_image()[offset:offset+size]
                        
                        # EXTRACT STRINGS USING A CUSTOM BYTE SCANNER
                        # \x20-\x7E grabs standard letters/numbers
                        # \x80-\xFF grabs German umlauts (ä, ö, ü, ß) and special characters
                        pattern = b'[\x20-\x7E\x80-\xFF]{2,}'
                        raw_matches = re.findall(pattern, raw_data)
                        
                        strings = []
                        for match in raw_matches:
                            try:
                                # Decode using the standard Windows European encoding
                                s = match.decode('cp1252').strip()
                                if len(s) > 1:
                                    strings.append(s)
                            except UnicodeDecodeError:
                                pass
                                
                        # STATE MACHINE: Pair the UI Components with their Captions
                        current_comp = None
                        expecting_caption = False
                        
                        for s in strings:
                            # 1. Did we find a UI component name?
                            if s.startswith(ui_prefixes) and re.match(r'^[A-Za-z0-9_]+$', s):
                                current_comp = s
                                expecting_caption = False
                                continue
                                
                            # 2. Is this the "Caption", "Text", or "Hint" property?
                            if current_comp and s in ('Caption', 'Text', 'Hint'):
                                expecting_caption = True
                                continue
                                
                            # 3. Grab the value immediately following the property!
                            if expecting_caption:
                                # Skip accidental structural properties
                                if not s.startswith(('TLabel', 'TButton', 'Left', 'Width', 'Height', 'Top', 'Font', 'Color')):
                                    all_mappings[current_comp] = s
                                
                                expecting_caption = False
                                current_comp = None

    # --- PRINT THE RESULTS ---
    if not all_mappings:
        print("No UI mappings found. Ensure the EXE is unpacked and correct.")
        return

    print(f"{'UI COMPONENT':<35} | {'SCREEN TEXT (WITH SPECIAL CHARS)'}")
    print("=" * 75)
    
    # Sort alphabetically by component name
    for comp in sorted(all_mappings.keys()):
        print(f"{comp:<35} | {all_mappings[comp]}")

if __name__ == "__main__":
    # ---> CHANGE THIS to your actual EXE file name <---
    extract_all_translations("WCMDiag5519b.exe")