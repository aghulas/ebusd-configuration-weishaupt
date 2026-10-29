import csv
import re
import os
import glob

# Aggressive filter for Delphi layout noise
NOISE_WORDS = {
    'Align', 'alClient', 'alTop', 'alBottom', 'alLeft', 'alRight',
    'MultiLine', 'ParentShowHint', 'ShowHint', 'TabOrder', 
    'OnChange', 'FormShow', 'ImageIndex', 'OnHide', 'OnShow', 'Enabled', 
    'HorzScrollBar.Visible', 'VertScrollBar.Visible', 'BorderStyle', 'bsNone', 'bsSingle',
    'Distance', 'HorDistance', 'Columns', 'DistanceH', 'DistanceV', 'ImeName', 
    'Text', 'Left', 'Width', 'Top', 'Height', 'Color', 'Font', 'object',
    'Transparent', 'WordWrap', 'AutoSize', 'Visible', 'ItemIndex',
    'ClientHeight', 'ClientWidth', 'PixelsPerInch', 'TextHeight', 'OldCreateOrder',
    'Position', 'poDefault', 'FormStyle', 'fsMDIChild', 'DEFAULT_CHARSET',
    'clWindowText', 'clBtnFace', 'biSystemMenu', 'biMinimize', 'biMaximize',
    'FormActivate', 'FormClose', 'FormCreate', 'FormKeyPress', 'FormPaint',
    'Font.Charset', 'Font.Color', 'Font.Height', 'Font.Name', 'Font.Style', 
    'MS Sans Serif', 'Arial', 'Tahoma', 'True', 'False', 'Caption', 'Hint',
    'stOtherStrings', 'stStrings', 'Strings', 'OnClick'
}

# Delphi UI classes typically start with 'T' followed by an uppercase letter
TYPE_PATTERN = re.compile(r'^T[A-Z][a-zA-Z0-9_]+$')
VALID_COMP_PATTERN = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')

def is_valid_translation(val):
    if not val or len(val) < 2: return False
    if val in NOISE_WORDS: return False
    if val.isdigit(): return False
    if re.match(r'^[a-zA-Z0-9_]+\.(ImeName|Text|Caption|Visible|Enabled|Color|Font|Width|Height|Left|Top|ItemIndex|OnChange|OnClick)$', val, re.IGNORECASE): 
        return False
    if re.match(r'^(cl|bs|al|fs|po|bi)[A-Z][a-zA-Z0-9]*$', val):
        return False
    return True

def process_single_file(input_file, output_file):
    components = {}
    current_main_comp = None

    with open(input_file, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            line = line.strip()
            
            if line.startswith('[Component]:'):
                comp_raw = line.replace('[Component]:', '').strip()
                
                # Skip sub-properties and strings with dots
                if 'Strings' in comp_raw or 'stOtherStrings' in comp_raw or '.' in comp_raw:
                    continue
                    
                if VALID_COMP_PATTERN.match(comp_raw):
                    current_main_comp = comp_raw
                    if current_main_comp not in components:
                        components[current_main_comp] = {'type': '', 'translations': []}
                else:
                    current_main_comp = None
                continue
                
            if line.startswith('->') and current_main_comp is not None:
                val = line.replace('->', '', 1).strip()
                
                if TYPE_PATTERN.match(val):
                    if not components[current_main_comp]['type']:
                        components[current_main_comp]['type'] = val
                    continue
                    
                if is_valid_translation(val):
                    # Safely join array options (like dropdowns) with " | "
                    if '","' in val:
                        val = val.replace('","', ' | ')
                        
                    val = val.strip(' "\'').replace('\n', ' ').replace('\r', '')
                    
                    # Add to list, avoiding exact adjacent duplicates
                    if len(components[current_main_comp]['translations']) == 0 or val != components[current_main_comp]['translations'][-1]:
                        components[current_main_comp]['translations'].append(val)

    # Clean out empty components
    cleaned_components = {k: v for k, v in components.items() if len(v['translations']) > 0}
    
    if not cleaned_components:
        return 0 # Skip creating empty files

    # 14 Known Weishaupt Languages
    headers = [
        'Component', 'Type', 'German', 'English', 'French', 'Italian', 
        'Spanish', 'Dutch', 'Danish', 'Swedish', 'Norwegian', 
        'Slovenian', 'Croatian', 'Hungarian', 'Polish', 'Russian'
    ]

    with open(output_file, 'w', encoding='utf-8', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        
        for comp in sorted(cleaned_components.keys()):
            data = cleaned_components[comp]
            trans = data['translations']
            
            # STRICT 14-LANGUAGE ENFORCEMENT
            if len(trans) >= 14:
                trans = trans[-14:]
            else:
                trans = trans + [''] * (14 - len(trans))
                
            row = [comp, data['type']] + trans
            writer.writerow(row)
            
    return len(cleaned_components)

def batch_process(input_dir, output_dir):
    if not os.path.exists(input_dir):
        print(f"Error: The input directory '{input_dir}' does not exist.")
        return
        
    os.makedirs(output_dir, exist_ok=True)
    
    # Find all text files in the input directory
    txt_files = glob.glob(os.path.join(input_dir, "*.txt"))
    
    if not txt_files:
        print(f"No .txt files found in {input_dir}")
        return
        
    print(f"Found {len(txt_files)} files. Starting batch processing...\n")
    
    total_processed = 0
    total_components = 0
    
    for filepath in txt_files:
        filename = os.path.basename(filepath)
        csv_filename = os.path.splitext(filename)[0] + ".csv"
        out_filepath = os.path.join(output_dir, csv_filename)
        
        comps_found = process_single_file(filepath, out_filepath)
        
        if comps_found > 0:
            print(f" -> Created {csv_filename} ({comps_found} components)")
            total_processed += 1
            total_components += comps_found
        else:
            print(f" -> Skipped {filename} (No UI text found)")

    print(f"\nDone! Successfully generated {total_processed} CSV files containing {total_components} total UI components.")
    print(f"Check the '{output_dir}' folder.")

if __name__ == "__main__":
    # Define your folders here
    INPUT_FOLDER = "Extracted_Translations/Forms"
    OUTPUT_FOLDER = "Extracted_Translations/CSV_Matrices"
    
    batch_process(INPUT_FOLDER, OUTPUT_FOLDER)