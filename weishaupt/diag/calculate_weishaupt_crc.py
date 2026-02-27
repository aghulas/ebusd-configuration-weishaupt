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


print (hex(calculate_weishaupt_crc_multi("06011292")))
print (hex(calculate_weishaupt_crc_multi("06011294")))
print (hex(calculate_weishaupt_crc_multi("06011296")))
print (hex(calculate_weishaupt_crc_multi("06011298"))) 
print (hex(calculate_weishaupt_crc_multi("0601129A")))
print (hex(calculate_weishaupt_crc_multi("0601129C")))
print (hex(calculate_weishaupt_crc_multi("0601129E"))) 
print (hex(calculate_weishaupt_crc_multi("060112a0")))
print (hex(calculate_weishaupt_crc_multi("060112a2")))
print (hex(calculate_weishaupt_crc_multi("060112a4")))
print (hex(calculate_weishaupt_crc_multi("060112a6")))
print (hex(calculate_weishaupt_crc_multi("060112a8")))
print (hex(calculate_weishaupt_crc_multi("060112aa"))) 
print (hex(calculate_weishaupt_crc_multi("060112ac")))
print (hex(calculate_weishaupt_crc_multi("060112ae")))
print (hex(calculate_weishaupt_crc_multi("060112b9")))
print (hex(calculate_weishaupt_crc_multi("060112b2")))
print (hex(calculate_weishaupt_crc_multi("060112b4")))
print (hex(calculate_weishaupt_crc_multi("060112b6")))
print (hex(calculate_weishaupt_crc_multi("060112b8")))
print (hex(calculate_weishaupt_crc_multi("060112ba")))
print (hex(calculate_weishaupt_crc_multi("060112bc")))
print (hex(calculate_weishaupt_crc_multi("060112be")))
print (hex(calculate_weishaupt_crc_multi("060112c0")))
print (hex(calculate_weishaupt_crc_multi("060112c2")))
print (hex(calculate_weishaupt_crc_multi("060112c4"))) 
print (hex(calculate_weishaupt_crc_multi("060112c6")))
print (hex(calculate_weishaupt_crc_multi("060112c8")))
print (hex(calculate_weishaupt_crc_multi("060112ca")))
print (hex(calculate_weishaupt_crc_multi("060112cc")))
print (hex(calculate_weishaupt_crc_multi("060112ce"))) 
print (hex(calculate_weishaupt_crc_multi("060112d0")))
print (hex(calculate_weishaupt_crc_multi("060112d2"))) 
print (hex(calculate_weishaupt_crc_multi("060112d4")))
print (hex(calculate_weishaupt_crc_multi("060112d6")))
print (hex(calculate_weishaupt_crc_multi("060102d8")))
print (hex(calculate_weishaupt_crc_multi("060102da")))
print (hex(calculate_weishaupt_crc_multi("060122dc")))
print (hex(calculate_weishaupt_crc_multi("060122dd")))
print (hex(calculate_weishaupt_crc_multi("060122e0")))
print (hex(calculate_weishaupt_crc_multi("060122e3")))
print (hex(calculate_weishaupt_crc_multi("060122e6")))
print (hex(calculate_weishaupt_crc_multi("060112e9")))
print (hex(calculate_weishaupt_crc_multi("060122eb"))) 
print (hex(calculate_weishaupt_crc_multi("060112ee")))
print (hex(calculate_weishaupt_crc_multi("060102f0"))) 
print (hex(calculate_weishaupt_crc_multi("060112f1"))) 
print (hex(calculate_weishaupt_crc_multi("060122f3")))
print (hex(calculate_weishaupt_crc_multi("060102f6"))) 
print()
print (hex(calculate_weishaupt_crc_multi("06019292"))) 
print (hex(calculate_weishaupt_crc_multi("0601929C"))) 
print (hex(calculate_weishaupt_crc_multi("060192a6"))) 
print (hex(calculate_weishaupt_crc_multi("060192b9"))) 
print (hex(calculate_weishaupt_crc_multi("060192ba"))) 
print (hex(calculate_weishaupt_crc_multi("060192c4"))) 
print (hex(calculate_weishaupt_crc_multi("060192ce"))) 
print (hex(calculate_weishaupt_crc_multi("0601a2d8"))) 
print (hex(calculate_weishaupt_crc_multi("0601a2e3"))) 
print (hex(calculate_weishaupt_crc_multi("060182ee"))) 

