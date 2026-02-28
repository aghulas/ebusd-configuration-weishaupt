# type,circuit,name,comment,QQ,ZZ,PBSB,ID,class,name,type,divider,unit,str
*r,,,,,,"5000",,,,,,,
*w,,,,,,"5001",,,,,,,

# --- RAM ---
r,,IDLE_R0,,,,,"5C0100",,s,_8_Skip,,, ,,s,_IDLE_R0,,,
w,,IDLE_R0,,,,,"5C0100",,m,_IDLE_R0,,,
r,,IDLE_R1,,,,,"5D0101",,s,_8_Skip,,, ,,s,_IDLE_R1,,,
w,,IDLE_R1,,,,,"5D0101",,m,_IDLE_R1,,,
r,,IDLE_R2,,,,,"5E0102",,s,_8_Skip,,, ,,s,_IDLE_R2,,,
w,,IDLE_R2,,,,,"5E0102",,m,_IDLE_R2,,,
r,,IDLE_R3,,,,,"5F0103",,s,_8_Skip,,, ,,s,_IDLE_R3,,,
w,,IDLE_R3,,,,,"5F0103",,m,_IDLE_R3,,,
r,,IDLE_R4,,,,,"580104",,s,_8_Skip,,, ,,s,_IDLE_R4,,,
w,,IDLE_R4,,,,,"580104",,m,_IDLE_R4,,,
r,,IDLE_R5,,,,,"590105",,s,_8_Skip,,, ,,s,_IDLE_R5,,,
w,,IDLE_R5,,,,,"590105",,m,_IDLE_R5,,,
r,,IDLE_R6,,,,,"5A0106",,s,_8_Skip,,, ,,s,_IDLE_R6,,,
w,,IDLE_R6,,,,,"5A0106",,m,_IDLE_R6,,,
r,,IDLE_R7,,,,,"5B0107",,s,_8_Skip,,, ,,s,_IDLE_R7,,,
w,,IDLE_R7,,,,,"5B0107",,m,_IDLE_R7,,,
r,,BYTEDIAGNOSE,,,,,"56010A",,s,_8_Skip,,, ,,s,_BYTEDIAGNOSE,,,
w,,BYTEDIAGNOSE,,,,,"56010A",,m,_BYTEDIAGNOSE,,,
r,,select_FS_x,,,,,"4B0117",,s,_8_Skip,,, ,,s,_select_FS_x,,,
w,,select_FS_x,,,,,"4B0117",,m,_select_FS_x,,,
# r,,select_PR_x,,,,,"4B0117",,s,_8_Skip,,, ,,s,_select_PR_x,,,               # Alias of select_FS_x
# w,,select_PR_x,,,,,"4B0117",,m,_select_PR_x,,,                              # Alias of select_FS_x
r,,TIRP_R1,,,,,"450119",,s,_8_Skip,,, ,,s,_TIRP_R1,,,
w,,TIRP_R1,,,,,"450119",,m,_TIRP_R1,,,
r,,TIRP_R2,,,,,"46011A",,s,_8_Skip,,, ,,s,_TIRP_R2,,,
w,,TIRP_R2,,,,,"46011A",,m,_TIRP_R2,,,
r,,TIRP_R3,,,,,"47011B",,s,_8_Skip,,, ,,s,_TIRP_R3,,,
w,,TIRP_R3,,,,,"47011B",,m,_TIRP_R3,,,
r,,TIRP_R4,,,,,"40011C",,s,_8_Skip,,, ,,s,_TIRP_R4,,,
w,,TIRP_R4,,,,,"40011C",,m,_TIRP_R4,,,
r,,TIRP_R5,,,,,"41011D",,s,_8_Skip,,, ,,s,_TIRP_R5,,,
w,,TIRP_R5,,,,,"41011D",,m,_TIRP_R5,,,
r,,TIRP_R6,,,,,"42011E",,s,_8_Skip,,, ,,s,_TIRP_R6,,,
w,,TIRP_R6,,,,,"42011E",,m,_TIRP_R6,,,
r,,ERR_MERK,,,,,"7F0123",,s,_8_Skip,,, ,,s,_ERR_MERK,,,
w,,ERR_MERK,,,,,"7F0123",,m,_ERR_MERK,,,
r,,CONSIS_MARK,,,,,"780124",,s,_8_Skip,,, ,,s,_CONSIS_MARK,,,
w,,CONSIS_MARK,,,,,"780124",,m,_CONSIS_MARK,,,
r,,EBUS_BITS,,,,,"7A0126",,s,_8_Skip,,, ,,s,_EBUS_BITS,,,
w,,EBUS_BITS,,,,,"7A0126",,m,_EBUS_BITS,,,
r,,EB_0000,,,,,"7B0127",,s,_8_Skip,,, ,,s,_EB_0000,,,
w,,EB_0000,,,,,"7B0127",,m,_EB_0000,,,
r,,EB_0001,,,,,"740128",,s,_8_Skip,,, ,,s,_EB_0001,,,
w,,EB_0001,,,,,"740128",,m,_EB_0001,,,
r,,T_0108,,,,,"750129",,s,_8_Skip,,, ,,s,_T_0108,,,
w,,T_0108,,,,,"750129",,m,_T_0108,,,
r,,T_CALT_0108,,,,,"76012A",,s,_8_Skip,,, ,,s,_T_CALT_0108,,,
w,,T_CALT_0108,,,,,"76012A",,m,_T_CALT_0108,,,
r,,AB_0000,,,,,"77012B",,s,_8_Skip,,, ,,s,_AB_0000,,,
w,,AB_0000,,,,,"77012B",,m,_AB_0000,,,
r,,MB_0000,,,,,"70012C",,s,_8_Skip,,, ,,s,_MB_0000,,,
w,,MB_0000,,,,,"70012C",,m,_MB_0000,,,
r,,MB_0001,,,,,"71012D",,s,_8_Skip,,, ,,s,_MB_0001,,,
w,,MB_0001,,,,,"71012D",,m,_MB_0001,,,
r,,MB_0002,,,,,"72012E",,s,_8_Skip,,, ,,s,_MB_0002,,,
w,,MB_0002,,,,,"72012E",,m,_MB_0002,,,
r,,MB_0003,,,,,"73012F",,s,_8_Skip,,, ,,s,_MB_0003,,,
w,,MB_0003,,,,,"73012F",,m,_MB_0003,,,
r,,TCVSP,,,,,"6C0130",,s,_8_Skip,,, ,,s,_TCVSP,,,
w,,TCVSP,,,,,"6C0130",,m,_TCVSP,,,
r,,TCHZZ,,,,,"6D0131",,s,_8_Skip,,, ,,s,_TCHZZ,,,
w,,TCHZZ,,,,,"6D0131",,m,_TCHZZ,,,
# r,,TCSZA,,,,,"6D0131",,s,_8_Skip,,, ,,s,_TCSZA,,,                           # Alias of TCHZZ
# w,,TCSZA,,,,,"6D0131",,m,_TCSZA,,,                                          # Alias of TCHZZ
r,,TCNSP,,,,,"6E0132",,s,_8_Skip,,, ,,s,_TCNSP,,,
w,,TCNSP,,,,,"6E0132",,m,_TCNSP,,,
r,,TCFLASTAB,,,,,"6F0133",,s,_8_Skip,,, ,,s,_TCFLASTAB,,,
w,,TCFLASTAB,,,,,"6F0133",,m,_TCFLASTAB,,,
r,,NG_VSP,,,,,"680134",,s,_8_Skip,,, ,,s,_NG_VSP,,,
w,,NG_VSP,,,,,"680134",,m,_NG_VSP,,,
r,,NG_NSP,,,,,"690135",,s,_8_Skip,,, ,,s,_NG_NSP,,,
w,,NG_NSP,,,,,"690135",,m,_NG_NSP,,,
r,,NG_GR_MIN,,,,,"6A0136",,s,_8_Skip,,, ,,s,_NG_GR_MIN,,,
w,,NG_GR_MIN,,,,,"6A0136",,m,_NG_GR_MIN,,,
r,,NG_GR_MAX,,,,,"6B0137",,s,_8_Skip,,, ,,s,_NG_GR_MAX,,,
w,,NG_GR_MAX,,,,,"6B0137",,m,_NG_GR_MAX,,,
r,,NG_MAX_LIMIT,,,,,"640138",,s,_8_Skip,,, ,,s,_NG_MAX_LIMIT,,,
w,,NG_MAX_LIMIT,,,,,"640138",,m,_NG_MAX_LIMIT,,,
r,,MXSTB_K,,,,,"650139",,s,_8_Skip,,, ,,s,_MXSTB_K,,,
w,,MXSTB_K,,,,,"650139",,m,_MXSTB_K,,,
r,,MXSTW_K,,,,,"66013A",,s,_8_Skip,,, ,,s,_MXSTW_K,,,
w,,MXSTW_K,,,,,"66013A",,m,_MXSTW_K,,,
r,,ION_ON,,,,,"67013B",,s,_8_Skip,,, ,,s,_ION_ON,,,
w,,ION_ON,,,,,"67013B",,m,_ION_ON,,,
r,,ION_OFF,,,,,"60013C",,s,_8_Skip,,, ,,s,_ION_OFF,,,
w,,ION_OFF,,,,,"60013C",,m,_ION_OFF,,,
r,,LIM_ION_FLASTAB,,,,,"61013D",,s,_8_Skip,,, ,,s,_LIM_ION_FLASTAB,,,
w,,LIM_ION_FLASTAB,,,,,"61013D",,m,_LIM_ION_FLASTAB,,,
r,,TC_PRUEF_V1,,,,,"62013E",,s,_8_Skip,,, ,,s,_TC_PRUEF_V1,,,
w,,TC_PRUEF_V1,,,,,"62013E",,m,_TC_PRUEF_V1,,,
r,,TC_PRUEF_V2,,,,,"63013F",,s,_8_Skip,,, ,,s,_TC_PRUEF_V2,,,
w,,TC_PRUEF_V2,,,,,"63013F",,m,_TC_PRUEF_V2,,,
r,,P_LPG,,,,,"1C0140",,s,_8_Skip,,, ,,s,_P_LPG,,,
w,,P_LPG,,,,,"1C0140",,m,_P_LPG,,,
r,,KASK_P_ANHEB,,,,,"1D0141",,s,_8_Skip,,, ,,s,_KASK_P_ANHEB,,,
w,,KASK_P_ANHEB,,,,,"1D0141",,m,_KASK_P_ANHEB,,,
r,,KLAPPE_P_ANHEB,,,,,"1E0142",,s,_8_Skip,,, ,,s,_KLAPPE_P_ANHEB,,,
w,,KLAPPE_P_ANHEB,,,,,"1E0142",,m,_KLAPPE_P_ANHEB,,,
r,,MAXGFASTART,,,,,"1F0143",,s,_8_Skip,,, ,,s,_MAXGFASTART,,,
w,,MAXGFASTART,,,,,"1F0143",,m,_MAXGFASTART,,,
r,,NG_BR_MIN,,,,,"180144",,s,_8_Skip,,, ,,s,_NG_BR_MIN,,,
w,,NG_BR_MIN,,,,,"180144",,m,_NG_BR_MIN,,,
r,,EE_CONST_CRC,,,,,"190145",,s,_8_Skip,,, ,,s,_EE_CONST_CRC,,,
w,,EE_CONST_CRC,,,,,"190145",,m,_EE_CONST_CRC,,,
r,,T_CNT_0001,,,,,"1A0146",,s,_8_Skip,,, ,,s,_T_CNT_0001,,,
w,,T_CNT_0001,,,,,"1A0146",,m,_T_CNT_0001,,,
r,,T_CNT_0002,,,,,"1B0147",,s,_8_Skip,,, ,,s,_T_CNT_0002,,,
w,,T_CNT_0002,,,,,"1B0147",,m,_T_CNT_0002,,,
r,,T_CNT_0003,,,,,"140148",,s,_8_Skip,,, ,,s,_T_CNT_0003,,,
w,,T_CNT_0003,,,,,"140148",,m,_T_CNT_0003,,,
r,,T_CNT_0004,,,,,"150149",,s,_8_Skip,,, ,,s,_T_CNT_0004,,,
w,,T_CNT_0004,,,,,"150149",,m,_T_CNT_0004,,,
r,,T_CNT_0005,,,,,"16014A",,s,_8_Skip,,, ,,s,_T_CNT_0005,,,
w,,T_CNT_0005,,,,,"16014A",,m,_T_CNT_0005,,,
r,,T_CNT_0006,,,,,"17014B",,s,_8_Skip,,, ,,s,_T_CNT_0006,,,
w,,T_CNT_0006,,,,,"17014B",,m,_T_CNT_0006,,,
r,,T_CNT_0007,,,,,"10014C",,s,_8_Skip,,, ,,s,_T_CNT_0007,,,
w,,T_CNT_0007,,,,,"10014C",,m,_T_CNT_0007,,,
r,,T_CNT_0008,,,,,"11014D",,s,_8_Skip,,, ,,s,_T_CNT_0008,,,
w,,T_CNT_0008,,,,,"11014D",,m,_T_CNT_0008,,,
r,,T_CNT_0009,,,,,"12014E",,s,_8_Skip,,, ,,s,_T_CNT_0009,,,
w,,T_CNT_0009,,,,,"12014E",,m,_T_CNT_0009,,,
r,,EPIONNULL,,,,,"13014F",,s,_8_Skip,,, ,,s,_EPIONNULL,,,
w,,EPIONNULL,,,,,"13014F",,m,_EPIONNULL,,,
r,,S5_DAT_CRC,,,,,"0C0150",,s,_8_Skip,,, ,,s,_S5_DAT_CRC,,,
w,,S5_DAT_CRC,,,,,"0C0150",,m,_S5_DAT_CRC,,,
r,,MB_2_ALT,,,,,"0D0151",,s,_8_Skip,,, ,,s,_MB_2_ALT,,,
w,,MB_2_ALT,,,,,"0D0151",,m,_MB_2_ALT,,,
r,,BE1_50HZ_CNT,,,,,"0E0152",,s,_8_Skip,,, ,,s,_BE1_50HZ_CNT,,,
w,,BE1_50HZ_CNT,,,,,"0E0152",,m,_BE1_50HZ_CNT,,,
r,,BE2_50HZ_CNT,,,,,"0F0153",,s,_8_Skip,,, ,,s,_BE2_50HZ_CNT,,,
w,,BE2_50HZ_CNT,,,,,"0F0153",,m,_BE2_50HZ_CNT,,,
r,,BE3_50HZ_CNT,,,,,"080154",,s,_8_Skip,,, ,,s,_BE3_50HZ_CNT,,,
w,,BE3_50HZ_CNT,,,,,"080154",,m,_BE3_50HZ_CNT,,,
r,,BE4_50HZ_CNT,,,,,"090155",,s,_8_Skip,,, ,,s,_BE4_50HZ_CNT,,,
w,,BE4_50HZ_CNT,,,,,"090155",,m,_BE4_50HZ_CNT,,,
r,,BE5_50HZ_CNT,,,,,"0A0156",,s,_8_Skip,,, ,,s,_BE5_50HZ_CNT,,,
w,,BE5_50HZ_CNT,,,,,"0A0156",,m,_BE5_50HZ_CNT,,,
r,,BE6_50HZ_CNT,,,,,"0B0157",,s,_8_Skip,,, ,,s,_BE6_50HZ_CNT,,,
w,,BE6_50HZ_CNT,,,,,"0B0157",,m,_BE6_50HZ_CNT,,,
r,,BE7_50HZ_CNT,,,,,"040158",,s,_8_Skip,,, ,,s,_BE7_50HZ_CNT,,,
w,,BE7_50HZ_CNT,,,,,"040158",,m,_BE7_50HZ_CNT,,,
r,,BE8_50HZ_CNT,,,,,"050159",,s,_8_Skip,,, ,,s,_BE8_50HZ_CNT,,,
w,,BE8_50HZ_CNT,,,,,"050159",,m,_BE8_50HZ_CNT,,,
# r,,NGIST_CNT,,,,,"050159",,s,_8_Skip,,, ,,s,_NGIST_CNT,,,                   # Alias of BE8_50HZ_CNT
# w,,NGIST_CNT,,,,,"050159",,m,_NGIST_CNT,,,                                  # Alias of BE8_50HZ_CNT
r,,RES_CYCL_CNT,,,,,"06015A",,s,_8_Skip,,, ,,s,_RES_CYCL_CNT,,,
w,,RES_CYCL_CNT,,,,,"06015A",,m,_RES_CYCL_CNT,,,
r,,RES_CNT,,,,,"07015B",,s,_8_Skip,,, ,,s,_RES_CNT,,,
w,,RES_CNT,,,,,"07015B",,m,_RES_CNT,,,
r,,RES_CNT_INV,,,,,"00015C",,s,_8_Skip,,, ,,s,_RES_CNT_INV,,,
w,,RES_CNT_INV,,,,,"00015C",,m,_RES_CNT_INV,,,
r,,TVISTAD,,,,,"01015D",,s,_8_Skip,,, ,,s,_TVISTAD,,,
w,,TVISTAD,,,,,"01015D",,m,_TVISTAD,,,
r,,T_ESTB2,,,,,"02015E",,s,_8_Skip,,, ,,s,_T_ESTB2,,,
w,,T_ESTB2,,,,,"02015E",,m,_T_ESTB2,,,
r,,Z_ION,,,,,"03015F",,s,_8_Skip,,, ,,s,_Z_ION,,,
w,,Z_ION,,,,,"03015F",,m,_Z_ION,,,
r,,AB_0000_ALT,,,,,"3C0160",,s,_8_Skip,,, ,,s,_AB_0000_ALT,,,
w,,AB_0000_ALT,,,,,"3C0160",,m,_AB_0000_ALT,,,
r,,TH1_2,,,,,"3D0161",,s,_8_Skip,,, ,,s,_TH1_2,,,
w,,TH1_2,,,,,"3D0161",,m,_TH1_2,,,
r,,TRLIST,,,,,"3E0162",,s,_8_Skip,,, ,,s,_TRLIST,,,
w,,TRLIST,,,,,"3E0162",,m,_TRLIST,,,
r,,TABGAS,,,,,"3F0163",,s,_8_Skip,,, ,,s,_TABGAS,,,
w,,TABGAS,,,,,"3F0163",,m,_TABGAS,,,
r,,CNTBOOSTER,,,,,"380164",,s,_8_Skip,,, ,,s,_CNTBOOSTER,,,
w,,CNTBOOSTER,,,,,"380164",,m,_CNTBOOSTER,,,
r,,F_CODE,,,,,"390165",,s,_8_Skip,,, ,,s,_F_CODE,,,
w,,F_CODE,,,,,"390165",,m,_F_CODE,,,
r,,ANAIN4,,,,,"3A0166",,s,_8_Skip,,, ,,s,_ANAIN4,,,
w,,ANAIN4,,,,,"3A0166",,m,_ANAIN4,,,
r,,SMON_TIMEOUT,,,,,"3B0167",,s,_8_Skip,,, ,,s,_SMON_TIMEOUT,,,
w,,SMON_TIMEOUT,,,,,"3B0167",,m,_SMON_TIMEOUT,,,
r,,TVIST,,,,,"340168",,s,_8_Skip,,, ,,s,_TVIST,,,
w,,TVIST,,,,,"340168",,m,_TVIST,,,
r,,V24_CCMD,,,,,"350169",,s,_8_Skip,,, ,,s,_V24_CCMD,,,
w,,V24_CCMD,,,,,"350169",,m,_V24_CCMD,,,
r,,TWWIST,,,,,"36016A",,s,_8_Skip,,, ,,s,_TWWIST,,,
w,,TWWIST,,,,,"36016A",,m,_TWWIST,,,
r,,V24_IADR,,,,,"37016B",,s,_8_Skip,,, ,,s,_V24_IADR,,,
w,,V24_IADR,,,,,"37016B",,m,_V24_IADR,,,
r,,TAUSSEN,,,,,"30016C",,s,_8_Skip,,, ,,s,_TAUSSEN,,,
w,,TAUSSEN,,,,,"30016C",,m,_TAUSSEN,,,
r,,V24_RXCNT1MS,,,,,"31016D",,s,_8_Skip,,, ,,s,_V24_RXCNT1MS,,,
w,,V24_RXCNT1MS,,,,,"31016D",,m,_V24_RXCNT1MS,,,
r,,TVSOLL,,,,,"32016E",,s,_8_Skip,,, ,,s,_TVSOLL,,,
w,,TVSOLL,,,,,"32016E",,m,_TVSOLL,,,
r,,TWWSOLL_HS,,,,,"33016F",,s,_8_Skip,,, ,,s,_TWWSOLL_HS,,,
w,,TWWSOLL_HS,,,,,"33016F",,m,_TWWSOLL_HS,,,
r,,KESZUST,,,,,"2C0170",,s,_8_Skip,,, ,,s,_KESZUST,,,
w,,KESZUST,,,,,"2C0170",,m,_KESZUST,,,
r,,TAUSS_HS,,,,,"2D0171",,s,_8_Skip,,, ,,s,_TAUSS_HS,,,
w,,TAUSS_HS,,,,,"2D0171",,m,_TAUSS_HS,,,
r,,HZZUSTBM,,,,,"2E0172",,s,_8_Skip,,, ,,s,_HZZUSTBM,,,
w,,HZZUSTBM,,,,,"2E0172",,m,_HZZUSTBM,,,
r,,V24_TXCNT,,,,,"2F0173",,s,_8_Skip,,, ,,s,_V24_TXCNT,,,
w,,V24_TXCNT,,,,,"2F0173",,m,_V24_TXCNT,,,
r,,WWZUSTBM,,,,,"280174",,s,_8_Skip,,, ,,s,_WWZUSTBM,,,
w,,WWZUSTBM,,,,,"280174",,m,_WWZUSTBM,,,
r,,WWZUSTKM,,,,,"290175",,s,_8_Skip,,, ,,s,_WWZUSTKM,,,
w,,WWZUSTKM,,,,,"290175",,m,_WWZUSTKM,,,
r,,V24_ODAT,,,,,"2A0176",,s,_8_Skip,,, ,,s,_V24_ODAT,,,
w,,V24_ODAT,,,,,"2A0176",,m,_V24_ODAT,,,
r,,NGIST,,,,,"2B0177",,s,_8_Skip,,, ,,s,_NGIST,,,
w,,NGIST,,,,,"2B0177",,m,_NGIST,,,
r,,NGSOLL,,,,,"240178",,s,_8_Skip,,, ,,s,_NGSOLL,,,
w,,NGSOLL,,,,,"240178",,m,_NGSOLL,,,
r,,ICL100MSEC,,,,,"250179",,s,_8_Skip,,, ,,s,_ICL100MSEC,,,
w,,ICL100MSEC,,,,,"250179",,m,_ICL100MSEC,,,
r,,ICL20SEC,,,,,"26017A",,s,_8_Skip,,, ,,s,_ICL20SEC,,,
w,,ICL20SEC,,,,,"26017A",,m,_ICL20SEC,,,
r,,ICL1HRS,,,,,"27017B",,s,_8_Skip,,, ,,s,_ICL1HRS,,,
w,,ICL1HRS,,,,,"27017B",,m,_ICL1HRS,,,
r,,CNTGDWOSZ,,,,,"20017C",,s,_8_Skip,,, ,,s,_CNTGDWOSZ,,,
w,,CNTGDWOSZ,,,,,"20017C",,m,_CNTGDWOSZ,,,
r,,S5_ERR_CODE,,,,,"21017D",,s,_8_Skip,,, ,,s,_S5_ERR_CODE,,,
w,,S5_ERR_CODE,,,,,"21017D",,m,_S5_ERR_CODE,,,
r,,YPWM,,,,,"22017E",,s,_8_Skip,,, ,,s,_YPWM,,,
w,,YPWM,,,,,"22017E",,m,_YPWM,,,
r,,STACK,,,,,"DC0180",,s,_8_Skip,,, ,,s,_STACK,,,
w,,STACK,,,,,"DC0180",,m,_STACK,,,
r,,IRAEPKANF,,,,,"F701AB",,s,_8_Skip,,, ,,s,_IRAEPKANF,,,
w,,IRAEPKANF,,,,,"F701AB",,m,_IRAEPKANF,,,
# r,,MAXTVSOLL,,,,,"F701AB",,s,_8_Skip,,, ,,s,_MAXTVSOLL,,,                   # Alias of IRAEPKANF
# w,,MAXTVSOLL,,,,,"F701AB",,m,_MAXTVSOLL,,,                                  # Alias of IRAEPKANF
r,,MINTVSOLL,,,,,"F001AC",,s,_8_Skip,,, ,,s,_MINTVSOLL,,,
w,,MINTVSOLL,,,,,"F001AC",,m,_MINTVSOLL,,,
r,,HZ_HYS,,,,,"F101AD",,s,_8_Skip,,, ,,s,_HZ_HYS,,,
w,,HZ_HYS,,,,,"F101AD",,m,_HZ_HYS,,,
r,,TBRMINOFF,,,,,"F201AE",,s,_8_Skip,,, ,,s,_TBRMINOFF,,,
w,,TBRMINOFF,,,,,"F201AE",,m,_TBRMINOFF,,,
r,,TC_SOFTSTART,,,,,"F301AF",,s,_8_Skip,,, ,,s,_TC_SOFTSTART,,,
w,,TC_SOFTSTART,,,,,"F301AF",,m,_TC_SOFTSTART,,,
r,,HZ_KP,,,,,"EC01B0",,s,_8_Skip,,, ,,s,_HZ_KP,,,
w,,HZ_KP,,,,,"EC01B0",,m,_HZ_KP,,,
r,,HZ_KTND,,,,,"ED01B1",,s,_8_Skip,,, ,,s,_HZ_KTND,,,
w,,HZ_KTND,,,,,"ED01B1",,m,_HZ_KTND,,,
r,,SONDERNIVEAU,,,,,"EE01B2",,s,_8_Skip,,, ,,s,_SONDERNIVEAU,,,
w,,SONDERNIVEAU,,,,,"EE01B2",,m,_SONDERNIVEAU,,,
r,,TAUSS_KORREKTUR,,,,,"EF01B3",,s,_8_Skip,,, ,,s,_TAUSS_KORREKTUR,,,
w,,TAUSS_KORREKTUR,,,,,"EF01B3",,m,_TAUSS_KORREKTUR,,,
r,,WARTUNGSINTERVALL,,,,,"E801B4",,s,_8_Skip,,, ,,s,_WARTUNGSINTERVALL,,,
w,,WARTUNGSINTERVALL,,,,,"E801B4",,m,_WARTUNGSINTERVALL,,,
r,,MX_DREHZ_KESSEL,,,,,"E901B5",,s,_8_Skip,,, ,,s,_MX_DREHZ_KESSEL,,,
w,,MX_DREHZ_KESSEL,,,,,"E901B5",,m,_MX_DREHZ_KESSEL,,,
r,,NG_ZUEND,,,,,"EA01B6",,s,_8_Skip,,, ,,s,_NG_ZUEND,,,
w,,NG_ZUEND,,,,,"EA01B6",,m,_NG_ZUEND,,,
r,,KESSEL_VARIANTE,,,,,"EB01B7",,s,_8_Skip,,, ,,s,_KESSEL_VARIANTE,,,
w,,KESSEL_VARIANTE,,,,,"EB01B7",,m,_KESSEL_VARIANTE,,,
r,,MXGRADTVIST,,,,,"E401B8",,s,_8_Skip,,, ,,s,_MXGRADTVIST,,,
w,,MXGRADTVIST,,,,,"E401B8",,m,_MXGRADTVIST,,,
r,,MXTABGAS,,,,,"E501B9",,s,_8_Skip,,, ,,s,_MXTABGAS,,,
w,,MXTABGAS,,,,,"E501B9",,m,_MXTABGAS,,,
r,,TOL_TIME,,,,,"E601BA",,s,_8_Skip,,, ,,s,_TOL_TIME,,,
w,,TOL_TIME,,,,,"E601BA",,m,_TOL_TIME,,,
r,,NG_DGESCHW,,,,,"E701BB",,s,_8_Skip,,, ,,s,_NG_DGESCHW,,,
w,,NG_DGESCHW,,,,,"E701BB",,m,_NG_DGESCHW,,,
r,,NG_INCR_DECR,,,,,"E001BC",,s,_8_Skip,,, ,,s,_NG_INCR_DECR,,,
w,,NG_INCR_DECR,,,,,"E001BC",,m,_NG_INCR_DECR,,,
r,,NG_HZ_MIN,,,,,"E101BD",,s,_8_Skip,,, ,,s,_NG_HZ_MIN,,,
w,,NG_HZ_MIN,,,,,"E101BD",,m,_NG_HZ_MIN,,,
r,,NG_HZ_FREI,,,,,"E201BE",,s,_8_Skip,,, ,,s,_NG_HZ_FREI,,,
w,,NG_HZ_FREI,,,,,"E201BE",,m,_NG_HZ_FREI,,,
r,,NG_HZ_MAX,,,,,"E301BF",,s,_8_Skip,,, ,,s,_NG_HZ_MAX,,,
w,,NG_HZ_MAX,,,,,"E301BF",,m,_NG_HZ_MAX,,,
r,,PUHZ_VSP,,,,,"9C01C0",,s,_8_Skip,,, ,,s,_PUHZ_VSP,,,
w,,PUHZ_VSP,,,,,"9C01C0",,m,_PUHZ_VSP,,,
r,,PUHZ_MIN,,,,,"9D01C1",,s,_8_Skip,,, ,,s,_PUHZ_MIN,,,
w,,PUHZ_MIN,,,,,"9D01C1",,m,_PUHZ_MIN,,,
r,,PUHZ_MAX,,,,,"9E01C2",,s,_8_Skip,,, ,,s,_PUHZ_MAX,,,
w,,PUHZ_MAX,,,,,"9E01C2",,m,_PUHZ_MAX,,,
r,,PUHZ_DT_REG,,,,,"9F01C3",,s,_8_Skip,,, ,,s,_PUHZ_DT_REG,,,
w,,PUHZ_DT_REG,,,,,"9F01C3",,m,_PUHZ_DT_REG,,,
r,,PU_TAKT,,,,,"9801C4",,s,_8_Skip,,, ,,s,_PU_TAKT,,,
w,,PU_TAKT,,,,,"9801C4",,m,_PU_TAKT,,,
r,,DT_VLRL_SOLL,,,,,"9901C5",,s,_8_Skip,,, ,,s,_DT_VLRL_SOLL,,,
w,,DT_VLRL_SOLL,,,,,"9901C5",,m,_DT_VLRL_SOLL,,,
r,,DT_VLRL_MAX,,,,,"9A01C6",,s,_8_Skip,,, ,,s,_DT_VLRL_MAX,,,
w,,DT_VLRL_MAX,,,,,"9A01C6",,m,_DT_VLRL_MAX,,,
r,,DT_VL_ESTB2_MAX,,,,,"9B01C7",,s,_8_Skip,,, ,,s,_DT_VL_ESTB2_MAX,,,
w,,DT_VL_ESTB2_MAX,,,,,"9B01C7",,m,_DT_VL_ESTB2_MAX,,,
r,,PNL_HZ,,,,,"9401C8",,s,_8_Skip,,, ,,s,_PNL_HZ,,,
w,,PNL_HZ,,,,,"9401C8",,m,_PNL_HZ,,,
r,,MAXWWSOLL,,,,,"9501C9",,s,_8_Skip,,, ,,s,_MAXWWSOLL,,,
w,,MAXWWSOLL,,,,,"9501C9",,m,_MAXWWSOLL,,,
r,,MINWWSOLL,,,,,"9601CA",,s,_8_Skip,,, ,,s,_MINWWSOLL,,,
w,,MINWWSOLL,,,,,"9601CA",,m,_MINWWSOLL,,,
r,,WW_HYS,,,,,"9701CB",,s,_8_Skip,,, ,,s,_WW_HYS,,,
w,,WW_HYS,,,,,"9701CB",,m,_WW_HYS,,,
r,,TWWPLUS,,,,,"9001CC",,s,_8_Skip,,, ,,s,_TWWPLUS,,,
w,,TWWPLUS,,,,,"9001CC",,m,_TWWPLUS,,,
r,,NG_WW_MIN,,,,,"9101CD",,s,_8_Skip,,, ,,s,_NG_WW_MIN,,,
w,,NG_WW_MIN,,,,,"9101CD",,m,_NG_WW_MIN,,,
r,,NG_WW_FREI,,,,,"9201CE",,s,_8_Skip,,, ,,s,_NG_WW_FREI,,,
w,,NG_WW_FREI,,,,,"9201CE",,m,_NG_WW_FREI,,,
r,,NG_WW_MAX,,,,,"9301CF",,s,_8_Skip,,, ,,s,_NG_WW_MAX,,,
w,,NG_WW_MAX,,,,,"9301CF",,m,_NG_WW_MAX,,,
r,,PUHZ_WW,,,,,"8C01D0",,s,_8_Skip,,, ,,s,_PUHZ_WW,,,
w,,PUHZ_WW,,,,,"8C01D0",,m,_PUHZ_WW,,,
r,,PNL_WW,,,,,"8D01D1",,s,_8_Skip,,, ,,s,_PNL_WW,,,
w,,PNL_WW,,,,,"8D01D1",,m,_PNL_WW,,,
r,,TFRS_A,,,,,"8E01D2",,s,_8_Skip,,, ,,s,_TFRS_A,,,
w,,TFRS_A,,,,,"8E01D2",,m,_TFRS_A,,,
r,,NG_KP,,,,,"8F01D3",,s,_8_Skip,,, ,,s,_NG_KP,,,
w,,NG_KP,,,,,"8F01D3",,m,_NG_KP,,,
r,,NG_KTN,,,,,"8801D4",,s,_8_Skip,,, ,,s,_NG_KTN,,,
w,,NG_KTN,,,,,"8801D4",,m,_NG_KTN,,,
r,,NG_REG_ANPASS,,,,,"8901D5",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS,,,
w,,NG_REG_ANPASS,,,,,"8901D5",,m,_NG_REG_ANPASS,,,
r,,SEL_IN_1_2,,,,,"8A01D6",,s,_8_Skip,,, ,,s,_SEL_IN_1_2,,,
w,,SEL_IN_1_2,,,,,"8A01D6",,m,_SEL_IN_1_2,,,
r,,SEL_IN_3_4,,,,,"8B01D7",,s,_8_Skip,,, ,,s,_SEL_IN_3_4,,,
w,,SEL_IN_3_4,,,,,"8B01D7",,m,_SEL_IN_3_4,,,
r,,SEL_PR_1_2,,,,,"8401D8",,s,_8_Skip,,, ,,s,_SEL_PR_1_2,,,
w,,SEL_PR_1_2,,,,,"8401D8",,m,_SEL_PR_1_2,,,
r,,SEL_PR_3_4,,,,,"8501D9",,s,_8_Skip,,, ,,s,_SEL_PR_3_4,,,
w,,SEL_PR_3_4,,,,,"8501D9",,m,_SEL_PR_3_4,,,
r,,KLAPPENLAUFZEIT,,,,,"8601DA",,s,_8_Skip,,, ,,s,_KLAPPENLAUFZEIT,,,
w,,KLAPPENLAUFZEIT,,,,,"8601DA",,m,_KLAPPENLAUFZEIT,,,
r,,PARA_DT_WEICHE_VL,,,,,"8701DB",,s,_8_Skip,,, ,,s,_PARA_DT_WEICHE_VL,,,
w,,PARA_DT_WEICHE_VL,,,,,"8701DB",,m,_PARA_DT_WEICHE_VL,,,
r,,V24_KM_ADR,,,,,"8001DC",,s,_8_Skip,,, ,,s,_V24_KM_ADR,,,
w,,V24_KM_ADR,,,,,"8001DC",,m,_V24_KM_ADR,,,
r,,KESS_OPT,,,,,"8101DD",,s,_8_Skip,,, ,,s,_KESS_OPT,,,
w,,KESS_OPT,,,,,"8101DD",,m,_KESS_OPT,,,
r,,KESS_OPT_2,,,,,"8201DE",,s,_8_Skip,,, ,,s,_KESS_OPT_2,,,
w,,KESS_OPT_2,,,,,"8201DE",,m,_KESS_OPT_2,,,
r,,KESS_BITS,,,,,"8301DF",,s,_8_Skip,,, ,,s,_KESS_BITS,,,
w,,KESS_BITS,,,,,"8301DF",,m,_KESS_BITS,,,
r,,REF_KORR,,,,,"BC01E0",,s,_8_Skip,,, ,,s,_REF_KORR,,,
w,,REF_KORR,,,,,"BC01E0",,m,_REF_KORR,,,
r,,KES_DAT_CRC,,,,,"BD01E1",,s,_8_Skip,,, ,,s,_KES_DAT_CRC,,,
w,,KES_DAT_CRC,,,,,"BD01E1",,m,_KES_DAT_CRC,,,
r,,AIN_FS_ERR_MASK,,,,,"BE01E2",,s,_8_Skip,,, ,,s,_AIN_FS_ERR_MASK,,,
w,,AIN_FS_ERR_MASK,,,,,"BE01E2",,m,_AIN_FS_ERR_MASK,,,
r,,ERR_MERK_ALT,,,,,"BF01E3",,s,_8_Skip,,, ,,s,_ERR_MERK_ALT,,,
w,,ERR_MERK_ALT,,,,,"BF01E3",,m,_ERR_MERK_ALT,,,
r,,F_CODE_ALT,,,,,"B801E4",,s,_8_Skip,,, ,,s,_F_CODE_ALT,,,
w,,F_CODE_ALT,,,,,"B801E4",,m,_F_CODE_ALT,,,
r,,ROM_DPH,,,,,"B901E5",,s,_8_Skip,,, ,,s,_ROM_DPH,,,
w,,ROM_DPH,,,,,"B901E5",,m,_ROM_DPH,,,
r,,ROM_DPL,,,,,"BA01E6",,s,_8_Skip,,, ,,s,_ROM_DPL,,,
w,,ROM_DPL,,,,,"BA01E6",,m,_ROM_DPL,,,
r,,ROM_H,,,,,"BB01E7",,s,_8_Skip,,, ,,s,_ROM_H,,,
w,,ROM_H,,,,,"BB01E7",,m,_ROM_H,,,
r,,ROM_L,,,,,"B401E8",,s,_8_Skip,,, ,,s,_ROM_L,,,
w,,ROM_L,,,,,"B401E8",,m,_ROM_L,,,
r,,V24_SCOM_ADR,,,,,"B501E9",,s,_8_Skip,,, ,,s,_V24_SCOM_ADR,,,
w,,V24_SCOM_ADR,,,,,"B501E9",,m,_V24_SCOM_ADR,,,
r,,S5STEP,,,,,"B601EA",,s,_8_Skip,,, ,,s,_S5STEP,,,
w,,S5STEP,,,,,"B601EA",,m,_S5STEP,,,
r,,NGXW1,,,,,"B001EC",,s,_8_Skip,,, ,,s,_NGXW1,,,
w,,NGXW1,,,,,"B001EC",,m,_NGXW1,,,
r,,PUHZPWM,,,,,"B101ED",,s,_8_Skip,,, ,,s,_PUHZPWM,,,
w,,PUHZPWM,,,,,"B101ED",,m,_PUHZPWM,,,
r,,K_ZUST_BITS,,,,,"B201EE",,s,_8_Skip,,, ,,s,_K_ZUST_BITS,,,
w,,K_ZUST_BITS,,,,,"B201EE",,m,_K_ZUST_BITS,,,
r,,K_ZUST_BITS_2,,,,,"B301EF",,s,_8_Skip,,, ,,s,_K_ZUST_BITS_2,,,
w,,K_ZUST_BITS_2,,,,,"B301EF",,m,_K_ZUST_BITS_2,,,
r,,V24_HIADR,,,,,"AC01F0",,s,_8_Skip,,, ,,s,_V24_HIADR,,,
w,,V24_HIADR,,,,,"AC01F0",,m,_V24_HIADR,,,
r,,ICL20SEC_ALT,,,,,"AD01F1",,s,_8_Skip,,, ,,s,_ICL20SEC_ALT,,,
w,,ICL20SEC_ALT,,,,,"AD01F1",,m,_ICL20SEC_ALT,,,
r,,ICL1HRS_ALT,,,,,"AE01F2",,s,_8_Skip,,, ,,s,_ICL1HRS_ALT,,,
w,,ICL1HRS_ALT,,,,,"AE01F2",,m,_ICL1HRS_ALT,,,
r,,RES_CNT_ALT,,,,,"AF01F3",,s,_8_Skip,,, ,,s,_RES_CNT_ALT,,,
w,,RES_CNT_ALT,,,,,"AF01F3",,m,_RES_CNT_ALT,,,
r,,NGIST_2,,,,,"A801F4",,s,_8_Skip,,, ,,s,_NGIST_2,,,
w,,NGIST_2,,,,,"A801F4",,m,_NGIST_2,,,
r,,NM_EBUS_STATUS,,,,,"AA01F6",,s,_8_Skip,,, ,,s,_NM_EBUS_STATUS,,,
w,,NM_EBUS_STATUS,,,,,"AA01F6",,m,_NM_EBUS_STATUS,,,
r,,NM_ZUSTAND,,,,,"AB01F7",,s,_8_Skip,,, ,,s,_NM_ZUSTAND,,,
w,,NM_ZUSTAND,,,,,"AB01F7",,m,_NM_ZUSTAND,,,
r,,BCC_STATUS,,,,,"A401F8",,s,_8_Skip,,, ,,s,_BCC_STATUS,,,
w,,BCC_STATUS,,,,,"A401F8",,m,_BCC_STATUS,,,
r,,S7_BITS,,,,,"A501F9",,s,_8_Skip,,, ,,s,_S7_BITS,,,
w,,S7_BITS,,,,,"A501F9",,m,_S7_BITS,,,

