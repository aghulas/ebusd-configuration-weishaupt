def calculate_weishaupt_crc_multi(hex_payload_string):
    """
    Calculates the Weishaupt 1-byte checksum for a payload of any length.
    
    Args:
        hex_payload_string (str): The hex string of the registers WITHOUT the CRC byte.
                                  e.g., "0122015B115F01660168"
    """
    # Convert the hex string into a list of integers
    # e.g., "0122" becomes [1, 34]
    data_bytes = bytes.fromhex(hex_payload_string)
    
    if not data_bytes:
        return 0
        
    # Start the CRC with the very first byte
    crc = data_bytes[0]
    
    # Loop through the remaining bytes in the chain
    for next_byte in data_bytes[1:]:
        
        # 1. Process the current CRC through the 8 shift cycles
        for _ in range(8):
            if crc & 0x80:
                crc = ((crc << 1) ^ 0x5C) & 0xFF
            else:
                crc = (crc << 1) & 0xFF
                
        # 2. XOR the shifted result with the next byte in the chain
        crc ^= next_byte
        
    return crc

# --- Let's test it against your long chains ---

print("Testing chained payload generator...\n")

# ProcessValues4 without the leading '88' CRC
test_payload_1 = "0122015B115F01660168" 
result_1 = calculate_weishaupt_crc_multi(test_payload_1)
print(f"Payload: {test_payload_1} -> Checksum: {hex(result_1)} (Expected: 0x88)")

# ErrorHistory1 without the leading '03' CRC
test_payload_2 = "029F8263"
result_2 = calculate_weishaupt_crc_multi(test_payload_2)
print(f"Payload: {test_payload_2} -> Checksum: {hex(result_2)} (Expected: 0x03)")

# SHC1 without the leading '0C' CRC
test_payload_3 = "73BB13AC"
result_3 = calculate_weishaupt_crc_multi(test_payload_3)
print(f"Payload: {test_payload_3} -> Checksum: {hex(result_3)} (Expected: 0x0c)")

print (hex(calculate_weishaupt_crc_multi("03b2")))
print (hex(calculate_weishaupt_crc_multi("0121")))
print (hex(calculate_weishaupt_crc_multi("0125")))
print (hex(calculate_weishaupt_crc_multi("0165")))
print (hex(calculate_weishaupt_crc_multi("016a")))

