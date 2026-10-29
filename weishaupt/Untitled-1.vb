

COMMON = 0x0058
ZUEND                          = 0x0059
V1                             = 0x005A
V2                             = 0x005B
PROG_REL_1                     = 0x005C
PROG_REL_2                     = 0x005D
PUHZ                           = 0x005E
PROG_REL_3                     = 0x005F

1;0;1;1;0;1;0;1
GDW                            = 0x0038
LDW                            = 0x0039
FS_IN_1                        = 0x003A
FS_IN_2                        = 0x003B
FS_IN_3                        = 0x003C
FS_IN_4                        = 0x003D
FL = 0x003E
DREHZ_OK = 0x003F
                MFID(P) Device(W)  ClassID   SW_Major SW_Minor HW_Major HW_Minor

                Class ID -> 
                      00 = KA-WST
                      01 = KA-WST
                      02 = FS
                      03 = EM
                      04 = SOL-WST
                      57 = WTO-OB-WST

                      FA = WTC 250

50070400 / 0a 50 57 01 00 41 20 66 18 ff 01
15070400 / 0a 50 57 01 00 41 20 66 18 ff 01 = 1: scan.15 -> KA
f6070400 / 0a 50 57 01 00 41 20 66 18 ff 01 = 30: scan.f6  -> KA

0c070400 / 0a ff ff ff 00 00 80 ffff ffff

08070400 / 0a 50 57 fa 00 19 33 11 04 05.01 = 5: scan.08 -> WTC 250 HA
18070400 / 0a 50 57 fa 00 19 13 11 04 05.01 = 1: scan.18 -> WTC 250 H
                               
f5070400 / 0a 50 57 02 00 08 00 27 26 ff.ff  -> FS
35070400 / 0a 50 57 02 00 18 00 27 26 ff.ff  -> FS
75070400 / 0a 50 57 02 00 18 00 27 26 ff.ff  -> FS               

51070400 / 0a 50 57 03 00 08 00 72 03 ff.ff = 1: scan.51 -> EM
52070400 / 0a 50 57 03 00 08 00 72 03 ff.ff = 2: scan.52 -> EM

05070400 / 0a 50 00 00 00 00 00 01 20 00 98 = 1

WTC-CPU-R5#A WTC 250 HA 11.0e
WTC-CPU-R5#B WTC 250 H  11.0e

FS#1+2 3  EM version 3 
FS#3 EM-HZ#3 3 27.26  EM version 3 
KA 2 66.18 





1. The Data Structure (The 0x158 offsets)
Throughout the code, you see instructions like MOV AL, byte ptr [EAX + 0x158].
EAX points to a data record for the device, and the offset 0x158 is where the 10-byte 07 04 payload is stored in memory.

Here is how the assembly maps the payload:

0x158 = Payload Byte 0 (Checks for 0x50 / 'P')
0x159 = Payload Byte 1 (Checks for 0x57 / 'W')
0x15a = Payload Byte 2 (Variant/Class)
0x15b = Payload Byte 3
0x15c = Payload Byte 4
0x15e = Payload Byte 6 (Usually Firmware Major Version)
0x15f = Payload Byte 7 (Usually Firmware Minor Version)
0x160 = Payload Byte 8 (Hardware Type ID)
0x161 = Payload Byte 9 (Hardware Revision)

31 35 0704 00 / 0a5057 02 00 08 00 96 34 ff ff = 1: scan.35   FS
31 f6 0704 00 / 0a
50 'P'
57 'W'
57 (Variant/Class)
53
54
b1
Usually Firmware Major Version 04
Usually Firmware Minor Version 05
Hardware Type ID 51
Hardware Revision 03

2. The Main Dispatcher: The Address Routing (EBX)


Route 1: Address 0xF6 (Internal Diagnostics / Base Boards)

If the device answers on 0xF6, 

      if HW_Major 0x01, 0x03, 0x04, or 0x05, -> "WCM-WST" 
      if HW_Major 0x50 -> "WTO-WST" 
      if ClassID  0x00 or 0x01 -> "KA-WST" 
                  0x04 -> "SOL-WST"
      if ClassID  0x57 & HW_Major = 0x51 -> WCM-OB-WST

      Else  "Unknown device".

If the device answers on (Addresses 0x08, 0x18, 0x38, 0x78, 0x84, 0xF8)

the software confirms the PW signature (0x50 0x57) at 0054e73b and 0054e751. Then it maps the CPU string directly based on the exact address:

Address 0x08: "WCM-CPU#1" "WCM-OB-WST" if SW_Major is 0x07).
Address 0x18: "WCM-CPU#A"
Address 0x38: "WCM-CPU#B"
Address 0x78: "WCM-CPU#C"
Address 0x84: "WCM-CPU#D"
Address 0xF8: "WCM-CPU#E"

Route 3: Fernstations / Extension Modules (Addresses 0x35, 0x75, 0xF5, 0x1C, 0x3C, 0x7C, 0xFC, 0x24)
Address 0x35: "FS#1+2"  or "FS/EM" depending on the firmware bytes.
Address 0x75: "FB#2 EM#2" 
Address 0xF5: "FB#3 EM#3"
Address 0x1C: "FB#4 EM#4" 
Address 0x24: "FB#5 EM#5" 
Address 0x3C: "FB#6 EM#6" 
Address 0xFC: "FB#7 EM#7" 
Address 0x7C: "FB#8 EM#8" 

Route 4: The Displays / User Interfaces (Address 0x15)

If HW_Major == 0x50: -> " WTO "  

If HW_Major == 0x51: -> " WTC " 


3. The Special Switch Case (Firmware Parsing)
You might have noticed the switch block at 0054e973.

if SW_Major = 0x11 or  0x12 or 0x13 or 0x14 or 0x15


SW_Minor 0 a
         1 b
         2 c
         3 d
         4 e
         5 f
         6 g
         7 h
         8 i
         9 j
         a k
         b l
         c m
         d n
         e o 
         f p