# --- SFR ---
r,,P0_ALTSEL0,,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_ALTSEL0,,,
w,,P0_ALTSEL0,,,,,"AC0480",,m,_P0_ALTSEL0,,,
# r,,P0_DATA,,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_DATA,,,                       # Alias of P0_ALTSEL0
# w,,P0_DATA,,,,,"AC0480",,m,_P0_DATA,,,                                      # Alias of P0_ALTSEL0
# r,,P0_OD,,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_OD,,,                           # Alias of P0_ALTSEL0
# w,,P0_OD,,,,,"AC0480",,m,_P0_OD,,,                                          # Alias of P0_ALTSEL0
# r,,P0_PUDSEL,,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_PUDSEL,,,                   # Alias of P0_ALTSEL0
# w,,P0_PUDSEL,,,,,"AC0480",,m,_P0_PUDSEL,,,                                  # Alias of P0_ALTSEL0
r,,DPL,,,,,"AE0482",,s,_8_Skip,,, ,,s,_DPL,,,
w,,DPL,,,,,"AE0482",,m,_DPL,,,
r,,DPH,,,,,"AF0483",,s,_8_Skip,,, ,,s,_DPH,,,
w,,DPH,,,,,"AF0483",,m,_DPH,,,
r,,P0_ALTSEL1,,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_ALTSEL1,,,
w,,P0_ALTSEL1,,,,,"AA0486",,m,_P0_ALTSEL1,,,
# r,,P0_DIR,,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_DIR,,,                         # Alias of P0_ALTSEL1
# w,,P0_DIR,,,,,"AA0486",,m,_P0_DIR,,,                                        # Alias of P0_ALTSEL1
# r,,P0_PUDEN,,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_PUDEN,,,                     # Alias of P0_ALTSEL1
# w,,P0_PUDEN,,,,,"AA0486",,m,_P0_PUDEN,,,                                    # Alias of P0_ALTSEL1
r,,PCON,,,,,"AB0487",,s,_8_Skip,,, ,,s,_PCON,,,
w,,PCON,,,,,"AB0487",,m,_PCON,,,
r,,TCON,,,,,"A40488",,s,_8_Skip,,, ,,s,_TCON,,,
w,,TCON,,,,,"A40488",,m,_TCON,,,
r,,TMOD,,,,,"A50489",,s,_8_Skip,,, ,,s,_TMOD,,,
w,,TMOD,,,,,"A50489",,m,_TMOD,,,
r,,TL0,,,,,"A6048A",,s,_8_Skip,,, ,,s,_TL0,,,
w,,TL0,,,,,"A6048A",,m,_TL0,,,
r,,ION_TIMER_LOW,,,,,"A7048B",,s,_8_Skip,,, ,,s,_ION_TIMER_LOW,,,
w,,ION_TIMER_LOW,,,,,"A7048B",,m,_ION_TIMER_LOW,,,
# r,,TL1,,,,,"A7048B",,s,_8_Skip,,, ,,s,_TL1,,,                               # Alias of ION_TIMER_LOW
# w,,TL1,,,,,"A7048B",,m,_TL1,,,                                              # Alias of ION_TIMER_LOW
r,,TH0,,,,,"A0048C",,s,_8_Skip,,, ,,s,_TH0,,,
w,,TH0,,,,,"A0048C",,m,_TH0,,,
r,,ION_TIMER_HIGH,,,,,"A1048D",,s,_8_Skip,,, ,,s,_ION_TIMER_HIGH,,,
w,,ION_TIMER_HIGH,,,,,"A1048D",,m,_ION_TIMER_HIGH,,,
# r,,TH1,,,,,"A1048D",,s,_8_Skip,,, ,,s,_TH1,,,                               # Alias of ION_TIMER_HIGH
# w,,TH1,,,,,"A1048D",,m,_TH1,,,                                              # Alias of ION_TIMER_HIGH
r,,SYSCON0,,,,,"A3048F",,s,_8_Skip,,, ,,s,_SYSCON0,,,
w,,SYSCON0,,,,,"A3048F",,m,_SYSCON0,,,
r,,DO_PORT,,,,,"BC0490",,s,_8_Skip,,, ,,s,_DO_PORT,,,
w,,DO_PORT,,,,,"BC0490",,m,_DO_PORT,,,
# r,,P1ANA,,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1ANA,,,                           # Alias of DO_PORT
# w,,P1ANA,,,,,"BC0490",,m,_P1ANA,,,                                          # Alias of DO_PORT
# r,,P1_ALTSEL0,,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_ALTSEL0,,,                 # Alias of DO_PORT
# w,,P1_ALTSEL0,,,,,"BC0490",,m,_P1_ALTSEL0,,,                                # Alias of DO_PORT
# r,,P1_DATA,,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_DATA,,,                       # Alias of DO_PORT
# w,,P1_DATA,,,,,"BC0490",,m,_P1_DATA,,,                                      # Alias of DO_PORT
# r,,P1_OD,,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_OD,,,                           # Alias of DO_PORT
# w,,P1_OD,,,,,"BC0490",,m,_P1_OD,,,                                          # Alias of DO_PORT
# r,,P1_PUDSEL,,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_PUDSEL,,,                   # Alias of DO_PORT
# w,,P1_PUDSEL,,,,,"BC0490",,m,_P1_PUDSEL,,,                                  # Alias of DO_PORT
r,,P1_ALTSEL1,,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_ALTSEL1,,,
w,,P1_ALTSEL1,,,,,"BD0491",,m,_P1_ALTSEL1,,,
# r,,P1_DIR,,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_DIR,,,                         # Alias of P1_ALTSEL1
# w,,P1_DIR,,,,,"BD0491",,m,_P1_DIR,,,                                        # Alias of P1_ALTSEL1
# r,,P1_PUDEN,,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_PUDEN,,,                     # Alias of P1_ALTSEL1
# w,,P1_PUDEN,,,,,"BD0491",,m,_P1_PUDEN,,,                                    # Alias of P1_ALTSEL1
# r,,XPAGE,,,,,"BD0491",,s,_8_Skip,,, ,,s,_XPAGE,,,                           # Alias of P1_ALTSEL1
# w,,XPAGE,,,,,"BD0491",,m,_XPAGE,,,                                          # Alias of P1_ALTSEL1
r,,DPSEL,,,,,"BE0492",,s,_8_Skip,,, ,,s,_DPSEL,,,
w,,DPSEL,,,,,"BE0492",,m,_DPSEL,,,
# r,,P5_ALTSEL0,,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_ALTSEL0,,,                 # Alias of DPSEL
# w,,P5_ALTSEL0,,,,,"BE0492",,m,_P5_ALTSEL0,,,                                # Alias of DPSEL
# r,,P5_DATA,,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_DATA,,,                       # Alias of DPSEL
# w,,P5_DATA,,,,,"BE0492",,m,_P5_DATA,,,                                      # Alias of DPSEL
# r,,P5_OD,,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_OD,,,                           # Alias of DPSEL
# w,,P5_OD,,,,,"BE0492",,m,_P5_OD,,,                                          # Alias of DPSEL
# r,,P5_PUDSEL,,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_PUDSEL,,,                   # Alias of DPSEL
# w,,P5_PUDSEL,,,,,"BE0492",,m,_P5_PUDSEL,,,                                  # Alias of DPSEL
r,,P5_ALTSEL1,,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_ALTSEL1,,,
w,,P5_ALTSEL1,,,,,"BF0493",,m,_P5_ALTSEL1,,,
# r,,P5_DIR,,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_DIR,,,                         # Alias of P5_ALTSEL1
# w,,P5_DIR,,,,,"BF0493",,m,_P5_DIR,,,                                        # Alias of P5_ALTSEL1
# r,,P5_PUDEN,,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_PUDEN,,,                     # Alias of P5_ALTSEL1
# w,,P5_PUDEN,,,,,"BF0493",,m,_P5_PUDEN,,,                                    # Alias of P5_ALTSEL1
r,,SCON,,,,,"B40498",,s,_8_Skip,,, ,,s,_SCON,,,
w,,SCON,,,,,"B40498",,m,_SCON,,,
r,,SBUF,,,,,"B50499",,s,_8_Skip,,, ,,s,_SBUF,,,
w,,SBUF,,,,,"B50499",,m,_SBUF,,,
r,,CCL_GEBL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCL_GEBL,,,
w,,CCL_GEBL,,,,,"B6049A",,m,_CCL_GEBL,,,
# r,,CCU6_CC63RL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_CC63RL,,,               # Alias of CCL_GEBL
# w,,CCU6_CC63RL,,,,,"B6049A",,m,_CCU6_CC63RL,,,                              # Alias of CCL_GEBL
# r,,CCU6_CC63SRL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_CC63SRL,,,             # Alias of CCL_GEBL
# w,,CCU6_CC63SRL,,,,,"B6049A",,m,_CCU6_CC63SRL,,,                            # Alias of CCL_GEBL
# r,,CCU6_MCMOUTL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTL,,,             # Alias of CCL_GEBL
# w,,CCU6_MCMOUTL,,,,,"B6049A",,m,_CCU6_MCMOUTL,,,                            # Alias of CCL_GEBL
# r,,CCU6_T12MSELL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_T12MSELL,,,           # Alias of CCL_GEBL
# w,,CCU6_T12MSELL,,,,,"B6049A",,m,_CCU6_T12MSELL,,,                          # Alias of CCL_GEBL
# r,,CD_CORDXL,,,,,"B6049A",,s,_8_Skip,,, ,,s,_CD_CORDXL,,,                   # Alias of CCL_GEBL
# w,,CD_CORDXL,,,,,"B6049A",,m,_CD_CORDXL,,,                                  # Alias of CCL_GEBL
r,,CCH_GEBL,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCH_GEBL,,,
w,,CCH_GEBL,,,,,"B7049B",,m,_CCH_GEBL,,,
# r,,CCU6_CC63RH,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_CC63RH,,,               # Alias of CCH_GEBL
# w,,CCU6_CC63RH,,,,,"B7049B",,m,_CCU6_CC63RH,,,                              # Alias of CCH_GEBL
# r,,CCU6_CC63SRH,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_CC63SRH,,,             # Alias of CCH_GEBL
# w,,CCU6_CC63SRH,,,,,"B7049B",,m,_CCU6_CC63SRH,,,                            # Alias of CCH_GEBL
# r,,CCU6_MCMOUTH,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTH,,,             # Alias of CCH_GEBL
# w,,CCU6_MCMOUTH,,,,,"B7049B",,m,_CCU6_MCMOUTH,,,                            # Alias of CCH_GEBL
# r,,CCU6_T12MSELH,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_T12MSELH,,,           # Alias of CCH_GEBL
# w,,CCU6_T12MSELH,,,,,"B7049B",,m,_CCU6_T12MSELH,,,                          # Alias of CCH_GEBL
# r,,CD_CORDXH,,,,,"B7049B",,s,_8_Skip,,, ,,s,_CD_CORDXH,,,                   # Alias of CCH_GEBL
# w,,CD_CORDXH,,,,,"B7049B",,m,_CD_CORDXH,,,                                  # Alias of CCH_GEBL
r,,CCU6_IENL,,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_IENL,,,
w,,CCU6_IENL,,,,,"B0049C",,m,_CCU6_IENL,,,
# r,,CCU6_ISL,,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_ISL,,,                     # Alias of CCU6_IENL
# w,,CCU6_ISL,,,,,"B0049C",,m,_CCU6_ISL,,,                                    # Alias of CCU6_IENL
# r,,CCU6_T12PRL,,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_T12PRL,,,               # Alias of CCU6_IENL
# w,,CCU6_T12PRL,,,,,"B0049C",,m,_CCU6_T12PRL,,,                              # Alias of CCU6_IENL
# r,,CCU6_TCTR4L,,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_TCTR4L,,,               # Alias of CCU6_IENL
# w,,CCU6_TCTR4L,,,,,"B0049C",,m,_CCU6_TCTR4L,,,                              # Alias of CCU6_IENL
# r,,CD_CORDYL,,,,,"B0049C",,s,_8_Skip,,, ,,s,_CD_CORDYL,,,                   # Alias of CCU6_IENL
# w,,CD_CORDYL,,,,,"B0049C",,m,_CD_CORDYL,,,                                  # Alias of CCU6_IENL
r,,CCU6_IENH,,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_IENH,,,
w,,CCU6_IENH,,,,,"B1049D",,m,_CCU6_IENH,,,
# r,,CCU6_ISH,,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_ISH,,,                     # Alias of CCU6_IENH
# w,,CCU6_ISH,,,,,"B1049D",,m,_CCU6_ISH,,,                                    # Alias of CCU6_IENH
# r,,CCU6_T12PRH,,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_T12PRH,,,               # Alias of CCU6_IENH
# w,,CCU6_T12PRH,,,,,"B1049D",,m,_CCU6_T12PRH,,,                              # Alias of CCU6_IENH
# r,,CCU6_TCTR4H,,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_TCTR4H,,,               # Alias of CCU6_IENH
# w,,CCU6_TCTR4H,,,,,"B1049D",,m,_CCU6_TCTR4H,,,                              # Alias of CCU6_IENH
# r,,CD_CORDYH,,,,,"B1049D",,s,_8_Skip,,, ,,s,_CD_CORDYH,,,                   # Alias of CCU6_IENH
# w,,CD_CORDYH,,,,,"B1049D",,m,_CD_CORDYH,,,                                  # Alias of CCU6_IENH
r,,CCU6_INPL,,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_INPL,,,
w,,CCU6_INPL,,,,,"B2049E",,m,_CCU6_INPL,,,
# r,,CCU6_MCMOUTSL,,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTSL,,,           # Alias of CCU6_INPL
# w,,CCU6_MCMOUTSL,,,,,"B2049E",,m,_CCU6_MCMOUTSL,,,                          # Alias of CCU6_INPL
# r,,CCU6_PISEL0L,,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_PISEL0L,,,             # Alias of CCU6_INPL
# w,,CCU6_PISEL0L,,,,,"B2049E",,m,_CCU6_PISEL0L,,,                            # Alias of CCU6_INPL
# r,,CCU6_T13PRL,,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_T13PRL,,,               # Alias of CCU6_INPL
# w,,CCU6_T13PRL,,,,,"B2049E",,m,_CCU6_T13PRL,,,                              # Alias of CCU6_INPL
# r,,CD_CORDZL,,,,,"B2049E",,s,_8_Skip,,, ,,s,_CD_CORDZL,,,                   # Alias of CCU6_INPL
# w,,CD_CORDZL,,,,,"B2049E",,m,_CD_CORDZL,,,                                  # Alias of CCU6_INPL
r,,CCU6_INPH,,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_INPH,,,
w,,CCU6_INPH,,,,,"B3049F",,m,_CCU6_INPH,,,
# r,,CCU6_MCMOUTSH,,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTSH,,,           # Alias of CCU6_INPH
# w,,CCU6_MCMOUTSH,,,,,"B3049F",,m,_CCU6_MCMOUTSH,,,                          # Alias of CCU6_INPH
# r,,CCU6_PISEL0H,,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_PISEL0H,,,             # Alias of CCU6_INPH
# w,,CCU6_PISEL0H,,,,,"B3049F",,m,_CCU6_PISEL0H,,,                            # Alias of CCU6_INPH
# r,,CCU6_T13PRH,,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_T13PRH,,,               # Alias of CCU6_INPH
# w,,CCU6_T13PRH,,,,,"B3049F",,m,_CCU6_T13PRH,,,                              # Alias of CCU6_INPH
# r,,CD_CORDZH,,,,,"B3049F",,s,_8_Skip,,, ,,s,_CD_CORDZH,,,                   # Alias of CCU6_INPH
# w,,CD_CORDZH,,,,,"B3049F",,m,_CD_CORDZH,,,                                  # Alias of CCU6_INPH
r,,CD_STATC,,,,,"8C04A0",,s,_8_Skip,,, ,,s,_CD_STATC,,,
w,,CD_STATC,,,,,"8C04A0",,m,_CD_STATC,,,
# r,,P2_DATA,,,,,"8C04A0",,s,_8_Skip,,, ,,s,_P2_DATA,,,                       # Alias of CD_STATC
# w,,P2_DATA,,,,,"8C04A0",,m,_P2_DATA,,,                                      # Alias of CD_STATC
# r,,P2_PUDSEL,,,,,"8C04A0",,s,_8_Skip,,, ,,s,_P2_PUDSEL,,,                   # Alias of CD_STATC
# w,,P2_PUDSEL,,,,,"8C04A0",,m,_P2_PUDSEL,,,                                  # Alias of CD_STATC
r,,CD_CON,,,,,"8D04A1",,s,_8_Skip,,, ,,s,_CD_CON,,,
w,,CD_CON,,,,,"8D04A1",,m,_CD_CON,,,
# r,,P2_DIR,,,,,"8D04A1",,s,_8_Skip,,, ,,s,_P2_DIR,,,                         # Alias of CD_CON
# w,,P2_DIR,,,,,"8D04A1",,m,_P2_DIR,,,                                        # Alias of CD_CON
# r,,P2_PUDEN,,,,,"8D04A1",,s,_8_Skip,,, ,,s,_P2_PUDEN,,,                     # Alias of CD_CON
# w,,P2_PUDEN,,,,,"8D04A1",,m,_P2_PUDEN,,,                                    # Alias of CD_CON
r,,CCU6_PAGE,,,,,"8F04A3",,s,_8_Skip,,, ,,s,_CCU6_PAGE,,,
w,,CCU6_PAGE,,,,,"8F04A3",,m,_CCU6_PAGE,,,
r,,CCU6_ISRL,,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_ISRL,,,
w,,CCU6_ISRL,,,,,"8804A4",,m,_CCU6_ISRL,,,
# r,,CCU6_ISSL,,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_ISSL,,,                   # Alias of CCU6_ISRL
# w,,CCU6_ISSL,,,,,"8804A4",,m,_CCU6_ISSL,,,                                  # Alias of CCU6_ISRL
# r,,CCU6_PISEL2,,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_PISEL2,,,               # Alias of CCU6_ISRL
# w,,CCU6_PISEL2,,,,,"8804A4",,m,_CCU6_PISEL2,,,                              # Alias of CCU6_ISRL
# r,,CCU6_T12DTCL,,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_T12DTCL,,,             # Alias of CCU6_ISRL
# w,,CCU6_T12DTCL,,,,,"8804A4",,m,_CCU6_T12DTCL,,,                            # Alias of CCU6_ISRL
r,,CCU6_ISRH,,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_ISRH,,,
w,,CCU6_ISRH,,,,,"8904A5",,m,_CCU6_ISRH,,,
# r,,CCU6_ISSH,,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_ISSH,,,                   # Alias of CCU6_ISRH
# w,,CCU6_ISSH,,,,,"8904A5",,m,_CCU6_ISSH,,,                                  # Alias of CCU6_ISRH
# r,,CCU6_T12DTCH,,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_T12DTCH,,,             # Alias of CCU6_ISRH
# w,,CCU6_T12DTCH,,,,,"8904A5",,m,_CCU6_T12DTCH,,,                            # Alias of CCU6_ISRH
r,,CCU6_CMPMODIFL,,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_CMPMODIFL,,,
w,,CCU6_CMPMODIFL,,,,,"8A04A6",,m,_CCU6_CMPMODIFL,,,
# r,,CCU6_PSLR,,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_PSLR,,,                   # Alias of CCU6_CMPMODIFL
# w,,CCU6_PSLR,,,,,"8A04A6",,m,_CCU6_PSLR,,,                                  # Alias of CCU6_CMPMODIFL
# r,,CCU6_TCTR0L,,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_TCTR0L,,,               # Alias of CCU6_CMPMODIFL
# w,,CCU6_TCTR0L,,,,,"8A04A6",,m,_CCU6_TCTR0L,,,                              # Alias of CCU6_CMPMODIFL
r,,CCU6_CMPMODIFH,,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_CMPMODIFH,,,
w,,CCU6_CMPMODIFH,,,,,"8B04A7",,m,_CCU6_CMPMODIFH,,,
# r,,CCU6_MCMCTR,,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_MCMCTR,,,               # Alias of CCU6_CMPMODIFH
# w,,CCU6_MCMCTR,,,,,"8B04A7",,m,_CCU6_MCMCTR,,,                              # Alias of CCU6_CMPMODIFH
# r,,CCU6_TCTR0H,,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_TCTR0H,,,               # Alias of CCU6_CMPMODIFH
# w,,CCU6_TCTR0H,,,,,"8B04A7",,m,_CCU6_TCTR0H,,,                              # Alias of CCU6_CMPMODIFH
r,,IEN0,,,,,"8404A8",,s,_8_Skip,,, ,,s,_IEN0,,,
w,,IEN0,,,,,"8404A8",,m,_IEN0,,,
r,,IP0,,,,,"8504A9",,s,_8_Skip,,, ,,s,_IP0,,,
w,,IP0,,,,,"8504A9",,m,_IP0,,,
# r,,SSC_PISEL,,,,,"8504A9",,s,_8_Skip,,, ,,s,_SSC_PISEL,,,                   # Alias of IP0
# w,,SSC_PISEL,,,,,"8504A9",,m,_SSC_PISEL,,,                                  # Alias of IP0
r,,SRELL,,,,,"8604AA",,s,_8_Skip,,, ,,s,_SRELL,,,
w,,SRELL,,,,,"8604AA",,m,_SRELL,,,
# r,,SSC_CONL_O,,,,,"8604AA",,s,_8_Skip,,, ,,s,_SSC_CONL_O,,,                 # Alias of SRELL
# w,,SSC_CONL_O,,,,,"8604AA",,m,_SSC_CONL_O,,,                                # Alias of SRELL
# r,,SSC_CONL_P,,,,,"8604AA",,s,_8_Skip,,, ,,s,_SSC_CONL_P,,,                 # Alias of SRELL
# w,,SSC_CONL_P,,,,,"8604AA",,m,_SSC_CONL_P,,,                                # Alias of SRELL
r,,SSC_CONH_O,,,,,"8704AB",,s,_8_Skip,,, ,,s,_SSC_CONH_O,,,
w,,SSC_CONH_O,,,,,"8704AB",,m,_SSC_CONH_O,,,
# r,,SSC_CONH_P,,,,,"8704AB",,s,_8_Skip,,, ,,s,_SSC_CONH_P,,,                 # Alias of SSC_CONH_O
# w,,SSC_CONH_P,,,,,"8704AB",,m,_SSC_CONH_P,,,                                # Alias of SSC_CONH_O
r,,SSC_TBL,,,,,"8004AC",,s,_8_Skip,,, ,,s,_SSC_TBL,,,
w,,SSC_TBL,,,,,"8004AC",,m,_SSC_TBL,,,
r,,SSC_RBL,,,,,"8104AD",,s,_8_Skip,,, ,,s,_SSC_RBL,,,
w,,SSC_RBL,,,,,"8104AD",,m,_SSC_RBL,,,
r,,SSC_BRL,,,,,"8204AE",,s,_8_Skip,,, ,,s,_SSC_BRL,,,
w,,SSC_BRL,,,,,"8204AE",,m,_SSC_BRL,,,
r,,SSC_BRH,,,,,"8304AF",,s,_8_Skip,,, ,,s,_SSC_BRH,,,
w,,SSC_BRH,,,,,"8304AF",,m,_SSC_BRH,,,
r,,DE_F_PORT,,,,,"9C04B0",,s,_8_Skip,,, ,,s,_DE_F_PORT,,,
w,,DE_F_PORT,,,,,"9C04B0",,m,_DE_F_PORT,,,
# r,,P3_ALTSEL0,,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_ALTSEL0,,,                 # Alias of DE_F_PORT
# w,,P3_ALTSEL0,,,,,"9C04B0",,m,_P3_ALTSEL0,,,                                # Alias of DE_F_PORT
# r,,P3_DATA,,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_DATA,,,                       # Alias of DE_F_PORT
# w,,P3_DATA,,,,,"9C04B0",,m,_P3_DATA,,,                                      # Alias of DE_F_PORT
# r,,P3_OD,,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_OD,,,                           # Alias of DE_F_PORT
# w,,P3_OD,,,,,"9C04B0",,m,_P3_OD,,,                                          # Alias of DE_F_PORT
# r,,P3_PUDSEL,,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_PUDSEL,,,                   # Alias of DE_F_PORT
# w,,P3_PUDSEL,,,,,"9C04B0",,m,_P3_PUDSEL,,,                                  # Alias of DE_F_PORT
r,,P3_ALTSEL1,,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_ALTSEL1,,,
w,,P3_ALTSEL1,,,,,"9D04B1",,m,_P3_ALTSEL1,,,
# r,,P3_DIR,,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_DIR,,,                         # Alias of P3_ALTSEL1
# w,,P3_DIR,,,,,"9D04B1",,m,_P3_DIR,,,                                        # Alias of P3_ALTSEL1
# r,,P3_PUDEN,,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_PUDEN,,,                     # Alias of P3_ALTSEL1
# w,,P3_PUDEN,,,,,"9D04B1",,m,_P3_PUDEN,,,                                    # Alias of P3_ALTSEL1
# r,,SYSCON,,,,,"9D04B1",,s,_8_Skip,,, ,,s,_SYSCON,,,                         # Alias of P3_ALTSEL1
# w,,SYSCON,,,,,"9D04B1",,m,_SYSCON,,,                                        # Alias of P3_ALTSEL1
r,,PORT_PAGE,,,,,"9E04B2",,s,_8_Skip,,, ,,s,_PORT_PAGE,,,
w,,PORT_PAGE,,,,,"9E04B2",,m,_PORT_PAGE,,,
r,,MODPISEL,,,,,"9F04B3",,s,_8_Skip,,, ,,s,_MODPISEL,,,
w,,MODPISEL,,,,,"9F04B3",,m,_MODPISEL,,,
# r,,XADDRH,,,,,"9F04B3",,s,_8_Skip,,, ,,s,_XADDRH,,,                         # Alias of MODPISEL
# w,,XADDRH,,,,,"9F04B3",,m,_XADDRH,,,                                        # Alias of MODPISEL
r,,IRCON0,,,,,"9804B4",,s,_8_Skip,,, ,,s,_IRCON0,,,
w,,IRCON0,,,,,"9804B4",,m,_IRCON0,,,
# r,,IRCON3,,,,,"9804B4",,s,_8_Skip,,, ,,s,_IRCON3,,,                         # Alias of IRCON0
# w,,IRCON3,,,,,"9804B4",,m,_IRCON3,,,                                        # Alias of IRCON0
# r,,PMCON0,,,,,"9804B4",,s,_8_Skip,,, ,,s,_PMCON0,,,                         # Alias of IRCON0
# w,,PMCON0,,,,,"9804B4",,m,_PMCON0,,,                                        # Alias of IRCON0
r,,IRCON1,,,,,"9904B5",,s,_8_Skip,,, ,,s,_IRCON1,,,
w,,IRCON1,,,,,"9904B5",,m,_IRCON1,,,
# r,,IRCON4,,,,,"9904B5",,s,_8_Skip,,, ,,s,_IRCON4,,,                         # Alias of IRCON1
# w,,IRCON4,,,,,"9904B5",,m,_IRCON4,,,                                        # Alias of IRCON1
# r,,PMCON1,,,,,"9904B5",,s,_8_Skip,,, ,,s,_PMCON1,,,                         # Alias of IRCON1
# w,,PMCON1,,,,,"9904B5",,m,_PMCON1,,,                                        # Alias of IRCON1
r,,IRCON2,,,,,"9A04B6",,s,_8_Skip,,, ,,s,_IRCON2,,,
w,,IRCON2,,,,,"9A04B6",,m,_IRCON2,,,
# r,,OSC_CON,,,,,"9A04B6",,s,_8_Skip,,, ,,s,_OSC_CON,,,                       # Alias of IRCON2
# w,,OSC_CON,,,,,"9A04B6",,m,_OSC_CON,,,                                      # Alias of IRCON2
r,,EXICON0,,,,,"9B04B7",,s,_8_Skip,,, ,,s,_EXICON0,,,
w,,EXICON0,,,,,"9B04B7",,m,_EXICON0,,,
# r,,MODPISEL1,,,,,"9B04B7",,s,_8_Skip,,, ,,s,_MODPISEL1,,,                   # Alias of EXICON0
# w,,MODPISEL1,,,,,"9B04B7",,m,_MODPISEL1,,,                                  # Alias of EXICON0
# r,,PLL_CON,,,,,"9B04B7",,s,_8_Skip,,, ,,s,_PLL_CON,,,                       # Alias of EXICON0
# w,,PLL_CON,,,,,"9B04B7",,m,_PLL_CON,,,                                      # Alias of EXICON0
r,,IPH,,,,,"9504B9",,s,_8_Skip,,, ,,s,_IPH,,,
w,,IPH,,,,,"9504B9",,m,_IPH,,,
r,,CMCON,,,,,"9604BA",,s,_8_Skip,,, ,,s,_CMCON,,,
w,,CMCON,,,,,"9604BA",,m,_CMCON,,,
# r,,EXICON1,,,,,"9604BA",,s,_8_Skip,,, ,,s,_EXICON1,,,                       # Alias of CMCON
# w,,EXICON1,,,,,"9604BA",,m,_EXICON1,,,                                      # Alias of CMCON
# r,,MODPISEL2,,,,,"9604BA",,s,_8_Skip,,, ,,s,_MODPISEL2,,,                   # Alias of CMCON
# w,,MODPISEL2,,,,,"9604BA",,m,_MODPISEL2,,,                                  # Alias of CMCON
# r,,SRELH,,,,,"9604BA",,s,_8_Skip,,, ,,s,_SRELH,,,                           # Alias of CMCON
# w,,SRELH,,,,,"9604BA",,m,_SRELH,,,                                          # Alias of CMCON
r,,NMICON,,,,,"9704BB",,s,_8_Skip,,, ,,s,_NMICON,,,
w,,NMICON,,,,,"9704BB",,m,_NMICON,,,
# r,,PASSWD,,,,,"9704BB",,s,_8_Skip,,, ,,s,_PASSWD,,,                         # Alias of NMICON
# w,,PASSWD,,,,,"9704BB",,m,_PASSWD,,,                                        # Alias of NMICON
# r,,PMCON2,,,,,"9704BB",,s,_8_Skip,,, ,,s,_PMCON2,,,                         # Alias of NMICON
# w,,PMCON2,,,,,"9704BB",,m,_PMCON2,,,                                        # Alias of NMICON
# r,,WDTCON,,,,,"9704BB",,s,_8_Skip,,, ,,s,_WDTCON,,,                         # Alias of NMICON
# w,,WDTCON,,,,,"9704BB",,m,_WDTCON,,,                                        # Alias of NMICON
r,,FEAL,,,,,"9004BC",,s,_8_Skip,,, ,,s,_FEAL,,,
w,,FEAL,,,,,"9004BC",,m,_FEAL,,,
# r,,NMISR,,,,,"9004BC",,s,_8_Skip,,, ,,s,_NMISR,,,                           # Alias of FEAL
# w,,NMISR,,,,,"9004BC",,m,_NMISR,,,                                          # Alias of FEAL
# r,,WDTREL,,,,,"9004BC",,s,_8_Skip,,, ,,s,_WDTREL,,,                         # Alias of FEAL
# w,,WDTREL,,,,,"9004BC",,m,_WDTREL,,,                                        # Alias of FEAL
r,,BCON,,,,,"9104BD",,s,_8_Skip,,, ,,s,_BCON,,,
w,,BCON,,,,,"9104BD",,m,_BCON,,,
# r,,FEAH,,,,,"9104BD",,s,_8_Skip,,, ,,s,_FEAH,,,                             # Alias of BCON
# w,,FEAH,,,,,"9104BD",,m,_FEAH,,,                                            # Alias of BCON
# r,,MODSUSP,,,,,"9104BD",,s,_8_Skip,,, ,,s,_MODSUSP,,,                       # Alias of BCON
# w,,MODSUSP,,,,,"9104BD",,m,_MODSUSP,,,                                      # Alias of BCON
# r,,WDTWINB,,,,,"9104BD",,s,_8_Skip,,, ,,s,_WDTWINB,,,                       # Alias of BCON
# w,,WDTWINB,,,,,"9104BD",,m,_WDTWINB,,,                                      # Alias of BCON
r,,COCON,,,,,"9204BE",,s,_8_Skip,,, ,,s,_COCON,,,
w,,COCON,,,,,"9204BE",,m,_COCON,,,
# r,,WDTL,,,,,"9204BE",,s,_8_Skip,,, ,,s,_WDTL,,,                             # Alias of COCON
# w,,WDTL,,,,,"9204BE",,m,_WDTL,,,                                            # Alias of COCON
r,,SCU_PAGE,,,,,"9304BF",,s,_8_Skip,,, ,,s,_SCU_PAGE,,,
w,,SCU_PAGE,,,,,"9304BF",,m,_SCU_PAGE,,,
# r,,WDTH,,,,,"9304BF",,s,_8_Skip,,, ,,s,_WDTH,,,                             # Alias of SCU_PAGE
# w,,WDTH,,,,,"9304BF",,m,_WDTH,,,                                            # Alias of SCU_PAGE
r,,IRCON,,,,,"EC04C0",,s,_8_Skip,,, ,,s,_IRCON,,,
w,,IRCON,,,,,"EC04C0",,m,_IRCON,,,
# r,,T21_T2CON,,,,,"EC04C0",,s,_8_Skip,,, ,,s,_T21_T2CON,,,                   # Alias of IRCON
# w,,T21_T2CON,,,,,"EC04C0",,m,_T21_T2CON,,,                                  # Alias of IRCON
# r,,T2_T2CON,,,,,"EC04C0",,s,_8_Skip,,, ,,s,_T2_T2CON,,,                     # Alias of IRCON
# w,,T2_T2CON,,,,,"EC04C0",,m,_T2_T2CON,,,                                    # Alias of IRCON
r,,CCEN,,,,,"ED04C1",,s,_8_Skip,,, ,,s,_CCEN,,,
w,,CCEN,,,,,"ED04C1",,m,_CCEN,,,
# r,,T21_T2MOD,,,,,"ED04C1",,s,_8_Skip,,, ,,s,_T21_T2MOD,,,                   # Alias of CCEN
# w,,T21_T2MOD,,,,,"ED04C1",,m,_T21_T2MOD,,,                                  # Alias of CCEN
# r,,T2_T2MOD,,,,,"ED04C1",,s,_8_Skip,,, ,,s,_T2_T2MOD,,,                     # Alias of CCEN
# w,,T2_T2MOD,,,,,"ED04C1",,m,_T2_T2MOD,,,                                    # Alias of CCEN
r,,CCL1,,,,,"EE04C2",,s,_8_Skip,,, ,,s,_CCL1,,,
w,,CCL1,,,,,"EE04C2",,m,_CCL1,,,
# r,,SYS_TIMER_RELOAD_LOW,,,,,"EE04C2",,s,_8_Skip,,, ,,s,_SYS_TIMER_RELOAD_LOW,,, # Alias of CCL1
# w,,SYS_TIMER_RELOAD_LOW,,,,,"EE04C2",,m,_SYS_TIMER_RELOAD_LOW,,,            # Alias of CCL1
# r,,T21_RC2L,,,,,"EE04C2",,s,_8_Skip,,, ,,s,_T21_RC2L,,,                     # Alias of CCL1
# w,,T21_RC2L,,,,,"EE04C2",,m,_T21_RC2L,,,                                    # Alias of CCL1
# r,,T2_RC2L,,,,,"EE04C2",,s,_8_Skip,,, ,,s,_T2_RC2L,,,                       # Alias of CCL1
# w,,T2_RC2L,,,,,"EE04C2",,m,_T2_RC2L,,,                                      # Alias of CCL1
r,,CCH1,,,,,"EF04C3",,s,_8_Skip,,, ,,s,_CCH1,,,
w,,CCH1,,,,,"EF04C3",,m,_CCH1,,,
# r,,SYS_TIMER_RELOAD_HIGH,,,,,"EF04C3",,s,_8_Skip,,, ,,s,_SYS_TIMER_RELOAD_HIGH,,, # Alias of CCH1
# w,,SYS_TIMER_RELOAD_HIGH,,,,,"EF04C3",,m,_SYS_TIMER_RELOAD_HIGH,,,          # Alias of CCH1
# r,,T21_RC2H,,,,,"EF04C3",,s,_8_Skip,,, ,,s,_T21_RC2H,,,                     # Alias of CCH1
# w,,T21_RC2H,,,,,"EF04C3",,m,_T21_RC2H,,,                                    # Alias of CCH1
# r,,T2_RC2H,,,,,"EF04C3",,s,_8_Skip,,, ,,s,_T2_RC2H,,,                       # Alias of CCH1
# w,,T2_RC2H,,,,,"EF04C3",,m,_T2_RC2H,,,                                      # Alias of CCH1
r,,CCL2,,,,,"E804C4",,s,_8_Skip,,, ,,s,_CCL2,,,
w,,CCL2,,,,,"E804C4",,m,_CCL2,,,
# r,,T21_T2L,,,,,"E804C4",,s,_8_Skip,,, ,,s,_T21_T2L,,,                       # Alias of CCL2
# w,,T21_T2L,,,,,"E804C4",,m,_T21_T2L,,,                                      # Alias of CCL2
# r,,T2_T2L,,,,,"E804C4",,s,_8_Skip,,, ,,s,_T2_T2L,,,                         # Alias of CCL2
# w,,T2_T2L,,,,,"E804C4",,m,_T2_T2L,,,                                        # Alias of CCL2
# r,,TL2,,,,,"E804C4",,s,_8_Skip,,, ,,s,_TL2,,,                               # Alias of CCL2
# w,,TL2,,,,,"E804C4",,m,_TL2,,,                                              # Alias of CCL2
r,,CCH2,,,,,"E904C5",,s,_8_Skip,,, ,,s,_CCH2,,,
w,,CCH2,,,,,"E904C5",,m,_CCH2,,,
# r,,T21_T2H,,,,,"E904C5",,s,_8_Skip,,, ,,s,_T21_T2H,,,                       # Alias of CCH2
# w,,T21_T2H,,,,,"E904C5",,m,_T21_T2H,,,                                      # Alias of CCH2
# r,,T2_T2H,,,,,"E904C5",,s,_8_Skip,,, ,,s,_T2_T2H,,,                         # Alias of CCH2
# w,,T2_T2H,,,,,"E904C5",,m,_T2_T2H,,,                                        # Alias of CCH2
# r,,TH2,,,,,"E904C5",,s,_8_Skip,,, ,,s,_TH2,,,                               # Alias of CCH2
# w,,TH2,,,,,"E904C5",,m,_TH2,,,                                              # Alias of CCH2
r,,CCL3,,,,,"EA04C6",,s,_8_Skip,,, ,,s,_CCL3,,,
w,,CCL3,,,,,"EA04C6",,m,_CCL3,,,
r,,CCH3,,,,,"EB04C7",,s,_8_Skip,,, ,,s,_CCH3,,,
w,,CCH3,,,,,"EB04C7",,m,_CCH3,,,
r,,P4_ALTSEL0,,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_ALTSEL0,,,
w,,P4_ALTSEL0,,,,,"E404C8",,m,_P4_ALTSEL0,,,
# r,,P4_DATA,,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_DATA,,,                       # Alias of P4_ALTSEL0
# w,,P4_DATA,,,,,"E404C8",,m,_P4_DATA,,,                                      # Alias of P4_ALTSEL0
# r,,P4_OD,,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_OD,,,                           # Alias of P4_ALTSEL0
# w,,P4_OD,,,,,"E404C8",,m,_P4_OD,,,                                          # Alias of P4_ALTSEL0
# r,,P4_PUDSEL,,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_PUDSEL,,,                   # Alias of P4_ALTSEL0
# w,,P4_PUDSEL,,,,,"E404C8",,m,_P4_PUDSEL,,,                                  # Alias of P4_ALTSEL0
# r,,T2CON,,,,,"E404C8",,s,_8_Skip,,, ,,s,_T2CON,,,                           # Alias of P4_ALTSEL0
# w,,T2CON,,,,,"E404C8",,m,_T2CON,,,                                          # Alias of P4_ALTSEL0
# r,,UART1_SCON,,,,,"E404C8",,s,_8_Skip,,, ,,s,_UART1_SCON,,,                 # Alias of P4_ALTSEL0
# w,,UART1_SCON,,,,,"E404C8",,m,_UART1_SCON,,,                                # Alias of P4_ALTSEL0
r,,P4_ALTSEL1,,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_ALTSEL1,,,
w,,P4_ALTSEL1,,,,,"E504C9",,m,_P4_ALTSEL1,,,
# r,,P4_DIR,,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_DIR,,,                         # Alias of P4_ALTSEL1
# w,,P4_DIR,,,,,"E504C9",,m,_P4_DIR,,,                                        # Alias of P4_ALTSEL1
# r,,P4_PUDEN,,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_PUDEN,,,                     # Alias of P4_ALTSEL1
# w,,P4_PUDEN,,,,,"E504C9",,m,_P4_PUDEN,,,                                    # Alias of P4_ALTSEL1
# r,,UART1_SBUF,,,,,"E504C9",,s,_8_Skip,,, ,,s,_UART1_SBUF,,,                 # Alias of P4_ALTSEL1
# w,,UART1_SBUF,,,,,"E504C9",,m,_UART1_SBUF,,,                                # Alias of P4_ALTSEL1
r,,ADC_CHCTR0,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CHCTR0,,,
w,,ADC_CHCTR0,,,,,"E604CA",,m,_ADC_CHCTR0,,,
# r,,ADC_CHINFR,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CHINFR,,,                 # Alias of ADC_CHCTR0
# w,,ADC_CHINFR,,,,,"E604CA",,m,_ADC_CHINFR,,,                                # Alias of ADC_CHCTR0
# r,,ADC_CRCR1,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CRCR1,,,                   # Alias of ADC_CHCTR0
# w,,ADC_CRCR1,,,,,"E604CA",,m,_ADC_CRCR1,,,                                  # Alias of ADC_CHCTR0
# r,,ADC_GLOBCTR,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_GLOBCTR,,,               # Alias of ADC_CHCTR0
# w,,ADC_GLOBCTR,,,,,"E604CA",,m,_ADC_GLOBCTR,,,                              # Alias of ADC_CHCTR0
# r,,ADC_RCR0,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RCR0,,,                     # Alias of ADC_CHCTR0
# w,,ADC_RCR0,,,,,"E604CA",,m,_ADC_RCR0,,,                                    # Alias of ADC_CHCTR0
# r,,ADC_RESR0L,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RESR0L,,,                 # Alias of ADC_CHCTR0
# w,,ADC_RESR0L,,,,,"E604CA",,m,_ADC_RESR0L,,,                                # Alias of ADC_CHCTR0
# r,,ADC_RESRA0L,,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RESRA0L,,,               # Alias of ADC_CHCTR0
# w,,ADC_RESRA0L,,,,,"E604CA",,m,_ADC_RESRA0L,,,                              # Alias of ADC_CHCTR0
# r,,CRCL,,,,,"E604CA",,s,_8_Skip,,, ,,s,_CRCL,,,                             # Alias of ADC_CHCTR0
# w,,CRCL,,,,,"E604CA",,m,_CRCL,,,                                            # Alias of ADC_CHCTR0
# r,,RCAP2L,,,,,"E604CA",,s,_8_Skip,,, ,,s,_RCAP2L,,,                         # Alias of ADC_CHCTR0
# w,,RCAP2L,,,,,"E604CA",,m,_RCAP2L,,,                                        # Alias of ADC_CHCTR0
# r,,UART1_BCON,,,,,"E604CA",,s,_8_Skip,,, ,,s,_UART1_BCON,,,                 # Alias of ADC_CHCTR0
# w,,UART1_BCON,,,,,"E604CA",,m,_UART1_BCON,,,                                # Alias of ADC_CHCTR0
r,,ADC_CHCTR1,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CHCTR1,,,
w,,ADC_CHCTR1,,,,,"E704CB",,m,_ADC_CHCTR1,,,
# r,,ADC_CHINCR,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CHINCR,,,                 # Alias of ADC_CHCTR1
# w,,ADC_CHINCR,,,,,"E704CB",,m,_ADC_CHINCR,,,                                # Alias of ADC_CHCTR1
# r,,ADC_CRPR1,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CRPR1,,,                   # Alias of ADC_CHCTR1
# w,,ADC_CRPR1,,,,,"E704CB",,m,_ADC_CRPR1,,,                                  # Alias of ADC_CHCTR1
# r,,ADC_GLOBSTR,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_GLOBSTR,,,               # Alias of ADC_CHCTR1
# w,,ADC_GLOBSTR,,,,,"E704CB",,m,_ADC_GLOBSTR,,,                              # Alias of ADC_CHCTR1
# r,,ADC_RCR1,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RCR1,,,                     # Alias of ADC_CHCTR1
# w,,ADC_RCR1,,,,,"E704CB",,m,_ADC_RCR1,,,                                    # Alias of ADC_CHCTR1
# r,,ADC_RESR0H,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RESR0H,,,                 # Alias of ADC_CHCTR1
# w,,ADC_RESR0H,,,,,"E704CB",,m,_ADC_RESR0H,,,                                # Alias of ADC_CHCTR1
# r,,ADC_RESRA0H,,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RESRA0H,,,               # Alias of ADC_CHCTR1
# w,,ADC_RESRA0H,,,,,"E704CB",,m,_ADC_RESRA0H,,,                              # Alias of ADC_CHCTR1
# r,,CRCH,,,,,"E704CB",,s,_8_Skip,,, ,,s,_CRCH,,,                             # Alias of ADC_CHCTR1
# w,,CRCH,,,,,"E704CB",,m,_CRCH,,,                                            # Alias of ADC_CHCTR1
# r,,RCAP2H,,,,,"E704CB",,s,_8_Skip,,, ,,s,_RCAP2H,,,                         # Alias of ADC_CHCTR1
# w,,RCAP2H,,,,,"E704CB",,m,_RCAP2H,,,                                        # Alias of ADC_CHCTR1
# r,,UART1_BG,,,,,"E704CB",,s,_8_Skip,,, ,,s,_UART1_BG,,,                     # Alias of ADC_CHCTR1
# w,,UART1_BG,,,,,"E704CB",,m,_UART1_BG,,,                                    # Alias of ADC_CHCTR1
r,,ADC_CHCTR2,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CHCTR2,,,
w,,ADC_CHCTR2,,,,,"E004CC",,m,_ADC_CHCTR2,,,
# r,,ADC_CHINSR,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CHINSR,,,                 # Alias of ADC_CHCTR2
# w,,ADC_CHINSR,,,,,"E004CC",,m,_ADC_CHINSR,,,                                # Alias of ADC_CHCTR2
# r,,ADC_CRMR1,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CRMR1,,,                   # Alias of ADC_CHCTR2
# w,,ADC_CRMR1,,,,,"E004CC",,m,_ADC_CRMR1,,,                                  # Alias of ADC_CHCTR2
# r,,ADC_PRAR,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_PRAR,,,                     # Alias of ADC_CHCTR2
# w,,ADC_PRAR,,,,,"E004CC",,m,_ADC_PRAR,,,                                    # Alias of ADC_CHCTR2
# r,,ADC_RCR2,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RCR2,,,                     # Alias of ADC_CHCTR2
# w,,ADC_RCR2,,,,,"E004CC",,m,_ADC_RCR2,,,                                    # Alias of ADC_CHCTR2
# r,,ADC_RESR1L,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RESR1L,,,                 # Alias of ADC_CHCTR2
# w,,ADC_RESR1L,,,,,"E004CC",,m,_ADC_RESR1L,,,                                # Alias of ADC_CHCTR2
# r,,ADC_RESRA1L,,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RESRA1L,,,               # Alias of ADC_CHCTR2
# w,,ADC_RESRA1L,,,,,"E004CC",,m,_ADC_RESRA1L,,,                              # Alias of ADC_CHCTR2
# r,,UART1_FDCON,,,,,"E004CC",,s,_8_Skip,,, ,,s,_UART1_FDCON,,,               # Alias of ADC_CHCTR2
# w,,UART1_FDCON,,,,,"E004CC",,m,_UART1_FDCON,,,                              # Alias of ADC_CHCTR2
r,,ADC_CHCTR3,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_CHCTR3,,,
w,,ADC_CHCTR3,,,,,"E104CD",,m,_ADC_CHCTR3,,,
# r,,ADC_CHINPR,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_CHINPR,,,                 # Alias of ADC_CHCTR3
# w,,ADC_CHINPR,,,,,"E104CD",,m,_ADC_CHINPR,,,                                # Alias of ADC_CHCTR3
# r,,ADC_LCBR,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_LCBR,,,                     # Alias of ADC_CHCTR3
# w,,ADC_LCBR,,,,,"E104CD",,m,_ADC_LCBR,,,                                    # Alias of ADC_CHCTR3
# r,,ADC_QMR0,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_QMR0,,,                     # Alias of ADC_CHCTR3
# w,,ADC_QMR0,,,,,"E104CD",,m,_ADC_QMR0,,,                                    # Alias of ADC_CHCTR3
# r,,ADC_RCR3,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RCR3,,,                     # Alias of ADC_CHCTR3
# w,,ADC_RCR3,,,,,"E104CD",,m,_ADC_RCR3,,,                                    # Alias of ADC_CHCTR3
# r,,ADC_RESR1H,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RESR1H,,,                 # Alias of ADC_CHCTR3
# w,,ADC_RESR1H,,,,,"E104CD",,m,_ADC_RESR1H,,,                                # Alias of ADC_CHCTR3
# r,,ADC_RESRA1H,,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RESRA1H,,,               # Alias of ADC_CHCTR3
# w,,ADC_RESRA1H,,,,,"E104CD",,m,_ADC_RESRA1H,,,                              # Alias of ADC_CHCTR3
# r,,UART1_FDSTEP,,,,,"E104CD",,s,_8_Skip,,, ,,s,_UART1_FDSTEP,,,             # Alias of ADC_CHCTR3
# w,,UART1_FDSTEP,,,,,"E104CD",,m,_UART1_FDSTEP,,,                            # Alias of ADC_CHCTR3
r,,ADC_CHCTR4,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_CHCTR4,,,
w,,ADC_CHCTR4,,,,,"E204CE",,m,_ADC_CHCTR4,,,
# r,,ADC_EVINFR,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_EVINFR,,,                 # Alias of ADC_CHCTR4
# w,,ADC_EVINFR,,,,,"E204CE",,m,_ADC_EVINFR,,,                                # Alias of ADC_CHCTR4
# r,,ADC_INPCR0,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_INPCR0,,,                 # Alias of ADC_CHCTR4
# w,,ADC_INPCR0,,,,,"E204CE",,m,_ADC_INPCR0,,,                                # Alias of ADC_CHCTR4
# r,,ADC_QSR0,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_QSR0,,,                     # Alias of ADC_CHCTR4
# w,,ADC_QSR0,,,,,"E204CE",,m,_ADC_QSR0,,,                                    # Alias of ADC_CHCTR4
# r,,ADC_RESR2L,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_RESR2L,,,                 # Alias of ADC_CHCTR4
# w,,ADC_RESR2L,,,,,"E204CE",,m,_ADC_RESR2L,,,                                # Alias of ADC_CHCTR4
# r,,ADC_RESRA2L,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_RESRA2L,,,               # Alias of ADC_CHCTR4
# w,,ADC_RESRA2L,,,,,"E204CE",,m,_ADC_RESRA2L,,,                              # Alias of ADC_CHCTR4
# r,,ADC_VFCR,,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_VFCR,,,                     # Alias of ADC_CHCTR4
# w,,ADC_VFCR,,,,,"E204CE",,m,_ADC_VFCR,,,                                    # Alias of ADC_CHCTR4
# r,,UART1_FDRES,,,,,"E204CE",,s,_8_Skip,,, ,,s,_UART1_FDRES,,,               # Alias of ADC_CHCTR4
# w,,UART1_FDRES,,,,,"E204CE",,m,_UART1_FDRES,,,                              # Alias of ADC_CHCTR4
r,,ADC_CHCTR5,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_CHCTR5,,,
w,,ADC_CHCTR5,,,,,"E304CF",,m,_ADC_CHCTR5,,,
# r,,ADC_ETRCR,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_ETRCR,,,                   # Alias of ADC_CHCTR5
# w,,ADC_ETRCR,,,,,"E304CF",,m,_ADC_ETRCR,,,                                  # Alias of ADC_CHCTR5
# r,,ADC_EVINCR,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_EVINCR,,,                 # Alias of ADC_CHCTR5
# w,,ADC_EVINCR,,,,,"E304CF",,m,_ADC_EVINCR,,,                                # Alias of ADC_CHCTR5
# r,,ADC_Q0R0,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_Q0R0,,,                     # Alias of ADC_CHCTR5
# w,,ADC_Q0R0,,,,,"E304CF",,m,_ADC_Q0R0,,,                                    # Alias of ADC_CHCTR5
# r,,ADC_RESR2H,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_RESR2H,,,                 # Alias of ADC_CHCTR5
# w,,ADC_RESR2H,,,,,"E304CF",,m,_ADC_RESR2H,,,                                # Alias of ADC_CHCTR5
# r,,ADC_RESRA2H,,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_RESRA2H,,,               # Alias of ADC_CHCTR5
# w,,ADC_RESRA2H,,,,,"E304CF",,m,_ADC_RESRA2H,,,                              # Alias of ADC_CHCTR5
r,,PSW,,,,,"FC04D0",,s,_8_Skip,,, ,,s,_PSW,,,
w,,PSW,,,,,"FC04D0",,m,_PSW,,,
r,,ADC_PAGE,,,,,"FD04D1",,s,_8_Skip,,, ,,s,_ADC_PAGE,,,
w,,ADC_PAGE,,,,,"FD04D1",,m,_ADC_PAGE,,,
r,,ADC_CHCTR6,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_CHCTR6,,,
w,,ADC_CHCTR6,,,,,"FE04D2",,m,_ADC_CHCTR6,,,
# r,,ADC_EVINSR,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_EVINSR,,,                 # Alias of ADC_CHCTR6
# w,,ADC_EVINSR,,,,,"FE04D2",,m,_ADC_EVINSR,,,                                # Alias of ADC_CHCTR6
# r,,ADC_QBUR0,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_QBUR0,,,                   # Alias of ADC_CHCTR6
# w,,ADC_QBUR0,,,,,"FE04D2",,m,_ADC_QBUR0,,,                                  # Alias of ADC_CHCTR6
# r,,ADC_QINR0,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_QINR0,,,                   # Alias of ADC_CHCTR6
# w,,ADC_QINR0,,,,,"FE04D2",,m,_ADC_QINR0,,,                                  # Alias of ADC_CHCTR6
# r,,ADC_RESR3L,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_RESR3L,,,                 # Alias of ADC_CHCTR6
# w,,ADC_RESR3L,,,,,"FE04D2",,m,_ADC_RESR3L,,,                                # Alias of ADC_CHCTR6
# r,,ADC_RESRA3L,,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_RESRA3L,,,               # Alias of ADC_CHCTR6
# w,,ADC_RESRA3L,,,,,"FE04D2",,m,_ADC_RESRA3L,,,                              # Alias of ADC_CHCTR6
r,,ADC_CHCTR7,,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_CHCTR7,,,
w,,ADC_CHCTR7,,,,,"FF04D3",,m,_ADC_CHCTR7,,,
# r,,ADC_EVINPR,,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_EVINPR,,,                 # Alias of ADC_CHCTR7
# w,,ADC_EVINPR,,,,,"FF04D3",,m,_ADC_EVINPR,,,                                # Alias of ADC_CHCTR7
# r,,ADC_RESR3H,,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_RESR3H,,,                 # Alias of ADC_CHCTR7
# w,,ADC_RESR3H,,,,,"FF04D3",,m,_ADC_RESR3H,,,                                # Alias of ADC_CHCTR7
# r,,ADC_RESRA3H,,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_RESRA3H,,,               # Alias of ADC_CHCTR7
# w,,ADC_RESRA3H,,,,,"FF04D3",,m,_ADC_RESRA3H,,,                              # Alias of ADC_CHCTR7
r,,ADCON0,,,,,"F404D8",,s,_8_Skip,,, ,,s,_ADCON0,,,
w,,ADCON0,,,,,"F404D8",,m,_ADCON0,,,
r,,ADDATH,,,,,"F504D9",,s,_8_Skip,,, ,,s,_ADDATH,,,
w,,ADDATH,,,,,"F504D9",,m,_ADDATH,,,
r,,ADDATL,,,,,"F604DA",,s,_8_Skip,,, ,,s,_ADDATL,,,
w,,ADDATL,,,,,"F604DA",,m,_ADDATL,,,
r,,ADCON1,,,,,"F004DC",,s,_8_Skip,,, ,,s,_ADCON1,,,
w,,ADCON1,,,,,"F004DC",,m,_ADCON1,,,
r,,ACC,,,,,"CC04E0",,s,_8_Skip,,, ,,s,_ACC,,,
w,,ACC,,,,,"CC04E0",,m,_ACC,,,
r,,IEN1,,,,,"C404E8",,s,_8_Skip,,, ,,s,_IEN1,,,
w,,IEN1,,,,,"C404E8",,m,_IEN1,,,
r,,FDCON,,,,,"C504E9",,s,_8_Skip,,, ,,s,_FDCON,,,
w,,FDCON,,,,,"C504E9",,m,_FDCON,,,
# r,,MISC_CON,,,,,"C504E9",,s,_8_Skip,,, ,,s,_MISC_CON,,,                     # Alias of FDCON
# w,,MISC_CON,,,,,"C504E9",,m,_MISC_CON,,,                                    # Alias of FDCON
# r,,MMCR2,,,,,"C504E9",,s,_8_Skip,,, ,,s,_MMCR2,,,                           # Alias of FDCON
# w,,MMCR2,,,,,"C504E9",,m,_MMCR2,,,                                          # Alias of FDCON
r,,FDSTEP,,,,,"C604EA",,s,_8_Skip,,, ,,s,_FDSTEP,,,
w,,FDSTEP,,,,,"C604EA",,m,_FDSTEP,,,
r,,FDRES,,,,,"C704EB",,s,_8_Skip,,, ,,s,_FDRES,,,
w,,FDRES,,,,,"C704EB",,m,_FDRES,,,
# r,,MMWR1,,,,,"C704EB",,s,_8_Skip,,, ,,s,_MMWR1,,,                           # Alias of FDRES
# w,,MMWR1,,,,,"C704EB",,m,_MMWR1,,,                                          # Alias of FDRES
r,,MMWR2,,,,,"C004EC",,s,_8_Skip,,, ,,s,_MMWR2,,,
w,,MMWR2,,,,,"C004EC",,m,_MMWR2,,,
r,,MMCR,,,,,"DD04F1",,s,_8_Skip,,, ,,s,_MMCR,,,
w,,MMCR,,,,,"DD04F1",,m,_MMCR,,,
r,,MMSR,,,,,"DE04F2",,s,_8_Skip,,, ,,s,_MMSR,,,
w,,MMSR,,,,,"DE04F2",,m,_MMSR,,,
r,,MMBPCR,,,,,"DF04F3",,s,_8_Skip,,, ,,s,_MMBPCR,,,
w,,MMBPCR,,,,,"DF04F3",,m,_MMBPCR,,,
r,,MMICR,,,,,"D804F4",,s,_8_Skip,,, ,,s,_MMICR,,,
w,,MMICR,,,,,"D804F4",,m,_MMICR,,,
r,,MMDR,,,,,"D904F5",,s,_8_Skip,,, ,,s,_MMDR,,,
w,,MMDR,,,,,"D904F5",,m,_MMDR,,,
r,,HWBPSR,,,,,"DA04F6",,s,_8_Skip,,, ,,s,_HWBPSR,,,
w,,HWBPSR,,,,,"DA04F6",,m,_HWBPSR,,,
r,,HWBPDR,,,,,"DB04F7",,s,_8_Skip,,, ,,s,_HWBPDR,,,
w,,HWBPDR,,,,,"DB04F7",,m,_HWBPDR,,,
r,,IP1,,,,,"D404F8",,s,_8_Skip,,, ,,s,_IP1,,,
w,,IP1,,,,,"D404F8",,m,_IP1,,,
r,,IPH1,,,,,"D504F9",,s,_8_Skip,,, ,,s,_IPH1,,,
w,,IPH1,,,,,"D504F9",,m,_IPH1,,,
r,,CCU6_CC60RL,,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_CC60RL,,,
w,,CCU6_CC60RL,,,,,"D604FA",,m,_CCU6_CC60RL,,,
# r,,CCU6_CC60SRL,,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_CC60SRL,,,             # Alias of CCU6_CC60RL
# w,,CCU6_CC60SRL,,,,,"D604FA",,m,_CCU6_CC60SRL,,,                            # Alias of CCU6_CC60RL
# r,,CCU6_T12L,,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_T12L,,,                   # Alias of CCU6_CC60RL
# w,,CCU6_T12L,,,,,"D604FA",,m,_CCU6_T12L,,,                                  # Alias of CCU6_CC60RL
# r,,CCU6_TCTR2L,,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_TCTR2L,,,               # Alias of CCU6_CC60RL
# w,,CCU6_TCTR2L,,,,,"D604FA",,m,_CCU6_TCTR2L,,,                              # Alias of CCU6_CC60RL
r,,CCU6_CC60RH,,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_CC60RH,,,
w,,CCU6_CC60RH,,,,,"D704FB",,m,_CCU6_CC60RH,,,
# r,,CCU6_CC60SRH,,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_CC60SRH,,,             # Alias of CCU6_CC60RH
# w,,CCU6_CC60SRH,,,,,"D704FB",,m,_CCU6_CC60SRH,,,                            # Alias of CCU6_CC60RH
# r,,CCU6_T12H,,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_T12H,,,                   # Alias of CCU6_CC60RH
# w,,CCU6_T12H,,,,,"D704FB",,m,_CCU6_T12H,,,                                  # Alias of CCU6_CC60RH
# r,,CCU6_TCTR2H,,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_TCTR2H,,,               # Alias of CCU6_CC60RH
# w,,CCU6_TCTR2H,,,,,"D704FB",,m,_CCU6_TCTR2H,,,                              # Alias of CCU6_CC60RH
r,,CCL_PUHZ,,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCL_PUHZ,,,
w,,CCL_PUHZ,,,,,"D004FC",,m,_CCL_PUHZ,,,
# r,,CCU6_CC61RL,,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_CC61RL,,,               # Alias of CCL_PUHZ
# w,,CCU6_CC61RL,,,,,"D004FC",,m,_CCU6_CC61RL,,,                              # Alias of CCL_PUHZ
# r,,CCU6_CC61SRL,,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_CC61SRL,,,             # Alias of CCL_PUHZ
# w,,CCU6_CC61SRL,,,,,"D004FC",,m,_CCU6_CC61SRL,,,                            # Alias of CCL_PUHZ
# r,,CCU6_MODCTRL,,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_MODCTRL,,,             # Alias of CCL_PUHZ
# w,,CCU6_MODCTRL,,,,,"D004FC",,m,_CCU6_MODCTRL,,,                            # Alias of CCL_PUHZ
# r,,CCU6_T13L,,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_T13L,,,                   # Alias of CCL_PUHZ
# w,,CCU6_T13L,,,,,"D004FC",,m,_CCU6_T13L,,,                                  # Alias of CCL_PUHZ
# r,,VR0,,,,,"D004FC",,s,_8_Skip,,, ,,s,_VR0,,,                               # Alias of CCL_PUHZ
# w,,VR0,,,,,"D004FC",,m,_VR0,,,                                              # Alias of CCL_PUHZ
r,,CCH_PUHZ,,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCH_PUHZ,,,
w,,CCH_PUHZ,,,,,"D104FD",,m,_CCH_PUHZ,,,
# r,,CCU6_CC61RH,,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_CC61RH,,,               # Alias of CCH_PUHZ
# w,,CCU6_CC61RH,,,,,"D104FD",,m,_CCU6_CC61RH,,,                              # Alias of CCH_PUHZ
# r,,CCU6_CC61SRH,,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_CC61SRH,,,             # Alias of CCH_PUHZ
# w,,CCU6_CC61SRH,,,,,"D104FD",,m,_CCU6_CC61SRH,,,                            # Alias of CCH_PUHZ
# r,,CCU6_MODCTRH,,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_MODCTRH,,,             # Alias of CCH_PUHZ
# w,,CCU6_MODCTRH,,,,,"D104FD",,m,_CCU6_MODCTRH,,,                            # Alias of CCH_PUHZ
# r,,CCU6_T13H,,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_T13H,,,                   # Alias of CCH_PUHZ
# w,,CCU6_T13H,,,,,"D104FD",,m,_CCU6_T13H,,,                                  # Alias of CCH_PUHZ
# r,,VR1,,,,,"D104FD",,s,_8_Skip,,, ,,s,_VR1,,,                               # Alias of CCH_PUHZ
# w,,VR1,,,,,"D104FD",,m,_VR1,,,                                              # Alias of CCH_PUHZ
r,,CCL_GPV,,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCL_GPV,,,
w,,CCL_GPV,,,,,"D204FE",,m,_CCL_GPV,,,
# r,,CCU6_CC62RL,,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CC62RL,,,               # Alias of CCL_GPV
# w,,CCU6_CC62RL,,,,,"D204FE",,m,_CCU6_CC62RL,,,                              # Alias of CCL_GPV
# r,,CCU6_CC62SRL,,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CC62SRL,,,             # Alias of CCL_GPV
# w,,CCU6_CC62SRL,,,,,"D204FE",,m,_CCU6_CC62SRL,,,                            # Alias of CCL_GPV
# r,,CCU6_CMPSTATL,,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CMPSTATL,,,           # Alias of CCL_GPV
# w,,CCU6_CMPSTATL,,,,,"D204FE",,m,_CCU6_CMPSTATL,,,                          # Alias of CCL_GPV
# r,,CCU6_TRPCTRL,,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_TRPCTRL,,,             # Alias of CCL_GPV
# w,,CCU6_TRPCTRL,,,,,"D204FE",,m,_CCU6_TRPCTRL,,,                            # Alias of CCL_GPV
# r,,VR2,,,,,"D204FE",,s,_8_Skip,,, ,,s,_VR2,,,                               # Alias of CCL_GPV
# w,,VR2,,,,,"D204FE",,m,_VR2,,,                                              # Alias of CCL_GPV
r,,CCH_GPV,,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCH_GPV,,,
w,,CCH_GPV,,,,,"D304FF",,m,_CCH_GPV,,,
# r,,CCU6_CC62RH,,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CC62RH,,,               # Alias of CCH_GPV
# w,,CCU6_CC62RH,,,,,"D304FF",,m,_CCU6_CC62RH,,,                              # Alias of CCH_GPV
# r,,CCU6_CC62SRH,,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CC62SRH,,,             # Alias of CCH_GPV
# w,,CCU6_CC62SRH,,,,,"D304FF",,m,_CCU6_CC62SRH,,,                            # Alias of CCH_GPV
# r,,CCU6_CMPSTATH,,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CMPSTATH,,,           # Alias of CCH_GPV
# w,,CCU6_CMPSTATH,,,,,"D304FF",,m,_CCU6_CMPSTATH,,,                          # Alias of CCH_GPV
# r,,CCU6_TRPCTRH,,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_TRPCTRH,,,             # Alias of CCH_GPV
# w,,CCU6_TRPCTRH,,,,,"D304FF",,m,_CCU6_TRPCTRH,,,                            # Alias of CCH_GPV

