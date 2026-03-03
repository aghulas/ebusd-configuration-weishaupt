import re

def extract_dfm_translations(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        lines = [line.strip() for line in f.readlines() if line.strip()]

    mappings = {}
    current_component = None
    expecting_caption = False

    # Standard Delphi UI prefixes we want to track
    ui_prefixes = ('Lbl', 'Btn', 'ChkBx', 'Grp', 'GrpBx', 'StrGrid', 'Pnl', 'TbSht', 'ChkGrp', 'RGrp', 'Edt', 'CbBx')

    for line in lines:
        # 1. Did we find a UI component name?
        if line.startswith(ui_prefixes) and re.match(r'^[A-Za-z0-9_]+$', line):
            current_component = line
            expecting_caption = False
            continue
        
        # 2. Is this the "Caption", "Text", or "Hint" property for the current component?
        if current_component and line in ('Caption', 'Text', 'Hint'):
            expecting_caption = True
            continue
            
        # 3. Grab the value immediately following the Caption property
        if expecting_caption:
            # Skip some common property noise that might accidentally fall in
            if not line.startswith(('TLabel', 'TButton', 'Left', 'Width', 'Height', 'Top')):
                mappings[current_component] = line
            
            # Reset state so we don't overwrite it until the next component
            expecting_caption = False
            current_component = None

    # Print the results
    print(f"{'UI COMPONENT':<35} | {'SCREEN TEXT'}")
    print("=" * 70)
    
    # Sort alphabetically by component name
    for comp in sorted(mappings.keys()):
        print(f"{comp:<35} | {mappings[comp]}")

if __name__ == "__main__":
    extract_dfm_translations("TFRMWCM_5.txt")