# --- Konstanten ---
r,,ACK_07FF_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_07FF_BIT,,,
w,,ACK_07FF_BIT,,,,,"B80200",,m,_ACK_07FF_BIT,,,
# r,,ACK_0800_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_0800_BIT,,,             # Alias of ACK_07FF_BIT
# w,,ACK_0800_BIT,,,,,"B80200",,m,_ACK_0800_BIT,,,                            # Alias of ACK_07FF_BIT
# r,,ACK_5002_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_5002_BIT,,,             # Alias of ACK_07FF_BIT
# w,,ACK_5002_BIT,,,,,"B80200",,m,_ACK_5002_BIT,,,                            # Alias of ACK_07FF_BIT
# r,,ACK_FF00_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_FF00_BIT,,,             # Alias of ACK_07FF_BIT
# w,,ACK_FF00_BIT,,,,,"B80200",,m,_ACK_FF00_BIT,,,                            # Alias of ACK_07FF_BIT
# r,,ACK_REG_STOP_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_REG_STOP_BIT,,,     # Alias of ACK_07FF_BIT
# w,,ACK_REG_STOP_BIT,,,,,"B80200",,m,_ACK_REG_STOP_BIT,,,                    # Alias of ACK_07FF_BIT
# r,,ADC_SHORT,,,,,"B80200",,s,_8_Skip,,, ,,s,_ADC_SHORT,,,                   # Alias of ACK_07FF_BIT
# w,,ADC_SHORT,,,,,"B80200",,m,_ADC_SHORT,,,                                  # Alias of ACK_07FF_BIT
# r,,AIO_900,,,,,"B80200",,s,_8_Skip,,, ,,s,_AIO_900,,,                       # Alias of ACK_07FF_BIT
# w,,AIO_900,,,,,"B80200",,m,_AIO_900,,,                                      # Alias of ACK_07FF_BIT
# r,,BCCARD,,,,,"B80200",,s,_8_Skip,,, ,,s,_BCCARD,,,                         # Alias of ACK_07FF_BIT
# w,,BCCARD,,,,,"B80200",,m,_BCCARD,,,                                        # Alias of ACK_07FF_BIT
# r,,EBUS_S7,,,,,"B80200",,s,_8_Skip,,, ,,s,_EBUS_S7,,,                       # Alias of ACK_07FF_BIT
# w,,EBUS_S7,,,,,"B80200",,m,_EBUS_S7,,,                                      # Alias of ACK_07FF_BIT
# r,,EBUS_SCHICHT_2,,,,,"B80200",,s,_8_Skip,,, ,,s,_EBUS_SCHICHT_2,,,         # Alias of ACK_07FF_BIT
# w,,EBUS_SCHICHT_2,,,,,"B80200",,m,_EBUS_SCHICHT_2,,,                        # Alias of ACK_07FF_BIT
# r,,EEA_ANF,,,,,"B80200",,s,_8_Skip,,, ,,s,_EEA_ANF,,,                       # Alias of ACK_07FF_BIT
# w,,EEA_ANF,,,,,"B80200",,m,_EEA_ANF,,,                                      # Alias of ACK_07FF_BIT
# r,,EEP_FAST_INIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_EEP_FAST_INIT,,,           # Alias of ACK_07FF_BIT
# w,,EEP_FAST_INIT,,,,,"B80200",,m,_EEP_FAST_INIT,,,                          # Alias of ACK_07FF_BIT
# r,,EE_I2C,,,,,"B80200",,s,_8_Skip,,, ,,s,_EE_I2C,,,                         # Alias of ACK_07FF_BIT
# w,,EE_I2C,,,,,"B80200",,m,_EE_I2C,,,                                        # Alias of ACK_07FF_BIT
# r,,EE_PARAS,,,,,"B80200",,s,_8_Skip,,, ,,s,_EE_PARAS,,,                     # Alias of ACK_07FF_BIT
# w,,EE_PARAS,,,,,"B80200",,m,_EE_PARAS,,,                                    # Alias of ACK_07FF_BIT
# r,,FEHLER_DETAIL_EBENE,,,,,"B80200",,s,_8_Skip,,, ,,s,_FEHLER_DETAIL_EBENE,,, # Alias of ACK_07FF_BIT
# w,,FEHLER_DETAIL_EBENE,,,,,"B80200",,m,_FEHLER_DETAIL_EBENE,,,              # Alias of ACK_07FF_BIT
# r,,HARD_52,,,,,"B80200",,s,_8_Skip,,, ,,s,_HARD_52,,,                       # Alias of ACK_07FF_BIT
# w,,HARD_52,,,,,"B80200",,m,_HARD_52,,,                                      # Alias of ACK_07FF_BIT
# r,,INFONR,,,,,"B80200",,s,_8_Skip,,, ,,s,_INFONR,,,                         # Alias of ACK_07FF_BIT
# w,,INFONR,,,,,"B80200",,m,_INFONR,,,                                        # Alias of ACK_07FF_BIT
# r,,ION,,,,,"B80200",,s,_8_Skip,,, ,,s,_ION,,,                               # Alias of ACK_07FF_BIT
# w,,ION,,,,,"B80200",,m,_ION,,,                                              # Alias of ACK_07FF_BIT
# r,,MXSTB_A,,,,,"B80200",,s,_8_Skip,,, ,,s,_MXSTB_A,,,                       # Alias of ACK_07FF_BIT
# w,,MXSTB_A,,,,,"B80200",,m,_MXSTB_A,,,                                      # Alias of ACK_07FF_BIT
# r,,NM_KALTSTART_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_NM_KALTSTART_BIT,,,     # Alias of ACK_07FF_BIT
# w,,NM_KALTSTART_BIT,,,,,"B80200",,m,_NM_KALTSTART_BIT,,,                    # Alias of ACK_07FF_BIT
# r,,OS_XC886,,,,,"B80200",,s,_8_Skip,,, ,,s,_OS_XC886,,,                     # Alias of ACK_07FF_BIT
# w,,OS_XC886,,,,,"B80200",,m,_OS_XC886,,,                                    # Alias of ACK_07FF_BIT
# r,,QQ_M1,,,,,"B80200",,s,_8_Skip,,, ,,s,_QQ_M1,,,                           # Alias of ACK_07FF_BIT
# w,,QQ_M1,,,,,"B80200",,m,_QQ_M1,,,                                          # Alias of ACK_07FF_BIT
# r,,RAMROM,,,,,"B80200",,s,_8_Skip,,, ,,s,_RAMROM,,,                         # Alias of ACK_07FF_BIT
# w,,RAMROM,,,,,"B80200",,m,_RAMROM,,,                                        # Alias of ACK_07FF_BIT
# r,,RX_XRAM_BUSY_BIT,,,,,"B80200",,s,_8_Skip,,, ,,s,_RX_XRAM_BUSY_BIT,,,     # Alias of ACK_07FF_BIT
# w,,RX_XRAM_BUSY_BIT,,,,,"B80200",,m,_RX_XRAM_BUSY_BIT,,,                    # Alias of ACK_07FF_BIT
# r,,SFR_IO,,,,,"B80200",,s,_8_Skip,,, ,,s,_SFR_IO,,,                         # Alias of ACK_07FF_BIT
# w,,SFR_IO,,,,,"B80200",,m,_SFR_IO,,,                                        # Alias of ACK_07FF_BIT
# r,,STOEREC,,,,,"B80200",,s,_8_Skip,,, ,,s,_STOEREC,,,                       # Alias of ACK_07FF_BIT
# w,,STOEREC,,,,,"B80200",,m,_STOEREC,,,                                      # Alias of ACK_07FF_BIT
# r,,TX_EIG_QQ,,,,,"B80200",,s,_8_Skip,,, ,,s,_TX_EIG_QQ,,,                   # Alias of ACK_07FF_BIT
# w,,TX_EIG_QQ,,,,,"B80200",,m,_TX_EIG_QQ,,,                                  # Alias of ACK_07FF_BIT
# r,,TX_QQ_M11,,,,,"B80200",,s,_8_Skip,,, ,,s,_TX_QQ_M11,,,                   # Alias of ACK_07FF_BIT
# w,,TX_QQ_M11,,,,,"B80200",,m,_TX_QQ_M11,,,                                  # Alias of ACK_07FF_BIT
# r,,USER,,,,,"B80200",,s,_8_Skip,,, ,,s,_USER,,,                             # Alias of ACK_07FF_BIT
# w,,USER,,,,,"B80200",,m,_USER,,,                                            # Alias of ACK_07FF_BIT
# r,,VAR_900,,,,,"B80200",,s,_8_Skip,,, ,,s,_VAR_900,,,                       # Alias of ACK_07FF_BIT
# w,,VAR_900,,,,,"B80200",,m,_VAR_900,,,                                      # Alias of ACK_07FF_BIT
# r,,ZST_QQ_EIG,,,,,"B80200",,s,_8_Skip,,, ,,s,_ZST_QQ_EIG,,,                 # Alias of ACK_07FF_BIT
# w,,ZST_QQ_EIG,,,,,"B80200",,m,_ZST_QQ_EIG,,,                                # Alias of ACK_07FF_BIT
r,,ACK_0503_BIT,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0503_BIT,,,
w,,ACK_0503_BIT,,,,,"B90201",,m,_ACK_0503_BIT,,,
# r,,ACK_0704_BIT,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0704_BIT,,,             # Alias of ACK_0503_BIT
# w,,ACK_0704_BIT,,,,,"B90201",,m,_ACK_0704_BIT,,,                            # Alias of ACK_0503_BIT
# r,,ACK_07FF,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_07FF,,,                     # Alias of ACK_0503_BIT
# w,,ACK_07FF,,,,,"B90201",,m,_ACK_07FF,,,                                    # Alias of ACK_0503_BIT
# r,,ACK_0800,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0800,,,                     # Alias of ACK_0503_BIT
# w,,ACK_0800,,,,,"B90201",,m,_ACK_0800,,,                                    # Alias of ACK_0503_BIT
# r,,ACK_5002,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_5002,,,                     # Alias of ACK_0503_BIT
# w,,ACK_5002,,,,,"B90201",,m,_ACK_5002,,,                                    # Alias of ACK_0503_BIT
# r,,ACK_FF00,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_FF00,,,                     # Alias of ACK_0503_BIT
# w,,ACK_FF00,,,,,"B90201",,m,_ACK_FF00,,,                                    # Alias of ACK_0503_BIT
# r,,ACK_FF02_BIT,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_FF02_BIT,,,             # Alias of ACK_0503_BIT
# w,,ACK_FF02_BIT,,,,,"B90201",,m,_ACK_FF02_BIT,,,                            # Alias of ACK_0503_BIT
# r,,ACK_REG_STOP,,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_REG_STOP,,,             # Alias of ACK_0503_BIT
# w,,ACK_REG_STOP,,,,,"B90201",,m,_ACK_REG_STOP,,,                            # Alias of ACK_0503_BIT
# r,,ADC_NONE,,,,,"B90201",,s,_8_Skip,,, ,,s,_ADC_NONE,,,                     # Alias of ACK_0503_BIT
# w,,ADC_NONE,,,,,"B90201",,m,_ADC_NONE,,,                                    # Alias of ACK_0503_BIT
# r,,AIN_ERR_NI1000,,,,,"B90201",,s,_8_Skip,,, ,,s,_AIN_ERR_NI1000,,,         # Alias of ACK_0503_BIT
# w,,AIN_ERR_NI1000,,,,,"B90201",,m,_AIN_ERR_NI1000,,,                        # Alias of ACK_0503_BIT
# r,,EE_RANGE_FAIL__DEF,,,,,"B90201",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__DEF,,, # Alias of ACK_0503_BIT
# w,,EE_RANGE_FAIL__DEF,,,,,"B90201",,m,_EE_RANGE_FAIL__DEF,,,                # Alias of ACK_0503_BIT
# r,,MAX_OK,,,,,"B90201",,s,_8_Skip,,, ,,s,_MAX_OK,,,                         # Alias of ACK_0503_BIT
# w,,MAX_OK,,,,,"B90201",,m,_MAX_OK,,,                                        # Alias of ACK_0503_BIT
# r,,NGPBS_AFAKT,,,,,"B90201",,s,_8_Skip,,, ,,s,_NGPBS_AFAKT,,,               # Alias of ACK_0503_BIT
# w,,NGPBS_AFAKT,,,,,"B90201",,m,_NGPBS_AFAKT,,,                              # Alias of ACK_0503_BIT
# r,,NM_INIT_BIT,,,,,"B90201",,s,_8_Skip,,, ,,s,_NM_INIT_BIT,,,               # Alias of ACK_0503_BIT
# w,,NM_INIT_BIT,,,,,"B90201",,m,_NM_INIT_BIT,,,                              # Alias of ACK_0503_BIT
# r,,NTC1_TR_TST,,,,,"B90201",,s,_8_Skip,,, ,,s,_NTC1_TR_TST,,,               # Alias of ACK_0503_BIT
# w,,NTC1_TR_TST,,,,,"B90201",,m,_NTC1_TR_TST,,,                              # Alias of ACK_0503_BIT
# r,,RX_QQ_M2,,,,,"B90201",,s,_8_Skip,,, ,,s,_RX_QQ_M2,,,                     # Alias of ACK_0503_BIT
# w,,RX_QQ_M2,,,,,"B90201",,m,_RX_QQ_M2,,,                                    # Alias of ACK_0503_BIT
# r,,TCVZZ,,,,,"B90201",,s,_8_Skip,,, ,,s,_TCVZZ,,,                           # Alias of ACK_0503_BIT
# w,,TCVZZ,,,,,"B90201",,m,_TCVZZ,,,                                          # Alias of ACK_0503_BIT
# r,,ZST_QQ_M2,,,,,"B90201",,s,_8_Skip,,, ,,s,_ZST_QQ_M2,,,                   # Alias of ACK_0503_BIT
# w,,ZST_QQ_M2,,,,,"B90201",,m,_ZST_QQ_M2,,,                                  # Alias of ACK_0503_BIT
r,,ACK_0503,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_0503,,,
w,,ACK_0503,,,,,"BA0202",,m,_ACK_0503,,,
# r,,ACK_0704,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_0704,,,                     # Alias of ACK_0503
# w,,ACK_0704,,,,,"BA0202",,m,_ACK_0704,,,                                    # Alias of ACK_0503
# r,,ACK_FE01_BIT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_FE01_BIT,,,             # Alias of ACK_0503
# w,,ACK_FE01_BIT,,,,,"BA0202",,m,_ACK_FE01_BIT,,,                            # Alias of ACK_0503
# r,,ACK_FF02,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_FF02,,,                     # Alias of ACK_0503
# w,,ACK_FF02,,,,,"BA0202",,m,_ACK_FF02,,,                                    # Alias of ACK_0503
# r,,EEA_CONST_ANF,,,,,"BA0202",,s,_8_Skip,,, ,,s,_EEA_CONST_ANF,,,           # Alias of ACK_0503
# w,,EEA_CONST_ANF,,,,,"BA0202",,m,_EEA_CONST_ANF,,,                          # Alias of ACK_0503
# r,,EE_RANGE_FAIL__INTBCC,,,,,"BA0202",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__INTBCC,,, # Alias of ACK_0503
# w,,EE_RANGE_FAIL__INTBCC,,,,,"BA0202",,m,_EE_RANGE_FAIL__INTBCC,,,          # Alias of ACK_0503
# r,,ION_TEILER,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ION_TEILER,,,                 # Alias of ACK_0503
# w,,ION_TEILER,,,,,"BA0202",,m,_ION_TEILER,,,                                # Alias of ACK_0503
# r,,L_EEA_CRC_BCC_INT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_L_EEA_CRC_BCC_INT,,,   # Alias of ACK_0503
# w,,L_EEA_CRC_BCC_INT,,,,,"BA0202",,m,_L_EEA_CRC_BCC_INT,,,                  # Alias of ACK_0503
# r,,MB_2_INIT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_MB_2_INIT,,,                   # Alias of ACK_0503
# w,,MB_2_INIT,,,,,"BA0202",,m,_MB_2_INIT,,,                                  # Alias of ACK_0503
# r,,NGPBS_XWATOM,,,,,"BA0202",,s,_8_Skip,,, ,,s,_NGPBS_XWATOM,,,             # Alias of ACK_0503
# w,,NGPBS_XWATOM,,,,,"BA0202",,m,_NGPBS_XWATOM,,,                            # Alias of ACK_0503
# r,,NM_RESET_BIT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_NM_RESET_BIT,,,             # Alias of ACK_0503
# w,,NM_RESET_BIT,,,,,"BA0202",,m,_NM_RESET_BIT,,,                            # Alias of ACK_0503
# r,,NM_S7_RESET_BIT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_NM_S7_RESET_BIT,,,       # Alias of ACK_0503
# w,,NM_S7_RESET_BIT,,,,,"BA0202",,m,_NM_S7_RESET_BIT,,,                      # Alias of ACK_0503
# r,,NTC2_TR_TST,,,,,"BA0202",,s,_8_Skip,,, ,,s,_NTC2_TR_TST,,,               # Alias of ACK_0503
# w,,NTC2_TR_TST,,,,,"BA0202",,m,_NTC2_TR_TST,,,                              # Alias of ACK_0503
# r,,TIDLE_R2,,,,,"BA0202",,s,_8_Skip,,, ,,s,_TIDLE_R2,,,                     # Alias of ACK_0503
# w,,TIDLE_R2,,,,,"BA0202",,m,_TIDLE_R2,,,                                    # Alias of ACK_0503
# r,,ZST_QQ_M10,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ZST_QQ_M10,,,                 # Alias of ACK_0503
# w,,ZST_QQ_M10,,,,,"BA0202",,m,_ZST_QQ_M10,,,                                # Alias of ACK_0503
# r,,ZST_QQ_M10_BIT,,,,,"BA0202",,s,_8_Skip,,, ,,s,_ZST_QQ_M10_BIT,,,         # Alias of ACK_0503
# w,,ZST_QQ_M10_BIT,,,,,"BA0202",,m,_ZST_QQ_M10_BIT,,,                        # Alias of ACK_0503
r,,ADC_MXCODE,,,,,"BB0203",,s,_8_Skip,,, ,,s,_ADC_MXCODE,,,
w,,ADC_MXCODE,,,,,"BB0203",,m,_ADC_MXCODE,,,
# r,,AI_MUXER,,,,,"BB0203",,s,_8_Skip,,, ,,s,_AI_MUXER,,,                     # Alias of ADC_MXCODE
# w,,AI_MUXER,,,,,"BB0203",,m,_AI_MUXER,,,                                    # Alias of ADC_MXCODE
# r,,AI_REF,,,,,"BB0203",,s,_8_Skip,,, ,,s,_AI_REF,,,                         # Alias of ADC_MXCODE
# w,,AI_REF,,,,,"BB0203",,m,_AI_REF,,,                                        # Alias of ADC_MXCODE
# r,,EM_EE_REDUND__SELF,,,,,"BB0203",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__SELF,,, # Alias of ADC_MXCODE
# w,,EM_EE_REDUND__SELF,,,,,"BB0203",,m,_EM_EE_REDUND__SELF,,,                # Alias of ADC_MXCODE
# r,,HZ_KTND__I,,,,,"BB0203",,s,_8_Skip,,, ,,s,_HZ_KTND__I,,,                 # Alias of ADC_MXCODE
# w,,HZ_KTND__I,,,,,"BB0203",,m,_HZ_KTND__I,,,                                # Alias of ADC_MXCODE
# r,,NG_DW_TOL,,,,,"BB0203",,s,_8_Skip,,, ,,s,_NG_DW_TOL,,,                   # Alias of ADC_MXCODE
# w,,NG_DW_TOL,,,,,"BB0203",,m,_NG_DW_TOL,,,                                  # Alias of ADC_MXCODE
# r,,NG_GR_MIN__FILT,,,,,"BB0203",,s,_8_Skip,,, ,,s,_NG_GR_MIN__FILT,,,       # Alias of ADC_MXCODE
# w,,NG_GR_MIN__FILT,,,,,"BB0203",,m,_NG_GR_MIN__FILT,,,                      # Alias of ADC_MXCODE
# r,,NM_NORMAL_BIT,,,,,"BB0203",,s,_8_Skip,,, ,,s,_NM_NORMAL_BIT,,,           # Alias of ADC_MXCODE
# w,,NM_NORMAL_BIT,,,,,"BB0203",,m,_NM_NORMAL_BIT,,,                          # Alias of ADC_MXCODE
# r,,NSY11,,,,,"BB0203",,s,_8_Skip,,, ,,s,_NSY11,,,                           # Alias of ADC_MXCODE
# w,,NSY11,,,,,"BB0203",,m,_NSY11,,,                                          # Alias of ADC_MXCODE
# r,,NSY12,,,,,"BB0203",,s,_8_Skip,,, ,,s,_NSY12,,,                           # Alias of ADC_MXCODE
# w,,NSY12,,,,,"BB0203",,m,_NSY12,,,                                          # Alias of ADC_MXCODE
# r,,QQ_M11,,,,,"BB0203",,s,_8_Skip,,, ,,s,_QQ_M11,,,                         # Alias of ADC_MXCODE
# w,,QQ_M11,,,,,"BB0203",,m,_QQ_M11,,,                                        # Alias of ADC_MXCODE
# r,,TBOOSTRES,,,,,"BB0203",,s,_8_Skip,,, ,,s,_TBOOSTRES,,,                   # Alias of ADC_MXCODE
# w,,TBOOSTRES,,,,,"BB0203",,m,_TBOOSTRES,,,                                  # Alias of ADC_MXCODE
r,,ACK_FE01,,,,,"BC0204",,s,_8_Skip,,, ,,s,_ACK_FE01,,,
w,,ACK_FE01,,,,,"BC0204",,m,_ACK_FE01,,,
# r,,AIN_ERR_TAUSS,,,,,"BC0204",,s,_8_Skip,,, ,,s,_AIN_ERR_TAUSS,,,           # Alias of ACK_FE01
# w,,AIN_ERR_TAUSS,,,,,"BC0204",,m,_AIN_ERR_TAUSS,,,                          # Alias of ACK_FE01
# r,,AI_TRL,,,,,"BC0204",,s,_8_Skip,,, ,,s,_AI_TRL,,,                         # Alias of ACK_FE01
# w,,AI_TRL,,,,,"BC0204",,m,_AI_TRL,,,                                        # Alias of ACK_FE01
# r,,BOOSTER_ORL_MASK,,,,,"BC0204",,s,_8_Skip,,, ,,s,_BOOSTER_ORL_MASK,,,     # Alias of ACK_FE01
# w,,BOOSTER_ORL_MASK,,,,,"BC0204",,m,_BOOSTER_ORL_MASK,,,                    # Alias of ACK_FE01
# r,,EE_RANGE_FAIL__BCC_STAT,,,,,"BC0204",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__BCC_STAT,,, # Alias of ACK_FE01
# w,,EE_RANGE_FAIL__BCC_STAT,,,,,"BC0204",,m,_EE_RANGE_FAIL__BCC_STAT,,,      # Alias of ACK_FE01
# r,,EM_EE_REDUND__RED_FS,,,,,"BC0204",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_FS,,, # Alias of ACK_FE01
# w,,EM_EE_REDUND__RED_FS,,,,,"BC0204",,m,_EM_EE_REDUND__RED_FS,,,            # Alias of ACK_FE01
# r,,L_EEA_MAIN_CRC,,,,,"BC0204",,s,_8_Skip,,, ,,s,_L_EEA_MAIN_CRC,,,         # Alias of ACK_FE01
# w,,L_EEA_MAIN_CRC,,,,,"BC0204",,m,_L_EEA_MAIN_CRC,,,                        # Alias of ACK_FE01
# r,,NFSOUT,,,,,"BC0204",,s,_8_Skip,,, ,,s,_NFSOUT,,,                         # Alias of ACK_FE01
# w,,NFSOUT,,,,,"BC0204",,m,_NFSOUT,,,                                        # Alias of ACK_FE01
# r,,NM_NETZSTATUS_BIT,,,,,"BC0204",,s,_8_Skip,,, ,,s,_NM_NETZSTATUS_BIT,,,   # Alias of ACK_FE01
# w,,NM_NETZSTATUS_BIT,,,,,"BC0204",,m,_NM_NETZSTATUS_BIT,,,                  # Alias of ACK_FE01
# r,,NTC1_SCHLUSS,,,,,"BC0204",,s,_8_Skip,,, ,,s,_NTC1_SCHLUSS,,,             # Alias of ACK_FE01
# w,,NTC1_SCHLUSS,,,,,"BC0204",,m,_NTC1_SCHLUSS,,,                            # Alias of ACK_FE01
# r,,NTC_TEMP_TOL,,,,,"BC0204",,s,_8_Skip,,, ,,s,_NTC_TEMP_TOL,,,             # Alias of ACK_FE01
# w,,NTC_TEMP_TOL,,,,,"BC0204",,m,_NTC_TEMP_TOL,,,                            # Alias of ACK_FE01
# r,,RES_CNT_OFF,,,,,"BC0204",,s,_8_Skip,,, ,,s,_RES_CNT_OFF,,,               # Alias of ACK_FE01
# w,,RES_CNT_OFF,,,,,"BC0204",,m,_RES_CNT_OFF,,,                              # Alias of ACK_FE01
# r,,TBOOST,,,,,"BC0204",,s,_8_Skip,,, ,,s,_TBOOST,,,                         # Alias of ACK_FE01
# w,,TBOOST,,,,,"BC0204",,m,_TBOOST,,,                                        # Alias of ACK_FE01
r,,AI_ANAIN5,,,,,"BD0205",,s,_8_Skip,,, ,,s,_AI_ANAIN5,,,
w,,AI_ANAIN5,,,,,"BD0205",,m,_AI_ANAIN5,,,
# r,,AI_ESTB1,,,,,"BD0205",,s,_8_Skip,,, ,,s,_AI_ESTB1,,,                     # Alias of AI_ANAIN5
# w,,AI_ESTB1,,,,,"BD0205",,m,_AI_ESTB1,,,                                    # Alias of AI_ANAIN5
# r,,C_MX_RES_CNT,,,,,"BD0205",,s,_8_Skip,,, ,,s,_C_MX_RES_CNT,,,             # Alias of AI_ANAIN5
# w,,C_MX_RES_CNT,,,,,"BD0205",,m,_C_MX_RES_CNT,,,                            # Alias of AI_ANAIN5
# r,,K_NTC1,,,,,"BD0205",,s,_8_Skip,,, ,,s,_K_NTC1,,,                         # Alias of AI_ANAIN5
# w,,K_NTC1,,,,,"BD0205",,m,_K_NTC1,,,                                        # Alias of AI_ANAIN5
# r,,MAXIONTST0,,,,,"BD0205",,s,_8_Skip,,, ,,s,_MAXIONTST0,,,                 # Alias of AI_ANAIN5
# w,,MAXIONTST0,,,,,"BD0205",,m,_MAXIONTST0,,,                                # Alias of AI_ANAIN5
# r,,NGPBS_IMPS,,,,,"BD0205",,s,_8_Skip,,, ,,s,_NGPBS_IMPS,,,                 # Alias of AI_ANAIN5
# w,,NGPBS_IMPS,,,,,"BD0205",,m,_NGPBS_IMPS,,,                                # Alias of AI_ANAIN5
# r,,NM_STARTFLAG_BIT,,,,,"BD0205",,s,_8_Skip,,, ,,s,_NM_STARTFLAG_BIT,,,     # Alias of AI_ANAIN5
# w,,NM_STARTFLAG_BIT,,,,,"BD0205",,m,_NM_STARTFLAG_BIT,,,                    # Alias of AI_ANAIN5
# r,,REF_FUSE,,,,,"BD0205",,s,_8_Skip,,, ,,s,_REF_FUSE,,,                     # Alias of AI_ANAIN5
# w,,REF_FUSE,,,,,"BD0205",,m,_REF_FUSE,,,                                    # Alias of AI_ANAIN5
# r,,V24_KM_ADR_MAX,,,,,"BD0205",,s,_8_Skip,,, ,,s,_V24_KM_ADR_MAX,,,         # Alias of AI_ANAIN5
# w,,V24_KM_ADR_MAX,,,,,"BD0205",,m,_V24_KM_ADR_MAX,,,                        # Alias of AI_ANAIN5
# r,,V24_KM_ADR_MAX_SCOM,,,,,"BD0205",,s,_8_Skip,,, ,,s,_V24_KM_ADR_MAX_SCOM,,, # Alias of AI_ANAIN5
# w,,V24_KM_ADR_MAX_SCOM,,,,,"BD0205",,m,_V24_KM_ADR_MAX_SCOM,,,              # Alias of AI_ANAIN5
r,,AI_ANAIN6,,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_ANAIN6,,,
w,,AI_ANAIN6,,,,,"BE0206",,m,_AI_ANAIN6,,,
# r,,AI_THZ,,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_THZ,,,                         # Alias of AI_ANAIN6
# w,,AI_THZ,,,,,"BE0206",,m,_AI_THZ,,,                                        # Alias of AI_ANAIN6
# r,,AI_TVL,,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_TVL,,,                         # Alias of AI_ANAIN6
# w,,AI_TVL,,,,,"BE0206",,m,_AI_TVL,,,                                        # Alias of AI_ANAIN6
# r,,EPIONTSTDUR,,,,,"BE0206",,s,_8_Skip,,, ,,s,_EPIONTSTDUR,,,               # Alias of AI_ANAIN6
# w,,EPIONTSTDUR,,,,,"BE0206",,m,_EPIONTSTDUR,,,                              # Alias of AI_ANAIN6
# r,,NM_NO_AUTOSYN,,,,,"BE0206",,s,_8_Skip,,, ,,s,_NM_NO_AUTOSYN,,,           # Alias of AI_ANAIN6
# w,,NM_NO_AUTOSYN,,,,,"BE0206",,m,_NM_NO_AUTOSYN,,,                          # Alias of AI_ANAIN6
# r,,N_50HZ_IN,,,,,"BE0206",,s,_8_Skip,,, ,,s,_N_50HZ_IN,,,                   # Alias of AI_ANAIN6
# w,,N_50HZ_IN,,,,,"BE0206",,m,_N_50HZ_IN,,,                                  # Alias of AI_ANAIN6
# r,,SPEICHER_TIEFE,,,,,"BE0206",,s,_8_Skip,,, ,,s,_SPEICHER_TIEFE,,,         # Alias of AI_ANAIN6
# w,,SPEICHER_TIEFE,,,,,"BE0206",,m,_SPEICHER_TIEFE,,,                        # Alias of AI_ANAIN6
# r,,V24_TECHOHW,,,,,"BE0206",,s,_8_Skip,,, ,,s,_V24_TECHOHW,,,               # Alias of AI_ANAIN6
# w,,V24_TECHOHW,,,,,"BE0206",,m,_V24_TECHOHW,,,                              # Alias of AI_ANAIN6
r,,AI_ANAIN7,,,,,"BF0207",,s,_8_Skip,,, ,,s,_AI_ANAIN7,,,
w,,AI_ANAIN7,,,,,"BF0207",,m,_AI_ANAIN7,,,
# r,,AI_ESTB2,,,,,"BF0207",,s,_8_Skip,,, ,,s,_AI_ESTB2,,,                     # Alias of AI_ANAIN7
# w,,AI_ESTB2,,,,,"BF0207",,m,_AI_ESTB2,,,                                    # Alias of AI_ANAIN7
# r,,K_NTC2,,,,,"BF0207",,s,_8_Skip,,, ,,s,_K_NTC2,,,                         # Alias of AI_ANAIN7
# w,,K_NTC2,,,,,"BF0207",,m,_K_NTC2,,,                                        # Alias of AI_ANAIN7
# r,,NGPBS_FABTAST,,,,,"BF0207",,s,_8_Skip,,, ,,s,_NGPBS_FABTAST,,,           # Alias of AI_ANAIN7
# w,,NGPBS_FABTAST,,,,,"BF0207",,m,_NGPBS_FABTAST,,,                          # Alias of AI_ANAIN7
# r,,NM_TALK_EBUS_BIT,,,,,"BF0207",,s,_8_Skip,,, ,,s,_NM_TALK_EBUS_BIT,,,     # Alias of AI_ANAIN7
# w,,NM_TALK_EBUS_BIT,,,,,"BF0207",,m,_NM_TALK_EBUS_BIT,,,                    # Alias of AI_ANAIN7
# r,,TTOL__SW_CONTR,,,,,"BF0207",,s,_8_Skip,,, ,,s,_TTOL__SW_CONTR,,,         # Alias of AI_ANAIN7
# w,,TTOL__SW_CONTR,,,,,"BF0207",,m,_TTOL__SW_CONTR,,,                        # Alias of AI_ANAIN7
# r,,ZST_ENABLE,,,,,"BF0207",,s,_8_Skip,,, ,,s,_ZST_ENABLE,,,                 # Alias of AI_ANAIN7
# w,,ZST_ENABLE,,,,,"BF0207",,m,_ZST_ENABLE,,,                                # Alias of AI_ANAIN7
r,,EM_EE_REDUND__RED_NFS,,,,,"B00208",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_NFS,,,
w,,EM_EE_REDUND__RED_NFS,,,,,"B00208",,m,_EM_EE_REDUND__RED_NFS,,,
# r,,L_PRUEF_DAT_CRC,,,,,"B00208",,s,_8_Skip,,, ,,s,_L_PRUEF_DAT_CRC,,,       # Alias of EM_EE_REDUND__RED_NFS
# w,,L_PRUEF_DAT_CRC,,,,,"B00208",,m,_L_PRUEF_DAT_CRC,,,                      # Alias of EM_EE_REDUND__RED_NFS
# r,,NTC1_BRUCH,,,,,"B00208",,s,_8_Skip,,, ,,s,_NTC1_BRUCH,,,                 # Alias of EM_EE_REDUND__RED_NFS
# w,,NTC1_BRUCH,,,,,"B00208",,m,_NTC1_BRUCH,,,                                # Alias of EM_EE_REDUND__RED_NFS
# r,,RECORD,,,,,"B00208",,s,_8_Skip,,, ,,s,_RECORD,,,                         # Alias of EM_EE_REDUND__RED_NFS
# w,,RECORD,,,,,"B00208",,m,_RECORD,,,                                        # Alias of EM_EE_REDUND__RED_NFS
# r,,REGBNK_TASK_1,,,,,"B00208",,s,_8_Skip,,, ,,s,_REGBNK_TASK_1,,,           # Alias of EM_EE_REDUND__RED_NFS
# w,,REGBNK_TASK_1,,,,,"B00208",,m,_REGBNK_TASK_1,,,                          # Alias of EM_EE_REDUND__RED_NFS
r,,INIT_TCYCL_0503,,,,,"B2020A",,s,_8_Skip,,, ,,s,_INIT_TCYCL_0503,,,
w,,INIT_TCYCL_0503,,,,,"B2020A",,m,_INIT_TCYCL_0503,,,
# r,,L_ID_PARA_BCC,,,,,"B2020A",,s,_8_Skip,,, ,,s,_L_ID_PARA_BCC,,,           # Alias of INIT_TCYCL_0503
# w,,L_ID_PARA_BCC,,,,,"B2020A",,m,_L_ID_PARA_BCC,,,                          # Alias of INIT_TCYCL_0503
r,,INIT_TCYCL_0800,,,,,"B3020B",,s,_8_Skip,,, ,,s,_INIT_TCYCL_0800,,,
w,,INIT_TCYCL_0800,,,,,"B3020B",,m,_INIT_TCYCL_0800,,,
r,,HZ_HYS__POS,,,,,"B7020F",,s,_8_Skip,,, ,,s,_HZ_HYS__POS,,,
w,,HZ_HYS__POS,,,,,"B7020F",,m,_HZ_HYS__POS,,,
# r,,IPC_IO_MASK,,,,,"B7020F",,s,_8_Skip,,, ,,s,_IPC_IO_MASK,,,               # Alias of HZ_HYS__POS
# w,,IPC_IO_MASK,,,,,"B7020F",,m,_IPC_IO_MASK,,,                              # Alias of HZ_HYS__POS
# r,,KTNMULFACT,,,,,"B7020F",,s,_8_Skip,,, ,,s,_KTNMULFACT,,,                 # Alias of HZ_HYS__POS
# w,,KTNMULFACT,,,,,"B7020F",,m,_KTNMULFACT,,,                                # Alias of HZ_HYS__POS
# r,,MASKFSOUT,,,,,"B7020F",,s,_8_Skip,,, ,,s,_MASKFSOUT,,,                   # Alias of HZ_HYS__POS
# w,,MASKFSOUT,,,,,"B7020F",,m,_MASKFSOUT,,,                                  # Alias of HZ_HYS__POS
# r,,NG_INCR_DECR__INCR,,,,,"B7020F",,s,_8_Skip,,, ,,s,_NG_INCR_DECR__INCR,,, # Alias of HZ_HYS__POS
# w,,NG_INCR_DECR__INCR,,,,,"B7020F",,m,_NG_INCR_DECR__INCR,,,                # Alias of HZ_HYS__POS
# r,,NG_REG_ANPASS__SELF,,,,,"B7020F",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS__SELF,,, # Alias of HZ_HYS__POS
# w,,NG_REG_ANPASS__SELF,,,,,"B7020F",,m,_NG_REG_ANPASS__SELF,,,              # Alias of HZ_HYS__POS
# r,,PU_TAKT__PAUSE,,,,,"B7020F",,s,_8_Skip,,, ,,s,_PU_TAKT__PAUSE,,,         # Alias of HZ_HYS__POS
# w,,PU_TAKT__PAUSE,,,,,"B7020F",,m,_PU_TAKT__PAUSE,,,                        # Alias of HZ_HYS__POS
# r,,P_HZTHTWWSOLL_MIN,,,,,"B7020F",,s,_8_Skip,,, ,,s,_P_HZTHTWWSOLL_MIN,,,   # Alias of HZ_HYS__POS
# w,,P_HZTHTWWSOLL_MIN,,,,,"B7020F",,m,_P_HZTHTWWSOLL_MIN,,,                  # Alias of HZ_HYS__POS
# r,,P_LPG__START,,,,,"B7020F",,s,_8_Skip,,, ,,s,_P_LPG__START,,,             # Alias of HZ_HYS__POS
# w,,P_LPG__START,,,,,"B7020F",,m,_P_LPG__START,,,                            # Alias of HZ_HYS__POS
# r,,SEL_IN_1_2__1,,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_IN_1_2__1,,,           # Alias of HZ_HYS__POS
# w,,SEL_IN_1_2__1,,,,,"B7020F",,m,_SEL_IN_1_2__1,,,                          # Alias of HZ_HYS__POS
# r,,SEL_IN_3_4__3,,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_IN_3_4__3,,,           # Alias of HZ_HYS__POS
# w,,SEL_IN_3_4__3,,,,,"B7020F",,m,_SEL_IN_3_4__3,,,                          # Alias of HZ_HYS__POS
# r,,SEL_PR_1_2__1,,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_PR_1_2__1,,,           # Alias of HZ_HYS__POS
# w,,SEL_PR_1_2__1,,,,,"B7020F",,m,_SEL_PR_1_2__1,,,                          # Alias of HZ_HYS__POS
# r,,SEL_PR_3_4__3,,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_PR_3_4__3,,,           # Alias of HZ_HYS__POS
# w,,SEL_PR_3_4__3,,,,,"B7020F",,m,_SEL_PR_3_4__3,,,                          # Alias of HZ_HYS__POS
# r,,WW_HYS__POS,,,,,"B7020F",,s,_8_Skip,,, ,,s,_WW_HYS__POS,,,               # Alias of HZ_HYS__POS
# w,,WW_HYS__POS,,,,,"B7020F",,m,_WW_HYS__POS,,,                              # Alias of HZ_HYS__POS
r,,AIN_ERR_BW1,,,,,"A80210",,s,_8_Skip,,, ,,s,_AIN_ERR_BW1,,,
w,,AIN_ERR_BW1,,,,,"A80210",,m,_AIN_ERR_BW1,,,
# r,,EM_EE_REDUND__RED_DEF,,,,,"A80210",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_DEF,,, # Alias of AIN_ERR_BW1
# w,,EM_EE_REDUND__RED_DEF,,,,,"A80210",,m,_EM_EE_REDUND__RED_DEF,,,          # Alias of AIN_ERR_BW1
# r,,NTC2_SCHLUSS,,,,,"A80210",,s,_8_Skip,,, ,,s,_NTC2_SCHLUSS,,,             # Alias of AIN_ERR_BW1
# w,,NTC2_SCHLUSS,,,,,"A80210",,m,_NTC2_SCHLUSS,,,                            # Alias of AIN_ERR_BW1
# r,,QQ_M2,,,,,"A80210",,s,_8_Skip,,, ,,s,_QQ_M2,,,                           # Alias of AIN_ERR_BW1
# w,,QQ_M2,,,,,"A80210",,m,_QQ_M2,,,                                          # Alias of AIN_ERR_BW1
# r,,REGBANK_TASK_2,,,,,"A80210",,s,_8_Skip,,, ,,s,_REGBANK_TASK_2,,,         # Alias of AIN_ERR_BW1
# w,,REGBANK_TASK_2,,,,,"A80210",,m,_REGBANK_TASK_2,,,                        # Alias of AIN_ERR_BW1
# r,,REGBNK_TASK_2,,,,,"A80210",,s,_8_Skip,,, ,,s,_REGBNK_TASK_2,,,           # Alias of AIN_ERR_BW1
# w,,REGBNK_TASK_2,,,,,"A80210",,m,_REGBNK_TASK_2,,,                          # Alias of AIN_ERR_BW1
r,,DE_MIN_CNT,,,,,"A90211",,s,_8_Skip,,, ,,s,_DE_MIN_CNT,,,
w,,DE_MIN_CNT,,,,,"A90211",,m,_DE_MIN_CNT,,,
r,,DDSPERRZAEHLER,,,,,"AA0212",,s,_8_Skip,,, ,,s,_DDSPERRZAEHLER,,,
w,,DDSPERRZAEHLER,,,,,"AA0212",,m,_DDSPERRZAEHLER,,,
r,,DDRX_OFFSET_S1,,,,,"AB0213",,s,_8_Skip,,, ,,s,_DDRX_OFFSET_S1,,,
w,,DDRX_OFFSET_S1,,,,,"AB0213",,m,_DDRX_OFFSET_S1,,,
r,,AD_SCALE_2,,,,,"AC0214",,s,_8_Skip,,, ,,s,_AD_SCALE_2,,,
w,,AD_SCALE_2,,,,,"AC0214",,m,_AD_SCALE_2,,,
# r,,DDTX_OFFSET_CNT,,,,,"AC0214",,s,_8_Skip,,, ,,s,_DDTX_OFFSET_CNT,,,       # Alias of AD_SCALE_2
# w,,DDTX_OFFSET_CNT,,,,,"AC0214",,m,_DDTX_OFFSET_CNT,,,                      # Alias of AD_SCALE_2
# r,,DIG_TST,,,,,"AC0214",,s,_8_Skip,,, ,,s,_DIG_TST,,,                       # Alias of AD_SCALE_2
# w,,DIG_TST,,,,,"AC0214",,m,_DIG_TST,,,                                      # Alias of AD_SCALE_2
# r,,L_EWIGEN_ZAEHLER,,,,,"AC0214",,s,_8_Skip,,, ,,s,_L_EWIGEN_ZAEHLER,,,     # Alias of AD_SCALE_2
# w,,L_EWIGEN_ZAEHLER,,,,,"AC0214",,m,_L_EWIGEN_ZAEHLER,,,                    # Alias of AD_SCALE_2
r,,L_FS_PARA,,,,,"AE0216",,s,_8_Skip,,, ,,s,_L_FS_PARA,,,
w,,L_FS_PARA,,,,,"AE0216",,m,_L_FS_PARA,,,
r,,EEA_CONST_CRC,,,,,"A00218",,s,_8_Skip,,, ,,s,_EEA_CONST_CRC,,,
w,,EEA_CONST_CRC,,,,,"A00218",,m,_EEA_CONST_CRC,,,
# r,,REGB_TIRP,,,,,"A00218",,s,_8_Skip,,, ,,s,_REGB_TIRP,,,                   # Alias of EEA_CONST_CRC
# w,,REGB_TIRP,,,,,"A00218",,m,_REGB_TIRP,,,                                  # Alias of EEA_CONST_CRC
r,,EEA_RAM_ANF,,,,,"A10219",,s,_8_Skip,,, ,,s,_EEA_RAM_ANF,,,
w,,EEA_RAM_ANF,,,,,"A10219",,m,_EEA_RAM_ANF,,,
# r,,ROM_END_L,,,,,"A10219",,s,_8_Skip,,, ,,s,_ROM_END_L,,,                   # Alias of EEA_RAM_ANF
# w,,ROM_END_L,,,,,"A10219",,m,_ROM_END_L,,,                                  # Alias of EEA_RAM_ANF
# r,,RX_BUF_LEN,,,,,"A10219",,s,_8_Skip,,, ,,s,_RX_BUF_LEN,,,                 # Alias of EEA_RAM_ANF
# w,,RX_BUF_LEN,,,,,"A10219",,m,_RX_BUF_LEN,,,                                # Alias of EEA_RAM_ANF
r,,EEAEPKANF,,,,,"A3021B",,s,_8_Skip,,, ,,s,_EEAEPKANF,,,
w,,EEAEPKANF,,,,,"A3021B",,m,_EEAEPKANF,,,
r,,NTCYCL_0503,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_0503,,,
w,,NTCYCL_0503,,,,,"A6021E",,m,_NTCYCL_0503,,,
# r,,NTCYCL_0800,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_0800,,,               # Alias of NTCYCL_0503
# w,,NTCYCL_0800,,,,,"A6021E",,m,_NTCYCL_0800,,,                              # Alias of NTCYCL_0503
# r,,NTCYCL_EIG_QQ,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_EIG_QQ,,,           # Alias of NTCYCL_0503
# w,,NTCYCL_EIG_QQ,,,,,"A6021E",,m,_NTCYCL_EIG_QQ,,,                          # Alias of NTCYCL_0503
# r,,NTCYCL_MAX,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_MAX,,,                 # Alias of NTCYCL_0503
# w,,NTCYCL_MAX,,,,,"A6021E",,m,_NTCYCL_MAX,,,                                # Alias of NTCYCL_0503
# r,,NTCYCL_QQ_M10,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_QQ_M10,,,           # Alias of NTCYCL_0503
# w,,NTCYCL_QQ_M10,,,,,"A6021E",,m,_NTCYCL_QQ_M10,,,                          # Alias of NTCYCL_0503
# r,,NTCYCL_QQ_M2,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_QQ_M2,,,             # Alias of NTCYCL_0503
# w,,NTCYCL_QQ_M2,,,,,"A6021E",,m,_NTCYCL_QQ_M2,,,                            # Alias of NTCYCL_0503
# r,,NTC_MIN,,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTC_MIN,,,                       # Alias of NTCYCL_0503
# w,,NTC_MIN,,,,,"A6021E",,m,_NTC_MIN,,,                                      # Alias of NTCYCL_0503
r,,TFRS_A__SELF,,,,,"A7021F",,s,_8_Skip,,, ,,s,_TFRS_A__SELF,,,
w,,TFRS_A__SELF,,,,,"A7021F",,m,_TFRS_A__SELF,,,
r,,EM_EE_REDUND__RED_INTBCC,,,,,"980220",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_INTBCC,,,
w,,EM_EE_REDUND__RED_INTBCC,,,,,"980220",,m,_EM_EE_REDUND__RED_INTBCC,,,
# r,,GEC_LDW_RUHE,,,,,"980220",,s,_8_Skip,,, ,,s,_GEC_LDW_RUHE,,,             # Alias of EM_EE_REDUND__RED_INTBCC
# w,,GEC_LDW_RUHE,,,,,"980220",,m,_GEC_LDW_RUHE,,,                            # Alias of EM_EE_REDUND__RED_INTBCC
# r,,NTC2_BRUCH,,,,,"980220",,s,_8_Skip,,, ,,s,_NTC2_BRUCH,,,                 # Alias of EM_EE_REDUND__RED_INTBCC
# w,,NTC2_BRUCH,,,,,"980220",,m,_NTC2_BRUCH,,,                                # Alias of EM_EE_REDUND__RED_INTBCC
r,,GENPOLY8SIG,,,,,"990221",,s,_8_Skip,,, ,,s,_GENPOLY8SIG,,,
w,,GENPOLY8SIG,,,,,"990221",,m,_GENPOLY8SIG,,,
r,,GEC_PUHZ_SW,,,,,"9C0224",,s,_8_Skip,,, ,,s,_GEC_PUHZ_SW,,,
w,,GEC_PUHZ_SW,,,,,"9C0224",,m,_GEC_PUHZ_SW,,,
r,,L_S5_DAT_CRC,,,,,"9F0227",,s,_8_Skip,,, ,,s,_L_S5_DAT_CRC,,,
w,,L_S5_DAT_CRC,,,,,"9F0227",,m,_L_S5_DAT_CRC,,,
r,,DL_BOOSTERPLUS,,,,,"900228",,s,_8_Skip,,, ,,s,_DL_BOOSTERPLUS,,,
w,,DL_BOOSTERPLUS,,,,,"900228",,m,_DL_BOOSTERPLUS,,,
# r,,P_KOTHTWWSOLL_MIN,,,,,"900228",,s,_8_Skip,,, ,,s,_P_KOTHTWWSOLL_MIN,,,   # Alias of DL_BOOSTERPLUS
# w,,P_KOTHTWWSOLL_MIN,,,,,"900228",,m,_P_KOTHTWWSOLL_MIN,,,                  # Alias of DL_BOOSTERPLUS
r,,MIN_TAUTOSYN,,,,,"910229",,s,_8_Skip,,, ,,s,_MIN_TAUTOSYN,,,
w,,MIN_TAUTOSYN,,,,,"910229",,m,_MIN_TAUTOSYN,,,
r,,GEC_N_NOK_LIMIT,,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_LIMIT,,,
w,,GEC_N_NOK_LIMIT,,,,,"93022B",,m,_GEC_N_NOK_LIMIT,,,
# r,,GEC_N_NOK_VSP,,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_VSP,,,           # Alias of GEC_N_NOK_LIMIT
# w,,GEC_N_NOK_VSP,,,,,"93022B",,m,_GEC_N_NOK_VSP,,,                          # Alias of GEC_N_NOK_LIMIT
# r,,GEC_N_NOK_ZUE_N,,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_ZUE_N,,,       # Alias of GEC_N_NOK_LIMIT
# w,,GEC_N_NOK_ZUE_N,,,,,"93022B",,m,_GEC_N_NOK_ZUE_N,,,                      # Alias of GEC_N_NOK_LIMIT
r,,GEC_N_NOK_RUHE,,,,,"94022C",,s,_8_Skip,,, ,,s,_GEC_N_NOK_RUHE,,,
w,,GEC_N_NOK_RUHE,,,,,"94022C",,m,_GEC_N_NOK_RUHE,,,
r,,GEC_LDW_ARB,,,,,"95022D",,s,_8_Skip,,, ,,s,_GEC_LDW_ARB,,,
w,,GEC_LDW_ARB,,,,,"95022D",,m,_GEC_LDW_ARB,,,
r,,QAC_MIN,,,,,"96022E",,s,_8_Skip,,, ,,s,_QAC_MIN,,,
w,,QAC_MIN,,,,,"96022E",,m,_QAC_MIN,,,
r,,QAC_SHORT,,,,,"97022F",,s,_8_Skip,,, ,,s,_QAC_SHORT,,,
w,,QAC_SHORT,,,,,"97022F",,m,_QAC_SHORT,,,
r,,AD_SCALE_3,,,,,"880230",,s,_8_Skip,,, ,,s,_AD_SCALE_3,,,
w,,AD_SCALE_3,,,,,"880230",,m,_AD_SCALE_3,,,
# r,,L_FHIST,,,,,"880230",,s,_8_Skip,,, ,,s,_L_FHIST,,,                       # Alias of AD_SCALE_3
# w,,L_FHIST,,,,,"880230",,m,_L_FHIST,,,                                      # Alias of AD_SCALE_3
r,,KPMULFACT,,,,,"8A0232",,s,_8_Skip,,, ,,s,_KPMULFACT,,,
w,,KPMULFACT,,,,,"8A0232",,m,_KPMULFACT,,,
# r,,RES_MAX_TIME,,,,,"8A0232",,s,_8_Skip,,, ,,s,_RES_MAX_TIME,,,             # Alias of KPMULFACT
# w,,RES_MAX_TIME,,,,,"8A0232",,m,_RES_MAX_TIME,,,                            # Alias of KPMULFACT
r,,GEC_AIN_REF,,,,,"8D0235",,s,_8_Skip,,, ,,s,_GEC_AIN_REF,,,
w,,GEC_AIN_REF,,,,,"8D0235",,m,_GEC_AIN_REF,,,
r,,L_EEAEPKDAT,,,,,"8E0236",,s,_8_Skip,,, ,,s,_L_EEAEPKDAT,,,
w,,L_EEAEPKDAT,,,,,"8E0236",,m,_L_EEAEPKDAT,,,
# r,,L_KES_DAT_CRC,,,,,"8E0236",,s,_8_Skip,,, ,,s,_L_KES_DAT_CRC,,,           # Alias of L_EEAEPKDAT
# w,,L_KES_DAT_CRC,,,,,"8E0236",,m,_L_KES_DAT_CRC,,,                          # Alias of L_EEAEPKDAT
r,,FCODE_NOT,,,,,"800238",,s,_8_Skip,,, ,,s,_FCODE_NOT,,,
w,,FCODE_NOT,,,,,"800238",,m,_FCODE_NOT,,,
r,,FCODE_MAX,,,,,"810239",,s,_8_Skip,,, ,,s,_FCODE_MAX,,,
w,,FCODE_MAX,,,,,"810239",,m,_FCODE_MAX,,,
r,,NTCYCL_EBUS_SCOM,,,,,"84023C",,s,_8_Skip,,, ,,s,_NTCYCL_EBUS_SCOM,,,
w,,NTCYCL_EBUS_SCOM,,,,,"84023C",,m,_NTCYCL_EBUS_SCOM,,,
r,,MAX_TAUTOSYN,,,,,"85023D",,s,_8_Skip,,, ,,s,_MAX_TAUTOSYN,,,
w,,MAX_TAUTOSYN,,,,,"85023D",,m,_MAX_TAUTOSYN,,,
r,,P_KOTHTWWSOLL_MAX,,,,,"87023F",,s,_8_Skip,,, ,,s,_P_KOTHTWWSOLL_MAX,,,
w,,P_KOTHTWWSOLL_MAX,,,,,"87023F",,m,_P_KOTHTWWSOLL_MAX,,,
r,,AIN_ERR_BW2,,,,,"F80240",,s,_8_Skip,,, ,,s,_AIN_ERR_BW2,,,
w,,AIN_ERR_BW2,,,,,"F80240",,m,_AIN_ERR_BW2,,,
# r,,NTC1_NTC2,,,,,"F80240",,s,_8_Skip,,, ,,s,_NTC1_NTC2,,,                   # Alias of AIN_ERR_BW2
# w,,NTC1_NTC2,,,,,"F80240",,m,_NTC1_NTC2,,,                                  # Alias of AIN_ERR_BW2
r,,P_HZTHTWWSOLL_MAX,,,,,"F90241",,s,_8_Skip,,, ,,s,_P_HZTHTWWSOLL_MAX,,,
w,,P_HZTHTWWSOLL_MAX,,,,,"F90241",,m,_P_HZTHTWWSOLL_MAX,,,
r,,NIT_SHORT,,,,,"FC0244",,s,_8_Skip,,, ,,s,_NIT_SHORT,,,
w,,NIT_SHORT,,,,,"FC0244",,m,_NIT_SHORT,,,
r,,NIT_MIN,,,,,"FD0245",,s,_8_Skip,,, ,,s,_NIT_MIN,,,
w,,NIT_MIN,,,,,"FD0245",,m,_NIT_MIN,,,
# r,,WAIT_A_2,,,,,"FD0245",,s,_8_Skip,,, ,,s,_WAIT_A_2,,,                     # Alias of NIT_MIN
# w,,WAIT_A_2,,,,,"FD0245",,m,_WAIT_A_2,,,                                    # Alias of NIT_MIN
r,,L_FCODE_ZAEHLER,,,,,"F00248",,s,_8_Skip,,, ,,s,_L_FCODE_ZAEHLER,,,
w,,L_FCODE_ZAEHLER,,,,,"F00248",,m,_L_FCODE_ZAEHLER,,,
r,,NR_ACTIVATE_STATI,,,,,"F7024F",,s,_8_Skip,,, ,,s,_NR_ACTIVATE_STATI,,,
w,,NR_ACTIVATE_STATI,,,,,"F7024F",,m,_NR_ACTIVATE_STATI,,,
r,,AD_SCALE_4,,,,,"E80250",,s,_8_Skip,,, ,,s,_AD_SCALE_4,,,
w,,AD_SCALE_4,,,,,"E80250",,m,_AD_SCALE_4,,,
# r,,DE_MAX_CNT,,,,,"E80250",,s,_8_Skip,,, ,,s,_DE_MAX_CNT,,,                 # Alias of AD_SCALE_4
# w,,DE_MAX_CNT,,,,,"E80250",,m,_DE_MAX_CNT,,,                                # Alias of AD_SCALE_4
# r,,K_ID,,,,,"E80250",,s,_8_Skip,,, ,,s,_K_ID,,,                             # Alias of AD_SCALE_4
# w,,K_ID,,,,,"E80250",,m,_K_ID,,,                                            # Alias of AD_SCALE_4
r,,EEAEPKCRC,,,,,"E90251",,s,_8_Skip,,, ,,s,_EEAEPKCRC,,,
w,,EEAEPKCRC,,,,,"E90251",,m,_EEAEPKCRC,,,
r,,EEAEPKANF2,,,,,"EB0253",,s,_8_Skip,,, ,,s,_EEAEPKANF2,,,
w,,EEAEPKANF2,,,,,"EB0253",,m,_EEAEPKANF2,,,
r,,PH_TST_T1,,,,,"E10259",,s,_8_Skip,,, ,,s,_PH_TST_T1,,,
w,,PH_TST_T1,,,,,"E10259",,m,_PH_TST_T1,,,
r,,NG_GR_MIN__IMPS,,,,,"D80260",,s,_8_Skip,,, ,,s,_NG_GR_MIN__IMPS,,,
w,,NG_GR_MIN__IMPS,,,,,"D80260",,m,_NG_GR_MIN__IMPS,,,
r,,SCHEDULE_TAKT,,,,,"DC0264",,s,_8_Skip,,, ,,s,_SCHEDULE_TAKT,,,
w,,SCHEDULE_TAKT,,,,,"DC0264",,m,_SCHEDULE_TAKT,,,
r,,NR_NG_BR_MIN,,,,,"DD0265",,s,_8_Skip,,, ,,s,_NR_NG_BR_MIN,,,
w,,NR_NG_BR_MIN,,,,,"DD0265",,m,_NR_NG_BR_MIN,,,
r,,AD_SCALE_5,,,,,"C80270",,s,_8_Skip,,, ,,s,_AD_SCALE_5,,,
w,,AD_SCALE_5,,,,,"C80270",,m,_AD_SCALE_5,,,
# r,,KESS_BIT_MASK,,,,,"C80270",,s,_8_Skip,,, ,,s,_KESS_BIT_MASK,,,           # Alias of AD_SCALE_5
# w,,KESS_BIT_MASK,,,,,"C80270",,m,_KESS_BIT_MASK,,,                          # Alias of AD_SCALE_5
# r,,OFFSET_NR_CCINFO_NR,,,,,"C80270",,s,_8_Skip,,, ,,s,_OFFSET_NR_CCINFO_NR,,, # Alias of AD_SCALE_5
# w,,OFFSET_NR_CCINFO_NR,,,,,"C80270",,m,_OFFSET_NR_CCINFO_NR,,,              # Alias of AD_SCALE_5
r,,OFFSET_NR_CC_RELAESE,,,,,"C90271",,s,_8_Skip,,, ,,s,_OFFSET_NR_CC_RELAESE,,,
w,,OFFSET_NR_CC_RELAESE,,,,,"C90271",,m,_OFFSET_NR_CC_RELAESE,,,
r,,OFFSET_NR_FW1,,,,,"CA0272",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW1,,,
w,,OFFSET_NR_FW1,,,,,"CA0272",,m,_OFFSET_NR_FW1,,,
r,,OFFSET_NR_FW2,,,,,"CB0273",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW2,,,
w,,OFFSET_NR_FW2,,,,,"CB0273",,m,_OFFSET_NR_FW2,,,
r,,OFFSET_NR_FW3,,,,,"CC0274",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW3,,,
w,,OFFSET_NR_FW3,,,,,"CC0274",,m,_OFFSET_NR_FW3,,,
r,,OFFSET_NR_FW4,,,,,"CD0275",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW4,,,
w,,OFFSET_NR_FW4,,,,,"CD0275",,m,_OFFSET_NR_FW4,,,
r,,OFFSET_NR_FW5,,,,,"CE0276",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW5,,,
w,,OFFSET_NR_FW5,,,,,"CE0276",,m,_OFFSET_NR_FW5,,,
r,,OFFSET_NR_CRC,,,,,"CF0277",,s,_8_Skip,,, ,,s,_OFFSET_NR_CRC,,,
w,,OFFSET_NR_CRC,,,,,"CF0277",,m,_OFFSET_NR_CRC,,,
r,,ANZ_INFONR,,,,,"C00278",,s,_8_Skip,,, ,,s,_ANZ_INFONR,,,
w,,ANZ_INFONR,,,,,"C00278",,m,_ANZ_INFONR,,,
# r,,REF_MIN_OFF,,,,,"C00278",,s,_8_Skip,,, ,,s,_REF_MIN_OFF,,,               # Alias of ANZ_INFONR
# w,,REF_MIN_OFF,,,,,"C00278",,m,_REF_MIN_OFF,,,                              # Alias of ANZ_INFONR
r,,ION_GRENZ,,,,,"C2027A",,s,_8_Skip,,, ,,s,_ION_GRENZ,,,
w,,ION_GRENZ,,,,,"C2027A",,m,_ION_GRENZ,,,
r,,ADX_TEST,,,,,"C4027C",,s,_8_Skip,,, ,,s,_ADX_TEST,,,
w,,ADX_TEST,,,,,"C4027C",,m,_ADX_TEST,,,
r,,V24_KM_ADR_DEFAULT,,,,,"C5027D",,s,_8_Skip,,, ,,s,_V24_KM_ADR_DEFAULT,,,
w,,V24_KM_ADR_DEFAULT,,,,,"C5027D",,m,_V24_KM_ADR_DEFAULT,,,
# r,,V24_KM_ADR_SCOM_DEFAULT,,,,,"C5027D",,s,_8_Skip,,, ,,s,_V24_KM_ADR_SCOM_DEFAULT,,, # Alias of V24_KM_ADR_DEFAULT
# w,,V24_KM_ADR_SCOM_DEFAULT,,,,,"C5027D",,m,_V24_KM_ADR_SCOM_DEFAULT,,,      # Alias of V24_KM_ADR_DEFAULT
r,,MINTVSOLL__SELF,,,,,"C7027F",,s,_8_Skip,,, ,,s,_MINTVSOLL__SELF,,,
w,,MINTVSOLL__SELF,,,,,"C7027F",,m,_MINTVSOLL__SELF,,,
# r,,PNL_HZ__SELF,,,,,"C7027F",,s,_8_Skip,,, ,,s,_PNL_HZ__SELF,,,             # Alias of MINTVSOLL__SELF
# w,,PNL_HZ__SELF,,,,,"C7027F",,m,_PNL_HZ__SELF,,,                            # Alias of MINTVSOLL__SELF
# r,,REF_MIN_ON,,,,,"C7027F",,s,_8_Skip,,, ,,s,_REF_MIN_ON,,,                 # Alias of MINTVSOLL__SELF
# w,,REF_MIN_ON,,,,,"C7027F",,m,_REF_MIN_ON,,,                                # Alias of MINTVSOLL__SELF
# r,,TBRMINOFF__SELF,,,,,"C7027F",,s,_8_Skip,,, ,,s,_TBRMINOFF__SELF,,,       # Alias of MINTVSOLL__SELF
# w,,TBRMINOFF__SELF,,,,,"C7027F",,m,_TBRMINOFF__SELF,,,                      # Alias of MINTVSOLL__SELF
r,,MINTVSOLL__TRLAUF,,,,,"380280",,s,_8_Skip,,, ,,s,_MINTVSOLL__TRLAUF,,,
w,,MINTVSOLL__TRLAUF,,,,,"380280",,m,_MINTVSOLL__TRLAUF,,,
# r,,NG_GR_MIN__FABTAST,,,,,"380280",,s,_8_Skip,,, ,,s,_NG_GR_MIN__FABTAST,,, # Alias of MINTVSOLL__TRLAUF
# w,,NG_GR_MIN__FABTAST,,,,,"380280",,m,_NG_GR_MIN__FABTAST,,,                # Alias of MINTVSOLL__TRLAUF
# r,,PNL_HZ__BETRART,,,,,"380280",,s,_8_Skip,,, ,,s,_PNL_HZ__BETRART,,,       # Alias of MINTVSOLL__TRLAUF
# w,,PNL_HZ__BETRART,,,,,"380280",,m,_PNL_HZ__BETRART,,,                      # Alias of MINTVSOLL__TRLAUF
# r,,PNL_HZ__PDL,,,,,"380280",,s,_8_Skip,,, ,,s,_PNL_HZ__PDL,,,               # Alias of MINTVSOLL__TRLAUF
# w,,PNL_HZ__PDL,,,,,"380280",,m,_PNL_HZ__PDL,,,                              # Alias of MINTVSOLL__TRLAUF
# r,,TBRMINOFF__ERDGAS,,,,,"380280",,s,_8_Skip,,, ,,s,_TBRMINOFF__ERDGAS,,,   # Alias of MINTVSOLL__TRLAUF
# w,,TBRMINOFF__ERDGAS,,,,,"380280",,m,_TBRMINOFF__ERDGAS,,,                  # Alias of MINTVSOLL__TRLAUF
r,,EEAEPKCRC2,,,,,"310289",,s,_8_Skip,,, ,,s,_EEAEPKCRC2,,,
w,,EEAEPKCRC2,,,,,"310289",,m,_EEAEPKCRC2,,,
r,,EEA_RAM_ANF2,,,,,"32028A",,s,_8_Skip,,, ,,s,_EEA_RAM_ANF2,,,
w,,EEA_RAM_ANF2,,,,,"32028A",,m,_EEA_RAM_ANF2,,,
# r,,WAIT_A_1,,,,,"32028A",,s,_8_Skip,,, ,,s,_WAIT_A_1,,,                     # Alias of EEA_RAM_ANF2
# w,,WAIT_A_1,,,,,"32028A",,m,_WAIT_A_1,,,                                    # Alias of EEA_RAM_ANF2
r,,EEA_CONST_ANF2,,,,,"34028C",,s,_8_Skip,,, ,,s,_EEA_CONST_ANF2,,,
w,,EEA_CONST_ANF2,,,,,"34028C",,m,_EEA_CONST_ANF2,,,
r,,AD_SCALE_6,,,,,"280290",,s,_8_Skip,,, ,,s,_AD_SCALE_6,,,
w,,AD_SCALE_6,,,,,"280290",,m,_AD_SCALE_6,,,
# r,,NTC_ERR_ZEIT,,,,,"280290",,s,_8_Skip,,, ,,s,_NTC_ERR_ZEIT,,,             # Alias of AD_SCALE_6
# w,,NTC_ERR_ZEIT,,,,,"280290",,m,_NTC_ERR_ZEIT,,,                            # Alias of AD_SCALE_6
# r,,SST1,,,,,"280290",,s,_8_Skip,,, ,,s,_SST1,,,                             # Alias of AD_SCALE_6
# w,,SST1,,,,,"280290",,m,_SST1,,,                                            # Alias of AD_SCALE_6
r,,CS_BYTE_WR,,,,,"1802A0",,s,_8_Skip,,, ,,s,_CS_BYTE_WR,,,
w,,CS_BYTE_WR,,,,,"1802A0",,m,_CS_BYTE_WR,,,
# r,,ENAB_MASK,,,,,"1802A0",,s,_8_Skip,,, ,,s,_ENAB_MASK,,,                   # Alias of CS_BYTE_WR
# w,,ENAB_MASK,,,,,"1802A0",,m,_ENAB_MASK,,,                                  # Alias of CS_BYTE_WR
# r,,ENAB_MASK_WD,,,,,"1802A0",,s,_8_Skip,,, ,,s,_ENAB_MASK_WD,,,             # Alias of CS_BYTE_WR
# w,,ENAB_MASK_WD,,,,,"1802A0",,m,_ENAB_MASK_WD,,,                            # Alias of CS_BYTE_WR
r,,CS_BYTE_RD,,,,,"1902A1",,s,_8_Skip,,, ,,s,_CS_BYTE_RD,,,
w,,CS_BYTE_RD,,,,,"1902A1",,m,_CS_BYTE_RD,,,
r,,EEA_CONST_CRC2,,,,,"1A02A2",,s,_8_Skip,,, ,,s,_EEA_CONST_CRC2,,,
w,,EEA_CONST_CRC2,,,,,"1A02A2",,m,_EEA_CONST_CRC2,,,
r,,INT_EEA_ID_NR_BCC,,,,,"1B02A3",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC,,,
w,,INT_EEA_ID_NR_BCC,,,,,"1B02A3",,m,_INT_EEA_ID_NR_BCC,,,
r,,INT_EEA_ID_NR_BCC_1,,,,,"1C02A4",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC_1,,,
w,,INT_EEA_ID_NR_BCC_1,,,,,"1C02A4",,m,_INT_EEA_ID_NR_BCC_1,,,
r,,INT_EEA_ID_CRC_BCC,,,,,"1D02A5",,s,_8_Skip,,, ,,s,_INT_EEA_ID_CRC_BCC,,,
w,,INT_EEA_ID_CRC_BCC,,,,,"1D02A5",,m,_INT_EEA_ID_CRC_BCC,,,
r,,INT_EEA_ID_NR_BCC_2,,,,,"1E02A6",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC_2,,,
w,,INT_EEA_ID_NR_BCC_2,,,,,"1E02A6",,m,_INT_EEA_ID_NR_BCC_2,,,
r,,INT_EEA_ID_CRC_BCC_2,,,,,"1002A8",,s,_8_Skip,,, ,,s,_INT_EEA_ID_CRC_BCC_2,,,
w,,INT_EEA_ID_CRC_BCC_2,,,,,"1002A8",,m,_INT_EEA_ID_CRC_BCC_2,,,
# r,,NCL1HRS,,,,,"1002A8",,s,_8_Skip,,, ,,s,_NCL1HRS,,,                       # Alias of INT_EEA_ID_CRC_BCC_2
# w,,NCL1HRS,,,,,"1002A8",,m,_NCL1HRS,,,                                      # Alias of INT_EEA_ID_CRC_BCC_2
r,,EEA_ION_KALIB,,,,,"1102A9",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB,,,
w,,EEA_ION_KALIB,,,,,"1102A9",,m,_EEA_ION_KALIB,,,
r,,EEA_ION_KALIB_INV,,,,,"1202AA",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB_INV,,,
w,,EEA_ION_KALIB_INV,,,,,"1202AA",,m,_EEA_ION_KALIB_INV,,,
r,,EEA_ION_KALIB_2,,,,,"1302AB",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB_2,,,
w,,EEA_ION_KALIB_2,,,,,"1302AB",,m,_EEA_ION_KALIB_2,,,
r,,SST3,,,,,"0802B0",,s,_8_Skip,,, ,,s,_SST3,,,
w,,SST3,,,,,"0802B0",,m,_SST3,,,
r,,C_DECGAP,,,,,"0C02B4",,s,_8_Skip,,, ,,s,_C_DECGAP,,,
w,,C_DECGAP,,,,,"0C02B4",,m,_C_DECGAP,,,
# r,,NCL20SEC,,,,,"0C02B4",,s,_8_Skip,,, ,,s,_NCL20SEC,,,                     # Alias of C_DECGAP
# w,,NCL20SEC,,,,,"0C02B4",,m,_NCL20SEC,,,                                    # Alias of C_DECGAP
r,,REF_MAX_ON,,,,,"0F02B7",,s,_8_Skip,,, ,,s,_REF_MAX_ON,,,
w,,REF_MAX_ON,,,,,"0F02B7",,m,_REF_MAX_ON,,,
r,,ROM_PAGES,,,,,"0702BF",,s,_8_Skip,,, ,,s,_ROM_PAGES,,,
w,,ROM_PAGES,,,,,"0702BF",,m,_ROM_PAGES,,,
r,,REF_MAX_OFF,,,,,"7902C1",,s,_8_Skip,,, ,,s,_REF_MAX_OFF,,,
w,,REF_MAX_OFF,,,,,"7902C1",,m,_REF_MAX_OFF,,,
r,,NCL100MSEC,,,,,"7002C8",,s,_8_Skip,,, ,,s,_NCL100MSEC,,,
w,,NCL100MSEC,,,,,"7002C8",,m,_NCL100MSEC,,,
r,,RST1,,,,,"6802D0",,s,_8_Skip,,, ,,s,_RST1,,,
w,,RST1,,,,,"6802D0",,m,_RST1,,,
r,,AD8_OF_25GRDC,,,,,"6D02D5",,s,_8_Skip,,, ,,s,_AD8_OF_25GRDC,,,
w,,AD8_OF_25GRDC,,,,,"6D02D5",,m,_AD8_OF_25GRDC,,,
r,,TFRS_A__REST,,,,,"5802E0",,s,_8_Skip,,, ,,s,_TFRS_A__REST,,,
w,,TFRS_A__REST,,,,,"5802E0",,m,_TFRS_A__REST,,,
r,,NTC_TOL_ZEIT,,,,,"5902E1",,s,_8_Skip,,, ,,s,_NTC_TOL_ZEIT,,,
w,,NTC_TOL_ZEIT,,,,,"5902E1",,m,_NTC_TOL_ZEIT,,,
r,,AD_TWWSOLL_MAX,,,,,"5102E9",,s,_8_Skip,,, ,,s,_AD_TWWSOLL_MAX,,,
w,,AD_TWWSOLL_MAX,,,,,"5102E9",,m,_AD_TWWSOLL_MAX,,,
r,,QAC_MAX,,,,,"5302EB",,s,_8_Skip,,, ,,s,_QAC_MAX,,,
w,,QAC_MAX,,,,,"5302EB",,m,_QAC_MAX,,,
r,,HZ_HYS__NEG,,,,,"4802F0",,s,_8_Skip,,, ,,s,_HZ_HYS__NEG,,,
w,,HZ_HYS__NEG,,,,,"4802F0",,m,_HZ_HYS__NEG,,,
# r,,NG_INCR_DECR__DECR,,,,,"4802F0",,s,_8_Skip,,, ,,s,_NG_INCR_DECR__DECR,,, # Alias of HZ_HYS__NEG
# w,,NG_INCR_DECR__DECR,,,,,"4802F0",,m,_NG_INCR_DECR__DECR,,,                # Alias of HZ_HYS__NEG
# r,,NG_REG_ANPASS__START,,,,,"4802F0",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS__START,,, # Alias of HZ_HYS__NEG
# w,,NG_REG_ANPASS__START,,,,,"4802F0",,m,_NG_REG_ANPASS__START,,,            # Alias of HZ_HYS__NEG
# r,,PU_TAKT__PULS,,,,,"4802F0",,s,_8_Skip,,, ,,s,_PU_TAKT__PULS,,,           # Alias of HZ_HYS__NEG
# w,,PU_TAKT__PULS,,,,,"4802F0",,m,_PU_TAKT__PULS,,,                          # Alias of HZ_HYS__NEG
# r,,P_LPG__BETRIEB,,,,,"4802F0",,s,_8_Skip,,, ,,s,_P_LPG__BETRIEB,,,         # Alias of HZ_HYS__NEG
# w,,P_LPG__BETRIEB,,,,,"4802F0",,m,_P_LPG__BETRIEB,,,                        # Alias of HZ_HYS__NEG
# r,,RST3,,,,,"4802F0",,s,_8_Skip,,, ,,s,_RST3,,,                             # Alias of HZ_HYS__NEG
# w,,RST3,,,,,"4802F0",,m,_RST3,,,                                            # Alias of HZ_HYS__NEG
# r,,SEL_IN_1_2__2,,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_IN_1_2__2,,,           # Alias of HZ_HYS__NEG
# w,,SEL_IN_1_2__2,,,,,"4802F0",,m,_SEL_IN_1_2__2,,,                          # Alias of HZ_HYS__NEG
# r,,SEL_IN_3_4__4,,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_IN_3_4__4,,,           # Alias of HZ_HYS__NEG
# w,,SEL_IN_3_4__4,,,,,"4802F0",,m,_SEL_IN_3_4__4,,,                          # Alias of HZ_HYS__NEG
# r,,SEL_PR_1_2__2,,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_PR_1_2__2,,,           # Alias of HZ_HYS__NEG
# w,,SEL_PR_1_2__2,,,,,"4802F0",,m,_SEL_PR_1_2__2,,,                          # Alias of HZ_HYS__NEG
# r,,SEL_PR_3_4__4,,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_PR_3_4__4,,,           # Alias of HZ_HYS__NEG
# w,,SEL_PR_3_4__4,,,,,"4802F0",,m,_SEL_PR_3_4__4,,,                          # Alias of HZ_HYS__NEG
# r,,WW_HYS__NEG,,,,,"4802F0",,s,_8_Skip,,, ,,s,_WW_HYS__NEG,,,               # Alias of HZ_HYS__NEG
# w,,WW_HYS__NEG,,,,,"4802F0",,m,_WW_HYS__NEG,,,                              # Alias of HZ_HYS__NEG
# r,,XRAM_PAGE_DEFAULT,,,,,"4802F0",,s,_8_Skip,,, ,,s,_XRAM_PAGE_DEFAULT,,,   # Alias of HZ_HYS__NEG
# w,,XRAM_PAGE_DEFAULT,,,,,"4802F0",,m,_XRAM_PAGE_DEFAULT,,,                  # Alias of HZ_HYS__NEG
r,,NTC_TA_MAX,,,,,"4902F1",,s,_8_Skip,,, ,,s,_NTC_TA_MAX,,,
w,,NTC_TA_MAX,,,,,"4902F1",,m,_NTC_TA_MAX,,,
# r,,QQ_M10,,,,,"4902F1",,s,_8_Skip,,, ,,s,_QQ_M10,,,                         # Alias of NTC_TA_MAX
# w,,QQ_M10,,,,,"4902F1",,m,_QQ_M10,,,                                        # Alias of NTC_TA_MAX
r,,NIT_MAX,,,,,"4B02F3",,s,_8_Skip,,, ,,s,_NIT_MAX,,,
w,,NIT_MAX,,,,,"4B02F3",,m,_NIT_MAX,,,
r,,DIG_TST_2,,,,,"4D02F5",,s,_8_Skip,,, ,,s,_DIG_TST_2,,,
w,,DIG_TST_2,,,,,"4D02F5",,m,_DIG_TST_2,,,
r,,NTC_MAX,,,,,"4002F8",,s,_8_Skip,,, ,,s,_NTC_MAX,,,
w,,NTC_MAX,,,,,"4002F8",,m,_NTC_MAX,,,
# r,,TTOL__NON_ZERO_CHECK,,,,,"4002F8",,s,_8_Skip,,, ,,s,_TTOL__NON_ZERO_CHECK,,, # Alias of NTC_MAX
# w,,TTOL__NON_ZERO_CHECK,,,,,"4002F8",,m,_TTOL__NON_ZERO_CHECK,,,            # Alias of NTC_MAX
r,,EEA_P_CODE,,,,,"4202FA",,s,_8_Skip,,, ,,s,_EEA_P_CODE,,,
w,,EEA_P_CODE,,,,,"4202FA",,m,_EEA_P_CODE,,,
# r,,EEA_STATI_AKTIV,,,,,"4202FA",,s,_8_Skip,,, ,,s,_EEA_STATI_AKTIV,,,       # Alias of EEA_P_CODE
# w,,EEA_STATI_AKTIV,,,,,"4202FA",,m,_EEA_STATI_AKTIV,,,                      # Alias of EEA_P_CODE
# r,,MX_RES_CYCL,,,,,"4202FA",,s,_8_Skip,,, ,,s,_MX_RES_CYCL,,,               # Alias of EEA_P_CODE
# w,,MX_RES_CYCL,,,,,"4202FA",,m,_MX_RES_CYCL,,,                              # Alias of EEA_P_CODE
r,,BOOSTER_ANL_MASK,,,,,"4302FB",,s,_8_Skip,,, ,,s,_BOOSTER_ANL_MASK,,,
w,,BOOSTER_ANL_MASK,,,,,"4302FB",,m,_BOOSTER_ANL_MASK,,,
r,,HZ_KTND__D,,,,,"4402FC",,s,_8_Skip,,, ,,s,_HZ_KTND__D,,,
w,,HZ_KTND__D,,,,,"4402FC",,m,_HZ_KTND__D,,,
r,,ADC_BREAK,,,,,"4702FF",,s,_8_Skip,,, ,,s,_ADC_BREAK,,,
w,,ADC_BREAK,,,,,"4702FF",,m,_ADC_BREAK,,,
# r,,L_EEPROM,,,,,"4702FF",,s,_8_Skip,,, ,,s,_L_EEPROM,,,                     # Alias of ADC_BREAK
# w,,L_EEPROM,,,,,"4702FF",,m,_L_EEPROM,,,                                    # Alias of ADC_BREAK
# r,,QQ_M25,,,,,"4702FF",,s,_8_Skip,,, ,,s,_QQ_M25,,,                         # Alias of ADC_BREAK
# w,,QQ_M25,,,,,"4702FF",,m,_QQ_M25,,,                                        # Alias of ADC_BREAK
r,,EEA_ANF2,,,,,"3406010200",,s,_8_Skip,,, ,,s,_EEA_ANF2,,,
w,,EEA_ANF2,,,,,"3406010200",,m,_EEA_ANF2,,,
r,,TWARTEQQ,,,,,"290601021D",,s,_8_Skip,,, ,,s,_TWARTEQQ,,,
w,,TWARTEQQ,,,,,"290601021D",,m,_TWARTEQQ,,,
r,,EEA_HL_HIADR,,,,,"A506010291",,s,_8_Skip,,, ,,s,_EEA_HL_HIADR,,,
w,,EEA_HL_HIADR,,,,,"A506010291",,m,_EEA_HL_HIADR,,,
r,,EEA_WRONG_ADR,,,,,"A606010292",,s,_8_Skip,,, ,,s,_EEA_WRONG_ADR,,,
w,,EEA_WRONG_ADR,,,,,"A606010292",,m,_EEA_WRONG_ADR,,,
r,,EEA_FCODE_NOT,,,,,"A006010294",,s,_8_Skip,,, ,,s,_EEA_FCODE_NOT,,,
w,,EEA_FCODE_NOT,,,,,"A006010294",,m,_EEA_FCODE_NOT,,,
r,,EEA_FC_57,,,,,"A206010296",,s,_8_Skip,,, ,,s,_EEA_FC_57,,,
w,,EEA_FC_57,,,,,"A206010296",,m,_EEA_FC_57,,,
r,,EEA_FC_55,,,,,"AC06010298",,s,_8_Skip,,, ,,s,_EEA_FC_55,,,
w,,EEA_FC_55,,,,,"AC06010298",,m,_EEA_FC_55,,,
r,,EEA_FC_53,,,,,"AE0601029A",,s,_8_Skip,,, ,,s,_EEA_FC_53,,,
w,,EEA_FC_53,,,,,"AE0601029A",,m,_EEA_FC_53,,,
r,,EEA_FC_52,,,,,"A80601029C",,s,_8_Skip,,, ,,s,_EEA_FC_52,,,
w,,EEA_FC_52,,,,,"A80601029C",,m,_EEA_FC_52,,,
r,,EEA_FC_51,,,,,"AA0601029E",,s,_8_Skip,,, ,,s,_EEA_FC_51,,,
w,,EEA_FC_51,,,,,"AA0601029E",,m,_EEA_FC_51,,,
r,,EEA_FC_49,,,,,"94060102A0",,s,_8_Skip,,, ,,s,_EEA_FC_49,,,
w,,EEA_FC_49,,,,,"94060102A0",,m,_EEA_FC_49,,,
r,,EEA_FC_48,,,,,"96060102A2",,s,_8_Skip,,, ,,s,_EEA_FC_48,,,
w,,EEA_FC_48,,,,,"96060102A2",,m,_EEA_FC_48,,,
r,,EEA_FC_47,,,,,"90060102A4",,s,_8_Skip,,, ,,s,_EEA_FC_47,,,
w,,EEA_FC_47,,,,,"90060102A4",,m,_EEA_FC_47,,,
r,,EEA_FC_46,,,,,"92060102A6",,s,_8_Skip,,, ,,s,_EEA_FC_46,,,
w,,EEA_FC_46,,,,,"92060102A6",,m,_EEA_FC_46,,,
r,,EEA_FC_45,,,,,"9C060102A8",,s,_8_Skip,,, ,,s,_EEA_FC_45,,,
w,,EEA_FC_45,,,,,"9C060102A8",,m,_EEA_FC_45,,,
r,,EEA_FC_44,,,,,"9E060102AA",,s,_8_Skip,,, ,,s,_EEA_FC_44,,,
w,,EEA_FC_44,,,,,"9E060102AA",,m,_EEA_FC_44,,,
r,,EEA_FC_43,,,,,"98060102AC",,s,_8_Skip,,, ,,s,_EEA_FC_43,,,
w,,EEA_FC_43,,,,,"98060102AC",,m,_EEA_FC_43,,,
r,,EEA_FC_41,,,,,"9A060102AE",,s,_8_Skip,,, ,,s,_EEA_FC_41,,,
w,,EEA_FC_41,,,,,"9A060102AE",,m,_EEA_FC_41,,,
r,,EEA_FC_39,,,,,"84060102B0",,s,_8_Skip,,, ,,s,_EEA_FC_39,,,
w,,EEA_FC_39,,,,,"84060102B0",,m,_EEA_FC_39,,,
r,,EEA_FC_38,,,,,"86060102B2",,s,_8_Skip,,, ,,s,_EEA_FC_38,,,
w,,EEA_FC_38,,,,,"86060102B2",,m,_EEA_FC_38,,,
r,,EEA_FC_37,,,,,"80060102B4",,s,_8_Skip,,, ,,s,_EEA_FC_37,,,
w,,EEA_FC_37,,,,,"80060102B4",,m,_EEA_FC_37,,,
r,,EEA_FC_36,,,,,"82060102B6",,s,_8_Skip,,, ,,s,_EEA_FC_36,,,
w,,EEA_FC_36,,,,,"82060102B6",,m,_EEA_FC_36,,,
r,,EEA_FC_35,,,,,"8C060102B8",,s,_8_Skip,,, ,,s,_EEA_FC_35,,,
w,,EEA_FC_35,,,,,"8C060102B8",,m,_EEA_FC_35,,,
r,,EEA_FC_34,,,,,"8E060102BA",,s,_8_Skip,,, ,,s,_EEA_FC_34,,,
w,,EEA_FC_34,,,,,"8E060102BA",,m,_EEA_FC_34,,,
r,,EEA_FC_33,,,,,"88060102BC",,s,_8_Skip,,, ,,s,_EEA_FC_33,,,
w,,EEA_FC_33,,,,,"88060102BC",,m,_EEA_FC_33,,,
r,,EEA_FC_32,,,,,"8A060102BE",,s,_8_Skip,,, ,,s,_EEA_FC_32,,,
w,,EEA_FC_32,,,,,"8A060102BE",,m,_EEA_FC_32,,,
r,,EEA_FC_31,,,,,"F4060102C0",,s,_8_Skip,,, ,,s,_EEA_FC_31,,,
w,,EEA_FC_31,,,,,"F4060102C0",,m,_EEA_FC_31,,,
r,,EEA_FC_30,,,,,"F6060102C2",,s,_8_Skip,,, ,,s,_EEA_FC_30,,,
w,,EEA_FC_30,,,,,"F6060102C2",,m,_EEA_FC_30,,,
r,,EEA_FC_24,,,,,"F0060102C4",,s,_8_Skip,,, ,,s,_EEA_FC_24,,,
w,,EEA_FC_24,,,,,"F0060102C4",,m,_EEA_FC_24,,,
r,,EEA_FC_23,,,,,"F2060102C6",,s,_8_Skip,,, ,,s,_EEA_FC_23,,,
w,,EEA_FC_23,,,,,"F2060102C6",,m,_EEA_FC_23,,,
r,,EEA_FC_22,,,,,"FC060102C8",,s,_8_Skip,,, ,,s,_EEA_FC_22,,,
w,,EEA_FC_22,,,,,"FC060102C8",,m,_EEA_FC_22,,,
r,,EEA_FC_21,,,,,"FE060102CA",,s,_8_Skip,,, ,,s,_EEA_FC_21,,,
w,,EEA_FC_21,,,,,"FE060102CA",,m,_EEA_FC_21,,,
r,,EEA_FC_18,,,,,"F8060102CC",,s,_8_Skip,,, ,,s,_EEA_FC_18,,,
w,,EEA_FC_18,,,,,"F8060102CC",,m,_EEA_FC_18,,,
r,,EEA_FC_16,,,,,"FA060102CE",,s,_8_Skip,,, ,,s,_EEA_FC_16,,,
w,,EEA_FC_16,,,,,"FA060102CE",,m,_EEA_FC_16,,,
r,,EEA_FC_15,,,,,"E4060102D0",,s,_8_Skip,,, ,,s,_EEA_FC_15,,,
w,,EEA_FC_15,,,,,"E4060102D0",,m,_EEA_FC_15,,,
r,,EEA_FC_14,,,,,"E6060102D2",,s,_8_Skip,,, ,,s,_EEA_FC_14,,,
w,,EEA_FC_14,,,,,"E6060102D2",,m,_EEA_FC_14,,,
r,,EEA_FC_12,,,,,"E0060102D4",,s,_8_Skip,,, ,,s,_EEA_FC_12,,,
w,,EEA_FC_12,,,,,"E0060102D4",,m,_EEA_FC_12,,,
r,,EEA_FC_11,,,,,"E2060102D6",,s,_8_Skip,,, ,,s,_EEA_FC_11,,,
w,,EEA_FC_11,,,,,"E2060102D6",,m,_EEA_FC_11,,,
r,,EEA_HBRONTAG,,,,,"EC060102D8",,s,_8_Skip,,, ,,s,_EEA_HBRONTAG,,,
w,,EEA_HBRONTAG,,,,,"EC060102D8",,m,_EEA_HBRONTAG,,,
r,,EEA_NZUENDTAG,,,,,"ED060102D9",,s,_8_Skip,,, ,,s,_EEA_NZUENDTAG,,,
w,,EEA_NZUENDTAG,,,,,"ED060102D9",,m,_EEA_NZUENDTAG,,,
r,,EEA_N_PON,,,,,"EE060102DA",,s,_8_Skip,,, ,,s,_EEA_N_PON,,,
w,,EEA_N_PON,,,,,"EE060102DA",,m,_EEA_N_PON,,,
r,,EEA_N_KON,,,,,"E9060102DD",,s,_8_Skip,,, ,,s,_EEA_N_KON,,,
w,,EEA_N_KON,,,,,"E9060102DD",,m,_EEA_N_KON,,,
r,,EEA_RES_CNT,,,,,"D4060102E0",,s,_8_Skip,,, ,,s,_EEA_RES_CNT,,,
w,,EEA_RES_CNT,,,,,"D4060102E0",,m,_EEA_RES_CNT,,,
r,,EEA_SHUT_OFF,,,,,"D7060102E3",,s,_8_Skip,,, ,,s,_EEA_SHUT_OFF,,,
w,,EEA_SHUT_OFF,,,,,"D7060102E3",,m,_EEA_SHUT_OFF,,,
r,,EEA_H_PON,,,,,"D2060102E6",,s,_8_Skip,,, ,,s,_EEA_H_PON,,,
w,,EEA_H_PON,,,,,"D2060102E6",,m,_EEA_H_PON,,,
r,,EEA_H_BON,,,,,"DD060102E9",,s,_8_Skip,,, ,,s,_EEA_H_BON,,,
w,,EEA_H_BON,,,,,"DD060102E9",,m,_EEA_H_BON,,,
r,,EEA_N_ZUE,,,,,"DF060102EB",,s,_8_Skip,,, ,,s,_EEA_N_ZUE,,,
w,,EEA_N_ZUE,,,,,"DF060102EB",,m,_EEA_N_ZUE,,,
r,,EEA_BAUSTAND,,,,,"DA060102EE",,s,_8_Skip,,, ,,s,_EEA_BAUSTAND,,,
w,,EEA_BAUSTAND,,,,,"DA060102EE",,m,_EEA_BAUSTAND,,,
# r,,EEA_PRUEF_LOW,,,,,"DA060102EE",,s,_8_Skip,,, ,,s,_EEA_PRUEF_LOW,,,       # Alias of EEA_BAUSTAND
# w,,EEA_PRUEF_LOW,,,,,"DA060102EE",,m,_EEA_PRUEF_LOW,,,                      # Alias of EEA_BAUSTAND
r,,EEA_KUNDE,,,,,"C4060102F0",,s,_8_Skip,,, ,,s,_EEA_KUNDE,,,
w,,EEA_KUNDE,,,,,"C4060102F0",,m,_EEA_KUNDE,,,
r,,EEA_VARIANTE,,,,,"C5060102F1",,s,_8_Skip,,, ,,s,_EEA_VARIANTE,,,
w,,EEA_VARIANTE,,,,,"C5060102F1",,m,_EEA_VARIANTE,,,
r,,EEA_SERIAL_NO,,,,,"C7060102F3",,s,_8_Skip,,, ,,s,_EEA_SERIAL_NO,,,
w,,EEA_SERIAL_NO,,,,,"C7060102F3",,m,_EEA_SERIAL_NO,,,
r,,EEA_PRUEF_CRC,,,,,"C2060102F6",,s,_8_Skip,,, ,,s,_EEA_PRUEF_CRC,,,
w,,EEA_PRUEF_CRC,,,,,"C2060102F6",,m,_EEA_PRUEF_CRC,,,
r,,EEA_F_HIST_PTR_LOW,,,,,"AC06020200",,s,_8_Skip,,, ,,s,_EEA_F_HIST_PTR_LOW,,,
w,,EEA_F_HIST_PTR_LOW,,,,,"AC06020200",,m,_EEA_F_HIST_PTR_LOW,,,
r,,EEA_F_HIST_PTR_HIGH,,,,,"AD06020201",,s,_8_Skip,,, ,,s,_EEA_F_HIST_PTR_HIGH,,,
w,,EEA_F_HIST_PTR_HIGH,,,,,"AD06020201",,m,_EEA_F_HIST_PTR_HIGH,,,
r,,EEA_F_HIST_ANF,,,,,"AE06020202",,s,_8_Skip,,, ,,s,_EEA_F_HIST_ANF,,,
w,,EEA_F_HIST_ANF,,,,,"AE06020202",,m,_EEA_F_HIST_ANF,,,
r,,EEA_F_HIST_END,,,,,"9D06020231",,s,_8_Skip,,, ,,s,_EEA_F_HIST_END,,,
w,,EEA_F_HIST_END,,,,,"9D06020231",,m,_EEA_F_HIST_END,,,
r,,SYS_TAKT,,,,,"42060202EE",,s,_8_Skip,,, ,,s,_SYS_TAKT,,,
w,,SYS_TAKT,,,,,"42060202EE",,m,_SYS_TAKT,,,
r,,EEA_TVSOLL_EPM,,,,,"1006030200",,s,_8_Skip,,, ,,s,_EEA_TVSOLL_EPM,,,
w,,EEA_TVSOLL_EPM,,,,,"1006030200",,m,_EEA_TVSOLL_EPM,,,
r,,EEA_TVABSENK,,,,,"1106030201",,s,_8_Skip,,, ,,s,_EEA_TVABSENK,,,
w,,EEA_TVABSENK,,,,,"1106030201",,m,_EEA_TVABSENK,,,
r,,EEA_TWWSOLL_EPM,,,,,"1206030202",,s,_8_Skip,,, ,,s,_EEA_TWWSOLL_EPM,,,
w,,EEA_TWWSOLL_EPM,,,,,"1206030202",,m,_EEA_TWWSOLL_EPM,,,
r,,EEA_WISO_EPM,,,,,"1306030203",,s,_8_Skip,,, ,,s,_EEA_WISO_EPM,,,
w,,EEA_WISO_EPM,,,,,"1306030203",,m,_EEA_WISO_EPM,,,
r,,EEA_MAINPARACRC,,,,,"1406030204",,s,_8_Skip,,, ,,s,_EEA_MAINPARACRC,,,
w,,EEA_MAINPARACRC,,,,,"1406030204",,m,_EEA_MAINPARACRC,,,
r,,EEA_TVSOLL_EPM2,,,,,"1706030207",,s,_8_Skip,,, ,,s,_EEA_TVSOLL_EPM2,,,
w,,EEA_TVSOLL_EPM2,,,,,"1706030207",,m,_EEA_TVSOLL_EPM2,,,

# --- External RAM (XRAM) ---
r,,TX_BUFFER_END,,,,,"E40300",,s,_8_Skip,,, ,,s,_TX_BUFFER_END,,,
w,,TX_BUFFER_END,,,,,"E40300",,m,_TX_BUFFER_END,,,
r,,EBUS_ERROR,,,,,"E50301",,s,_8_Skip,,, ,,s,_EBUS_ERROR,,,
w,,EBUS_ERROR,,,,,"E50301",,m,_EBUS_ERROR,,,
r,,TX_QQ,,,,,"E60302",,s,_8_Skip,,, ,,s,_TX_QQ,,,
w,,TX_QQ,,,,,"E60302",,m,_TX_QQ,,,
# r,,TX_XRAM,,,,,"E60302",,s,_8_Skip,,, ,,s,_TX_XRAM,,,                       # Alias of TX_QQ
# w,,TX_XRAM,,,,,"E60302",,m,_TX_XRAM,,,                                      # Alias of TX_QQ
r,,TX_ZZ,,,,,"E70303",,s,_8_Skip,,, ,,s,_TX_ZZ,,,
w,,TX_ZZ,,,,,"E70303",,m,_TX_ZZ,,,
r,,TX_PB,,,,,"E00304",,s,_8_Skip,,, ,,s,_TX_PB,,,
w,,TX_PB,,,,,"E00304",,m,_TX_PB,,,
r,,TX_SB,,,,,"E10305",,s,_8_Skip,,, ,,s,_TX_SB,,,
w,,TX_SB,,,,,"E10305",,m,_TX_SB,,,
r,,TX_NN,,,,,"E20306",,s,_8_Skip,,, ,,s,_TX_NN,,,
w,,TX_NN,,,,,"E20306",,m,_TX_NN,,,
r,,TX_DB1,,,,,"E30307",,s,_8_Skip,,, ,,s,_TX_DB1,,,
w,,TX_DB1,,,,,"E30307",,m,_TX_DB1,,,
r,,TX_DB2,,,,,"EC0308",,s,_8_Skip,,, ,,s,_TX_DB2,,,
w,,TX_DB2,,,,,"EC0308",,m,_TX_DB2,,,
r,,TX_DB3,,,,,"ED0309",,s,_8_Skip,,, ,,s,_TX_DB3,,,
w,,TX_DB3,,,,,"ED0309",,m,_TX_DB3,,,
r,,TX_DB4,,,,,"EE030A",,s,_8_Skip,,, ,,s,_TX_DB4,,,
w,,TX_DB4,,,,,"EE030A",,m,_TX_DB4,,,
r,,TX_DB5,,,,,"EF030B",,s,_8_Skip,,, ,,s,_TX_DB5,,,
w,,TX_DB5,,,,,"EF030B",,m,_TX_DB5,,,
r,,TX_DB6,,,,,"E8030C",,s,_8_Skip,,, ,,s,_TX_DB6,,,
w,,TX_DB6,,,,,"E8030C",,m,_TX_DB6,,,
r,,TX_DBX,,,,,"E9030D",,s,_8_Skip,,, ,,s,_TX_DBX,,,
w,,TX_DBX,,,,,"E9030D",,m,_TX_DBX,,,
r,,RX_QQ,,,,,"FF031B",,s,_8_Skip,,, ,,s,_RX_QQ,,,
w,,RX_QQ,,,,,"FF031B",,m,_RX_QQ,,,
# r,,RX_XRAM,,,,,"FF031B",,s,_8_Skip,,, ,,s,_RX_XRAM,,,                       # Alias of RX_QQ
# w,,RX_XRAM,,,,,"FF031B",,m,_RX_XRAM,,,                                      # Alias of RX_QQ
r,,RX_ZZ,,,,,"F8031C",,s,_8_Skip,,, ,,s,_RX_ZZ,,,
w,,RX_ZZ,,,,,"F8031C",,m,_RX_ZZ,,,
r,,RX_PB,,,,,"F9031D",,s,_8_Skip,,, ,,s,_RX_PB,,,
w,,RX_PB,,,,,"F9031D",,m,_RX_PB,,,
r,,RX_SB,,,,,"FA031E",,s,_8_Skip,,, ,,s,_RX_SB,,,
w,,RX_SB,,,,,"FA031E",,m,_RX_SB,,,
r,,RX_NN,,,,,"FB031F",,s,_8_Skip,,, ,,s,_RX_NN,,,
w,,RX_NN,,,,,"FB031F",,m,_RX_NN,,,
r,,RX_DB1,,,,,"C40320",,s,_8_Skip,,, ,,s,_RX_DB1,,,
w,,RX_DB1,,,,,"C40320",,m,_RX_DB1,,,
r,,RX_DB2,,,,,"C50321",,s,_8_Skip,,, ,,s,_RX_DB2,,,
w,,RX_DB2,,,,,"C50321",,m,_RX_DB2,,,
r,,RX_DB3,,,,,"C60322",,s,_8_Skip,,, ,,s,_RX_DB3,,,
w,,RX_DB3,,,,,"C60322",,m,_RX_DB3,,,
r,,RX_DB4,,,,,"C70323",,s,_8_Skip,,, ,,s,_RX_DB4,,,
w,,RX_DB4,,,,,"C70323",,m,_RX_DB4,,,
r,,RX_DB5,,,,,"C00324",,s,_8_Skip,,, ,,s,_RX_DB5,,,
w,,RX_DB5,,,,,"C00324",,m,_RX_DB5,,,
r,,RX_DB6,,,,,"C10325",,s,_8_Skip,,, ,,s,_RX_DB6,,,
w,,RX_DB6,,,,,"C10325",,m,_RX_DB6,,,
r,,RX_DB7,,,,,"C20326",,s,_8_Skip,,, ,,s,_RX_DB7,,,
w,,RX_DB7,,,,,"C20326",,m,_RX_DB7,,,
r,,RX_DB8,,,,,"C30327",,s,_8_Skip,,, ,,s,_RX_DB8,,,
w,,RX_DB8,,,,,"C30327",,m,_RX_DB8,,,
r,,RX_DB10,,,,,"CD0329",,s,_8_Skip,,, ,,s,_RX_DB10,,,
w,,RX_DB10,,,,,"CD0329",,m,_RX_DB10,,,
r,,RX_DB12,,,,,"CF032B",,s,_8_Skip,,, ,,s,_RX_DB12,,,
w,,RX_DB12,,,,,"CF032B",,m,_RX_DB12,,,
r,,RX_DB14,,,,,"C9032D",,s,_8_Skip,,, ,,s,_RX_DB14,,,
w,,RX_DB14,,,,,"C9032D",,m,_RX_DB14,,,
r,,RX_DB16,,,,,"CB032F",,s,_8_Skip,,, ,,s,_RX_DB16,,,
w,,RX_DB16,,,,,"CB032F",,m,_RX_DB16,,,
r,,RX_DB18,,,,,"D50331",,s,_8_Skip,,, ,,s,_RX_DB18,,,
w,,RX_DB18,,,,,"D50331",,m,_RX_DB18,,,
r,,RX_DB20,,,,,"D70333",,s,_8_Skip,,, ,,s,_RX_DB20,,,
w,,RX_DB20,,,,,"D70333",,m,_RX_DB20,,,
r,,RX_OFFSET_CNT,,,,,"D10335",,s,_8_Skip,,, ,,s,_RX_OFFSET_CNT,,,
w,,RX_OFFSET_CNT,,,,,"D10335",,m,_RX_OFFSET_CNT,,,
# r,,RX_XRAM_END,,,,,"D10335",,s,_8_Skip,,, ,,s,_RX_XRAM_END,,,               # Alias of RX_OFFSET_CNT
# w,,RX_XRAM_END,,,,,"D10335",,m,_RX_XRAM_END,,,                              # Alias of RX_OFFSET_CNT
r,,RX_BUFFER_END,,,,,"D20336",,s,_8_Skip,,, ,,s,_RX_BUFFER_END,,,
w,,RX_BUFFER_END,,,,,"D20336",,m,_RX_BUFFER_END,,,
r,,EBUS_ACK,,,,,"D30337",,s,_8_Skip,,, ,,s,_EBUS_ACK,,,
w,,EBUS_ACK,,,,,"D30337",,m,_EBUS_ACK,,,
r,,TALK_EBUS,,,,,"DC0338",,s,_8_Skip,,, ,,s,_TALK_EBUS,,,
w,,TALK_EBUS,,,,,"DC0338",,m,_TALK_EBUS,,,
r,,T_SYN,,,,,"DD0339",,s,_8_Skip,,, ,,s,_T_SYN,,,
w,,T_SYN,,,,,"DD0339",,m,_T_SYN,,,
r,,V24_DELAY_TIMER,,,,,"DE033A",,s,_8_Skip,,, ,,s,_V24_DELAY_TIMER,,,
w,,V24_DELAY_TIMER,,,,,"DE033A",,m,_V24_DELAY_TIMER,,,
r,,DL_HYS_TH_OFF_,,,,,"DF033B",,s,_8_Skip,,, ,,s,_DL_HYS_TH_OFF_,,,
w,,DL_HYS_TH_OFF_,,,,,"DF033B",,m,_DL_HYS_TH_OFF_,,,
r,,TXist,,,,,"D8033C",,s,_8_Skip,,, ,,s,_TXist,,,
w,,TXist,,,,,"D8033C",,m,_TXist,,,
r,,TVist_start_FL,,,,,"D9033D",,s,_8_Skip,,, ,,s,_TVist_start_FL,,,
w,,TVist_start_FL,,,,,"D9033D",,m,_TVist_start_FL,,,
r,,DL_TH_OFF_SEC,,,,,"DA033E",,s,_8_Skip,,, ,,s,_DL_TH_OFF_SEC,,,
w,,DL_TH_OFF_SEC,,,,,"DA033E",,m,_DL_TH_OFF_SEC,,,
r,,minWUTzeit,,,,,"DB033F",,s,_8_Skip,,, ,,s,_minWUTzeit,,,
w,,minWUTzeit,,,,,"DB033F",,m,_minWUTzeit,,,
r,,tMinCombi,,,,,"A40340",,s,_8_Skip,,, ,,s,_tMinCombi,,,
w,,tMinCombi,,,,,"A40340",,m,_tMinCombi,,,
r,,cntFlaStabHZ,,,,,"A50341",,s,_8_Skip,,, ,,s,_cntFlaStabHZ,,,
w,,cntFlaStabHZ,,,,,"A50341",,m,_cntFlaStabHZ,,,
r,,ihilf,,,,,"A60342",,s,_8_Skip,,, ,,s,_ihilf,,,
w,,ihilf,,,,,"A60342",,m,_ihilf,,,
r,,uk1,,,,,"A00344",,s,_8_Skip,,, ,,s,_uk1,,,
w,,uk1,,,,,"A00344",,m,_uk1,,,
r,,CNTTW,,,,,"A10345",,s,_8_Skip,,, ,,s,_CNTTW,,,
w,,CNTTW,,,,,"A10345",,m,_CNTTW,,,
r,,max_nGsoll,,,,,"A20346",,s,_8_Skip,,, ,,s,_max_nGsoll,,,
w,,max_nGsoll,,,,,"A20346",,m,_max_nGsoll,,,
r,,cnt_tTvGradient,,,,,"A30347",,s,_8_Skip,,, ,,s,_cnt_tTvGradient,,,
w,,cnt_tTvGradient,,,,,"A30347",,m,_cnt_tTvGradient,,,
r,,secWWbetr,,,,,"AC0348",,s,_8_Skip,,, ,,s,_secWWbetr,,,
w,,secWWbetr,,,,,"AC0348",,m,_secWWbetr,,,
r,,icl1HrsKick,,,,,"AD0349",,s,_8_Skip,,, ,,s,_icl1HrsKick,,,
w,,icl1HrsKick,,,,,"AD0349",,m,_icl1HrsKick,,,
r,,cntConfig,,,,,"AE034A",,s,_8_Skip,,, ,,s,_cntConfig,,,
w,,cntConfig,,,,,"AE034A",,m,_cntConfig,,,
r,,cnt_sw_fc41,,,,,"A8034C",,s,_8_Skip,,, ,,s,_cnt_sw_fc41,,,
w,,cnt_sw_fc41,,,,,"A8034C",,m,_cnt_sw_fc41,,,
r,,N_DTMax_VL_eSTB,,,,,"A9034D",,s,_8_Skip,,, ,,s,_N_DTMax_VL_eSTB,,,
w,,N_DTMax_VL_eSTB,,,,,"A9034D",,m,_N_DTMax_VL_eSTB,,,
r,,DL_TVIST_NGMIN_SEC,,,,,"AA034E",,s,_8_Skip,,, ,,s,_DL_TVIST_NGMIN_SEC,,,
w,,DL_TVIST_NGMIN_SEC,,,,,"AA034E",,m,_DL_TVIST_NGMIN_SEC,,,
r,,dT_VLRL_Filter,,,,,"AB034F",,s,_8_Skip,,, ,,s,_dT_VLRL_Filter,,,
w,,dT_VLRL_Filter,,,,,"AB034F",,m,_dT_VLRL_Filter,,,
r,,prev_tWWist_2,,,,,"B40350",,s,_8_Skip,,, ,,s,_prev_tWWist_2,,,
w,,prev_tWWist_2,,,,,"B40350",,m,_prev_tWWist_2,,,
r,,cntGDW,,,,,"B50351",,s,_8_Skip,,, ,,s,_cntGDW,,,
w,,cntGDW,,,,,"B50351",,m,_cntGDW,,,
r,,DL_TH_OFF_SEC_MAX_,,,,,"B60352",,s,_8_Skip,,, ,,s,_DL_TH_OFF_SEC_MAX_,,,
w,,DL_TH_OFF_SEC_MAX_,,,,,"B60352",,m,_DL_TH_OFF_SEC_MAX_,,,
r,,SA_Th,,,,,"B70353",,s,_8_Skip,,, ,,s,_SA_Th,,,
w,,SA_Th,,,,,"B70353",,m,_SA_Th,,,
r,,PNL_HZcnt,,,,,"B00354",,s,_8_Skip,,, ,,s,_PNL_HZcnt,,,
w,,PNL_HZcnt,,,,,"B00354",,m,_PNL_HZcnt,,,
r,,BetrArt,,,,,"B20356",,s,_8_Skip,,, ,,s,_BetrArt,,,
w,,BetrArt,,,,,"B20356",,m,_BetrArt,,,
r,,NDTMaxWT,,,,,"B30357",,s,_8_Skip,,, ,,s,_NDTMaxWT,,,
w,,NDTMaxWT,,,,,"B30357",,m,_NDTMaxWT,,,
r,,dT_Abtastzeit,,,,,"BC0358",,s,_8_Skip,,, ,,s,_dT_Abtastzeit,,,
w,,dT_Abtastzeit,,,,,"BC0358",,m,_dT_Abtastzeit,,,
r,,prevTVist,,,,,"BD0359",,s,_8_Skip,,, ,,s,_prevTVist,,,
w,,prevTVist,,,,,"BD0359",,m,_prevTVist,,,
r,,DL_HYS_TH_ON_,,,,,"BE035A",,s,_8_Skip,,, ,,s,_DL_HYS_TH_ON_,,,
w,,DL_HYS_TH_ON_,,,,,"BE035A",,m,_DL_HYS_TH_ON_,,,
r,,PNL_WWcnt,,,,,"BF035B",,s,_8_Skip,,, ,,s,_PNL_WWcnt,,,
w,,PNL_WWcnt,,,,,"BF035B",,m,_PNL_WWcnt,,,
r,,yDT1,,,,,"B9035D",,s,_8_Skip,,, ,,s,_yDT1,,,
w,,yDT1,,,,,"B9035D",,m,_yDT1,,,
r,,TVsoll_WUT,,,,,"BB035F",,s,_8_Skip,,, ,,s,_TVsoll_WUT,,,
w,,TVsoll_WUT,,,,,"BB035F",,m,_TVsoll_WUT,,,
r,,TRList_start_FL,,,,,"840360",,s,_8_Skip,,, ,,s,_TRList_start_FL,,,
w,,TRList_start_FL,,,,,"840360",,m,_TRList_start_FL,,,
r,,CNTDTMaxWT,,,,,"850361",,s,_8_Skip,,, ,,s,_CNTDTMaxWT,,,
w,,CNTDTMaxWT,,,,,"850361",,m,_CNTDTMaxWT,,,
r,,secFCodeW,,,,,"860362",,s,_8_Skip,,, ,,s,_secFCodeW,,,
w,,secFCodeW,,,,,"860362",,m,_secFCodeW,,,
r,,AbgSS_cnt,,,,,"870363",,s,_8_Skip,,, ,,s,_AbgSS_cnt,,,
w,,AbgSS_cnt,,,,,"870363",,m,_AbgSS_cnt,,,
r,,dtWWist,,,,,"800364",,s,_8_Skip,,, ,,s,_dtWWist,,,
w,,dtWWist,,,,,"800364",,m,_dtWWist,,,
r,,cntLDW_Versuche,,,,,"810365",,s,_8_Skip,,, ,,s,_cntLDW_Versuche,,,
w,,cntLDW_Versuche,,,,,"810365",,m,_cntLDW_Versuche,,,
r,,DL_XW_NGMIN_,,,,,"820366",,s,_8_Skip,,, ,,s,_DL_XW_NGMIN_,,,
w,,DL_XW_NGMIN_,,,,,"820366",,m,_DL_XW_NGMIN_,,,
r,,scHilf,,,,,"830367",,s,_8_Skip,,, ,,s,_scHilf,,,
w,,scHilf,,,,,"830367",,m,_scHilf,,,
r,,cntGDWtime,,,,,"8C0368",,s,_8_Skip,,, ,,s,_cntGDWtime,,,
w,,cntGDWtime,,,,,"8C0368",,m,_cntGDWtime,,,
r,,DL_XW_NGMAX_,,,,,"8D0369",,s,_8_Skip,,, ,,s,_DL_XW_NGMAX_,,,
w,,DL_XW_NGMAX_,,,,,"8D0369",,m,_DL_XW_NGMAX_,,,
r,,ucHilf,,,,,"8E036A",,s,_8_Skip,,, ,,s,_ucHilf,,,
w,,ucHilf,,,,,"8E036A",,m,_ucHilf,,,
r,,PuPWM_tempoffset,,,,,"8F036B",,s,_8_Skip,,, ,,s,_PuPWM_tempoffset,,,
w,,PuPWM_tempoffset,,,,,"8F036B",,m,_PuPWM_tempoffset,,,
r,,DTVIST,,,,,"88036C",,s,_8_Skip,,, ,,s,_DTVIST,,,
w,,DTVIST,,,,,"88036C",,m,_DTVIST,,,
r,,CNTGradTVist,,,,,"89036D",,s,_8_Skip,,, ,,s,_CNTGradTVist,,,
w,,CNTGradTVist,,,,,"89036D",,m,_CNTGradTVist,,,
r,,cntSoft,,,,,"8A036E",,s,_8_Skip,,, ,,s,_cntSoft,,,
w,,cntSoft,,,,,"8A036E",,m,_cntSoft,,,
r,,CntAusg1,,,,,"8B036F",,s,_8_Skip,,, ,,s,_CntAusg1,,,
w,,CntAusg1,,,,,"8B036F",,m,_CntAusg1,,,
r,,DL_Comf_Soll,,,,,"940370",,s,_8_Skip,,, ,,s,_DL_Comf_Soll,,,
w,,DL_Comf_Soll,,,,,"940370",,m,_DL_Comf_Soll,,,
r,,Min_nGsoll,,,,,"950371",,s,_8_Skip,,, ,,s,_Min_nGsoll,,,
w,,Min_nGsoll,,,,,"950371",,m,_Min_nGsoll,,,
r,,TWWISTAD,,,,,"960372",,s,_8_Skip,,, ,,s,_TWWISTAD,,,
w,,TWWISTAD,,,,,"960372",,m,_TWWISTAD,,,
r,,TAUSSAD,,,,,"970373",,s,_8_Skip,,, ,,s,_TAUSSAD,,,
w,,TAUSSAD,,,,,"970373",,m,_TAUSSAD,,,
r,,TRLISTAD,,,,,"900374",,s,_8_Skip,,, ,,s,_TRLISTAD,,,
w,,TRLISTAD,,,,,"900374",,m,_TRLISTAD,,,
r,,AIN_WPAD,,,,,"910375",,s,_8_Skip,,, ,,s,_AIN_WPAD,,,
w,,AIN_WPAD,,,,,"910375",,m,_AIN_WPAD,,,
r,,AIN_0_10VAD,,,,,"920376",,s,_8_Skip,,, ,,s,_AIN_0_10VAD,,,
w,,AIN_0_10VAD,,,,,"920376",,m,_AIN_0_10VAD,,,
r,,AIN_0_10V,,,,,"930377",,s,_8_Skip,,, ,,s,_AIN_0_10V,,,
w,,AIN_0_10V,,,,,"930377",,m,_AIN_0_10V,,,
r,,AIN_STB,,,,,"9C0378",,s,_8_Skip,,, ,,s,_AIN_STB,,,
w,,AIN_STB,,,,,"9C0378",,m,_AIN_STB,,,
r,,AIN_STBA,,,,,"9D0379",,s,_8_Skip,,, ,,s,_AIN_STBA,,,
w,,AIN_STBA,,,,,"9D0379",,m,_AIN_STBA,,,
r,,AIN_ANAIN6AD,,,,,"9E037A",,s,_8_Skip,,, ,,s,_AIN_ANAIN6AD,,,
w,,AIN_ANAIN6AD,,,,,"9E037A",,m,_AIN_ANAIN6AD,,,
r,,AIN_ANAIN7AD,,,,,"9F037B",,s,_8_Skip,,, ,,s,_AIN_ANAIN7AD,,,
w,,AIN_ANAIN7AD,,,,,"9F037B",,m,_AIN_ANAIN7AD,,,
r,,TWEICHEIST,,,,,"98037C",,s,_8_Skip,,, ,,s,_TWEICHEIST,,,
w,,TWEICHEIST,,,,,"98037C",,m,_TWEICHEIST,,,
r,,TWEICHEAD,,,,,"99037D",,s,_8_Skip,,, ,,s,_TWEICHEAD,,,
w,,TWEICHEAD,,,,,"99037D",,m,_TWEICHEAD,,,
r,,TABGAD,,,,,"9A037E",,s,_8_Skip,,, ,,s,_TABGAD,,,
w,,TABGAD,,,,,"9A037E",,m,_TABGAD,,,
r,,ICL20SEC_BON,,,,,"9B037F",,s,_8_Skip,,, ,,s,_ICL20SEC_BON,,,
w,,ICL20SEC_BON,,,,,"9B037F",,m,_ICL20SEC_BON,,,
r,,ALARM_TIMER,,,,,"640380",,s,_8_Skip,,, ,,s,_ALARM_TIMER,,,
w,,ALARM_TIMER,,,,,"640380",,m,_ALARM_TIMER,,,
r,,CNT_REF_OK,,,,,"650381",,s,_8_Skip,,, ,,s,_CNT_REF_OK,,,
w,,CNT_REF_OK,,,,,"650381",,m,_CNT_REF_OK,,,
r,,CNT_KASK_REL,,,,,"660382",,s,_8_Skip,,, ,,s,_CNT_KASK_REL,,,
w,,CNT_KASK_REL,,,,,"660382",,m,_CNT_KASK_REL,,,
r,,VAR_VERBRAUCHER,,,,,"670383",,s,_8_Skip,,, ,,s,_VAR_VERBRAUCHER,,,
w,,VAR_VERBRAUCHER,,,,,"670383",,m,_VAR_VERBRAUCHER,,,
r,,FE_CNT,,,,,"600384",,s,_8_Skip,,, ,,s,_FE_CNT,,,
w,,FE_CNT,,,,,"600384",,m,_FE_CNT,,,
r,,CNT_DECGAP,,,,,"610385",,s,_8_Skip,,, ,,s,_CNT_DECGAP,,,
w,,CNT_DECGAP,,,,,"610385",,m,_CNT_DECGAP,,,
r,,ISECFEPRESSED,,,,,"620386",,s,_8_Skip,,, ,,s,_ISECFEPRESSED,,,
w,,ISECFEPRESSED,,,,,"620386",,m,_ISECFEPRESSED,,,
r,,ABREGELTEMP,,,,,"630387",,s,_8_Skip,,, ,,s,_ABREGELTEMP,,,
w,,ABREGELTEMP,,,,,"630387",,m,_ABREGELTEMP,,,
r,,INIT_ORDER_BYTE,,,,,"6C0388",,s,_8_Skip,,, ,,s,_INIT_ORDER_BYTE,,,
w,,INIT_ORDER_BYTE,,,,,"6C0388",,m,_INIT_ORDER_BYTE,,,
r,,CNT_MB_2_TO_EEPROM,,,,,"6E038A",,s,_8_Skip,,, ,,s,_CNT_MB_2_TO_EEPROM,,,
w,,CNT_MB_2_TO_EEPROM,,,,,"6E038A",,m,_CNT_MB_2_TO_EEPROM,,,
r,,YTVREG,,,,,"6F038B",,s,_8_Skip,,, ,,s,_YTVREG,,,
w,,YTVREG,,,,,"6F038B",,m,_YTVREG,,,
r,,FDE_XRAM,,,,,"69038D",,s,_8_Skip,,, ,,s,_FDE_XRAM,,,
w,,FDE_XRAM,,,,,"69038D",,m,_FDE_XRAM,,,
r,,AIN_ERR_MASK,,,,,"710395",,s,_8_Skip,,, ,,s,_AIN_ERR_MASK,,,
w,,AIN_ERR_MASK,,,,,"710395",,m,_AIN_ERR_MASK,,,
r,,SIPHON_OSZ_CNT,,,,,"720396",,s,_8_Skip,,, ,,s,_SIPHON_OSZ_CNT,,,
w,,SIPHON_OSZ_CNT,,,,,"720396",,m,_SIPHON_OSZ_CNT,,,
r,,CNT_NTC_TOL,,,,,"730397",,s,_8_Skip,,, ,,s,_CNT_NTC_TOL,,,
w,,CNT_NTC_TOL,,,,,"730397",,m,_CNT_NTC_TOL,,,
r,,CNT_NTC_ERR,,,,,"7C0398",,s,_8_Skip,,, ,,s,_CNT_NTC_ERR,,,
w,,CNT_NTC_ERR,,,,,"7C0398",,m,_CNT_NTC_ERR,,,
r,,NTC1_TEMP,,,,,"7D0399",,s,_8_Skip,,, ,,s,_NTC1_TEMP,,,
w,,NTC1_TEMP,,,,,"7D0399",,m,_NTC1_TEMP,,,
r,,NTC2_TEMP,,,,,"7E039A",,s,_8_Skip,,, ,,s,_NTC2_TEMP,,,
w,,NTC2_TEMP,,,,,"7E039A",,m,_NTC2_TEMP,,,
r,,NTC1_AD,,,,,"7F039B",,s,_8_Skip,,, ,,s,_NTC1_AD,,,
w,,NTC1_AD,,,,,"7F039B",,m,_NTC1_AD,,,
r,,NTC2_AD,,,,,"78039C",,s,_8_Skip,,, ,,s,_NTC2_AD,,,
w,,NTC2_AD,,,,,"78039C",,m,_NTC2_AD,,,
r,,CNT_W89,,,,,"79039D",,s,_8_Skip,,, ,,s,_CNT_W89,,,
w,,CNT_W89,,,,,"79039D",,m,_CNT_W89,,,
r,,HZZUSTBM_2,,,,,"7B039F",,s,_8_Skip,,, ,,s,_HZZUSTBM_2,,,
w,,HZZUSTBM_2,,,,,"7B039F",,m,_HZZUSTBM_2,,,
r,,EPIONNULL_INV,,,,,"4403A0",,s,_8_Skip,,, ,,s,_EPIONNULL_INV,,,
w,,EPIONNULL_INV,,,,,"4403A0",,m,_EPIONNULL_INV,,,
r,,MIN_BR_OFF_VL_ESTB_RL,,,,,"4503A1",,s,_8_Skip,,, ,,s,_MIN_BR_OFF_VL_ESTB_RL,,,
w,,MIN_BR_OFF_VL_ESTB_RL,,,,,"4503A1",,m,_MIN_BR_OFF_VL_ESTB_RL,,,
r,,TWEICHEIST_INTERN,,,,,"4603A2",,s,_8_Skip,,, ,,s,_TWEICHEIST_INTERN,,,
w,,TWEICHEIST_INTERN,,,,,"4603A2",,m,_TWEICHEIST_INTERN,,,
r,,TWEICHEIST_EXTERN,,,,,"4703A3",,s,_8_Skip,,, ,,s,_TWEICHEIST_EXTERN,,,
w,,TWEICHEIST_EXTERN,,,,,"4703A3",,m,_TWEICHEIST_EXTERN,,,
r,,CNT_1_5MIN_RETRY_KLAPPE,,,,,"4003A4",,s,_8_Skip,,, ,,s,_CNT_1_5MIN_RETRY_KLAPPE,,,
w,,CNT_1_5MIN_RETRY_KLAPPE,,,,,"4003A4",,m,_CNT_1_5MIN_RETRY_KLAPPE,,,
r,,SERVICEBETR_VIA_CUI_U8,,,,,"4103A5",,s,_8_Skip,,, ,,s,_SERVICEBETR_VIA_CUI_U8,,,
w,,SERVICEBETR_VIA_CUI_U8,,,,,"4103A5",,m,_SERVICEBETR_VIA_CUI_U8,,,
r,,DEBUG_VAR_1,,,,,"4203A6",,s,_8_Skip,,, ,,s,_DEBUG_VAR_1,,,
w,,DEBUG_VAR_1,,,,,"4203A6",,m,_DEBUG_VAR_1,,,
r,,DEBUG_VAR_2,,,,,"4303A7",,s,_8_Skip,,, ,,s,_DEBUG_VAR_2,,,
w,,DEBUG_VAR_2,,,,,"4303A7",,m,_DEBUG_VAR_2,,,
r,,TWWIST_2,,,,,"4C03A8",,s,_8_Skip,,, ,,s,_TWWIST_2,,,
w,,TWWIST_2,,,,,"4C03A8",,m,_TWWIST_2,,,
r,,TRLIST_2,,,,,"4D03A9",,s,_8_Skip,,, ,,s,_TRLIST_2,,,
w,,TRLIST_2,,,,,"4D03A9",,m,_TRLIST_2,,,
r,,TVIST_2,,,,,"4E03AA",,s,_8_Skip,,, ,,s,_TVIST_2,,,
w,,TVIST_2,,,,,"4E03AA",,m,_TVIST_2,,,
r,,TWW_DLPLUS,,,,,"4F03AB",,s,_8_Skip,,, ,,s,_TWW_DLPLUS,,,
w,,TWW_DLPLUS,,,,,"4F03AB",,m,_TWW_DLPLUS,,,
r,,WW_DURCHFL,,,,,"4803AC",,s,_8_Skip,,, ,,s,_WW_DURCHFL,,,
w,,WW_DURCHFL,,,,,"4803AC",,m,_WW_DURCHFL,,,
r,,DL_Y_VORST,,,,,"4903AD",,s,_8_Skip,,, ,,s,_DL_Y_VORST,,,
w,,DL_Y_VORST,,,,,"4903AD",,m,_DL_Y_VORST,,,
r,,TA_FILTER,,,,,"4B03AF",,s,_8_Skip,,, ,,s,_TA_FILTER,,,
w,,TA_FILTER,,,,,"4B03AF",,m,_TA_FILTER,,,
r,,TA_MITTEL,,,,,"5503B1",,s,_8_Skip,,, ,,s,_TA_MITTEL,,,
w,,TA_MITTEL,,,,,"5503B1",,m,_TA_MITTEL,,,
r,,MODULATIONSGRAD,,,,,"5603B2",,s,_8_Skip,,, ,,s,_MODULATIONSGRAD,,,
w,,MODULATIONSGRAD,,,,,"5603B2",,m,_MODULATIONSGRAD,,,
r,,SECBROFF,,,,,"5703B3",,s,_8_Skip,,, ,,s,_SECBROFF,,,
w,,SECBROFF,,,,,"5703B3",,m,_SECBROFF,,,
r,,CNTF_CODE_1X,,,,,"5103B5",,s,_8_Skip,,, ,,s,_CNTF_CODE_1X,,,
w,,CNTF_CODE_1X,,,,,"5103B5",,m,_CNTF_CODE_1X,,,
r,,CNTF_CODE_2X,,,,,"5203B6",,s,_8_Skip,,, ,,s,_CNTF_CODE_2X,,,
w,,CNTF_CODE_2X,,,,,"5203B6",,m,_CNTF_CODE_2X,,,
r,,CNTF_CODE_6X,,,,,"5303B7",,s,_8_Skip,,, ,,s,_CNTF_CODE_6X,,,
w,,CNTF_CODE_6X,,,,,"5303B7",,m,_CNTF_CODE_6X,,,
r,,EM_EE_REDUND,,,,,"5C03B8",,s,_8_Skip,,, ,,s,_EM_EE_REDUND,,,
w,,EM_EE_REDUND,,,,,"5C03B8",,m,_EM_EE_REDUND,,,
r,,EE_RANGE_FAIL,,,,,"5D03B9",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL,,,
w,,EE_RANGE_FAIL,,,,,"5D03B9",,m,_EE_RANGE_FAIL,,,
r,,WR_KESS_P_HILF,,,,,"5E03BA",,s,_8_Skip,,, ,,s,_WR_KESS_P_HILF,,,
w,,WR_KESS_P_HILF,,,,,"5E03BA",,m,_WR_KESS_P_HILF,,,
r,,WR_KESS_P_HILF2,,,,,"5F03BB",,s,_8_Skip,,, ,,s,_WR_KESS_P_HILF2,,,
w,,WR_KESS_P_HILF2,,,,,"5F03BB",,m,_WR_KESS_P_HILF2,,,
r,,ANF_WR_KESS_P,,,,,"5803BC",,s,_8_Skip,,, ,,s,_ANF_WR_KESS_P,,,
w,,ANF_WR_KESS_P,,,,,"5803BC",,m,_ANF_WR_KESS_P,,,
r,,CNT_15MIN_TKKB,,,,,"5903BD",,s,_8_Skip,,, ,,s,_CNT_15MIN_TKKB,,,
w,,CNT_15MIN_TKKB,,,,,"5903BD",,m,_CNT_15MIN_TKKB,,,
r,,P_CODE,,,,,"5A03BE",,s,_8_Skip,,, ,,s,_P_CODE,,,
w,,P_CODE,,,,,"5A03BE",,m,_P_CODE,,,
r,,MKESSSTATUSBM,,,,,"5B03BF",,s,_8_Skip,,, ,,s,_MKESSSTATUSBM,,,
w,,MKESSSTATUSBM,,,,,"5B03BF",,m,_MKESSSTATUSBM,,,
r,,TVSOLL_HS,,,,,"2403C0",,s,_8_Skip,,, ,,s,_TVSOLL_HS,,,
w,,TVSOLL_HS,,,,,"2403C0",,m,_TVSOLL_HS,,,
r,,EE_ERR_STATUS,,,,,"2503C1",,s,_8_Skip,,, ,,s,_EE_ERR_STATUS,,,
w,,EE_ERR_STATUS,,,,,"2503C1",,m,_EE_ERR_STATUS,,,
r,,NM_TX_ADR,,,,,"2603C2",,s,_8_Skip,,, ,,s,_NM_TX_ADR,,,
w,,NM_TX_ADR,,,,,"2603C2",,m,_NM_TX_ADR,,,
r,,RX_TX_ZUSTAND,,,,,"2703C3",,s,_8_Skip,,, ,,s,_RX_TX_ZUSTAND,,,
w,,RX_TX_ZUSTAND,,,,,"2703C3",,m,_RX_TX_ZUSTAND,,,
r,,TX_ANF_05,,,,,"2003C4",,s,_8_Skip,,, ,,s,_TX_ANF_05,,,
w,,TX_ANF_05,,,,,"2003C4",,m,_TX_ANF_05,,,
r,,TX_ANF_50,,,,,"2103C5",,s,_8_Skip,,, ,,s,_TX_ANF_50,,,
w,,TX_ANF_50,,,,,"2103C5",,m,_TX_ANF_50,,,
r,,TX_ANF_FE,,,,,"2203C6",,s,_8_Skip,,, ,,s,_TX_ANF_FE,,,
w,,TX_ANF_FE,,,,,"2203C6",,m,_TX_ANF_FE,,,
# r,,TX_ANF_FF,,,,,"2203C6",,s,_8_Skip,,, ,,s,_TX_ANF_FF,,,                   # Alias of TX_ANF_FE
# w,,TX_ANF_FF,,,,,"2203C6",,m,_TX_ANF_FF,,,                                  # Alias of TX_ANF_FE
r,,TX_ANF_07,,,,,"2303C7",,s,_8_Skip,,, ,,s,_TX_ANF_07,,,
w,,TX_ANF_07,,,,,"2303C7",,m,_TX_ANF_07,,,
r,,M_5023_CRC,,,,,"2C03C8",,s,_8_Skip,,, ,,s,_M_5023_CRC,,,
w,,M_5023_CRC,,,,,"2C03C8",,m,_M_5023_CRC,,,
r,,TX_ANF_08,,,,,"2D03C9",,s,_8_Skip,,, ,,s,_TX_ANF_08,,,
w,,TX_ANF_08,,,,,"2D03C9",,m,_TX_ANF_08,,,
r,,TCYCL_MAX,,,,,"2E03CA",,s,_8_Skip,,, ,,s,_TCYCL_MAX,,,
w,,TCYCL_MAX,,,,,"2E03CA",,m,_TCYCL_MAX,,,
r,,TCYCL_QQ_M2,,,,,"2F03CB",,s,_8_Skip,,, ,,s,_TCYCL_QQ_M2,,,
w,,TCYCL_QQ_M2,,,,,"2F03CB",,m,_TCYCL_QQ_M2,,,
r,,TCYCL_QQ_M10,,,,,"2803CC",,s,_8_Skip,,, ,,s,_TCYCL_QQ_M10,,,
w,,TCYCL_QQ_M10,,,,,"2803CC",,m,_TCYCL_QQ_M10,,,
r,,TCYCL_EIG_QQ,,,,,"2903CD",,s,_8_Skip,,, ,,s,_TCYCL_EIG_QQ,,,
w,,TCYCL_EIG_QQ,,,,,"2903CD",,m,_TCYCL_EIG_QQ,,,
r,,TCYCL_TALK_EBUS,,,,,"2A03CE",,s,_8_Skip,,, ,,s,_TCYCL_TALK_EBUS,,,
w,,TCYCL_TALK_EBUS,,,,,"2A03CE",,m,_TCYCL_TALK_EBUS,,,
r,,NM_SOLL_KONF_M2,,,,,"2B03CF",,s,_8_Skip,,, ,,s,_NM_SOLL_KONF_M2,,,
w,,NM_SOLL_KONF_M2,,,,,"2B03CF",,m,_NM_SOLL_KONF_M2,,,
r,,NM_SOLL_KONF_M10,,,,,"3403D0",,s,_8_Skip,,, ,,s,_NM_SOLL_KONF_M10,,,
w,,NM_SOLL_KONF_M10,,,,,"3403D0",,m,_NM_SOLL_KONF_M10,,,
r,,z_count,,,,,"3503D1",,s,_8_Skip,,, ,,s,_z_count,,,
w,,z_count,,,,,"3503D1",,m,_z_count,,,
r,,delta,,,,,"3603D2",,s,_8_Skip,,, ,,s,_delta,,,
w,,delta,,,,,"3603D2",,m,_delta,,,
r,,Z_IonOndmueA,,,,,"3003D4",,s,_8_Skip,,, ,,s,_Z_IonOndmueA,,,
w,,Z_IonOndmueA,,,,,"3003D4",,m,_Z_IonOndmueA,,,
r,,Z_IondmueA,,,,,"3103D5",,s,_8_Skip,,, ,,s,_Z_IondmueA,,,
w,,Z_IondmueA,,,,,"3103D5",,m,_Z_IondmueA,,,
r,,Z_IonOffdmueA,,,,,"3203D6",,s,_8_Skip,,, ,,s,_Z_IonOffdmueA,,,
w,,Z_IonOffdmueA,,,,,"3203D6",,m,_Z_IonOffdmueA,,,
r,,z_last_signal,,,,,"3303D7",,s,_8_Skip,,, ,,s,_z_last_signal,,,
w,,z_last_signal,,,,,"3303D7",,m,_z_last_signal,,,
r,,ANAIN4AD,,,,,"3C03D8",,s,_8_Skip,,, ,,s,_ANAIN4AD,,,
w,,ANAIN4AD,,,,,"3C03D8",,m,_ANAIN4AD,,,
r,,AIN_REF,,,,,"3D03D9",,s,_8_Skip,,, ,,s,_AIN_REF,,,
w,,AIN_REF,,,,,"3D03D9",,m,_AIN_REF,,,
r,,AIN_REF_U,,,,,"3E03DA",,s,_8_Skip,,, ,,s,_AIN_REF_U,,,
w,,AIN_REF_U,,,,,"3E03DA",,m,_AIN_REF_U,,,
r,,AIN_REF_I,,,,,"3F03DB",,s,_8_Skip,,, ,,s,_AIN_REF_I,,,
w,,AIN_REF_I,,,,,"3F03DB",,m,_AIN_REF_I,,,
r,,NGKORR,,,,,"3803DC",,s,_8_Skip,,, ,,s,_NGKORR,,,
w,,NGKORR,,,,,"3803DC",,m,_NGKORR,,,
r,,NG_REG_FAKT,,,,,"3903DD",,s,_8_Skip,,, ,,s,_NG_REG_FAKT,,,
w,,NG_REG_FAKT,,,,,"3903DD",,m,_NG_REG_FAKT,,,
r,,MODI_NGSOLL,,,,,"3A03DE",,s,_8_Skip,,, ,,s,_MODI_NGSOLL,,,
w,,MODI_NGSOLL,,,,,"3A03DE",,m,_MODI_NGSOLL,,,
r,,MERK_NG_RAMPE,,,,,"3B03DF",,s,_8_Skip,,, ,,s,_MERK_NG_RAMPE,,,
w,,MERK_NG_RAMPE,,,,,"3B03DF",,m,_MERK_NG_RAMPE,,,
r,,step_Klappe,,,,,"0403E0",,s,_8_Skip,,, ,,s,_step_Klappe,,,
w,,step_Klappe,,,,,"0403E0",,m,_step_Klappe,,,
r,,cnt_HZ_SW_Versuche,,,,,"0503E1",,s,_8_Skip,,, ,,s,_cnt_HZ_SW_Versuche,,,
w,,cnt_HZ_SW_Versuche,,,,,"0503E1",,m,_cnt_HZ_SW_Versuche,,,
r,,cnt_Klappe,,,,,"0603E2",,s,_8_Skip,,, ,,s,_cnt_Klappe,,,
w,,cnt_Klappe,,,,,"0603E2",,m,_cnt_Klappe,,,
r,,Anlagen_Druck_cnt,,,,,"0703E3",,s,_8_Skip,,, ,,s,_Anlagen_Druck_cnt,,,
w,,Anlagen_Druck_cnt,,,,,"0703E3",,m,_Anlagen_Druck_cnt,,,
r,,CNT_GDW_LDW,,,,,"0003E4",,s,_8_Skip,,, ,,s,_CNT_GDW_LDW,,,
w,,CNT_GDW_LDW,,,,,"0003E4",,m,_CNT_GDW_LDW,,,
r,,CNTGFASTART,,,,,"0103E5",,s,_8_Skip,,, ,,s,_CNTGFASTART,,,
w,,CNTGFASTART,,,,,"0103E5",,m,_CNTGFASTART,,,
r,,VARIANTE,,,,,"0203E6",,s,_8_Skip,,, ,,s,_VARIANTE,,,
w,,VARIANTE,,,,,"0203E6",,m,_VARIANTE,,,
r,,TCYCL_0503,,,,,"0C03E8",,s,_8_Skip,,, ,,s,_TCYCL_0503,,,
w,,TCYCL_0503,,,,,"0C03E8",,m,_TCYCL_0503,,,
r,,TCYCL_0800,,,,,"0D03E9",,s,_8_Skip,,, ,,s,_TCYCL_0800,,,
w,,TCYCL_0800,,,,,"0D03E9",,m,_TCYCL_0800,,,
