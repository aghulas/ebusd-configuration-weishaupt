# type,circuit,name,comment,QQ,ZZ,PBSB,ID,class,name,type,divider,unit,str
*r,,,,,,"5000",,,,,,,
*w,,,,,,"5001",,,,,,,

# --- RAM ---
r,,IDLE_R0,0x0000,,,,"5C0100",,s,_8_Skip,,, ,,s,_IDLE_R0,,,
w,,IDLE_R0,0x0000,,,,"5C0100",,m,_8_Skip,,, ,,m,_IDLE_R0,,,
r,,IDLE_R1,0x0001,,,,"5D0101",,s,_8_Skip,,, ,,s,_IDLE_R1,,,
w,,IDLE_R1,0x0001,,,,"5D0101",,m,_8_Skip,,, ,,m,_IDLE_R1,,,
r,,IDLE_R2,0x0002,,,,"5E0102",,s,_8_Skip,,, ,,s,_IDLE_R2,,,
w,,IDLE_R2,0x0002,,,,"5E0102",,m,_8_Skip,,, ,,m,_IDLE_R2,,,
r,,IDLE_R3,0x0003,,,,"5F0103",,s,_8_Skip,,, ,,s,_IDLE_R3,,,
w,,IDLE_R3,0x0003,,,,"5F0103",,m,_8_Skip,,, ,,m,_IDLE_R3,,,
r,,IDLE_R4,0x0004,,,,"580104",,s,_8_Skip,,, ,,s,_IDLE_R4,,,
w,,IDLE_R4,0x0004,,,,"580104",,m,_8_Skip,,, ,,m,_IDLE_R4,,,
r,,IDLE_R5,0x0005,,,,"590105",,s,_8_Skip,,, ,,s,_IDLE_R5,,,
w,,IDLE_R5,0x0005,,,,"590105",,m,_8_Skip,,, ,,m,_IDLE_R5,,,
r,,IDLE_R6,0x0006,,,,"5A0106",,s,_8_Skip,,, ,,s,_IDLE_R6,,,
w,,IDLE_R6,0x0006,,,,"5A0106",,m,_8_Skip,,, ,,m,_IDLE_R6,,,
r,,IDLE_R7,0x0007,,,,"5B0107",,s,_8_Skip,,, ,,s,_IDLE_R7,,,
w,,IDLE_R7,0x0007,,,,"5B0107",,m,_8_Skip,,, ,,m,_IDLE_R7,,,
r,,BYTEDIAGNOSE,0x000A,,,,"56010A",,s,_8_Skip,,, ,,s,_BYTEDIAGNOSE,,,
w,,BYTEDIAGNOSE,0x000A,,,,"56010A",,m,_8_Skip,,, ,,m,_BYTEDIAGNOSE,,,
r,,select_FS_x,0x0017,,,,"4B0117",,s,_8_Skip,,, ,,s,_select_FS_x,,,
w,,select_FS_x,0x0017,,,,"4B0117",,m,_8_Skip,,, ,,m,_select_FS_x,,,
# r,,select_PR_x,0x0017,,,,"4B0117",,s,_8_Skip,,, ,,s,_select_PR_x,,,                        # Alias of select_FS_x
# w,,select_PR_x,0x0017,,,,"4B0117",,m,_8_Skip,,, ,,m,_select_PR_x,,,                        # Alias of select_FS_x
r,,TIRP_R1,0x0019,,,,"450119",,s,_8_Skip,,, ,,s,_TIRP_R1,,,
w,,TIRP_R1,0x0019,,,,"450119",,m,_8_Skip,,, ,,m,_TIRP_R1,,,
r,,TIRP_R2,0x001A,,,,"46011A",,s,_8_Skip,,, ,,s,_TIRP_R2,,,
w,,TIRP_R2,0x001A,,,,"46011A",,m,_8_Skip,,, ,,m,_TIRP_R2,,,
r,,TIRP_R3,0x001B,,,,"47011B",,s,_8_Skip,,, ,,s,_TIRP_R3,,,
w,,TIRP_R3,0x001B,,,,"47011B",,m,_8_Skip,,, ,,m,_TIRP_R3,,,
r,,TIRP_R4,0x001C,,,,"40011C",,s,_8_Skip,,, ,,s,_TIRP_R4,,,
w,,TIRP_R4,0x001C,,,,"40011C",,m,_8_Skip,,, ,,m,_TIRP_R4,,,
r,,TIRP_R5,0x001D,,,,"41011D",,s,_8_Skip,,, ,,s,_TIRP_R5,,,
w,,TIRP_R5,0x001D,,,,"41011D",,m,_8_Skip,,, ,,m,_TIRP_R5,,,
r,,TIRP_R6,0x001E,,,,"42011E",,s,_8_Skip,,, ,,s,_TIRP_R6,,,
w,,TIRP_R6,0x001E,,,,"42011E",,m,_8_Skip,,, ,,m,_TIRP_R6,,,
r,,BYTE_20,0x0020,,,,"7C0120",,s,_8_Skip,,,,MC_B,s,_MC_B,,,,ESTANDBY,s,_ESTANDBY,,,,SYS_EVEN_TAKT,s,_SYS_EVEN_TAKT,,,,BXCHG,s,_BXCHG,,,,FS_TASK_RDY,s,_FS_TASK_RDY,,,,TASK_1_TFLAG,s,_TASK_1_TFLAG,,,,TST_RES_B_WD,s,_TST_RES_B_WD,,,,B_TIRP_WD,s,_B_TIRP_WD,,,
w,,BYTE_20,0x0020,,,,"7C0120",,m,_8_Skip,,,,MC_B,m,_MC_B,,,,ESTANDBY,m,_ESTANDBY,,,,SYS_EVEN_TAKT,m,_SYS_EVEN_TAKT,,,,BXCHG,m,_BXCHG,,,,FS_TASK_RDY,m,_FS_TASK_RDY,,,,TASK_1_TFLAG,m,_TASK_1_TFLAG,,,,TST_RES_B_WD,m,_TST_RES_B_WD,,,,B_TIRP_WD,m,_B_TIRP_WD,,,
r,,BYTE_21,0x0021,,,,"7D0121",,s,_8_Skip,,,,HZ_ANF,s,_HZ_ANF,,,,WW_ANF,s,_WW_ANF,,,,WI_SO,s,_WI_SO,,,,TKKB,s,_TKKB,,,,RTH,s,_RTH,,,,NG_N_LEV,s,_NG_N_LEV,,,,RC_ON,s,_RC_ON,,,,WW_TH,s,_WW_TH,,,
w,,BYTE_21,0x0021,,,,"7D0121",,m,_8_Skip,,,,HZ_ANF,m,_HZ_ANF,,,,WW_ANF,m,_WW_ANF,,,,WI_SO,m,_WI_SO,,,,TKKB,m,_TKKB,,,,RTH,m,_RTH,,,,NG_N_LEV,m,_NG_N_LEV,,,,RC_ON,m,_RC_ON,,,,WW_TH,m,_WW_TH,,,
r,,BYTE_22,0x0022,,,,"7E0122",,s,_8_Skip,,,,PUWW,s,_PUWW,,,,HZ_SW,s,_HZ_SW,,,,STB,s,_STB,,,,TX_RETRY_FLAG,s,_TX_RETRY_FLAG,,,,QQ_FLAG,s,_QQ_FLAG,,,,MGDW,s,_MGDW,,,,EB_x,s,_EB_x,,,,Abgasklappe_anf,s,_Abgasklappe_anf,,,
w,,BYTE_22,0x0022,,,,"7E0122",,m,_8_Skip,,,,PUWW,m,_PUWW,,,,HZ_SW,m,_HZ_SW,,,,STB,m,_STB,,,,TX_RETRY_FLAG,m,_TX_RETRY_FLAG,,,,QQ_FLAG,m,_QQ_FLAG,,,,MGDW,m,_MGDW,,,,EB_x,m,_EB_x,,,,Abgasklappe_anf,m,_Abgasklappe_anf,,,
r,,ERR_MERK,0x0023,,,,"7F0123",,s,_8_Skip,,,,EM_DE_OVFLOW,s,_EM_DE_OVFLOW,,,,EM_DA_CROSS_TALK,s,_EM_DA_CROSS_TALK,,,,EM_SYNC_RES,s,_EM_SYNC_RES,,,,EM_SYNC_IRPT,s,_EM_SYNC_IRPT,,,,EM_ACT_OVFLOW,s,_EM_ACT_OVFLOW,,,,EM_EE_RW_ERR,s,_EM_EE_RW_ERR,,,,EM_S5_DAT_CRC,s,_EM_S5_DAT_CRC,,,,EM_RAM_ROM,s,_EM_RAM_ROM,,,
w,,ERR_MERK,0x0023,,,,"7F0123",,m,_8_Skip,,,,EM_DE_OVFLOW,m,_EM_DE_OVFLOW,,,,EM_DA_CROSS_TALK,m,_EM_DA_CROSS_TALK,,,,EM_SYNC_RES,m,_EM_SYNC_RES,,,,EM_SYNC_IRPT,m,_EM_SYNC_IRPT,,,,EM_ACT_OVFLOW,m,_EM_ACT_OVFLOW,,,,EM_EE_RW_ERR,m,_EM_EE_RW_ERR,,,,EM_S5_DAT_CRC,m,_EM_S5_DAT_CRC,,,,EM_RAM_ROM,m,_EM_RAM_ROM,,,
r,,CONSIS_MARK,0x0024,,,,"780124",,s,_8_Skip,,,,CM_BAD_CNT,s,_CM_BAD_CNT,,,,CM_S5_CRC,s,_CM_S5_CRC,,,,CM_RAM_CONST_DATA,s,_CM_RAM_CONST_DATA,,,,CM_OTHER_MC,s,_CM_OTHER_MC,,,,CM_SOFT_WD,s,_CM_SOFT_WD,,,,CM_KESS_CRC,s,_CM_KESS_CRC,,,,CM_STAT_FLANKE,s,_CM_STAT_FLANKE,,,
w,,CONSIS_MARK,0x0024,,,,"780124",,m,_8_Skip,,,,CM_BAD_CNT,m,_CM_BAD_CNT,,,,CM_S5_CRC,m,_CM_S5_CRC,,,,CM_RAM_CONST_DATA,m,_CM_RAM_CONST_DATA,,,,CM_OTHER_MC,m,_CM_OTHER_MC,,,,CM_SOFT_WD,m,_CM_SOFT_WD,,,,CM_KESS_CRC,m,_CM_KESS_CRC,,,,CM_STAT_FLANKE,m,_CM_STAT_FLANKE,,,
r,,BYTE_25,0x0025,,,,"790125",,s,_8_Skip,,,,PuFrSanf,s,_PuFrSanf,,,,HZ_frei,s,_HZ_frei,,,,ThFrS_HZ,s,_ThFrS_HZ,,,,DL_Comfort,s,_DL_Comfort,,,,ThFrS_WW,s,_ThFrS_WW,,,,DL_Zapfen,s,_DL_Zapfen,,,,WW_Takten,s,_WW_Takten,,,
w,,BYTE_25,0x0025,,,,"790125",,m,_8_Skip,,,,PuFrSanf,m,_PuFrSanf,,,,HZ_frei,m,_HZ_frei,,,,ThFrS_HZ,m,_ThFrS_HZ,,,,DL_Comfort,m,_DL_Comfort,,,,ThFrS_WW,m,_ThFrS_WW,,,,DL_Zapfen,m,_DL_Zapfen,,,,WW_Takten,m,_WW_Takten,,,
r,,EBUS_BITS,0x0026,,,,"7A0126",,s,_8_Skip,,,,EBUS_RX,s,_EBUS_RX,,,,EBUS_RX2,s,_EBUS_RX2,,,,EBUS_TX7,s,_EBUS_TX7,,,,EBUS_TX2,s,_EBUS_TX2,,,,EBUS_TX1,s,_EBUS_TX1,,,,EBUS_MS_RT,s,_EBUS_MS_RT,,,,EBUS_MS_TR,s,_EBUS_MS_TR,,,,EBUS_TX_ANF,s,_EBUS_TX_ANF,,,
w,,EBUS_BITS,0x0026,,,,"7A0126",,m,_8_Skip,,,,EBUS_RX,m,_EBUS_RX,,,,EBUS_RX2,m,_EBUS_RX2,,,,EBUS_TX7,m,_EBUS_TX7,,,,EBUS_TX2,m,_EBUS_TX2,,,,EBUS_TX1,m,_EBUS_TX1,,,,EBUS_MS_RT,m,_EBUS_MS_RT,,,,EBUS_MS_TR,m,_EBUS_MS_TR,,,,EBUS_TX_ANF,m,_EBUS_TX_ANF,,,
r,,EB_0000,0x0027,,,,"7B0127",,s,_8_Skip,,,,GDW,s,_GDW,,,,LDW,s,_LDW,,,,FS_IN_1,s,_FS_IN_1,,,,FS_IN_2,s,_FS_IN_2,,,,FS_IN_3,s,_FS_IN_3,,,,FS_IN_4,s,_FS_IN_4,,,,DREHZ_OK,s,_DREHZ_OK,,,
w,,EB_0000,0x0027,,,,"7B0127",,m,_8_Skip,,,,GDW,m,_GDW,,,,LDW,m,_LDW,,,,FS_IN_1,m,_FS_IN_1,,,,FS_IN_2,m,_FS_IN_2,,,,FS_IN_3,m,_FS_IN_3,,,,FS_IN_4,m,_FS_IN_4,,,,DREHZ_OK,m,_DREHZ_OK,,,
r,,EB_0001,0x0028,,,,"740128",,s,_8_Skip,,,,E_EPB_INCON,s,_E_EPB_INCON,,,,SYSFAIL,s,_SYSFAIL,,,,E_S5_RESET,s,_E_S5_RESET,,,,POWERON,s,_POWERON,,,,PUWWANF,s,_PUWWANF,,,,PUHZANF,s,_PUHZANF,,,,TFE,s,_TFE,,,,STBA,s,_STBA,,,,REF_OK,s,_REF_OK,,,
w,,EB_0001,0x0028,,,,"740128",,m,_8_Skip,,,,E_EPB_INCON,m,_E_EPB_INCON,,,,SYSFAIL,m,_SYSFAIL,,,,E_S5_RESET,m,_E_S5_RESET,,,,POWERON,m,_POWERON,,,,PUWWANF,m,_PUWWANF,,,,PUHZANF,m,_PUHZANF,,,,TFE,m,_TFE,,,,STBA,m,_STBA,,,,REF_OK,m,_REF_OK,,,
r,,T_0108,0x0029,,,,"750129",,s,_8_Skip,,,,TIMEOUT,s,_TIMEOUT,,,,TWARTEVSP,s,_TWARTEVSP,,,,TZUENDSZA,s,_TZUENDSZA,,,,TSZA,s,_TSZA,,,,TFLASTAB,s,_TFLASTAB,,,,TNBL,s,_TNBL,,,,TNACHFACK,s,_TNACHFACK,,,,TFLVERZZ,s,_TFLVERZZ,,,,TZUENDVOR,s,_TZUENDVOR,,,
w,,T_0108,0x0029,,,,"750129",,m,_8_Skip,,,,TIMEOUT,m,_TIMEOUT,,,,TWARTEVSP,m,_TWARTEVSP,,,,TZUENDSZA,m,_TZUENDSZA,,,,TSZA,m,_TSZA,,,,TFLASTAB,m,_TFLASTAB,,,,TNBL,m,_TNBL,,,,TNACHFACK,m,_TNACHFACK,,,,TFLVERZZ,m,_TFLVERZZ,,,,TZUENDVOR,m,_TZUENDVOR,,,
r,,T_CALT_0108,0x002A,,,,"76012A",,s,_8_Skip,,, ,,s,_T_CALT_0108,,,
w,,T_CALT_0108,0x002A,,,,"76012A",,m,_8_Skip,,, ,,m,_T_CALT_0108,,,
r,,AB_0000,0x002B,,,,"77012B",,s,_8_Skip,,,,COMMON,s,_COMMON,,,,ZUEND,s,_ZUEND,,,,PROG_REL_1,s,_PROG_REL_1,,,,PROG_REL_2,s,_PROG_REL_2,,,,PUHZ,s,_PUHZ,,,,PROG_REL_3,s,_PROG_REL_3,,,
w,,AB_0000,0x002B,,,,"77012B",,m,_8_Skip,,,,COMMON,m,_COMMON,,,,ZUEND,m,_ZUEND,,,,PROG_REL_1,m,_PROG_REL_1,,,,PROG_REL_2,m,_PROG_REL_2,,,,PUHZ,m,_PUHZ,,,,PROG_REL_3,m,_PROG_REL_3,,,
r,,MB_0000,0x002C,,,,"70012C",,s,_8_Skip,,,,SSTANDBY,s,_SSTANDBY,,,,SRUHELDW,s,_SRUHELDW,,,,SARBLDW,s,_SARBLDW,,,,SWARTEVSP,s,_SWARTEVSP,,,,SZUENDVOR,s,_SZUENDVOR,,,,SSZA,s,_SSZA,,,,SFLASTAB,s,_SFLASTAB,,,,SREGFREI,s,_SREGFREI,,,
w,,MB_0000,0x002C,,,,"70012C",,m,_8_Skip,,,,SSTANDBY,m,_SSTANDBY,,,,SRUHELDW,m,_SRUHELDW,,,,SARBLDW,m,_SARBLDW,,,,SWARTEVSP,m,_SWARTEVSP,,,,SZUENDVOR,m,_SZUENDVOR,,,,SSZA,m,_SSZA,,,,SFLASTAB,m,_SFLASTAB,,,,SREGFREI,m,_SREGFREI,,,
r,,MB_0001,0x002D,,,,"71012D",,s,_8_Skip,,,,SNACHFACK,s,_SNACHFACK,,,,SNBL,s,_SNBL,,,,SFAULT,s,_SFAULT,,,,MFE,s,_MFE,,,,MTHGDWSTB,s,_MTHGDWSTB,,,,DUMMY,s,_DUMMY,,,,FLANKE_TNACHFACK,s,_FLANKE_TNACHFACK,,,,MV1_LAST,s,_MV1_LAST,,,,LO_KFLB,s,_LO_KFLB,,,
w,,MB_0001,0x002D,,,,"71012D",,m,_8_Skip,,,,SNACHFACK,m,_SNACHFACK,,,,SNBL,m,_SNBL,,,,SFAULT,m,_SFAULT,,,,MFE,m,_MFE,,,,MTHGDWSTB,m,_MTHGDWSTB,,,,DUMMY,m,_DUMMY,,,,FLANKE_TNACHFACK,m,_FLANKE_TNACHFACK,,,,MV1_LAST,m,_MV1_LAST,,,,LO_KFLB,m,_LO_KFLB,,,
r,,MB_0002,0x002E,,,,"72012E",,s,_8_Skip,,,,LO_FRELI,s,_LO_FRELI,,,,LO_KFLZ,s,_LO_KFLZ,,,,LO_VX_BAD,s,_LO_VX_BAD,,,,LO_STB,s,_LO_STB,,,,LO_STBA,s,_LO_STBA,,,,LO_ION,s,_LO_ION,,,,MRESTARTED,s,_MRESTARTED,,,
w,,MB_0002,0x002E,,,,"72012E",,m,_8_Skip,,,,LO_FRELI,m,_LO_FRELI,,,,LO_KFLZ,m,_LO_KFLZ,,,,LO_VX_BAD,m,_LO_VX_BAD,,,,LO_STB,m,_LO_STB,,,,LO_STBA,m,_LO_STBA,,,,LO_ION,m,_LO_ION,,,,MRESTARTED,m,_MRESTARTED,,,
r,,MB_0003,0x002F,,,,"73012F",,s,_8_Skip,,,,OPTRESTART,s,_OPTRESTART,,,,OPTNACHFAC,s,_OPTNACHFAC,,,,OPTLDW_VSP,s,_OPTLDW_VSP,,,,OPT_NGIST,s,_OPT_NGIST,,,,OPTNOLDW,s,_OPTNOLDW,,,,OPT_TC,s,_OPT_TC,,,,OPT_GDW,s,_OPT_GDW,,,,OPTNOEMERGENCYRESET,s,_OPTNOEMERGENCYRESET,,,
w,,MB_0003,0x002F,,,,"73012F",,m,_8_Skip,,,,OPTRESTART,m,_OPTRESTART,,,,OPTNACHFAC,m,_OPTNACHFAC,,,,OPTLDW_VSP,m,_OPTLDW_VSP,,,,OPT_NGIST,m,_OPT_NGIST,,,,OPTNOLDW,m,_OPTNOLDW,,,,OPT_TC,m,_OPT_TC,,,,OPT_GDW,m,_OPT_GDW,,,,OPTNOEMERGENCYRESET,m,_OPTNOEMERGENCYRESET,,,

#FS-Paras
r,,TCVSP,0x0030,,,,"6C0130",,s,_8_Skip,,, ,,s,_TCVSP,,,
w,,TCVSP,0x0030,,,,"6C0130",,m,_8_Skip,,, ,,m,_TCVSP,,,
r,,TCHZZ,0x0031,,,,"6D0131",,s,_8_Skip,,, ,,s,_TCHZZ,,,
w,,TCHZZ,0x0031,,,,"6D0131",,m,_8_Skip,,, ,,m,_TCHZZ,,,
# r,,TCSZA,0x0031,,,,"6D0131",,s,_8_Skip,,, ,,s,_TCSZA,,,                                    # Alias of TCHZZ
# w,,TCSZA,0x0031,,,,"6D0131",,m,_8_Skip,,, ,,m,_TCSZA,,,                                    # Alias of TCHZZ
r,,TCNSP,0x0032,,,,"6E0132",,s,_8_Skip,,, ,,s,_TCNSP,,,
w,,TCNSP,0x0032,,,,"6E0132",,m,_8_Skip,,, ,,m,_TCNSP,,,
r,,TCFLASTAB,0x0033,,,,"6F0133",,s,_8_Skip,,, ,,s,_TCFLASTAB,,,
w,,TCFLASTAB,0x0033,,,,"6F0133",,m,_8_Skip,,, ,,m,_TCFLASTAB,,,
r,,NG_VSP,0x0034,,,,"680134",,s,_8_Skip,,, ,,s,_NG_VSP,,,
w,,NG_VSP,0x0034,,,,"680134",,m,_8_Skip,,, ,,m,_NG_VSP,,,
r,,NG_NSP,0x0035,,,,"690135",,s,_8_Skip,,, ,,s,_NG_NSP,,,
w,,NG_NSP,0x0035,,,,"690135",,m,_8_Skip,,, ,,m,_NG_NSP,,,
r,,NG_GR_MIN,0x0036,,,,"6A0136",,s,_8_Skip,,, ,,s,_NG_GR_MIN,,,
w,,NG_GR_MIN,0x0036,,,,"6A0136",,m,_8_Skip,,, ,,m,_NG_GR_MIN,,,
r,,NG_GR_MAX,0x0037,,,,"6B0137",,s,_8_Skip,,, ,,s,_NG_GR_MAX,,,
w,,NG_GR_MAX,0x0037,,,,"6B0137",,m,_8_Skip,,, ,,m,_NG_GR_MAX,,,
r,,NG_MAX_LIMIT,0x0038,,,,"640138",,s,_8_Skip,,, ,,s,_NG_MAX_LIMIT,,,
w,,NG_MAX_LIMIT,0x0038,,,,"640138",,m,_8_Skip,,, ,,m,_NG_MAX_LIMIT,,,
r,,MXSTB_K,0x0039,,,,"650139",,s,_8_Skip,,, ,,s,_MXSTB_K,,,
w,,MXSTB_K,0x0039,,,,"650139",,m,_8_Skip,,, ,,m,_MXSTB_K,,,
r,,MXSTW_K,0x003A,,,,"66013A",,s,_8_Skip,,, ,,s,_MXSTW_K,,,
w,,MXSTW_K,0x003A,,,,"66013A",,m,_8_Skip,,, ,,m,_MXSTW_K,,,
r,,ION_ON,0x003B,,,,"67013B",,s,_8_Skip,,, ,,s,_ION_ON,,,
w,,ION_ON,0x003B,,,,"67013B",,m,_8_Skip,,, ,,m,_ION_ON,,,
r,,ION_OFF,0x003C,,,,"60013C",,s,_8_Skip,,, ,,s,_ION_OFF,,,
w,,ION_OFF,0x003C,,,,"60013C",,m,_8_Skip,,, ,,m,_ION_OFF,,,
r,,LIM_ION_FLASTAB,0x003D,,,,"61013D",,s,_8_Skip,,, ,,s,_LIM_ION_FLASTAB,,,
w,,LIM_ION_FLASTAB,0x003D,,,,"61013D",,m,_8_Skip,,, ,,m,_LIM_ION_FLASTAB,,,
r,,TC_PRUEF_V1,0x003E,,,,"62013E",,s,_8_Skip,,, ,,s,_TC_PRUEF_V1,,,
w,,TC_PRUEF_V1,0x003E,,,,"62013E",,m,_8_Skip,,, ,,m,_TC_PRUEF_V1,,,
r,,TC_PRUEF_V2,0x003F,,,,"63013F",,s,_8_Skip,,, ,,s,_TC_PRUEF_V2,,,
w,,TC_PRUEF_V2,0x003F,,,,"63013F",,m,_8_Skip,,, ,,m,_TC_PRUEF_V2,,,
r,,P_LPG,0x0040,,,,"1C0140",,s,_8_Skip,,, ,,s,_P_LPG,,,
w,,P_LPG,0x0040,,,,"1C0140",,m,_8_Skip,,, ,,m,_P_LPG,,,
r,,KASK_P_ANHEB,0x0041,,,,"1D0141",,s,_8_Skip,,, ,,s,_KASK_P_ANHEB,,,
w,,KASK_P_ANHEB,0x0041,,,,"1D0141",,m,_8_Skip,,, ,,m,_KASK_P_ANHEB,,,
r,,KLAPPE_P_ANHEB,0x0042,,,,"1E0142",,s,_8_Skip,,, ,,s,_KLAPPE_P_ANHEB,,,
w,,KLAPPE_P_ANHEB,0x0042,,,,"1E0142",,m,_8_Skip,,, ,,m,_KLAPPE_P_ANHEB,,,
r,,MAXGFASTART,0x0043,,,,"1F0143",,s,_8_Skip,,, ,,s,_MAXGFASTART,,,
w,,MAXGFASTART,0x0043,,,,"1F0143",,m,_8_Skip,,, ,,m,_MAXGFASTART,,,
r,,NG_BR_MIN,0x0044,,,,"180144",,s,_8_Skip,,, ,,s,_NG_BR_MIN,,,
w,,NG_BR_MIN,0x0044,,,,"180144",,m,_8_Skip,,, ,,m,_NG_BR_MIN,,,
r,,EE_CONST_CRC,0x0045,,,,"190145",,s,_8_Skip,,, ,,s,_EE_CONST_CRC,,,
w,,EE_CONST_CRC,0x0045,,,,"190145",,m,_8_Skip,,, ,,m,_EE_CONST_CRC,,,

r,,T_CNT_0001,0x0046,,,,"1A0146",,s,_8_Skip,,, ,,s,_T_CNT_0001,,,
w,,T_CNT_0001,0x0046,,,,"1A0146",,m,_8_Skip,,, ,,m,_T_CNT_0001,,,
r,,T_CNT_0002,0x0047,,,,"1B0147",,s,_8_Skip,,, ,,s,_T_CNT_0002,,,
w,,T_CNT_0002,0x0047,,,,"1B0147",,m,_8_Skip,,, ,,m,_T_CNT_0002,,,
r,,T_CNT_0003,0x0048,,,,"140148",,s,_8_Skip,,, ,,s,_T_CNT_0003,,,
w,,T_CNT_0003,0x0048,,,,"140148",,m,_8_Skip,,, ,,m,_T_CNT_0003,,,
r,,T_CNT_0004,0x0049,,,,"150149",,s,_8_Skip,,, ,,s,_T_CNT_0004,,,
w,,T_CNT_0004,0x0049,,,,"150149",,m,_8_Skip,,, ,,m,_T_CNT_0004,,,
r,,T_CNT_0005,0x004A,,,,"16014A",,s,_8_Skip,,, ,,s,_T_CNT_0005,,,
w,,T_CNT_0005,0x004A,,,,"16014A",,m,_8_Skip,,, ,,m,_T_CNT_0005,,,
r,,T_CNT_0006,0x004B,,,,"17014B",,s,_8_Skip,,, ,,s,_T_CNT_0006,,,
w,,T_CNT_0006,0x004B,,,,"17014B",,m,_8_Skip,,, ,,m,_T_CNT_0006,,,
r,,T_CNT_0007,0x004C,,,,"10014C",,s,_8_Skip,,, ,,s,_T_CNT_0007,,,
w,,T_CNT_0007,0x004C,,,,"10014C",,m,_8_Skip,,, ,,m,_T_CNT_0007,,,
r,,T_CNT_0008,0x004D,,,,"11014D",,s,_8_Skip,,, ,,s,_T_CNT_0008,,,
w,,T_CNT_0008,0x004D,,,,"11014D",,m,_8_Skip,,, ,,m,_T_CNT_0008,,,
r,,T_CNT_0009,0x004E,,,,"12014E",,s,_8_Skip,,, ,,s,_T_CNT_0009,,,
w,,T_CNT_0009,0x004E,,,,"12014E",,m,_8_Skip,,, ,,m,_T_CNT_0009,,,
r,,EPIONNULL,0x004F,,,,"13014F",,s,_8_Skip,,, ,,s,_EPIONNULL,,,
w,,EPIONNULL,0x004F,,,,"13014F",,m,_8_Skip,,, ,,m,_EPIONNULL,,,
r,,S5_DAT_CRC,0x0050,,,,"0C0150",,s,_8_Skip,,, ,,s,_S5_DAT_CRC,,,
w,,S5_DAT_CRC,0x0050,,,,"0C0150",,m,_8_Skip,,, ,,m,_S5_DAT_CRC,,,
r,,MB_2_ALT,0x0051,,,,"0D0151",,s,_8_Skip,,, ,,s,_MB_2_ALT,,,
w,,MB_2_ALT,0x0051,,,,"0D0151",,m,_8_Skip,,, ,,m,_MB_2_ALT,,,
r,,BE1_50HZ_CNT,0x0052,,,,"0E0152",,s,_8_Skip,,, ,,s,_BE1_50HZ_CNT,,,
w,,BE1_50HZ_CNT,0x0052,,,,"0E0152",,m,_8_Skip,,, ,,m,_BE1_50HZ_CNT,,,
r,,BE2_50HZ_CNT,0x0053,,,,"0F0153",,s,_8_Skip,,, ,,s,_BE2_50HZ_CNT,,,
w,,BE2_50HZ_CNT,0x0053,,,,"0F0153",,m,_8_Skip,,, ,,m,_BE2_50HZ_CNT,,,
r,,BE3_50HZ_CNT,0x0054,,,,"080154",,s,_8_Skip,,, ,,s,_BE3_50HZ_CNT,,,
w,,BE3_50HZ_CNT,0x0054,,,,"080154",,m,_8_Skip,,, ,,m,_BE3_50HZ_CNT,,,
r,,BE4_50HZ_CNT,0x0055,,,,"090155",,s,_8_Skip,,, ,,s,_BE4_50HZ_CNT,,,
w,,BE4_50HZ_CNT,0x0055,,,,"090155",,m,_8_Skip,,, ,,m,_BE4_50HZ_CNT,,,
r,,BE5_50HZ_CNT,0x0056,,,,"0A0156",,s,_8_Skip,,, ,,s,_BE5_50HZ_CNT,,,
w,,BE5_50HZ_CNT,0x0056,,,,"0A0156",,m,_8_Skip,,, ,,m,_BE5_50HZ_CNT,,,
r,,BE6_50HZ_CNT,0x0057,,,,"0B0157",,s,_8_Skip,,, ,,s,_BE6_50HZ_CNT,,,
w,,BE6_50HZ_CNT,0x0057,,,,"0B0157",,m,_8_Skip,,, ,,m,_BE6_50HZ_CNT,,,
r,,BE7_50HZ_CNT,0x0058,,,,"040158",,s,_8_Skip,,, ,,s,_BE7_50HZ_CNT,,,
w,,BE7_50HZ_CNT,0x0058,,,,"040158",,m,_8_Skip,,, ,,m,_BE7_50HZ_CNT,,,
r,,BE8_50HZ_CNT,0x0059,,,,"050159",,s,_8_Skip,,, ,,s,_BE8_50HZ_CNT,,,
w,,BE8_50HZ_CNT,0x0059,,,,"050159",,m,_8_Skip,,, ,,m,_BE8_50HZ_CNT,,,
# r,,NGIST_CNT,0x0059,,,,"050159",,s,_8_Skip,,, ,,s,_NGIST_CNT,,,                            # Alias of BE8_50HZ_CNT
# w,,NGIST_CNT,0x0059,,,,"050159",,m,_8_Skip,,, ,,m,_NGIST_CNT,,,                            # Alias of BE8_50HZ_CNT
r,,RES_CYCL_CNT,0x005A,,,,"06015A",,s,_8_Skip,,, ,,s,_RES_CYCL_CNT,,,
w,,RES_CYCL_CNT,0x005A,,,,"06015A",,m,_8_Skip,,, ,,m,_RES_CYCL_CNT,,,
r,,RES_CNT,0x005B,,,,"07015B",,s,_8_Skip,,, ,,s,_RES_CNT,,,
w,,RES_CNT,0x005B,,,,"07015B",,m,_8_Skip,,, ,,m,_RES_CNT,,,
r,,RES_CNT_INV,0x005C,,,,"00015C",,s,_8_Skip,,, ,,s,_RES_CNT_INV,,,
w,,RES_CNT_INV,0x005C,,,,"00015C",,m,_8_Skip,,, ,,m,_RES_CNT_INV,,,
r,,TVISTAD,0x005D,,,,"01015D",,s,_8_Skip,,, ,,s,_TVISTAD,,,
w,,TVISTAD,0x005D,,,,"01015D",,m,_8_Skip,,, ,,m,_TVISTAD,,,
r,,T_ESTB2,0x005E,,,,"02015E",,s,_8_Skip,,, ,,s,_T_ESTB2,,,
w,,T_ESTB2,0x005E,,,,"02015E",,m,_8_Skip,,, ,,m,_T_ESTB2,,,
r,,Z_ION,0x005F,,,,"03015F",,s,_8_Skip,,, ,,s,_Z_ION,,,
w,,Z_ION,0x005F,,,,"03015F",,m,_8_Skip,,, ,,m,_Z_ION,,,
r,,AB_0000_ALT,0x0060,,,,"3C0160",,s,_8_Skip,,, ,,s,_AB_0000_ALT,,,
w,,AB_0000_ALT,0x0060,,,,"3C0160",,m,_8_Skip,,, ,,m,_AB_0000_ALT,,,
r,,TH1_2,0x0061,,,,"3D0161",,s,_8_Skip,,, ,,s,_TH1_2,,,
w,,TH1_2,0x0061,,,,"3D0161",,m,_8_Skip,,, ,,m,_TH1_2,,,
r,,TRLIST,0x0062,,,,"3E0162",,s,_8_Skip,,, ,,s,_TRLIST,,,
w,,TRLIST,0x0062,,,,"3E0162",,m,_8_Skip,,, ,,m,_TRLIST,,,
r,,TABGAS,0x0063,,,,"3F0163",,s,_8_Skip,,, ,,s,_TABGAS,,,
w,,TABGAS,0x0063,,,,"3F0163",,m,_8_Skip,,, ,,m,_TABGAS,,,
r,,CNTBOOSTER,0x0064,,,,"380164",,s,_8_Skip,,, ,,s,_CNTBOOSTER,,,
w,,CNTBOOSTER,0x0064,,,,"380164",,m,_8_Skip,,, ,,m,_CNTBOOSTER,,,
r,,F_CODE,0x0065,,,,"390165",,s,_8_Skip,,, ,,s,_F_CODE,,,
w,,F_CODE,0x0065,,,,"390165",,m,_8_Skip,,, ,,m,_F_CODE,,,
r,,ANAIN4,0x0066,,,,"3A0166",,s,_8_Skip,,, ,,s,_ANAIN4,,,
w,,ANAIN4,0x0066,,,,"3A0166",,m,_8_Skip,,, ,,m,_ANAIN4,,,
r,,SMON_TIMEOUT,0x0067,,,,"3B0167",,s,_8_Skip,,, ,,s,_SMON_TIMEOUT,,,
w,,SMON_TIMEOUT,0x0067,,,,"3B0167",,m,_8_Skip,,, ,,m,_SMON_TIMEOUT,,,
r,,TVIST,0x0068,,,,"340168",,s,_8_Skip,,, ,,s,_TVIST,,,
w,,TVIST,0x0068,,,,"340168",,m,_8_Skip,,, ,,m,_TVIST,,,
r,,V24_CCMD,0x0069,,,,"350169",,s,_8_Skip,,, ,,s,_V24_CCMD,,,
w,,V24_CCMD,0x0069,,,,"350169",,m,_8_Skip,,, ,,m,_V24_CCMD,,,
r,,TWWIST,0x006A,,,,"36016A",,s,_8_Skip,,, ,,s,_TWWIST,,,
w,,TWWIST,0x006A,,,,"36016A",,m,_8_Skip,,, ,,m,_TWWIST,,,
r,,V24_IADR,0x006B,,,,"37016B",,s,_8_Skip,,, ,,s,_V24_IADR,,,
w,,V24_IADR,0x006B,,,,"37016B",,m,_8_Skip,,, ,,m,_V24_IADR,,,
r,,TAUSSEN,0x006C,,,,"30016C",,s,_8_Skip,,, ,,s,_TAUSSEN,,,
w,,TAUSSEN,0x006C,,,,"30016C",,m,_8_Skip,,, ,,m,_TAUSSEN,,,
r,,V24_RXCNT1MS,0x006D,,,,"31016D",,s,_8_Skip,,, ,,s,_V24_RXCNT1MS,,,
w,,V24_RXCNT1MS,0x006D,,,,"31016D",,m,_8_Skip,,, ,,m,_V24_RXCNT1MS,,,
r,,TVSOLL,0x006E,,,,"32016E",,s,_8_Skip,,, ,,s,_TVSOLL,,,
w,,TVSOLL,0x006E,,,,"32016E",,m,_8_Skip,,, ,,m,_TVSOLL,,,
r,,TWWSOLL_HS,0x006F,,,,"33016F",,s,_8_Skip,,, ,,s,_TWWSOLL_HS,,,
w,,TWWSOLL_HS,0x006F,,,,"33016F",,m,_8_Skip,,, ,,m,_TWWSOLL_HS,,,
r,,KESZUST,0x0070,,,,"2C0170",,s,_8_Skip,,, ,,s,_KESZUST,,,
w,,KESZUST,0x0070,,,,"2C0170",,m,_8_Skip,,, ,,m,_KESZUST,,,
r,,TAUSS_HS,0x0071,,,,"2D0171",,s,_8_Skip,,, ,,s,_TAUSS_HS,,,
w,,TAUSS_HS,0x0071,,,,"2D0171",,m,_8_Skip,,, ,,m,_TAUSS_HS,,,
r,,HZZUSTBM,0x0072,,,,"2E0172",,s,_8_Skip,,, ,,s,_HZZUSTBM,,,
w,,HZZUSTBM,0x0072,,,,"2E0172",,m,_8_Skip,,, ,,m,_HZZUSTBM,,,
r,,V24_TXCNT,0x0073,,,,"2F0173",,s,_8_Skip,,, ,,s,_V24_TXCNT,,,
w,,V24_TXCNT,0x0073,,,,"2F0173",,m,_8_Skip,,, ,,m,_V24_TXCNT,,,
r,,WWZUSTBM,0x0074,,,,"280174",,s,_8_Skip,,, ,,s,_WWZUSTBM,,,
w,,WWZUSTBM,0x0074,,,,"280174",,m,_8_Skip,,, ,,m,_WWZUSTBM,,,
r,,WWZUSTKM,0x0075,,,,"290175",,s,_8_Skip,,, ,,s,_WWZUSTKM,,,
w,,WWZUSTKM,0x0075,,,,"290175",,m,_8_Skip,,, ,,m,_WWZUSTKM,,,
r,,V24_ODAT,0x0076,,,,"2A0176",,s,_8_Skip,,, ,,s,_V24_ODAT,,,
w,,V24_ODAT,0x0076,,,,"2A0176",,m,_8_Skip,,, ,,m,_V24_ODAT,,,
r,,NGIST,0x0077,,,,"2B0177",,s,_8_Skip,,, ,,s,_NGIST,,,
w,,NGIST,0x0077,,,,"2B0177",,m,_8_Skip,,, ,,m,_NGIST,,,
r,,NGSOLL,0x0078,,,,"240178",,s,_8_Skip,,, ,,s,_NGSOLL,,,
w,,NGSOLL,0x0078,,,,"240178",,m,_8_Skip,,, ,,m,_NGSOLL,,,
r,,ICL100MSEC,0x0079,,,,"250179",,s,_8_Skip,,, ,,s,_ICL100MSEC,,,
w,,ICL100MSEC,0x0079,,,,"250179",,m,_8_Skip,,, ,,m,_ICL100MSEC,,,
r,,ICL20SEC,0x007A,,,,"26017A",,s,_8_Skip,,, ,,s,_ICL20SEC,,,
w,,ICL20SEC,0x007A,,,,"26017A",,m,_8_Skip,,, ,,m,_ICL20SEC,,,
r,,ICL1HRS,0x007B,,,,"27017B",,s,_8_Skip,,, ,,s,_ICL1HRS,,,
w,,ICL1HRS,0x007B,,,,"27017B",,m,_8_Skip,,, ,,m,_ICL1HRS,,,
r,,CNTGDWOSZ,0x007C,,,,"20017C",,s,_8_Skip,,, ,,s,_CNTGDWOSZ,,,
w,,CNTGDWOSZ,0x007C,,,,"20017C",,m,_8_Skip,,, ,,m,_CNTGDWOSZ,,,
r,,S5_ERR_CODE,0x007D,,,,"21017D",,s,_8_Skip,,, ,,s,_S5_ERR_CODE,,,
w,,S5_ERR_CODE,0x007D,,,,"21017D",,m,_8_Skip,,, ,,m,_S5_ERR_CODE,,,
r,,YPWM,0x007E,,,,"22017E",,s,_8_Skip,,, ,,s,_YPWM,,,
w,,YPWM,0x007E,,,,"22017E",,m,_8_Skip,,, ,,m,_YPWM,,,
r,,STACK,0x0080,,,,"DC0180",,s,_8_Skip,,, ,,s,_STACK,,,
w,,STACK,0x0080,,,,"DC0180",,m,_8_Skip,,, ,,m,_STACK,,,

#NFS-Paras
#r,,IRAEPKANF,0x00AB,,,,"F701AB",,s,_8_Skip,,, ,,s,_IRAEPKANF,,,
#w,,IRAEPKANF,0x00AB,,,,"F701AB",,m,_8_Skip,,, ,,m,_IRAEPKANF,,,
r,,MAXTVSOLL,0x00AB,,,,"F701AB",,s,_8_Skip,,, ,,s,_MAXTVSOLL,,,                            # Alias of IRAEPKANF
w,,MAXTVSOLL,0x00AB,,,,"F701AB",,m,_8_Skip,,, ,,m,_MAXTVSOLL,,,                            # Alias of IRAEPKANF
r,,MINTVSOLL,0x00AC,,,,"F001AC",,s,_8_Skip,,, ,,s,_MINTVSOLL,,,
w,,MINTVSOLL,0x00AC,,,,"F001AC",,m,_8_Skip,,, ,,m,_MINTVSOLL,,,
r,,HZ_HYS,0x00AD,,,,"F101AD",,s,_8_Skip,,, ,,s,_HZ_HYS,,,
w,,HZ_HYS,0x00AD,,,,"F101AD",,m,_8_Skip,,, ,,m,_HZ_HYS,,,
r,,TBRMINOFF,0x00AE,,,,"F201AE",,s,_8_Skip,,, ,,s,_TBRMINOFF,,,
w,,TBRMINOFF,0x00AE,,,,"F201AE",,m,_8_Skip,,, ,,m,_TBRMINOFF,,,
r,,TC_SOFTSTART,0x00AF,,,,"F301AF",,s,_8_Skip,,, ,,s,_TC_SOFTSTART,,,
w,,TC_SOFTSTART,0x00AF,,,,"F301AF",,m,_8_Skip,,, ,,m,_TC_SOFTSTART,,,
r,,HZ_KP,0x00B0,,,,"EC01B0",,s,_8_Skip,,, ,,s,_HZ_KP,,,
w,,HZ_KP,0x00B0,,,,"EC01B0",,m,_8_Skip,,, ,,m,_HZ_KP,,,
r,,HZ_KTND,0x00B1,,,,"ED01B1",,s,_8_Skip,,, ,,s,_HZ_KTND,,,
w,,HZ_KTND,0x00B1,,,,"ED01B1",,m,_8_Skip,,, ,,m,_HZ_KTND,,,
r,,SONDERNIVEAU,0x00B2,,,,"EE01B2",,s,_8_Skip,,, ,,s,_SONDERNIVEAU,,,
w,,SONDERNIVEAU,0x00B2,,,,"EE01B2",,m,_8_Skip,,, ,,m,_SONDERNIVEAU,,,
r,,TAUSS_KORREKTUR,0x00B3,,,,"EF01B3",,s,_8_Skip,,, ,,s,_TAUSS_KORREKTUR,,,
w,,TAUSS_KORREKTUR,0x00B3,,,,"EF01B3",,m,_8_Skip,,, ,,m,_TAUSS_KORREKTUR,,,
r,,WARTUNGSINTERVALL,0x00B4,,,,"E801B4",,s,_8_Skip,,, ,,s,_WARTUNGSINTERVALL,,,
w,,WARTUNGSINTERVALL,0x00B4,,,,"E801B4",,m,_8_Skip,,, ,,m,_WARTUNGSINTERVALL,,,
r,,MX_DREHZ_KESSEL,0x00B5,,,,"E901B5",,s,_8_Skip,,, ,,s,_MX_DREHZ_KESSEL,,,
w,,MX_DREHZ_KESSEL,0x00B5,,,,"E901B5",,m,_8_Skip,,, ,,m,_MX_DREHZ_KESSEL,,,
r,,NG_ZUEND,0x00B6,,,,"EA01B6",,s,_8_Skip,,, ,,s,_NG_ZUEND,,,
w,,NG_ZUEND,0x00B6,,,,"EA01B6",,m,_8_Skip,,, ,,m,_NG_ZUEND,,,
r,,KESSEL_VARIANTE,0x00B7,,,,"EB01B7",,s,_8_Skip,,, ,,s,_KESSEL_VARIANTE,,,
w,,KESSEL_VARIANTE,0x00B7,,,,"EB01B7",,m,_8_Skip,,, ,,m,_KESSEL_VARIANTE,,,
r,,MXGRADTVIST,0x00B8,,,,"E401B8",,s,_8_Skip,,, ,,s,_MXGRADTVIST,,,
w,,MXGRADTVIST,0x00B8,,,,"E401B8",,m,_8_Skip,,, ,,m,_MXGRADTVIST,,,
r,,MXTABGAS,0x00B9,,,,"E501B9",,s,_8_Skip,,, ,,s,_MXTABGAS,,,
w,,MXTABGAS,0x00B9,,,,"E501B9",,m,_8_Skip,,, ,,m,_MXTABGAS,,,
r,,TOL_TIME,0x00BA,,,,"E601BA",,s,_8_Skip,,, ,,s,_TOL_TIME,,,
w,,TOL_TIME,0x00BA,,,,"E601BA",,m,_8_Skip,,, ,,m,_TOL_TIME,,,
r,,NG_DGESCHW,0x00BB,,,,"E701BB",,s,_8_Skip,,, ,,s,_NG_DGESCHW,,,
w,,NG_DGESCHW,0x00BB,,,,"E701BB",,m,_8_Skip,,, ,,m,_NG_DGESCHW,,,
r,,NG_INCR_DECR,0x00BC,,,,"E001BC",,s,_8_Skip,,, ,,s,_NG_INCR_DECR,,,
w,,NG_INCR_DECR,0x00BC,,,,"E001BC",,m,_8_Skip,,, ,,m,_NG_INCR_DECR,,,
r,,NG_HZ_MIN,0x00BD,,,,"E101BD",,s,_8_Skip,,, ,,s,_NG_HZ_MIN,,,
w,,NG_HZ_MIN,0x00BD,,,,"E101BD",,m,_8_Skip,,, ,,m,_NG_HZ_MIN,,,
r,,NG_HZ_FREI,0x00BE,,,,"E201BE",,s,_8_Skip,,, ,,s,_NG_HZ_FREI,,,
w,,NG_HZ_FREI,0x00BE,,,,"E201BE",,m,_8_Skip,,, ,,m,_NG_HZ_FREI,,,
r,,NG_HZ_MAX,0x00BF,,,,"E301BF",,s,_8_Skip,,, ,,s,_NG_HZ_MAX,,,
w,,NG_HZ_MAX,0x00BF,,,,"E301BF",,m,_8_Skip,,, ,,m,_NG_HZ_MAX,,,
r,,PUHZ_VSP,0x00C0,,,,"9C01C0",,s,_8_Skip,,, ,,s,_PUHZ_VSP,,,
w,,PUHZ_VSP,0x00C0,,,,"9C01C0",,m,_8_Skip,,, ,,m,_PUHZ_VSP,,,
r,,PUHZ_MIN,0x00C1,,,,"9D01C1",,s,_8_Skip,,, ,,s,_PUHZ_MIN,,,
w,,PUHZ_MIN,0x00C1,,,,"9D01C1",,m,_8_Skip,,, ,,m,_PUHZ_MIN,,,
r,,PUHZ_MAX,0x00C2,,,,"9E01C2",,s,_8_Skip,,, ,,s,_PUHZ_MAX,,,
w,,PUHZ_MAX,0x00C2,,,,"9E01C2",,m,_8_Skip,,, ,,m,_PUHZ_MAX,,,
r,,PUHZ_DT_REG,0x00C3,,,,"9F01C3",,s,_8_Skip,,, ,,s,_PUHZ_DT_REG,,,
w,,PUHZ_DT_REG,0x00C3,,,,"9F01C3",,m,_8_Skip,,, ,,m,_PUHZ_DT_REG,,,
r,,PU_TAKT,0x00C4,,,,"9801C4",,s,_8_Skip,,, ,,s,_PU_TAKT,,,
w,,PU_TAKT,0x00C4,,,,"9801C4",,m,_8_Skip,,, ,,m,_PU_TAKT,,,
r,,DT_VLRL_SOLL,0x00C5,,,,"9901C5",,s,_8_Skip,,, ,,s,_DT_VLRL_SOLL,,,
w,,DT_VLRL_SOLL,0x00C5,,,,"9901C5",,m,_8_Skip,,, ,,m,_DT_VLRL_SOLL,,,
r,,DT_VLRL_MAX,0x00C6,,,,"9A01C6",,s,_8_Skip,,, ,,s,_DT_VLRL_MAX,,,
w,,DT_VLRL_MAX,0x00C6,,,,"9A01C6",,m,_8_Skip,,, ,,m,_DT_VLRL_MAX,,,
r,,DT_VL_ESTB2_MAX,0x00C7,,,,"9B01C7",,s,_8_Skip,,, ,,s,_DT_VL_ESTB2_MAX,,,
w,,DT_VL_ESTB2_MAX,0x00C7,,,,"9B01C7",,m,_8_Skip,,, ,,m,_DT_VL_ESTB2_MAX,,,
r,,PNL_HZ,0x00C8,,,,"9401C8",,s,_8_Skip,,, ,,s,_PNL_HZ,,,
w,,PNL_HZ,0x00C8,,,,"9401C8",,m,_8_Skip,,, ,,m,_PNL_HZ,,,
r,,MAXWWSOLL,0x00C9,,,,"9501C9",,s,_8_Skip,,, ,,s,_MAXWWSOLL,,,
w,,MAXWWSOLL,0x00C9,,,,"9501C9",,m,_8_Skip,,, ,,m,_MAXWWSOLL,,,
r,,MINWWSOLL,0x00CA,,,,"9601CA",,s,_8_Skip,,, ,,s,_MINWWSOLL,,,
w,,MINWWSOLL,0x00CA,,,,"9601CA",,m,_8_Skip,,, ,,m,_MINWWSOLL,,,
r,,WW_HYS,0x00CB,,,,"9701CB",,s,_8_Skip,,, ,,s,_WW_HYS,,,
w,,WW_HYS,0x00CB,,,,"9701CB",,m,_8_Skip,,, ,,m,_WW_HYS,,,
r,,TWWPLUS,0x00CC,,,,"9001CC",,s,_8_Skip,,, ,,s,_TWWPLUS,,,
w,,TWWPLUS,0x00CC,,,,"9001CC",,m,_8_Skip,,, ,,m,_TWWPLUS,,,
r,,NG_WW_MIN,0x00CD,,,,"9101CD",,s,_8_Skip,,, ,,s,_NG_WW_MIN,,,
w,,NG_WW_MIN,0x00CD,,,,"9101CD",,m,_8_Skip,,, ,,m,_NG_WW_MIN,,,
r,,NG_WW_FREI,0x00CE,,,,"9201CE",,s,_8_Skip,,, ,,s,_NG_WW_FREI,,,
w,,NG_WW_FREI,0x00CE,,,,"9201CE",,m,_8_Skip,,, ,,m,_NG_WW_FREI,,,
r,,NG_WW_MAX,0x00CF,,,,"9301CF",,s,_8_Skip,,, ,,s,_NG_WW_MAX,,,
w,,NG_WW_MAX,0x00CF,,,,"9301CF",,m,_8_Skip,,, ,,m,_NG_WW_MAX,,,
r,,PUHZ_WW,0x00D0,,,,"8C01D0",,s,_8_Skip,,, ,,s,_PUHZ_WW,,,
w,,PUHZ_WW,0x00D0,,,,"8C01D0",,m,_8_Skip,,, ,,m,_PUHZ_WW,,,
r,,PNL_WW,0x00D1,,,,"8D01D1",,s,_8_Skip,,, ,,s,_PNL_WW,,,
w,,PNL_WW,0x00D1,,,,"8D01D1",,m,_8_Skip,,, ,,m,_PNL_WW,,,
r,,TFRS_A,0x00D2,,,,"8E01D2",,s,_8_Skip,,, ,,s,_TFRS_A,,,
w,,TFRS_A,0x00D2,,,,"8E01D2",,m,_8_Skip,,, ,,m,_TFRS_A,,,
r,,NG_KP,0x00D3,,,,"8F01D3",,s,_8_Skip,,, ,,s,_NG_KP,,,
w,,NG_KP,0x00D3,,,,"8F01D3",,m,_8_Skip,,, ,,m,_NG_KP,,,
r,,NG_KTN,0x00D4,,,,"8801D4",,s,_8_Skip,,, ,,s,_NG_KTN,,,
w,,NG_KTN,0x00D4,,,,"8801D4",,m,_8_Skip,,, ,,m,_NG_KTN,,,
r,,NG_REG_ANPASS,0x00D5,,,,"8901D5",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS,,,
w,,NG_REG_ANPASS,0x00D5,,,,"8901D5",,m,_8_Skip,,, ,,m,_NG_REG_ANPASS,,,
r,,SEL_IN_1_2,0x00D6,,,,"8A01D6",,s,_8_Skip,,, ,,s,_SEL_IN_1_2,,,
w,,SEL_IN_1_2,0x00D6,,,,"8A01D6",,m,_8_Skip,,, ,,m,_SEL_IN_1_2,,,
r,,SEL_IN_3_4,0x00D7,,,,"8B01D7",,s,_8_Skip,,, ,,s,_SEL_IN_3_4,,,
w,,SEL_IN_3_4,0x00D7,,,,"8B01D7",,m,_8_Skip,,, ,,m,_SEL_IN_3_4,,,
r,,SEL_PR_1_2,0x00D8,,,,"8401D8",,s,_8_Skip,,, ,,s,_SEL_PR_1_2,,,
w,,SEL_PR_1_2,0x00D8,,,,"8401D8",,m,_8_Skip,,, ,,m,_SEL_PR_1_2,,,
r,,SEL_PR_3_4,0x00D9,,,,"8501D9",,s,_8_Skip,,, ,,s,_SEL_PR_3_4,,,
w,,SEL_PR_3_4,0x00D9,,,,"8501D9",,m,_8_Skip,,, ,,m,_SEL_PR_3_4,,,
r,,KLAPPENLAUFZEIT,0x00DA,,,,"8601DA",,s,_8_Skip,,, ,,s,_KLAPPENLAUFZEIT,,,
w,,KLAPPENLAUFZEIT,0x00DA,,,,"8601DA",,m,_8_Skip,,, ,,m,_KLAPPENLAUFZEIT,,,
r,,PARA_DT_WEICHE_VL,0x00DB,,,,"8701DB",,s,_8_Skip,,, ,,s,_PARA_DT_WEICHE_VL,,,
w,,PARA_DT_WEICHE_VL,0x00DB,,,,"8701DB",,m,_8_Skip,,, ,,m,_PARA_DT_WEICHE_VL,,,
r,,V24_KM_ADR,0x00DC,,,,"8001DC",,s,_8_Skip,,, ,,s,_V24_KM_ADR,,,
w,,V24_KM_ADR,0x00DC,,,,"8001DC",,m,_8_Skip,,, ,,m,_V24_KM_ADR,,,
r,,KESS_OPT,0x00DD,,,,"8101DD",,s,_8_Skip,,, ,,s,_KESS_OPT,,,
w,,KESS_OPT,0x00DD,,,,"8101DD",,m,_8_Skip,,, ,,m,_KESS_OPT,,,
r,,KESS_OPT_2,0x00DE,,,,"8201DE",,s,_8_Skip,,, ,,s,_KESS_OPT_2,,,
w,,KESS_OPT_2,0x00DE,,,,"8201DE",,m,_8_Skip,,, ,,m,_KESS_OPT_2,,,
r,,KESS_BITS,0x00DF,,,,"8301DF",,s,_8_Skip,,, ,,s,_KESS_BITS,,,
w,,KESS_BITS,0x00DF,,,,"8301DF",,m,_8_Skip,,, ,,m,_KESS_BITS,,,
r,,REF_KORR,0x00E0,,,,"BC01E0",,s,_8_Skip,,, ,,s,_REF_KORR,,,
w,,REF_KORR,0x00E0,,,,"BC01E0",,m,_8_Skip,,, ,,m,_REF_KORR,,,
r,,KES_DAT_CRC,0x00E1,,,,"BD01E1",,s,_8_Skip,,, ,,s,_KES_DAT_CRC,,,
w,,KES_DAT_CRC,0x00E1,,,,"BD01E1",,m,_8_Skip,,, ,,m,_KES_DAT_CRC,,,


r,,AIN_FS_ERR_MASK,0x00E2,,,,"BE01E2",,s,_8_Skip,,, ,,s,_AIN_FS_ERR_MASK,,,
w,,AIN_FS_ERR_MASK,0x00E2,,,,"BE01E2",,m,_8_Skip,,, ,,m,_AIN_FS_ERR_MASK,,,
r,,ERR_MERK_ALT,0x00E3,,,,"BF01E3",,s,_8_Skip,,, ,,s,_ERR_MERK_ALT,,,
w,,ERR_MERK_ALT,0x00E3,,,,"BF01E3",,m,_8_Skip,,, ,,m,_ERR_MERK_ALT,,,
r,,F_CODE_ALT,0x00E4,,,,"B801E4",,s,_8_Skip,,, ,,s,_F_CODE_ALT,,,
w,,F_CODE_ALT,0x00E4,,,,"B801E4",,m,_8_Skip,,, ,,m,_F_CODE_ALT,,,
r,,ROM_DPH,0x00E5,,,,"B901E5",,s,_8_Skip,,, ,,s,_ROM_DPH,,,
w,,ROM_DPH,0x00E5,,,,"B901E5",,m,_8_Skip,,, ,,m,_ROM_DPH,,,
r,,ROM_DPL,0x00E6,,,,"BA01E6",,s,_8_Skip,,, ,,s,_ROM_DPL,,,
w,,ROM_DPL,0x00E6,,,,"BA01E6",,m,_8_Skip,,, ,,m,_ROM_DPL,,,
r,,ROM_H,0x00E7,,,,"BB01E7",,s,_8_Skip,,, ,,s,_ROM_H,,,
w,,ROM_H,0x00E7,,,,"BB01E7",,m,_8_Skip,,, ,,m,_ROM_H,,,
r,,ROM_L,0x00E8,,,,"B401E8",,s,_8_Skip,,, ,,s,_ROM_L,,,
w,,ROM_L,0x00E8,,,,"B401E8",,m,_8_Skip,,, ,,m,_ROM_L,,,
r,,V24_SCOM_ADR,0x00E9,,,,"B501E9",,s,_8_Skip,,, ,,s,_V24_SCOM_ADR,,,
w,,V24_SCOM_ADR,0x00E9,,,,"B501E9",,m,_8_Skip,,, ,,m,_V24_SCOM_ADR,,,
r,,S5STEP,0x00EA,,,,"B601EA",,s,_8_Skip,,, ,,s,_S5STEP,,,
w,,S5STEP,0x00EA,,,,"B601EA",,m,_8_Skip,,, ,,m,_S5STEP,,,
r,,NGXW1,0x00EC,,,,"B001EC",,s,_8_Skip,,, ,,s,_NGXW1,,,
w,,NGXW1,0x00EC,,,,"B001EC",,m,_8_Skip,,, ,,m,_NGXW1,,,
r,,PUHZPWM,0x00ED,,,,"B101ED",,s,_8_Skip,,, ,,s,_PUHZPWM,,,
w,,PUHZPWM,0x00ED,,,,"B101ED",,m,_8_Skip,,, ,,m,_PUHZPWM,,,
r,,K_ZUST_BITS,0x00EE,,,,"B201EE",,s,_8_Skip,,, ,,s,_K_ZUST_BITS,,,
w,,K_ZUST_BITS,0x00EE,,,,"B201EE",,m,_8_Skip,,, ,,m,_K_ZUST_BITS,,,
r,,K_ZUST_BITS_2,0x00EF,,,,"B301EF",,s,_8_Skip,,, ,,s,_K_ZUST_BITS_2,,,
w,,K_ZUST_BITS_2,0x00EF,,,,"B301EF",,m,_8_Skip,,, ,,m,_K_ZUST_BITS_2,,,
r,,V24_HIADR,0x00F0,,,,"AC01F0",,s,_8_Skip,,, ,,s,_V24_HIADR,,,
w,,V24_HIADR,0x00F0,,,,"AC01F0",,m,_8_Skip,,, ,,m,_V24_HIADR,,,
r,,ICL20SEC_ALT,0x00F1,,,,"AD01F1",,s,_8_Skip,,, ,,s,_ICL20SEC_ALT,,,
w,,ICL20SEC_ALT,0x00F1,,,,"AD01F1",,m,_8_Skip,,, ,,m,_ICL20SEC_ALT,,,
r,,ICL1HRS_ALT,0x00F2,,,,"AE01F2",,s,_8_Skip,,, ,,s,_ICL1HRS_ALT,,,
w,,ICL1HRS_ALT,0x00F2,,,,"AE01F2",,m,_8_Skip,,, ,,m,_ICL1HRS_ALT,,,
r,,RES_CNT_ALT,0x00F3,,,,"AF01F3",,s,_8_Skip,,, ,,s,_RES_CNT_ALT,,,
w,,RES_CNT_ALT,0x00F3,,,,"AF01F3",,m,_8_Skip,,, ,,m,_RES_CNT_ALT,,,
r,,NGIST_2,0x00F4,,,,"A801F4",,s,_8_Skip,,, ,,s,_NGIST_2,,,
w,,NGIST_2,0x00F4,,,,"A801F4",,m,_8_Skip,,, ,,m,_NGIST_2,,,
r,,NM_EBUS_STATUS,0x00F6,,,,"AA01F6",,s,_8_Skip,,, ,,s,_NM_EBUS_STATUS,,,
w,,NM_EBUS_STATUS,0x00F6,,,,"AA01F6",,m,_8_Skip,,, ,,m,_NM_EBUS_STATUS,,,
r,,NM_ZUSTAND,0x00F7,,,,"AB01F7",,s,_8_Skip,,, ,,s,_NM_ZUSTAND,,,
w,,NM_ZUSTAND,0x00F7,,,,"AB01F7",,m,_8_Skip,,, ,,m,_NM_ZUSTAND,,,
r,,BCC_STATUS,0x00F8,,,,"A401F8",,s,_8_Skip,,, ,,s,_BCC_STATUS,,,
w,,BCC_STATUS,0x00F8,,,,"A401F8",,m,_8_Skip,,, ,,m,_BCC_STATUS,,,
r,,S7_BITS,0x00F9,,,,"A501F9",,s,_8_Skip,,, ,,s,_S7_BITS,,,
w,,S7_BITS,0x00F9,,,,"A501F9",,m,_8_Skip,,, ,,m,_S7_BITS,,,

# --- SFR ---
r,,P0_ALTSEL0,0x0080,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_ALTSEL0,,,
w,,P0_ALTSEL0,0x0080,,,,"AC0480",,m,_8_Skip,,, ,,m,_P0_ALTSEL0,,,
# r,,P0_DATA,0x0080,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_DATA,,,                                # Alias of P0_ALTSEL0
# w,,P0_DATA,0x0080,,,,"AC0480",,m,_8_Skip,,, ,,m,_P0_DATA,,,                                # Alias of P0_ALTSEL0
# r,,P0_OD,0x0080,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_OD,,,                                    # Alias of P0_ALTSEL0
# w,,P0_OD,0x0080,,,,"AC0480",,m,_8_Skip,,, ,,m,_P0_OD,,,                                    # Alias of P0_ALTSEL0
# r,,P0_PUDSEL,0x0080,,,,"AC0480",,s,_8_Skip,,, ,,s,_P0_PUDSEL,,,                            # Alias of P0_ALTSEL0
# w,,P0_PUDSEL,0x0080,,,,"AC0480",,m,_8_Skip,,, ,,m,_P0_PUDSEL,,,                            # Alias of P0_ALTSEL0
r,,DPL,0x0082,,,,"AE0482",,s,_8_Skip,,, ,,s,_DPL,,,
w,,DPL,0x0082,,,,"AE0482",,m,_8_Skip,,, ,,m,_DPL,,,
r,,DPH,0x0083,,,,"AF0483",,s,_8_Skip,,, ,,s,_DPH,,,
w,,DPH,0x0083,,,,"AF0483",,m,_8_Skip,,, ,,m,_DPH,,,
r,,P0_ALTSEL1,0x0086,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_ALTSEL1,,,
w,,P0_ALTSEL1,0x0086,,,,"AA0486",,m,_8_Skip,,, ,,m,_P0_ALTSEL1,,,
# r,,P0_DIR,0x0086,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_DIR,,,                                  # Alias of P0_ALTSEL1
# w,,P0_DIR,0x0086,,,,"AA0486",,m,_8_Skip,,, ,,m,_P0_DIR,,,                                  # Alias of P0_ALTSEL1
# r,,P0_PUDEN,0x0086,,,,"AA0486",,s,_8_Skip,,, ,,s,_P0_PUDEN,,,                              # Alias of P0_ALTSEL1
# w,,P0_PUDEN,0x0086,,,,"AA0486",,m,_8_Skip,,, ,,m,_P0_PUDEN,,,                              # Alias of P0_ALTSEL1
r,,PCON,0x0087,,,,"AB0487",,s,_8_Skip,,, ,,s,_PCON,,,
w,,PCON,0x0087,,,,"AB0487",,m,_8_Skip,,, ,,m,_PCON,,,
r,,TCON,0x0088,,,,"A40488",,s,_8_Skip,,, ,,s,_TCON,,,
w,,TCON,0x0088,,,,"A40488",,m,_8_Skip,,, ,,m,_TCON,,,
r,,TMOD,0x0089,,,,"A50489",,s,_8_Skip,,, ,,s,_TMOD,,,
w,,TMOD,0x0089,,,,"A50489",,m,_8_Skip,,, ,,m,_TMOD,,,
r,,TL0,0x008A,,,,"A6048A",,s,_8_Skip,,, ,,s,_TL0,,,
w,,TL0,0x008A,,,,"A6048A",,m,_8_Skip,,, ,,m,_TL0,,,
r,,ION_TIMER_LOW,0x008B,,,,"A7048B",,s,_8_Skip,,, ,,s,_ION_TIMER_LOW,,,
w,,ION_TIMER_LOW,0x008B,,,,"A7048B",,m,_8_Skip,,, ,,m,_ION_TIMER_LOW,,,
# r,,TL1,0x008B,,,,"A7048B",,s,_8_Skip,,, ,,s,_TL1,,,                                        # Alias of ION_TIMER_LOW
# w,,TL1,0x008B,,,,"A7048B",,m,_8_Skip,,, ,,m,_TL1,,,                                        # Alias of ION_TIMER_LOW
r,,TH0,0x008C,,,,"A0048C",,s,_8_Skip,,, ,,s,_TH0,,,
w,,TH0,0x008C,,,,"A0048C",,m,_8_Skip,,, ,,m,_TH0,,,
r,,ION_TIMER_HIGH,0x008D,,,,"A1048D",,s,_8_Skip,,, ,,s,_ION_TIMER_HIGH,,,
w,,ION_TIMER_HIGH,0x008D,,,,"A1048D",,m,_8_Skip,,, ,,m,_ION_TIMER_HIGH,,,
# r,,TH1,0x008D,,,,"A1048D",,s,_8_Skip,,, ,,s,_TH1,,,                                        # Alias of ION_TIMER_HIGH
# w,,TH1,0x008D,,,,"A1048D",,m,_8_Skip,,, ,,m,_TH1,,,                                        # Alias of ION_TIMER_HIGH
r,,SYSCON0,0x008F,,,,"A3048F",,s,_8_Skip,,, ,,s,_SYSCON0,,,
w,,SYSCON0,0x008F,,,,"A3048F",,m,_8_Skip,,, ,,m,_SYSCON0,,,
r,,DO_PORT,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_DO_PORT,,,
w,,DO_PORT,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_DO_PORT,,,
# r,,P1ANA,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1ANA,,,                                    # Alias of DO_PORT
# w,,P1ANA,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_P1ANA,,,                                    # Alias of DO_PORT
# r,,P1_ALTSEL0,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_ALTSEL0,,,                          # Alias of DO_PORT
# w,,P1_ALTSEL0,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_P1_ALTSEL0,,,                          # Alias of DO_PORT
# r,,P1_DATA,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_DATA,,,                                # Alias of DO_PORT
# w,,P1_DATA,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_P1_DATA,,,                                # Alias of DO_PORT
# r,,P1_OD,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_OD,,,                                    # Alias of DO_PORT
# w,,P1_OD,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_P1_OD,,,                                    # Alias of DO_PORT
# r,,P1_PUDSEL,0x0090,,,,"BC0490",,s,_8_Skip,,, ,,s,_P1_PUDSEL,,,                            # Alias of DO_PORT
# w,,P1_PUDSEL,0x0090,,,,"BC0490",,m,_8_Skip,,, ,,m,_P1_PUDSEL,,,                            # Alias of DO_PORT
r,,P1_ALTSEL1,0x0091,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_ALTSEL1,,,
w,,P1_ALTSEL1,0x0091,,,,"BD0491",,m,_8_Skip,,, ,,m,_P1_ALTSEL1,,,
# r,,P1_DIR,0x0091,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_DIR,,,                                  # Alias of P1_ALTSEL1
# w,,P1_DIR,0x0091,,,,"BD0491",,m,_8_Skip,,, ,,m,_P1_DIR,,,                                  # Alias of P1_ALTSEL1
# r,,P1_PUDEN,0x0091,,,,"BD0491",,s,_8_Skip,,, ,,s,_P1_PUDEN,,,                              # Alias of P1_ALTSEL1
# w,,P1_PUDEN,0x0091,,,,"BD0491",,m,_8_Skip,,, ,,m,_P1_PUDEN,,,                              # Alias of P1_ALTSEL1
# r,,XPAGE,0x0091,,,,"BD0491",,s,_8_Skip,,, ,,s,_XPAGE,,,                                    # Alias of P1_ALTSEL1
# w,,XPAGE,0x0091,,,,"BD0491",,m,_8_Skip,,, ,,m,_XPAGE,,,                                    # Alias of P1_ALTSEL1
r,,DPSEL,0x0092,,,,"BE0492",,s,_8_Skip,,, ,,s,_DPSEL,,,
w,,DPSEL,0x0092,,,,"BE0492",,m,_8_Skip,,, ,,m,_DPSEL,,,
# r,,P5_ALTSEL0,0x0092,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_ALTSEL0,,,                          # Alias of DPSEL
# w,,P5_ALTSEL0,0x0092,,,,"BE0492",,m,_8_Skip,,, ,,m,_P5_ALTSEL0,,,                          # Alias of DPSEL
# r,,P5_DATA,0x0092,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_DATA,,,                                # Alias of DPSEL
# w,,P5_DATA,0x0092,,,,"BE0492",,m,_8_Skip,,, ,,m,_P5_DATA,,,                                # Alias of DPSEL
# r,,P5_OD,0x0092,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_OD,,,                                    # Alias of DPSEL
# w,,P5_OD,0x0092,,,,"BE0492",,m,_8_Skip,,, ,,m,_P5_OD,,,                                    # Alias of DPSEL
# r,,P5_PUDSEL,0x0092,,,,"BE0492",,s,_8_Skip,,, ,,s,_P5_PUDSEL,,,                            # Alias of DPSEL
# w,,P5_PUDSEL,0x0092,,,,"BE0492",,m,_8_Skip,,, ,,m,_P5_PUDSEL,,,                            # Alias of DPSEL
r,,P5_ALTSEL1,0x0093,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_ALTSEL1,,,
w,,P5_ALTSEL1,0x0093,,,,"BF0493",,m,_8_Skip,,, ,,m,_P5_ALTSEL1,,,
# r,,P5_DIR,0x0093,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_DIR,,,                                  # Alias of P5_ALTSEL1
# w,,P5_DIR,0x0093,,,,"BF0493",,m,_8_Skip,,, ,,m,_P5_DIR,,,                                  # Alias of P5_ALTSEL1
# r,,P5_PUDEN,0x0093,,,,"BF0493",,s,_8_Skip,,, ,,s,_P5_PUDEN,,,                              # Alias of P5_ALTSEL1
# w,,P5_PUDEN,0x0093,,,,"BF0493",,m,_8_Skip,,, ,,m,_P5_PUDEN,,,                              # Alias of P5_ALTSEL1
r,,SCON,0x0098,,,,"B40498",,s,_8_Skip,,, ,,s,_SCON,,,
w,,SCON,0x0098,,,,"B40498",,m,_8_Skip,,, ,,m,_SCON,,,
r,,SBUF,0x0099,,,,"B50499",,s,_8_Skip,,, ,,s,_SBUF,,,
w,,SBUF,0x0099,,,,"B50499",,m,_8_Skip,,, ,,m,_SBUF,,,
r,,CCL_GEBL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCL_GEBL,,,
w,,CCL_GEBL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CCL_GEBL,,,
# r,,CCU6_CC63RL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_CC63RL,,,                        # Alias of CCL_GEBL
# w,,CCU6_CC63RL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CCU6_CC63RL,,,                        # Alias of CCL_GEBL
# r,,CCU6_CC63SRL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_CC63SRL,,,                      # Alias of CCL_GEBL
# w,,CCU6_CC63SRL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CCU6_CC63SRL,,,                      # Alias of CCL_GEBL
# r,,CCU6_MCMOUTL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTL,,,                      # Alias of CCL_GEBL
# w,,CCU6_MCMOUTL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CCU6_MCMOUTL,,,                      # Alias of CCL_GEBL
# r,,CCU6_T12MSELL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CCU6_T12MSELL,,,                    # Alias of CCL_GEBL
# w,,CCU6_T12MSELL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CCU6_T12MSELL,,,                    # Alias of CCL_GEBL
# r,,CD_CORDXL,0x009A,,,,"B6049A",,s,_8_Skip,,, ,,s,_CD_CORDXL,,,                            # Alias of CCL_GEBL
# w,,CD_CORDXL,0x009A,,,,"B6049A",,m,_8_Skip,,, ,,m,_CD_CORDXL,,,                            # Alias of CCL_GEBL
r,,CCH_GEBL,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCH_GEBL,,,
w,,CCH_GEBL,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CCH_GEBL,,,
# r,,CCU6_CC63RH,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_CC63RH,,,                        # Alias of CCH_GEBL
# w,,CCU6_CC63RH,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CCU6_CC63RH,,,                        # Alias of CCH_GEBL
# r,,CCU6_CC63SRH,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_CC63SRH,,,                      # Alias of CCH_GEBL
# w,,CCU6_CC63SRH,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CCU6_CC63SRH,,,                      # Alias of CCH_GEBL
# r,,CCU6_MCMOUTH,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTH,,,                      # Alias of CCH_GEBL
# w,,CCU6_MCMOUTH,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CCU6_MCMOUTH,,,                      # Alias of CCH_GEBL
# r,,CCU6_T12MSELH,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CCU6_T12MSELH,,,                    # Alias of CCH_GEBL
# w,,CCU6_T12MSELH,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CCU6_T12MSELH,,,                    # Alias of CCH_GEBL
# r,,CD_CORDXH,0x009B,,,,"B7049B",,s,_8_Skip,,, ,,s,_CD_CORDXH,,,                            # Alias of CCH_GEBL
# w,,CD_CORDXH,0x009B,,,,"B7049B",,m,_8_Skip,,, ,,m,_CD_CORDXH,,,                            # Alias of CCH_GEBL
r,,CCU6_IENL,0x009C,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_IENL,,,
w,,CCU6_IENL,0x009C,,,,"B0049C",,m,_8_Skip,,, ,,m,_CCU6_IENL,,,
# r,,CCU6_ISL,0x009C,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_ISL,,,                              # Alias of CCU6_IENL
# w,,CCU6_ISL,0x009C,,,,"B0049C",,m,_8_Skip,,, ,,m,_CCU6_ISL,,,                              # Alias of CCU6_IENL
# r,,CCU6_T12PRL,0x009C,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_T12PRL,,,                        # Alias of CCU6_IENL
# w,,CCU6_T12PRL,0x009C,,,,"B0049C",,m,_8_Skip,,, ,,m,_CCU6_T12PRL,,,                        # Alias of CCU6_IENL
# r,,CCU6_TCTR4L,0x009C,,,,"B0049C",,s,_8_Skip,,, ,,s,_CCU6_TCTR4L,,,                        # Alias of CCU6_IENL
# w,,CCU6_TCTR4L,0x009C,,,,"B0049C",,m,_8_Skip,,, ,,m,_CCU6_TCTR4L,,,                        # Alias of CCU6_IENL
# r,,CD_CORDYL,0x009C,,,,"B0049C",,s,_8_Skip,,, ,,s,_CD_CORDYL,,,                            # Alias of CCU6_IENL
# w,,CD_CORDYL,0x009C,,,,"B0049C",,m,_8_Skip,,, ,,m,_CD_CORDYL,,,                            # Alias of CCU6_IENL
r,,CCU6_IENH,0x009D,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_IENH,,,
w,,CCU6_IENH,0x009D,,,,"B1049D",,m,_8_Skip,,, ,,m,_CCU6_IENH,,,
# r,,CCU6_ISH,0x009D,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_ISH,,,                              # Alias of CCU6_IENH
# w,,CCU6_ISH,0x009D,,,,"B1049D",,m,_8_Skip,,, ,,m,_CCU6_ISH,,,                              # Alias of CCU6_IENH
# r,,CCU6_T12PRH,0x009D,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_T12PRH,,,                        # Alias of CCU6_IENH
# w,,CCU6_T12PRH,0x009D,,,,"B1049D",,m,_8_Skip,,, ,,m,_CCU6_T12PRH,,,                        # Alias of CCU6_IENH
# r,,CCU6_TCTR4H,0x009D,,,,"B1049D",,s,_8_Skip,,, ,,s,_CCU6_TCTR4H,,,                        # Alias of CCU6_IENH
# w,,CCU6_TCTR4H,0x009D,,,,"B1049D",,m,_8_Skip,,, ,,m,_CCU6_TCTR4H,,,                        # Alias of CCU6_IENH
# r,,CD_CORDYH,0x009D,,,,"B1049D",,s,_8_Skip,,, ,,s,_CD_CORDYH,,,                            # Alias of CCU6_IENH
# w,,CD_CORDYH,0x009D,,,,"B1049D",,m,_8_Skip,,, ,,m,_CD_CORDYH,,,                            # Alias of CCU6_IENH
r,,CCU6_INPL,0x009E,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_INPL,,,
w,,CCU6_INPL,0x009E,,,,"B2049E",,m,_8_Skip,,, ,,m,_CCU6_INPL,,,
# r,,CCU6_MCMOUTSL,0x009E,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTSL,,,                    # Alias of CCU6_INPL
# w,,CCU6_MCMOUTSL,0x009E,,,,"B2049E",,m,_8_Skip,,, ,,m,_CCU6_MCMOUTSL,,,                    # Alias of CCU6_INPL
# r,,CCU6_PISEL0L,0x009E,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_PISEL0L,,,                      # Alias of CCU6_INPL
# w,,CCU6_PISEL0L,0x009E,,,,"B2049E",,m,_8_Skip,,, ,,m,_CCU6_PISEL0L,,,                      # Alias of CCU6_INPL
# r,,CCU6_T13PRL,0x009E,,,,"B2049E",,s,_8_Skip,,, ,,s,_CCU6_T13PRL,,,                        # Alias of CCU6_INPL
# w,,CCU6_T13PRL,0x009E,,,,"B2049E",,m,_8_Skip,,, ,,m,_CCU6_T13PRL,,,                        # Alias of CCU6_INPL
# r,,CD_CORDZL,0x009E,,,,"B2049E",,s,_8_Skip,,, ,,s,_CD_CORDZL,,,                            # Alias of CCU6_INPL
# w,,CD_CORDZL,0x009E,,,,"B2049E",,m,_8_Skip,,, ,,m,_CD_CORDZL,,,                            # Alias of CCU6_INPL
r,,CCU6_INPH,0x009F,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_INPH,,,
w,,CCU6_INPH,0x009F,,,,"B3049F",,m,_8_Skip,,, ,,m,_CCU6_INPH,,,
# r,,CCU6_MCMOUTSH,0x009F,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_MCMOUTSH,,,                    # Alias of CCU6_INPH
# w,,CCU6_MCMOUTSH,0x009F,,,,"B3049F",,m,_8_Skip,,, ,,m,_CCU6_MCMOUTSH,,,                    # Alias of CCU6_INPH
# r,,CCU6_PISEL0H,0x009F,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_PISEL0H,,,                      # Alias of CCU6_INPH
# w,,CCU6_PISEL0H,0x009F,,,,"B3049F",,m,_8_Skip,,, ,,m,_CCU6_PISEL0H,,,                      # Alias of CCU6_INPH
# r,,CCU6_T13PRH,0x009F,,,,"B3049F",,s,_8_Skip,,, ,,s,_CCU6_T13PRH,,,                        # Alias of CCU6_INPH
# w,,CCU6_T13PRH,0x009F,,,,"B3049F",,m,_8_Skip,,, ,,m,_CCU6_T13PRH,,,                        # Alias of CCU6_INPH
# r,,CD_CORDZH,0x009F,,,,"B3049F",,s,_8_Skip,,, ,,s,_CD_CORDZH,,,                            # Alias of CCU6_INPH
# w,,CD_CORDZH,0x009F,,,,"B3049F",,m,_8_Skip,,, ,,m,_CD_CORDZH,,,                            # Alias of CCU6_INPH
r,,CD_STATC,0x00A0,,,,"8C04A0",,s,_8_Skip,,, ,,s,_CD_STATC,,,
w,,CD_STATC,0x00A0,,,,"8C04A0",,m,_8_Skip,,, ,,m,_CD_STATC,,,
# r,,P2_DATA,0x00A0,,,,"8C04A0",,s,_8_Skip,,, ,,s,_P2_DATA,,,                                # Alias of CD_STATC
# w,,P2_DATA,0x00A0,,,,"8C04A0",,m,_8_Skip,,, ,,m,_P2_DATA,,,                                # Alias of CD_STATC
# r,,P2_PUDSEL,0x00A0,,,,"8C04A0",,s,_8_Skip,,, ,,s,_P2_PUDSEL,,,                            # Alias of CD_STATC
# w,,P2_PUDSEL,0x00A0,,,,"8C04A0",,m,_8_Skip,,, ,,m,_P2_PUDSEL,,,                            # Alias of CD_STATC
r,,CD_CON,0x00A1,,,,"8D04A1",,s,_8_Skip,,, ,,s,_CD_CON,,,
w,,CD_CON,0x00A1,,,,"8D04A1",,m,_8_Skip,,, ,,m,_CD_CON,,,
# r,,P2_DIR,0x00A1,,,,"8D04A1",,s,_8_Skip,,, ,,s,_P2_DIR,,,                                  # Alias of CD_CON
# w,,P2_DIR,0x00A1,,,,"8D04A1",,m,_8_Skip,,, ,,m,_P2_DIR,,,                                  # Alias of CD_CON
# r,,P2_PUDEN,0x00A1,,,,"8D04A1",,s,_8_Skip,,, ,,s,_P2_PUDEN,,,                              # Alias of CD_CON
# w,,P2_PUDEN,0x00A1,,,,"8D04A1",,m,_8_Skip,,, ,,m,_P2_PUDEN,,,                              # Alias of CD_CON
r,,CCU6_PAGE,0x00A3,,,,"8F04A3",,s,_8_Skip,,, ,,s,_CCU6_PAGE,,,
w,,CCU6_PAGE,0x00A3,,,,"8F04A3",,m,_8_Skip,,, ,,m,_CCU6_PAGE,,,
r,,CCU6_ISRL,0x00A4,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_ISRL,,,
w,,CCU6_ISRL,0x00A4,,,,"8804A4",,m,_8_Skip,,, ,,m,_CCU6_ISRL,,,
# r,,CCU6_ISSL,0x00A4,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_ISSL,,,                            # Alias of CCU6_ISRL
# w,,CCU6_ISSL,0x00A4,,,,"8804A4",,m,_8_Skip,,, ,,m,_CCU6_ISSL,,,                            # Alias of CCU6_ISRL
# r,,CCU6_PISEL2,0x00A4,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_PISEL2,,,                        # Alias of CCU6_ISRL
# w,,CCU6_PISEL2,0x00A4,,,,"8804A4",,m,_8_Skip,,, ,,m,_CCU6_PISEL2,,,                        # Alias of CCU6_ISRL
# r,,CCU6_T12DTCL,0x00A4,,,,"8804A4",,s,_8_Skip,,, ,,s,_CCU6_T12DTCL,,,                      # Alias of CCU6_ISRL
# w,,CCU6_T12DTCL,0x00A4,,,,"8804A4",,m,_8_Skip,,, ,,m,_CCU6_T12DTCL,,,                      # Alias of CCU6_ISRL
r,,CCU6_ISRH,0x00A5,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_ISRH,,,
w,,CCU6_ISRH,0x00A5,,,,"8904A5",,m,_8_Skip,,, ,,m,_CCU6_ISRH,,,
# r,,CCU6_ISSH,0x00A5,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_ISSH,,,                            # Alias of CCU6_ISRH
# w,,CCU6_ISSH,0x00A5,,,,"8904A5",,m,_8_Skip,,, ,,m,_CCU6_ISSH,,,                            # Alias of CCU6_ISRH
# r,,CCU6_T12DTCH,0x00A5,,,,"8904A5",,s,_8_Skip,,, ,,s,_CCU6_T12DTCH,,,                      # Alias of CCU6_ISRH
# w,,CCU6_T12DTCH,0x00A5,,,,"8904A5",,m,_8_Skip,,, ,,m,_CCU6_T12DTCH,,,                      # Alias of CCU6_ISRH
r,,CCU6_CMPMODIFL,0x00A6,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_CMPMODIFL,,,
w,,CCU6_CMPMODIFL,0x00A6,,,,"8A04A6",,m,_8_Skip,,, ,,m,_CCU6_CMPMODIFL,,,
# r,,CCU6_PSLR,0x00A6,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_PSLR,,,                            # Alias of CCU6_CMPMODIFL
# w,,CCU6_PSLR,0x00A6,,,,"8A04A6",,m,_8_Skip,,, ,,m,_CCU6_PSLR,,,                            # Alias of CCU6_CMPMODIFL
# r,,CCU6_TCTR0L,0x00A6,,,,"8A04A6",,s,_8_Skip,,, ,,s,_CCU6_TCTR0L,,,                        # Alias of CCU6_CMPMODIFL
# w,,CCU6_TCTR0L,0x00A6,,,,"8A04A6",,m,_8_Skip,,, ,,m,_CCU6_TCTR0L,,,                        # Alias of CCU6_CMPMODIFL
r,,CCU6_CMPMODIFH,0x00A7,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_CMPMODIFH,,,
w,,CCU6_CMPMODIFH,0x00A7,,,,"8B04A7",,m,_8_Skip,,, ,,m,_CCU6_CMPMODIFH,,,
# r,,CCU6_MCMCTR,0x00A7,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_MCMCTR,,,                        # Alias of CCU6_CMPMODIFH
# w,,CCU6_MCMCTR,0x00A7,,,,"8B04A7",,m,_8_Skip,,, ,,m,_CCU6_MCMCTR,,,                        # Alias of CCU6_CMPMODIFH
# r,,CCU6_TCTR0H,0x00A7,,,,"8B04A7",,s,_8_Skip,,, ,,s,_CCU6_TCTR0H,,,                        # Alias of CCU6_CMPMODIFH
# w,,CCU6_TCTR0H,0x00A7,,,,"8B04A7",,m,_8_Skip,,, ,,m,_CCU6_TCTR0H,,,                        # Alias of CCU6_CMPMODIFH
r,,IEN0,0x00A8,,,,"8404A8",,s,_8_Skip,,, ,,s,_IEN0,,,
w,,IEN0,0x00A8,,,,"8404A8",,m,_8_Skip,,, ,,m,_IEN0,,,
r,,IP0,0x00A9,,,,"8504A9",,s,_8_Skip,,, ,,s,_IP0,,,
w,,IP0,0x00A9,,,,"8504A9",,m,_8_Skip,,, ,,m,_IP0,,,
# r,,SSC_PISEL,0x00A9,,,,"8504A9",,s,_8_Skip,,, ,,s,_SSC_PISEL,,,                            # Alias of IP0
# w,,SSC_PISEL,0x00A9,,,,"8504A9",,m,_8_Skip,,, ,,m,_SSC_PISEL,,,                            # Alias of IP0
r,,SRELL,0x00AA,,,,"8604AA",,s,_8_Skip,,, ,,s,_SRELL,,,
w,,SRELL,0x00AA,,,,"8604AA",,m,_8_Skip,,, ,,m,_SRELL,,,
# r,,SSC_CONL_O,0x00AA,,,,"8604AA",,s,_8_Skip,,, ,,s,_SSC_CONL_O,,,                          # Alias of SRELL
# w,,SSC_CONL_O,0x00AA,,,,"8604AA",,m,_8_Skip,,, ,,m,_SSC_CONL_O,,,                          # Alias of SRELL
# r,,SSC_CONL_P,0x00AA,,,,"8604AA",,s,_8_Skip,,, ,,s,_SSC_CONL_P,,,                          # Alias of SRELL
# w,,SSC_CONL_P,0x00AA,,,,"8604AA",,m,_8_Skip,,, ,,m,_SSC_CONL_P,,,                          # Alias of SRELL
r,,SSC_CONH_O,0x00AB,,,,"8704AB",,s,_8_Skip,,, ,,s,_SSC_CONH_O,,,
w,,SSC_CONH_O,0x00AB,,,,"8704AB",,m,_8_Skip,,, ,,m,_SSC_CONH_O,,,
# r,,SSC_CONH_P,0x00AB,,,,"8704AB",,s,_8_Skip,,, ,,s,_SSC_CONH_P,,,                          # Alias of SSC_CONH_O
# w,,SSC_CONH_P,0x00AB,,,,"8704AB",,m,_8_Skip,,, ,,m,_SSC_CONH_P,,,                          # Alias of SSC_CONH_O
r,,SSC_TBL,0x00AC,,,,"8004AC",,s,_8_Skip,,, ,,s,_SSC_TBL,,,
w,,SSC_TBL,0x00AC,,,,"8004AC",,m,_8_Skip,,, ,,m,_SSC_TBL,,,
r,,SSC_RBL,0x00AD,,,,"8104AD",,s,_8_Skip,,, ,,s,_SSC_RBL,,,
w,,SSC_RBL,0x00AD,,,,"8104AD",,m,_8_Skip,,, ,,m,_SSC_RBL,,,
r,,SSC_BRL,0x00AE,,,,"8204AE",,s,_8_Skip,,, ,,s,_SSC_BRL,,,
w,,SSC_BRL,0x00AE,,,,"8204AE",,m,_8_Skip,,, ,,m,_SSC_BRL,,,
r,,SSC_BRH,0x00AF,,,,"8304AF",,s,_8_Skip,,, ,,s,_SSC_BRH,,,
w,,SSC_BRH,0x00AF,,,,"8304AF",,m,_8_Skip,,, ,,m,_SSC_BRH,,,
r,,DE_F_PORT,0x00B0,,,,"9C04B0",,s,_8_Skip,,, ,,s,_DE_F_PORT,,,
w,,DE_F_PORT,0x00B0,,,,"9C04B0",,m,_8_Skip,,, ,,m,_DE_F_PORT,,,
# r,,P3_ALTSEL0,0x00B0,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_ALTSEL0,,,                          # Alias of DE_F_PORT
# w,,P3_ALTSEL0,0x00B0,,,,"9C04B0",,m,_8_Skip,,, ,,m,_P3_ALTSEL0,,,                          # Alias of DE_F_PORT
# r,,P3_DATA,0x00B0,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_DATA,,,                                # Alias of DE_F_PORT
# w,,P3_DATA,0x00B0,,,,"9C04B0",,m,_8_Skip,,, ,,m,_P3_DATA,,,                                # Alias of DE_F_PORT
# r,,P3_OD,0x00B0,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_OD,,,                                    # Alias of DE_F_PORT
# w,,P3_OD,0x00B0,,,,"9C04B0",,m,_8_Skip,,, ,,m,_P3_OD,,,                                    # Alias of DE_F_PORT
# r,,P3_PUDSEL,0x00B0,,,,"9C04B0",,s,_8_Skip,,, ,,s,_P3_PUDSEL,,,                            # Alias of DE_F_PORT
# w,,P3_PUDSEL,0x00B0,,,,"9C04B0",,m,_8_Skip,,, ,,m,_P3_PUDSEL,,,                            # Alias of DE_F_PORT
r,,P3_ALTSEL1,0x00B1,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_ALTSEL1,,,
w,,P3_ALTSEL1,0x00B1,,,,"9D04B1",,m,_8_Skip,,, ,,m,_P3_ALTSEL1,,,
# r,,P3_DIR,0x00B1,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_DIR,,,                                  # Alias of P3_ALTSEL1
# w,,P3_DIR,0x00B1,,,,"9D04B1",,m,_8_Skip,,, ,,m,_P3_DIR,,,                                  # Alias of P3_ALTSEL1
# r,,P3_PUDEN,0x00B1,,,,"9D04B1",,s,_8_Skip,,, ,,s,_P3_PUDEN,,,                              # Alias of P3_ALTSEL1
# w,,P3_PUDEN,0x00B1,,,,"9D04B1",,m,_8_Skip,,, ,,m,_P3_PUDEN,,,                              # Alias of P3_ALTSEL1
# r,,SYSCON,0x00B1,,,,"9D04B1",,s,_8_Skip,,, ,,s,_SYSCON,,,                                  # Alias of P3_ALTSEL1
# w,,SYSCON,0x00B1,,,,"9D04B1",,m,_8_Skip,,, ,,m,_SYSCON,,,                                  # Alias of P3_ALTSEL1
r,,PORT_PAGE,0x00B2,,,,"9E04B2",,s,_8_Skip,,, ,,s,_PORT_PAGE,,,
w,,PORT_PAGE,0x00B2,,,,"9E04B2",,m,_8_Skip,,, ,,m,_PORT_PAGE,,,
r,,MODPISEL,0x00B3,,,,"9F04B3",,s,_8_Skip,,, ,,s,_MODPISEL,,,
w,,MODPISEL,0x00B3,,,,"9F04B3",,m,_8_Skip,,, ,,m,_MODPISEL,,,
# r,,XADDRH,0x00B3,,,,"9F04B3",,s,_8_Skip,,, ,,s,_XADDRH,,,                                  # Alias of MODPISEL
# w,,XADDRH,0x00B3,,,,"9F04B3",,m,_8_Skip,,, ,,m,_XADDRH,,,                                  # Alias of MODPISEL
r,,IRCON0,0x00B4,,,,"9804B4",,s,_8_Skip,,, ,,s,_IRCON0,,,
w,,IRCON0,0x00B4,,,,"9804B4",,m,_8_Skip,,, ,,m,_IRCON0,,,
# r,,IRCON3,0x00B4,,,,"9804B4",,s,_8_Skip,,, ,,s,_IRCON3,,,                                  # Alias of IRCON0
# w,,IRCON3,0x00B4,,,,"9804B4",,m,_8_Skip,,, ,,m,_IRCON3,,,                                  # Alias of IRCON0
# r,,PMCON0,0x00B4,,,,"9804B4",,s,_8_Skip,,, ,,s,_PMCON0,,,                                  # Alias of IRCON0
# w,,PMCON0,0x00B4,,,,"9804B4",,m,_8_Skip,,, ,,m,_PMCON0,,,                                  # Alias of IRCON0
r,,IRCON1,0x00B5,,,,"9904B5",,s,_8_Skip,,, ,,s,_IRCON1,,,
w,,IRCON1,0x00B5,,,,"9904B5",,m,_8_Skip,,, ,,m,_IRCON1,,,
# r,,IRCON4,0x00B5,,,,"9904B5",,s,_8_Skip,,, ,,s,_IRCON4,,,                                  # Alias of IRCON1
# w,,IRCON4,0x00B5,,,,"9904B5",,m,_8_Skip,,, ,,m,_IRCON4,,,                                  # Alias of IRCON1
# r,,PMCON1,0x00B5,,,,"9904B5",,s,_8_Skip,,, ,,s,_PMCON1,,,                                  # Alias of IRCON1
# w,,PMCON1,0x00B5,,,,"9904B5",,m,_8_Skip,,, ,,m,_PMCON1,,,                                  # Alias of IRCON1
r,,IRCON2,0x00B6,,,,"9A04B6",,s,_8_Skip,,, ,,s,_IRCON2,,,
w,,IRCON2,0x00B6,,,,"9A04B6",,m,_8_Skip,,, ,,m,_IRCON2,,,
# r,,OSC_CON,0x00B6,,,,"9A04B6",,s,_8_Skip,,, ,,s,_OSC_CON,,,                                # Alias of IRCON2
# w,,OSC_CON,0x00B6,,,,"9A04B6",,m,_8_Skip,,, ,,m,_OSC_CON,,,                                # Alias of IRCON2
r,,EXICON0,0x00B7,,,,"9B04B7",,s,_8_Skip,,, ,,s,_EXICON0,,,
w,,EXICON0,0x00B7,,,,"9B04B7",,m,_8_Skip,,, ,,m,_EXICON0,,,
# r,,MODPISEL1,0x00B7,,,,"9B04B7",,s,_8_Skip,,, ,,s,_MODPISEL1,,,                            # Alias of EXICON0
# w,,MODPISEL1,0x00B7,,,,"9B04B7",,m,_8_Skip,,, ,,m,_MODPISEL1,,,                            # Alias of EXICON0
# r,,PLL_CON,0x00B7,,,,"9B04B7",,s,_8_Skip,,, ,,s,_PLL_CON,,,                                # Alias of EXICON0
# w,,PLL_CON,0x00B7,,,,"9B04B7",,m,_8_Skip,,, ,,m,_PLL_CON,,,                                # Alias of EXICON0
r,,IPH,0x00B9,,,,"9504B9",,s,_8_Skip,,, ,,s,_IPH,,,
w,,IPH,0x00B9,,,,"9504B9",,m,_8_Skip,,, ,,m,_IPH,,,
r,,CMCON,0x00BA,,,,"9604BA",,s,_8_Skip,,, ,,s,_CMCON,,,
w,,CMCON,0x00BA,,,,"9604BA",,m,_8_Skip,,, ,,m,_CMCON,,,
# r,,EXICON1,0x00BA,,,,"9604BA",,s,_8_Skip,,, ,,s,_EXICON1,,,                                # Alias of CMCON
# w,,EXICON1,0x00BA,,,,"9604BA",,m,_8_Skip,,, ,,m,_EXICON1,,,                                # Alias of CMCON
# r,,MODPISEL2,0x00BA,,,,"9604BA",,s,_8_Skip,,, ,,s,_MODPISEL2,,,                            # Alias of CMCON
# w,,MODPISEL2,0x00BA,,,,"9604BA",,m,_8_Skip,,, ,,m,_MODPISEL2,,,                            # Alias of CMCON
# r,,SRELH,0x00BA,,,,"9604BA",,s,_8_Skip,,, ,,s,_SRELH,,,                                    # Alias of CMCON
# w,,SRELH,0x00BA,,,,"9604BA",,m,_8_Skip,,, ,,m,_SRELH,,,                                    # Alias of CMCON
r,,NMICON,0x00BB,,,,"9704BB",,s,_8_Skip,,, ,,s,_NMICON,,,
w,,NMICON,0x00BB,,,,"9704BB",,m,_8_Skip,,, ,,m,_NMICON,,,
# r,,PASSWD,0x00BB,,,,"9704BB",,s,_8_Skip,,, ,,s,_PASSWD,,,                                  # Alias of NMICON
# w,,PASSWD,0x00BB,,,,"9704BB",,m,_8_Skip,,, ,,m,_PASSWD,,,                                  # Alias of NMICON
# r,,PMCON2,0x00BB,,,,"9704BB",,s,_8_Skip,,, ,,s,_PMCON2,,,                                  # Alias of NMICON
# w,,PMCON2,0x00BB,,,,"9704BB",,m,_8_Skip,,, ,,m,_PMCON2,,,                                  # Alias of NMICON
# r,,WDTCON,0x00BB,,,,"9704BB",,s,_8_Skip,,, ,,s,_WDTCON,,,                                  # Alias of NMICON
# w,,WDTCON,0x00BB,,,,"9704BB",,m,_8_Skip,,, ,,m,_WDTCON,,,                                  # Alias of NMICON
r,,FEAL,0x00BC,,,,"9004BC",,s,_8_Skip,,, ,,s,_FEAL,,,
w,,FEAL,0x00BC,,,,"9004BC",,m,_8_Skip,,, ,,m,_FEAL,,,
# r,,NMISR,0x00BC,,,,"9004BC",,s,_8_Skip,,, ,,s,_NMISR,,,                                    # Alias of FEAL
# w,,NMISR,0x00BC,,,,"9004BC",,m,_8_Skip,,, ,,m,_NMISR,,,                                    # Alias of FEAL
# r,,WDTREL,0x00BC,,,,"9004BC",,s,_8_Skip,,, ,,s,_WDTREL,,,                                  # Alias of FEAL
# w,,WDTREL,0x00BC,,,,"9004BC",,m,_8_Skip,,, ,,m,_WDTREL,,,                                  # Alias of FEAL
r,,BCON,0x00BD,,,,"9104BD",,s,_8_Skip,,, ,,s,_BCON,,,
w,,BCON,0x00BD,,,,"9104BD",,m,_8_Skip,,, ,,m,_BCON,,,
# r,,FEAH,0x00BD,,,,"9104BD",,s,_8_Skip,,, ,,s,_FEAH,,,                                      # Alias of BCON
# w,,FEAH,0x00BD,,,,"9104BD",,m,_8_Skip,,, ,,m,_FEAH,,,                                      # Alias of BCON
# r,,MODSUSP,0x00BD,,,,"9104BD",,s,_8_Skip,,, ,,s,_MODSUSP,,,                                # Alias of BCON
# w,,MODSUSP,0x00BD,,,,"9104BD",,m,_8_Skip,,, ,,m,_MODSUSP,,,                                # Alias of BCON
# r,,WDTWINB,0x00BD,,,,"9104BD",,s,_8_Skip,,, ,,s,_WDTWINB,,,                                # Alias of BCON
# w,,WDTWINB,0x00BD,,,,"9104BD",,m,_8_Skip,,, ,,m,_WDTWINB,,,                                # Alias of BCON
r,,COCON,0x00BE,,,,"9204BE",,s,_8_Skip,,, ,,s,_COCON,,,
w,,COCON,0x00BE,,,,"9204BE",,m,_8_Skip,,, ,,m,_COCON,,,
# r,,WDTL,0x00BE,,,,"9204BE",,s,_8_Skip,,, ,,s,_WDTL,,,                                      # Alias of COCON
# w,,WDTL,0x00BE,,,,"9204BE",,m,_8_Skip,,, ,,m,_WDTL,,,                                      # Alias of COCON
r,,SCU_PAGE,0x00BF,,,,"9304BF",,s,_8_Skip,,, ,,s,_SCU_PAGE,,,
w,,SCU_PAGE,0x00BF,,,,"9304BF",,m,_8_Skip,,, ,,m,_SCU_PAGE,,,
# r,,WDTH,0x00BF,,,,"9304BF",,s,_8_Skip,,, ,,s,_WDTH,,,                                      # Alias of SCU_PAGE
# w,,WDTH,0x00BF,,,,"9304BF",,m,_8_Skip,,, ,,m,_WDTH,,,                                      # Alias of SCU_PAGE
r,,IRCON,0x00C0,,,,"EC04C0",,s,_8_Skip,,, ,,s,_IRCON,,,
w,,IRCON,0x00C0,,,,"EC04C0",,m,_8_Skip,,, ,,m,_IRCON,,,
# r,,T21_T2CON,0x00C0,,,,"EC04C0",,s,_8_Skip,,, ,,s,_T21_T2CON,,,                            # Alias of IRCON
# w,,T21_T2CON,0x00C0,,,,"EC04C0",,m,_8_Skip,,, ,,m,_T21_T2CON,,,                            # Alias of IRCON
# r,,T2_T2CON,0x00C0,,,,"EC04C0",,s,_8_Skip,,, ,,s,_T2_T2CON,,,                              # Alias of IRCON
# w,,T2_T2CON,0x00C0,,,,"EC04C0",,m,_8_Skip,,, ,,m,_T2_T2CON,,,                              # Alias of IRCON
r,,CCEN,0x00C1,,,,"ED04C1",,s,_8_Skip,,, ,,s,_CCEN,,,
w,,CCEN,0x00C1,,,,"ED04C1",,m,_8_Skip,,, ,,m,_CCEN,,,
# r,,T21_T2MOD,0x00C1,,,,"ED04C1",,s,_8_Skip,,, ,,s,_T21_T2MOD,,,                            # Alias of CCEN
# w,,T21_T2MOD,0x00C1,,,,"ED04C1",,m,_8_Skip,,, ,,m,_T21_T2MOD,,,                            # Alias of CCEN
# r,,T2_T2MOD,0x00C1,,,,"ED04C1",,s,_8_Skip,,, ,,s,_T2_T2MOD,,,                              # Alias of CCEN
# w,,T2_T2MOD,0x00C1,,,,"ED04C1",,m,_8_Skip,,, ,,m,_T2_T2MOD,,,                              # Alias of CCEN
r,,CCL1,0x00C2,,,,"EE04C2",,s,_8_Skip,,, ,,s,_CCL1,,,
w,,CCL1,0x00C2,,,,"EE04C2",,m,_8_Skip,,, ,,m,_CCL1,,,
# r,,SYS_TIMER_RELOAD_LOW,0x00C2,,,,"EE04C2",,s,_8_Skip,,, ,,s,_SYS_TIMER_RELOAD_LOW,,,      # Alias of CCL1
# w,,SYS_TIMER_RELOAD_LOW,0x00C2,,,,"EE04C2",,m,_8_Skip,,, ,,m,_SYS_TIMER_RELOAD_LOW,,,      # Alias of CCL1
# r,,T21_RC2L,0x00C2,,,,"EE04C2",,s,_8_Skip,,, ,,s,_T21_RC2L,,,                              # Alias of CCL1
# w,,T21_RC2L,0x00C2,,,,"EE04C2",,m,_8_Skip,,, ,,m,_T21_RC2L,,,                              # Alias of CCL1
# r,,T2_RC2L,0x00C2,,,,"EE04C2",,s,_8_Skip,,, ,,s,_T2_RC2L,,,                                # Alias of CCL1
# w,,T2_RC2L,0x00C2,,,,"EE04C2",,m,_8_Skip,,, ,,m,_T2_RC2L,,,                                # Alias of CCL1
r,,CCH1,0x00C3,,,,"EF04C3",,s,_8_Skip,,, ,,s,_CCH1,,,
w,,CCH1,0x00C3,,,,"EF04C3",,m,_8_Skip,,, ,,m,_CCH1,,,
# r,,SYS_TIMER_RELOAD_HIGH,0x00C3,,,,"EF04C3",,s,_8_Skip,,, ,,s,_SYS_TIMER_RELOAD_HIGH,,,    # Alias of CCH1
# w,,SYS_TIMER_RELOAD_HIGH,0x00C3,,,,"EF04C3",,m,_8_Skip,,, ,,m,_SYS_TIMER_RELOAD_HIGH,,,    # Alias of CCH1
# r,,T21_RC2H,0x00C3,,,,"EF04C3",,s,_8_Skip,,, ,,s,_T21_RC2H,,,                              # Alias of CCH1
# w,,T21_RC2H,0x00C3,,,,"EF04C3",,m,_8_Skip,,, ,,m,_T21_RC2H,,,                              # Alias of CCH1
# r,,T2_RC2H,0x00C3,,,,"EF04C3",,s,_8_Skip,,, ,,s,_T2_RC2H,,,                                # Alias of CCH1
# w,,T2_RC2H,0x00C3,,,,"EF04C3",,m,_8_Skip,,, ,,m,_T2_RC2H,,,                                # Alias of CCH1
r,,CCL2,0x00C4,,,,"E804C4",,s,_8_Skip,,, ,,s,_CCL2,,,
w,,CCL2,0x00C4,,,,"E804C4",,m,_8_Skip,,, ,,m,_CCL2,,,
# r,,T21_T2L,0x00C4,,,,"E804C4",,s,_8_Skip,,, ,,s,_T21_T2L,,,                                # Alias of CCL2
# w,,T21_T2L,0x00C4,,,,"E804C4",,m,_8_Skip,,, ,,m,_T21_T2L,,,                                # Alias of CCL2
# r,,T2_T2L,0x00C4,,,,"E804C4",,s,_8_Skip,,, ,,s,_T2_T2L,,,                                  # Alias of CCL2
# w,,T2_T2L,0x00C4,,,,"E804C4",,m,_8_Skip,,, ,,m,_T2_T2L,,,                                  # Alias of CCL2
# r,,TL2,0x00C4,,,,"E804C4",,s,_8_Skip,,, ,,s,_TL2,,,                                        # Alias of CCL2
# w,,TL2,0x00C4,,,,"E804C4",,m,_8_Skip,,, ,,m,_TL2,,,                                        # Alias of CCL2
r,,CCH2,0x00C5,,,,"E904C5",,s,_8_Skip,,, ,,s,_CCH2,,,
w,,CCH2,0x00C5,,,,"E904C5",,m,_8_Skip,,, ,,m,_CCH2,,,
# r,,T21_T2H,0x00C5,,,,"E904C5",,s,_8_Skip,,, ,,s,_T21_T2H,,,                                # Alias of CCH2
# w,,T21_T2H,0x00C5,,,,"E904C5",,m,_8_Skip,,, ,,m,_T21_T2H,,,                                # Alias of CCH2
# r,,T2_T2H,0x00C5,,,,"E904C5",,s,_8_Skip,,, ,,s,_T2_T2H,,,                                  # Alias of CCH2
# w,,T2_T2H,0x00C5,,,,"E904C5",,m,_8_Skip,,, ,,m,_T2_T2H,,,                                  # Alias of CCH2
# r,,TH2,0x00C5,,,,"E904C5",,s,_8_Skip,,, ,,s,_TH2,,,                                        # Alias of CCH2
# w,,TH2,0x00C5,,,,"E904C5",,m,_8_Skip,,, ,,m,_TH2,,,                                        # Alias of CCH2
r,,CCL3,0x00C6,,,,"EA04C6",,s,_8_Skip,,, ,,s,_CCL3,,,
w,,CCL3,0x00C6,,,,"EA04C6",,m,_8_Skip,,, ,,m,_CCL3,,,
r,,CCH3,0x00C7,,,,"EB04C7",,s,_8_Skip,,, ,,s,_CCH3,,,
w,,CCH3,0x00C7,,,,"EB04C7",,m,_8_Skip,,, ,,m,_CCH3,,,
r,,P4_ALTSEL0,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_ALTSEL0,,,
w,,P4_ALTSEL0,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_P4_ALTSEL0,,,
# r,,P4_DATA,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_DATA,,,                                # Alias of P4_ALTSEL0
# w,,P4_DATA,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_P4_DATA,,,                                # Alias of P4_ALTSEL0
# r,,P4_OD,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_OD,,,                                    # Alias of P4_ALTSEL0
# w,,P4_OD,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_P4_OD,,,                                    # Alias of P4_ALTSEL0
# r,,P4_PUDSEL,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_P4_PUDSEL,,,                            # Alias of P4_ALTSEL0
# w,,P4_PUDSEL,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_P4_PUDSEL,,,                            # Alias of P4_ALTSEL0
# r,,T2CON,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_T2CON,,,                                    # Alias of P4_ALTSEL0
# w,,T2CON,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_T2CON,,,                                    # Alias of P4_ALTSEL0
# r,,UART1_SCON,0x00C8,,,,"E404C8",,s,_8_Skip,,, ,,s,_UART1_SCON,,,                          # Alias of P4_ALTSEL0
# w,,UART1_SCON,0x00C8,,,,"E404C8",,m,_8_Skip,,, ,,m,_UART1_SCON,,,                          # Alias of P4_ALTSEL0
r,,P4_ALTSEL1,0x00C9,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_ALTSEL1,,,
w,,P4_ALTSEL1,0x00C9,,,,"E504C9",,m,_8_Skip,,, ,,m,_P4_ALTSEL1,,,
# r,,P4_DIR,0x00C9,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_DIR,,,                                  # Alias of P4_ALTSEL1
# w,,P4_DIR,0x00C9,,,,"E504C9",,m,_8_Skip,,, ,,m,_P4_DIR,,,                                  # Alias of P4_ALTSEL1
# r,,P4_PUDEN,0x00C9,,,,"E504C9",,s,_8_Skip,,, ,,s,_P4_PUDEN,,,                              # Alias of P4_ALTSEL1
# w,,P4_PUDEN,0x00C9,,,,"E504C9",,m,_8_Skip,,, ,,m,_P4_PUDEN,,,                              # Alias of P4_ALTSEL1
# r,,UART1_SBUF,0x00C9,,,,"E504C9",,s,_8_Skip,,, ,,s,_UART1_SBUF,,,                          # Alias of P4_ALTSEL1
# w,,UART1_SBUF,0x00C9,,,,"E504C9",,m,_8_Skip,,, ,,m,_UART1_SBUF,,,                          # Alias of P4_ALTSEL1
r,,ADC_CHCTR0,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CHCTR0,,,
w,,ADC_CHCTR0,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_CHCTR0,,,
# r,,ADC_CHINFR,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CHINFR,,,                          # Alias of ADC_CHCTR0
# w,,ADC_CHINFR,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_CHINFR,,,                          # Alias of ADC_CHCTR0
# r,,ADC_CRCR1,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_CRCR1,,,                            # Alias of ADC_CHCTR0
# w,,ADC_CRCR1,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_CRCR1,,,                            # Alias of ADC_CHCTR0
# r,,ADC_GLOBCTR,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_GLOBCTR,,,                        # Alias of ADC_CHCTR0
# w,,ADC_GLOBCTR,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_GLOBCTR,,,                        # Alias of ADC_CHCTR0
# r,,ADC_RCR0,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RCR0,,,                              # Alias of ADC_CHCTR0
# w,,ADC_RCR0,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_RCR0,,,                              # Alias of ADC_CHCTR0
# r,,ADC_RESR0L,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RESR0L,,,                          # Alias of ADC_CHCTR0
# w,,ADC_RESR0L,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_RESR0L,,,                          # Alias of ADC_CHCTR0
# r,,ADC_RESRA0L,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_ADC_RESRA0L,,,                        # Alias of ADC_CHCTR0
# w,,ADC_RESRA0L,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_ADC_RESRA0L,,,                        # Alias of ADC_CHCTR0
# r,,CRCL,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_CRCL,,,                                      # Alias of ADC_CHCTR0
# w,,CRCL,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_CRCL,,,                                      # Alias of ADC_CHCTR0
# r,,RCAP2L,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_RCAP2L,,,                                  # Alias of ADC_CHCTR0
# w,,RCAP2L,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_RCAP2L,,,                                  # Alias of ADC_CHCTR0
# r,,UART1_BCON,0x00CA,,,,"E604CA",,s,_8_Skip,,, ,,s,_UART1_BCON,,,                          # Alias of ADC_CHCTR0
# w,,UART1_BCON,0x00CA,,,,"E604CA",,m,_8_Skip,,, ,,m,_UART1_BCON,,,                          # Alias of ADC_CHCTR0
r,,ADC_CHCTR1,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CHCTR1,,,
w,,ADC_CHCTR1,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_CHCTR1,,,
# r,,ADC_CHINCR,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CHINCR,,,                          # Alias of ADC_CHCTR1
# w,,ADC_CHINCR,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_CHINCR,,,                          # Alias of ADC_CHCTR1
# r,,ADC_CRPR1,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_CRPR1,,,                            # Alias of ADC_CHCTR1
# w,,ADC_CRPR1,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_CRPR1,,,                            # Alias of ADC_CHCTR1
# r,,ADC_GLOBSTR,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_GLOBSTR,,,                        # Alias of ADC_CHCTR1
# w,,ADC_GLOBSTR,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_GLOBSTR,,,                        # Alias of ADC_CHCTR1
# r,,ADC_RCR1,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RCR1,,,                              # Alias of ADC_CHCTR1
# w,,ADC_RCR1,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_RCR1,,,                              # Alias of ADC_CHCTR1
# r,,ADC_RESR0H,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RESR0H,,,                          # Alias of ADC_CHCTR1
# w,,ADC_RESR0H,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_RESR0H,,,                          # Alias of ADC_CHCTR1
# r,,ADC_RESRA0H,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_ADC_RESRA0H,,,                        # Alias of ADC_CHCTR1
# w,,ADC_RESRA0H,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_ADC_RESRA0H,,,                        # Alias of ADC_CHCTR1
# r,,CRCH,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_CRCH,,,                                      # Alias of ADC_CHCTR1
# w,,CRCH,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_CRCH,,,                                      # Alias of ADC_CHCTR1
# r,,RCAP2H,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_RCAP2H,,,                                  # Alias of ADC_CHCTR1
# w,,RCAP2H,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_RCAP2H,,,                                  # Alias of ADC_CHCTR1
# r,,UART1_BG,0x00CB,,,,"E704CB",,s,_8_Skip,,, ,,s,_UART1_BG,,,                              # Alias of ADC_CHCTR1
# w,,UART1_BG,0x00CB,,,,"E704CB",,m,_8_Skip,,, ,,m,_UART1_BG,,,                              # Alias of ADC_CHCTR1
r,,ADC_CHCTR2,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CHCTR2,,,
w,,ADC_CHCTR2,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_CHCTR2,,,
# r,,ADC_CHINSR,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CHINSR,,,                          # Alias of ADC_CHCTR2
# w,,ADC_CHINSR,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_CHINSR,,,                          # Alias of ADC_CHCTR2
# r,,ADC_CRMR1,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_CRMR1,,,                            # Alias of ADC_CHCTR2
# w,,ADC_CRMR1,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_CRMR1,,,                            # Alias of ADC_CHCTR2
# r,,ADC_PRAR,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_PRAR,,,                              # Alias of ADC_CHCTR2
# w,,ADC_PRAR,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_PRAR,,,                              # Alias of ADC_CHCTR2
# r,,ADC_RCR2,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RCR2,,,                              # Alias of ADC_CHCTR2
# w,,ADC_RCR2,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_RCR2,,,                              # Alias of ADC_CHCTR2
# r,,ADC_RESR1L,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RESR1L,,,                          # Alias of ADC_CHCTR2
# w,,ADC_RESR1L,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_RESR1L,,,                          # Alias of ADC_CHCTR2
# r,,ADC_RESRA1L,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_ADC_RESRA1L,,,                        # Alias of ADC_CHCTR2
# w,,ADC_RESRA1L,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_ADC_RESRA1L,,,                        # Alias of ADC_CHCTR2
# r,,UART1_FDCON,0x00CC,,,,"E004CC",,s,_8_Skip,,, ,,s,_UART1_FDCON,,,                        # Alias of ADC_CHCTR2
# w,,UART1_FDCON,0x00CC,,,,"E004CC",,m,_8_Skip,,, ,,m,_UART1_FDCON,,,                        # Alias of ADC_CHCTR2
r,,ADC_CHCTR3,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_CHCTR3,,,
w,,ADC_CHCTR3,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_CHCTR3,,,
# r,,ADC_CHINPR,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_CHINPR,,,                          # Alias of ADC_CHCTR3
# w,,ADC_CHINPR,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_CHINPR,,,                          # Alias of ADC_CHCTR3
# r,,ADC_LCBR,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_LCBR,,,                              # Alias of ADC_CHCTR3
# w,,ADC_LCBR,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_LCBR,,,                              # Alias of ADC_CHCTR3
# r,,ADC_QMR0,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_QMR0,,,                              # Alias of ADC_CHCTR3
# w,,ADC_QMR0,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_QMR0,,,                              # Alias of ADC_CHCTR3
# r,,ADC_RCR3,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RCR3,,,                              # Alias of ADC_CHCTR3
# w,,ADC_RCR3,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_RCR3,,,                              # Alias of ADC_CHCTR3
# r,,ADC_RESR1H,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RESR1H,,,                          # Alias of ADC_CHCTR3
# w,,ADC_RESR1H,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_RESR1H,,,                          # Alias of ADC_CHCTR3
# r,,ADC_RESRA1H,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_ADC_RESRA1H,,,                        # Alias of ADC_CHCTR3
# w,,ADC_RESRA1H,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_ADC_RESRA1H,,,                        # Alias of ADC_CHCTR3
# r,,UART1_FDSTEP,0x00CD,,,,"E104CD",,s,_8_Skip,,, ,,s,_UART1_FDSTEP,,,                      # Alias of ADC_CHCTR3
# w,,UART1_FDSTEP,0x00CD,,,,"E104CD",,m,_8_Skip,,, ,,m,_UART1_FDSTEP,,,                      # Alias of ADC_CHCTR3
r,,ADC_CHCTR4,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_CHCTR4,,,
w,,ADC_CHCTR4,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_CHCTR4,,,
# r,,ADC_EVINFR,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_EVINFR,,,                          # Alias of ADC_CHCTR4
# w,,ADC_EVINFR,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_EVINFR,,,                          # Alias of ADC_CHCTR4
# r,,ADC_INPCR0,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_INPCR0,,,                          # Alias of ADC_CHCTR4
# w,,ADC_INPCR0,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_INPCR0,,,                          # Alias of ADC_CHCTR4
# r,,ADC_QSR0,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_QSR0,,,                              # Alias of ADC_CHCTR4
# w,,ADC_QSR0,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_QSR0,,,                              # Alias of ADC_CHCTR4
# r,,ADC_RESR2L,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_RESR2L,,,                          # Alias of ADC_CHCTR4
# w,,ADC_RESR2L,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_RESR2L,,,                          # Alias of ADC_CHCTR4
# r,,ADC_RESRA2L,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_RESRA2L,,,                        # Alias of ADC_CHCTR4
# w,,ADC_RESRA2L,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_RESRA2L,,,                        # Alias of ADC_CHCTR4
# r,,ADC_VFCR,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_ADC_VFCR,,,                              # Alias of ADC_CHCTR4
# w,,ADC_VFCR,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_ADC_VFCR,,,                              # Alias of ADC_CHCTR4
# r,,UART1_FDRES,0x00CE,,,,"E204CE",,s,_8_Skip,,, ,,s,_UART1_FDRES,,,                        # Alias of ADC_CHCTR4
# w,,UART1_FDRES,0x00CE,,,,"E204CE",,m,_8_Skip,,, ,,m,_UART1_FDRES,,,                        # Alias of ADC_CHCTR4
r,,ADC_CHCTR5,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_CHCTR5,,,
w,,ADC_CHCTR5,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_CHCTR5,,,
# r,,ADC_ETRCR,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_ETRCR,,,                            # Alias of ADC_CHCTR5
# w,,ADC_ETRCR,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_ETRCR,,,                            # Alias of ADC_CHCTR5
# r,,ADC_EVINCR,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_EVINCR,,,                          # Alias of ADC_CHCTR5
# w,,ADC_EVINCR,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_EVINCR,,,                          # Alias of ADC_CHCTR5
# r,,ADC_Q0R0,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_Q0R0,,,                              # Alias of ADC_CHCTR5
# w,,ADC_Q0R0,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_Q0R0,,,                              # Alias of ADC_CHCTR5
# r,,ADC_RESR2H,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_RESR2H,,,                          # Alias of ADC_CHCTR5
# w,,ADC_RESR2H,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_RESR2H,,,                          # Alias of ADC_CHCTR5
# r,,ADC_RESRA2H,0x00CF,,,,"E304CF",,s,_8_Skip,,, ,,s,_ADC_RESRA2H,,,                        # Alias of ADC_CHCTR5
# w,,ADC_RESRA2H,0x00CF,,,,"E304CF",,m,_8_Skip,,, ,,m,_ADC_RESRA2H,,,                        # Alias of ADC_CHCTR5
r,,PSW,0x00D0,,,,"FC04D0",,s,_8_Skip,,, ,,s,_PSW,,,
w,,PSW,0x00D0,,,,"FC04D0",,m,_8_Skip,,, ,,m,_PSW,,,
r,,ADC_PAGE,0x00D1,,,,"FD04D1",,s,_8_Skip,,, ,,s,_ADC_PAGE,,,
w,,ADC_PAGE,0x00D1,,,,"FD04D1",,m,_8_Skip,,, ,,m,_ADC_PAGE,,,
r,,ADC_CHCTR6,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_CHCTR6,,,
w,,ADC_CHCTR6,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_CHCTR6,,,
# r,,ADC_EVINSR,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_EVINSR,,,                          # Alias of ADC_CHCTR6
# w,,ADC_EVINSR,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_EVINSR,,,                          # Alias of ADC_CHCTR6
# r,,ADC_QBUR0,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_QBUR0,,,                            # Alias of ADC_CHCTR6
# w,,ADC_QBUR0,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_QBUR0,,,                            # Alias of ADC_CHCTR6
# r,,ADC_QINR0,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_QINR0,,,                            # Alias of ADC_CHCTR6
# w,,ADC_QINR0,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_QINR0,,,                            # Alias of ADC_CHCTR6
# r,,ADC_RESR3L,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_RESR3L,,,                          # Alias of ADC_CHCTR6
# w,,ADC_RESR3L,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_RESR3L,,,                          # Alias of ADC_CHCTR6
# r,,ADC_RESRA3L,0x00D2,,,,"FE04D2",,s,_8_Skip,,, ,,s,_ADC_RESRA3L,,,                        # Alias of ADC_CHCTR6
# w,,ADC_RESRA3L,0x00D2,,,,"FE04D2",,m,_8_Skip,,, ,,m,_ADC_RESRA3L,,,                        # Alias of ADC_CHCTR6
r,,ADC_CHCTR7,0x00D3,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_CHCTR7,,,
w,,ADC_CHCTR7,0x00D3,,,,"FF04D3",,m,_8_Skip,,, ,,m,_ADC_CHCTR7,,,
# r,,ADC_EVINPR,0x00D3,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_EVINPR,,,                          # Alias of ADC_CHCTR7
# w,,ADC_EVINPR,0x00D3,,,,"FF04D3",,m,_8_Skip,,, ,,m,_ADC_EVINPR,,,                          # Alias of ADC_CHCTR7
# r,,ADC_RESR3H,0x00D3,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_RESR3H,,,                          # Alias of ADC_CHCTR7
# w,,ADC_RESR3H,0x00D3,,,,"FF04D3",,m,_8_Skip,,, ,,m,_ADC_RESR3H,,,                          # Alias of ADC_CHCTR7
# r,,ADC_RESRA3H,0x00D3,,,,"FF04D3",,s,_8_Skip,,, ,,s,_ADC_RESRA3H,,,                        # Alias of ADC_CHCTR7
# w,,ADC_RESRA3H,0x00D3,,,,"FF04D3",,m,_8_Skip,,, ,,m,_ADC_RESRA3H,,,                        # Alias of ADC_CHCTR7
r,,ADCON0,0x00D8,,,,"F404D8",,s,_8_Skip,,, ,,s,_ADCON0,,,
w,,ADCON0,0x00D8,,,,"F404D8",,m,_8_Skip,,, ,,m,_ADCON0,,,
r,,ADDATH,0x00D9,,,,"F504D9",,s,_8_Skip,,, ,,s,_ADDATH,,,
w,,ADDATH,0x00D9,,,,"F504D9",,m,_8_Skip,,, ,,m,_ADDATH,,,
r,,ADDATL,0x00DA,,,,"F604DA",,s,_8_Skip,,, ,,s,_ADDATL,,,
w,,ADDATL,0x00DA,,,,"F604DA",,m,_8_Skip,,, ,,m,_ADDATL,,,
r,,ADCON1,0x00DC,,,,"F004DC",,s,_8_Skip,,, ,,s,_ADCON1,,,
w,,ADCON1,0x00DC,,,,"F004DC",,m,_8_Skip,,, ,,m,_ADCON1,,,
r,,ACC,0x00E0,,,,"CC04E0",,s,_8_Skip,,, ,,s,_ACC,,,
w,,ACC,0x00E0,,,,"CC04E0",,m,_8_Skip,,, ,,m,_ACC,,,
r,,IEN1,0x00E8,,,,"C404E8",,s,_8_Skip,,, ,,s,_IEN1,,,
w,,IEN1,0x00E8,,,,"C404E8",,m,_8_Skip,,, ,,m,_IEN1,,,
r,,FDCON,0x00E9,,,,"C504E9",,s,_8_Skip,,, ,,s,_FDCON,,,
w,,FDCON,0x00E9,,,,"C504E9",,m,_8_Skip,,, ,,m,_FDCON,,,
# r,,MISC_CON,0x00E9,,,,"C504E9",,s,_8_Skip,,, ,,s,_MISC_CON,,,                              # Alias of FDCON
# w,,MISC_CON,0x00E9,,,,"C504E9",,m,_8_Skip,,, ,,m,_MISC_CON,,,                              # Alias of FDCON
# r,,MMCR2,0x00E9,,,,"C504E9",,s,_8_Skip,,, ,,s,_MMCR2,,,                                    # Alias of FDCON
# w,,MMCR2,0x00E9,,,,"C504E9",,m,_8_Skip,,, ,,m,_MMCR2,,,                                    # Alias of FDCON
r,,FDSTEP,0x00EA,,,,"C604EA",,s,_8_Skip,,, ,,s,_FDSTEP,,,
w,,FDSTEP,0x00EA,,,,"C604EA",,m,_8_Skip,,, ,,m,_FDSTEP,,,
r,,FDRES,0x00EB,,,,"C704EB",,s,_8_Skip,,, ,,s,_FDRES,,,
w,,FDRES,0x00EB,,,,"C704EB",,m,_8_Skip,,, ,,m,_FDRES,,,
# r,,MMWR1,0x00EB,,,,"C704EB",,s,_8_Skip,,, ,,s,_MMWR1,,,                                    # Alias of FDRES
# w,,MMWR1,0x00EB,,,,"C704EB",,m,_8_Skip,,, ,,m,_MMWR1,,,                                    # Alias of FDRES
r,,MMWR2,0x00EC,,,,"C004EC",,s,_8_Skip,,, ,,s,_MMWR2,,,
w,,MMWR2,0x00EC,,,,"C004EC",,m,_8_Skip,,, ,,m,_MMWR2,,,
r,,MMCR,0x00F1,,,,"DD04F1",,s,_8_Skip,,, ,,s,_MMCR,,,
w,,MMCR,0x00F1,,,,"DD04F1",,m,_8_Skip,,, ,,m,_MMCR,,,
r,,MMSR,0x00F2,,,,"DE04F2",,s,_8_Skip,,, ,,s,_MMSR,,,
w,,MMSR,0x00F2,,,,"DE04F2",,m,_8_Skip,,, ,,m,_MMSR,,,
r,,MMBPCR,0x00F3,,,,"DF04F3",,s,_8_Skip,,, ,,s,_MMBPCR,,,
w,,MMBPCR,0x00F3,,,,"DF04F3",,m,_8_Skip,,, ,,m,_MMBPCR,,,
r,,MMICR,0x00F4,,,,"D804F4",,s,_8_Skip,,, ,,s,_MMICR,,,
w,,MMICR,0x00F4,,,,"D804F4",,m,_8_Skip,,, ,,m,_MMICR,,,
r,,MMDR,0x00F5,,,,"D904F5",,s,_8_Skip,,, ,,s,_MMDR,,,
w,,MMDR,0x00F5,,,,"D904F5",,m,_8_Skip,,, ,,m,_MMDR,,,
r,,HWBPSR,0x00F6,,,,"DA04F6",,s,_8_Skip,,, ,,s,_HWBPSR,,,
w,,HWBPSR,0x00F6,,,,"DA04F6",,m,_8_Skip,,, ,,m,_HWBPSR,,,
r,,HWBPDR,0x00F7,,,,"DB04F7",,s,_8_Skip,,, ,,s,_HWBPDR,,,
w,,HWBPDR,0x00F7,,,,"DB04F7",,m,_8_Skip,,, ,,m,_HWBPDR,,,
r,,IP1,0x00F8,,,,"D404F8",,s,_8_Skip,,, ,,s,_IP1,,,
w,,IP1,0x00F8,,,,"D404F8",,m,_8_Skip,,, ,,m,_IP1,,,
r,,IPH1,0x00F9,,,,"D504F9",,s,_8_Skip,,, ,,s,_IPH1,,,
w,,IPH1,0x00F9,,,,"D504F9",,m,_8_Skip,,, ,,m,_IPH1,,,
r,,CCU6_CC60RL,0x00FA,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_CC60RL,,,
w,,CCU6_CC60RL,0x00FA,,,,"D604FA",,m,_8_Skip,,, ,,m,_CCU6_CC60RL,,,
# r,,CCU6_CC60SRL,0x00FA,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_CC60SRL,,,                      # Alias of CCU6_CC60RL
# w,,CCU6_CC60SRL,0x00FA,,,,"D604FA",,m,_8_Skip,,, ,,m,_CCU6_CC60SRL,,,                      # Alias of CCU6_CC60RL
# r,,CCU6_T12L,0x00FA,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_T12L,,,                            # Alias of CCU6_CC60RL
# w,,CCU6_T12L,0x00FA,,,,"D604FA",,m,_8_Skip,,, ,,m,_CCU6_T12L,,,                            # Alias of CCU6_CC60RL
# r,,CCU6_TCTR2L,0x00FA,,,,"D604FA",,s,_8_Skip,,, ,,s,_CCU6_TCTR2L,,,                        # Alias of CCU6_CC60RL
# w,,CCU6_TCTR2L,0x00FA,,,,"D604FA",,m,_8_Skip,,, ,,m,_CCU6_TCTR2L,,,                        # Alias of CCU6_CC60RL
r,,CCU6_CC60RH,0x00FB,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_CC60RH,,,
w,,CCU6_CC60RH,0x00FB,,,,"D704FB",,m,_8_Skip,,, ,,m,_CCU6_CC60RH,,,
# r,,CCU6_CC60SRH,0x00FB,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_CC60SRH,,,                      # Alias of CCU6_CC60RH
# w,,CCU6_CC60SRH,0x00FB,,,,"D704FB",,m,_8_Skip,,, ,,m,_CCU6_CC60SRH,,,                      # Alias of CCU6_CC60RH
# r,,CCU6_T12H,0x00FB,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_T12H,,,                            # Alias of CCU6_CC60RH
# w,,CCU6_T12H,0x00FB,,,,"D704FB",,m,_8_Skip,,, ,,m,_CCU6_T12H,,,                            # Alias of CCU6_CC60RH
# r,,CCU6_TCTR2H,0x00FB,,,,"D704FB",,s,_8_Skip,,, ,,s,_CCU6_TCTR2H,,,                        # Alias of CCU6_CC60RH
# w,,CCU6_TCTR2H,0x00FB,,,,"D704FB",,m,_8_Skip,,, ,,m,_CCU6_TCTR2H,,,                        # Alias of CCU6_CC60RH
r,,CCL_PUHZ,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCL_PUHZ,,,
w,,CCL_PUHZ,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_CCL_PUHZ,,,
# r,,CCU6_CC61RL,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_CC61RL,,,                        # Alias of CCL_PUHZ
# w,,CCU6_CC61RL,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_CCU6_CC61RL,,,                        # Alias of CCL_PUHZ
# r,,CCU6_CC61SRL,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_CC61SRL,,,                      # Alias of CCL_PUHZ
# w,,CCU6_CC61SRL,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_CCU6_CC61SRL,,,                      # Alias of CCL_PUHZ
# r,,CCU6_MODCTRL,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_MODCTRL,,,                      # Alias of CCL_PUHZ
# w,,CCU6_MODCTRL,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_CCU6_MODCTRL,,,                      # Alias of CCL_PUHZ
# r,,CCU6_T13L,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_CCU6_T13L,,,                            # Alias of CCL_PUHZ
# w,,CCU6_T13L,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_CCU6_T13L,,,                            # Alias of CCL_PUHZ
# r,,VR0,0x00FC,,,,"D004FC",,s,_8_Skip,,, ,,s,_VR0,,,                                        # Alias of CCL_PUHZ
# w,,VR0,0x00FC,,,,"D004FC",,m,_8_Skip,,, ,,m,_VR0,,,                                        # Alias of CCL_PUHZ
r,,CCH_PUHZ,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCH_PUHZ,,,
w,,CCH_PUHZ,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_CCH_PUHZ,,,
# r,,CCU6_CC61RH,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_CC61RH,,,                        # Alias of CCH_PUHZ
# w,,CCU6_CC61RH,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_CCU6_CC61RH,,,                        # Alias of CCH_PUHZ
# r,,CCU6_CC61SRH,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_CC61SRH,,,                      # Alias of CCH_PUHZ
# w,,CCU6_CC61SRH,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_CCU6_CC61SRH,,,                      # Alias of CCH_PUHZ
# r,,CCU6_MODCTRH,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_MODCTRH,,,                      # Alias of CCH_PUHZ
# w,,CCU6_MODCTRH,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_CCU6_MODCTRH,,,                      # Alias of CCH_PUHZ
# r,,CCU6_T13H,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_CCU6_T13H,,,                            # Alias of CCH_PUHZ
# w,,CCU6_T13H,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_CCU6_T13H,,,                            # Alias of CCH_PUHZ
# r,,VR1,0x00FD,,,,"D104FD",,s,_8_Skip,,, ,,s,_VR1,,,                                        # Alias of CCH_PUHZ
# w,,VR1,0x00FD,,,,"D104FD",,m,_8_Skip,,, ,,m,_VR1,,,                                        # Alias of CCH_PUHZ
r,,CCL_GPV,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCL_GPV,,,
w,,CCL_GPV,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_CCL_GPV,,,
# r,,CCU6_CC62RL,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CC62RL,,,                        # Alias of CCL_GPV
# w,,CCU6_CC62RL,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_CCU6_CC62RL,,,                        # Alias of CCL_GPV
# r,,CCU6_CC62SRL,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CC62SRL,,,                      # Alias of CCL_GPV
# w,,CCU6_CC62SRL,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_CCU6_CC62SRL,,,                      # Alias of CCL_GPV
# r,,CCU6_CMPSTATL,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_CMPSTATL,,,                    # Alias of CCL_GPV
# w,,CCU6_CMPSTATL,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_CCU6_CMPSTATL,,,                    # Alias of CCL_GPV
# r,,CCU6_TRPCTRL,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_CCU6_TRPCTRL,,,                      # Alias of CCL_GPV
# w,,CCU6_TRPCTRL,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_CCU6_TRPCTRL,,,                      # Alias of CCL_GPV
# r,,VR2,0x00FE,,,,"D204FE",,s,_8_Skip,,, ,,s,_VR2,,,                                        # Alias of CCL_GPV
# w,,VR2,0x00FE,,,,"D204FE",,m,_8_Skip,,, ,,m,_VR2,,,                                        # Alias of CCL_GPV
r,,CCH_GPV,0x00FF,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCH_GPV,,,
w,,CCH_GPV,0x00FF,,,,"D304FF",,m,_8_Skip,,, ,,m,_CCH_GPV,,,
# r,,CCU6_CC62RH,0x00FF,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CC62RH,,,                        # Alias of CCH_GPV
# w,,CCU6_CC62RH,0x00FF,,,,"D304FF",,m,_8_Skip,,, ,,m,_CCU6_CC62RH,,,                        # Alias of CCH_GPV
# r,,CCU6_CC62SRH,0x00FF,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CC62SRH,,,                      # Alias of CCH_GPV
# w,,CCU6_CC62SRH,0x00FF,,,,"D304FF",,m,_8_Skip,,, ,,m,_CCU6_CC62SRH,,,                      # Alias of CCH_GPV
# r,,CCU6_CMPSTATH,0x00FF,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_CMPSTATH,,,                    # Alias of CCH_GPV
# w,,CCU6_CMPSTATH,0x00FF,,,,"D304FF",,m,_8_Skip,,, ,,m,_CCU6_CMPSTATH,,,                    # Alias of CCH_GPV
# r,,CCU6_TRPCTRH,0x00FF,,,,"D304FF",,s,_8_Skip,,, ,,s,_CCU6_TRPCTRH,,,                      # Alias of CCH_GPV
# w,,CCU6_TRPCTRH,0x00FF,,,,"D304FF",,m,_8_Skip,,, ,,m,_CCU6_TRPCTRH,,,                      # Alias of CCH_GPV

# --- Konstanten ---
r,,ACK_07FF_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_07FF_BIT,,,
w,,ACK_07FF_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ACK_07FF_BIT,,,
# r,,ACK_0800_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_0800_BIT,,,                      # Alias of ACK_07FF_BIT
# w,,ACK_0800_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ACK_0800_BIT,,,                      # Alias of ACK_07FF_BIT
# r,,ACK_5002_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_5002_BIT,,,                      # Alias of ACK_07FF_BIT
# w,,ACK_5002_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ACK_5002_BIT,,,                      # Alias of ACK_07FF_BIT
# r,,ACK_FF00_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_FF00_BIT,,,                      # Alias of ACK_07FF_BIT
# w,,ACK_FF00_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ACK_FF00_BIT,,,                      # Alias of ACK_07FF_BIT
# r,,ACK_REG_STOP_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ACK_REG_STOP_BIT,,,              # Alias of ACK_07FF_BIT
# w,,ACK_REG_STOP_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ACK_REG_STOP_BIT,,,              # Alias of ACK_07FF_BIT
# r,,ADC_SHORT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ADC_SHORT,,,                            # Alias of ACK_07FF_BIT
# w,,ADC_SHORT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ADC_SHORT,,,                            # Alias of ACK_07FF_BIT
# r,,AIO_900,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_AIO_900,,,                                # Alias of ACK_07FF_BIT
# w,,AIO_900,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_AIO_900,,,                                # Alias of ACK_07FF_BIT
# r,,BCCARD,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_BCCARD,,,                                  # Alias of ACK_07FF_BIT
# w,,BCCARD,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_BCCARD,,,                                  # Alias of ACK_07FF_BIT
# r,,EBUS_S7,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EBUS_S7,,,                                # Alias of ACK_07FF_BIT
# w,,EBUS_S7,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EBUS_S7,,,                                # Alias of ACK_07FF_BIT
# r,,EBUS_SCHICHT_2,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EBUS_SCHICHT_2,,,                  # Alias of ACK_07FF_BIT
# w,,EBUS_SCHICHT_2,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EBUS_SCHICHT_2,,,                  # Alias of ACK_07FF_BIT
# r,,EEA_ANF,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EEA_ANF,,,                                # Alias of ACK_07FF_BIT
# w,,EEA_ANF,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EEA_ANF,,,                                # Alias of ACK_07FF_BIT
# r,,EEP_FAST_INIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EEP_FAST_INIT,,,                    # Alias of ACK_07FF_BIT
# w,,EEP_FAST_INIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EEP_FAST_INIT,,,                    # Alias of ACK_07FF_BIT
# r,,EE_I2C,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EE_I2C,,,                                  # Alias of ACK_07FF_BIT
# w,,EE_I2C,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EE_I2C,,,                                  # Alias of ACK_07FF_BIT
# r,,EE_PARAS,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_EE_PARAS,,,                              # Alias of ACK_07FF_BIT
# w,,EE_PARAS,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_EE_PARAS,,,                              # Alias of ACK_07FF_BIT
# r,,FEHLER_DETAIL_EBENE,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_FEHLER_DETAIL_EBENE,,,        # Alias of ACK_07FF_BIT
# w,,FEHLER_DETAIL_EBENE,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_FEHLER_DETAIL_EBENE,,,        # Alias of ACK_07FF_BIT
# r,,HARD_52,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_HARD_52,,,                                # Alias of ACK_07FF_BIT
# w,,HARD_52,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_HARD_52,,,                                # Alias of ACK_07FF_BIT
# r,,INFONR,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_INFONR,,,                                  # Alias of ACK_07FF_BIT
# w,,INFONR,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_INFONR,,,                                  # Alias of ACK_07FF_BIT
# r,,ION,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ION,,,                                        # Alias of ACK_07FF_BIT
# w,,ION,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ION,,,                                        # Alias of ACK_07FF_BIT
# r,,MXSTB_A,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_MXSTB_A,,,                                # Alias of ACK_07FF_BIT
# w,,MXSTB_A,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_MXSTB_A,,,                                # Alias of ACK_07FF_BIT
# r,,NM_KALTSTART_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_NM_KALTSTART_BIT,,,              # Alias of ACK_07FF_BIT
# w,,NM_KALTSTART_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_NM_KALTSTART_BIT,,,              # Alias of ACK_07FF_BIT
# r,,OS_XC886,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_OS_XC886,,,                              # Alias of ACK_07FF_BIT
# w,,OS_XC886,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_OS_XC886,,,                              # Alias of ACK_07FF_BIT
# r,,QQ_M1,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_QQ_M1,,,                                    # Alias of ACK_07FF_BIT
# w,,QQ_M1,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_QQ_M1,,,                                    # Alias of ACK_07FF_BIT
# r,,RAMROM,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_RAMROM,,,                                  # Alias of ACK_07FF_BIT
# w,,RAMROM,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_RAMROM,,,                                  # Alias of ACK_07FF_BIT
# r,,RX_XRAM_BUSY_BIT,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_RX_XRAM_BUSY_BIT,,,              # Alias of ACK_07FF_BIT
# w,,RX_XRAM_BUSY_BIT,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_RX_XRAM_BUSY_BIT,,,              # Alias of ACK_07FF_BIT
# r,,SFR_IO,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_SFR_IO,,,                                  # Alias of ACK_07FF_BIT
# w,,SFR_IO,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_SFR_IO,,,                                  # Alias of ACK_07FF_BIT
# r,,STOEREC,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_STOEREC,,,                                # Alias of ACK_07FF_BIT
# w,,STOEREC,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_STOEREC,,,                                # Alias of ACK_07FF_BIT
# r,,TX_EIG_QQ,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_TX_EIG_QQ,,,                            # Alias of ACK_07FF_BIT
# w,,TX_EIG_QQ,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_TX_EIG_QQ,,,                            # Alias of ACK_07FF_BIT
# r,,TX_QQ_M11,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_TX_QQ_M11,,,                            # Alias of ACK_07FF_BIT
# w,,TX_QQ_M11,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_TX_QQ_M11,,,                            # Alias of ACK_07FF_BIT
# r,,USER,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_USER,,,                                      # Alias of ACK_07FF_BIT
# w,,USER,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_USER,,,                                      # Alias of ACK_07FF_BIT
# r,,VAR_900,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_VAR_900,,,                                # Alias of ACK_07FF_BIT
# w,,VAR_900,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_VAR_900,,,                                # Alias of ACK_07FF_BIT
# r,,ZST_QQ_EIG,0x0000,,,,"B80200",,s,_8_Skip,,, ,,s,_ZST_QQ_EIG,,,                          # Alias of ACK_07FF_BIT
# w,,ZST_QQ_EIG,0x0000,,,,"B80200",,m,_8_Skip,,, ,,m,_ZST_QQ_EIG,,,                          # Alias of ACK_07FF_BIT
r,,ACK_0503_BIT,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0503_BIT,,,
w,,ACK_0503_BIT,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_0503_BIT,,,
# r,,ACK_0704_BIT,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0704_BIT,,,                      # Alias of ACK_0503_BIT
# w,,ACK_0704_BIT,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_0704_BIT,,,                      # Alias of ACK_0503_BIT
# r,,ACK_07FF,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_07FF,,,                              # Alias of ACK_0503_BIT
# w,,ACK_07FF,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_07FF,,,                              # Alias of ACK_0503_BIT
# r,,ACK_0800,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_0800,,,                              # Alias of ACK_0503_BIT
# w,,ACK_0800,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_0800,,,                              # Alias of ACK_0503_BIT
# r,,ACK_5002,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_5002,,,                              # Alias of ACK_0503_BIT
# w,,ACK_5002,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_5002,,,                              # Alias of ACK_0503_BIT
# r,,ACK_FF00,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_FF00,,,                              # Alias of ACK_0503_BIT
# w,,ACK_FF00,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_FF00,,,                              # Alias of ACK_0503_BIT
# r,,ACK_FF02_BIT,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_FF02_BIT,,,                      # Alias of ACK_0503_BIT
# w,,ACK_FF02_BIT,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_FF02_BIT,,,                      # Alias of ACK_0503_BIT
# r,,ACK_REG_STOP,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ACK_REG_STOP,,,                      # Alias of ACK_0503_BIT
# w,,ACK_REG_STOP,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ACK_REG_STOP,,,                      # Alias of ACK_0503_BIT
# r,,ADC_NONE,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ADC_NONE,,,                              # Alias of ACK_0503_BIT
# w,,ADC_NONE,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ADC_NONE,,,                              # Alias of ACK_0503_BIT
# r,,AIN_ERR_NI1000,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_AIN_ERR_NI1000,,,                  # Alias of ACK_0503_BIT
# w,,AIN_ERR_NI1000,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_AIN_ERR_NI1000,,,                  # Alias of ACK_0503_BIT
# r,,EE_RANGE_FAIL__DEF,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__DEF,,,          # Alias of ACK_0503_BIT
# w,,EE_RANGE_FAIL__DEF,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_EE_RANGE_FAIL__DEF,,,          # Alias of ACK_0503_BIT
# r,,MAX_OK,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_MAX_OK,,,                                  # Alias of ACK_0503_BIT
# w,,MAX_OK,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_MAX_OK,,,                                  # Alias of ACK_0503_BIT
# r,,NGPBS_AFAKT,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_NGPBS_AFAKT,,,                        # Alias of ACK_0503_BIT
# w,,NGPBS_AFAKT,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_NGPBS_AFAKT,,,                        # Alias of ACK_0503_BIT
# r,,NM_INIT_BIT,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_NM_INIT_BIT,,,                        # Alias of ACK_0503_BIT
# w,,NM_INIT_BIT,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_NM_INIT_BIT,,,                        # Alias of ACK_0503_BIT
# r,,NTC1_TR_TST,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_NTC1_TR_TST,,,                        # Alias of ACK_0503_BIT
# w,,NTC1_TR_TST,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_NTC1_TR_TST,,,                        # Alias of ACK_0503_BIT
# r,,RX_QQ_M2,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_RX_QQ_M2,,,                              # Alias of ACK_0503_BIT
# w,,RX_QQ_M2,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_RX_QQ_M2,,,                              # Alias of ACK_0503_BIT
# r,,TCVZZ,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_TCVZZ,,,                                    # Alias of ACK_0503_BIT
# w,,TCVZZ,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_TCVZZ,,,                                    # Alias of ACK_0503_BIT
# r,,ZST_QQ_M2,0x0001,,,,"B90201",,s,_8_Skip,,, ,,s,_ZST_QQ_M2,,,                            # Alias of ACK_0503_BIT
# w,,ZST_QQ_M2,0x0001,,,,"B90201",,m,_8_Skip,,, ,,m,_ZST_QQ_M2,,,                            # Alias of ACK_0503_BIT
r,,ACK_0503,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_0503,,,
w,,ACK_0503,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ACK_0503,,,
# r,,ACK_0704,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_0704,,,                              # Alias of ACK_0503
# w,,ACK_0704,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ACK_0704,,,                              # Alias of ACK_0503
# r,,ACK_FE01_BIT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_FE01_BIT,,,                      # Alias of ACK_0503
# w,,ACK_FE01_BIT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ACK_FE01_BIT,,,                      # Alias of ACK_0503
# r,,ACK_FF02,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ACK_FF02,,,                              # Alias of ACK_0503
# w,,ACK_FF02,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ACK_FF02,,,                              # Alias of ACK_0503
# r,,EEA_CONST_ANF,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_EEA_CONST_ANF,,,                    # Alias of ACK_0503
# w,,EEA_CONST_ANF,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_EEA_CONST_ANF,,,                    # Alias of ACK_0503
# r,,EE_RANGE_FAIL__INTBCC,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__INTBCC,,,    # Alias of ACK_0503
# w,,EE_RANGE_FAIL__INTBCC,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_EE_RANGE_FAIL__INTBCC,,,    # Alias of ACK_0503
# r,,ION_TEILER,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ION_TEILER,,,                          # Alias of ACK_0503
# w,,ION_TEILER,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ION_TEILER,,,                          # Alias of ACK_0503
# r,,L_EEA_CRC_BCC_INT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_L_EEA_CRC_BCC_INT,,,            # Alias of ACK_0503
# w,,L_EEA_CRC_BCC_INT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_L_EEA_CRC_BCC_INT,,,            # Alias of ACK_0503
# r,,MB_2_INIT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_MB_2_INIT,,,                            # Alias of ACK_0503
# w,,MB_2_INIT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_MB_2_INIT,,,                            # Alias of ACK_0503
# r,,NGPBS_XWATOM,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_NGPBS_XWATOM,,,                      # Alias of ACK_0503
# w,,NGPBS_XWATOM,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_NGPBS_XWATOM,,,                      # Alias of ACK_0503
# r,,NM_RESET_BIT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_NM_RESET_BIT,,,                      # Alias of ACK_0503
# w,,NM_RESET_BIT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_NM_RESET_BIT,,,                      # Alias of ACK_0503
# r,,NM_S7_RESET_BIT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_NM_S7_RESET_BIT,,,                # Alias of ACK_0503
# w,,NM_S7_RESET_BIT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_NM_S7_RESET_BIT,,,                # Alias of ACK_0503
# r,,NTC2_TR_TST,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_NTC2_TR_TST,,,                        # Alias of ACK_0503
# w,,NTC2_TR_TST,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_NTC2_TR_TST,,,                        # Alias of ACK_0503
# r,,TIDLE_R2,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_TIDLE_R2,,,                              # Alias of ACK_0503
# w,,TIDLE_R2,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_TIDLE_R2,,,                              # Alias of ACK_0503
# r,,ZST_QQ_M10,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ZST_QQ_M10,,,                          # Alias of ACK_0503
# w,,ZST_QQ_M10,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ZST_QQ_M10,,,                          # Alias of ACK_0503
# r,,ZST_QQ_M10_BIT,0x0002,,,,"BA0202",,s,_8_Skip,,, ,,s,_ZST_QQ_M10_BIT,,,                  # Alias of ACK_0503
# w,,ZST_QQ_M10_BIT,0x0002,,,,"BA0202",,m,_8_Skip,,, ,,m,_ZST_QQ_M10_BIT,,,                  # Alias of ACK_0503
r,,ADC_MXCODE,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_ADC_MXCODE,,,
w,,ADC_MXCODE,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_ADC_MXCODE,,,
# r,,AI_MUXER,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_AI_MUXER,,,                              # Alias of ADC_MXCODE
# w,,AI_MUXER,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_AI_MUXER,,,                              # Alias of ADC_MXCODE
# r,,AI_REF,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_AI_REF,,,                                  # Alias of ADC_MXCODE
# w,,AI_REF,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_AI_REF,,,                                  # Alias of ADC_MXCODE
# r,,EM_EE_REDUND__SELF,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__SELF,,,          # Alias of ADC_MXCODE
# w,,EM_EE_REDUND__SELF,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_EM_EE_REDUND__SELF,,,          # Alias of ADC_MXCODE
# r,,HZ_KTND__I,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_HZ_KTND__I,,,                          # Alias of ADC_MXCODE
# w,,HZ_KTND__I,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_HZ_KTND__I,,,                          # Alias of ADC_MXCODE
# r,,NG_DW_TOL,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_NG_DW_TOL,,,                            # Alias of ADC_MXCODE
# w,,NG_DW_TOL,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_NG_DW_TOL,,,                            # Alias of ADC_MXCODE
# r,,NG_GR_MIN__FILT,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_NG_GR_MIN__FILT,,,                # Alias of ADC_MXCODE
# w,,NG_GR_MIN__FILT,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_NG_GR_MIN__FILT,,,                # Alias of ADC_MXCODE
# r,,NM_NORMAL_BIT,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_NM_NORMAL_BIT,,,                    # Alias of ADC_MXCODE
# w,,NM_NORMAL_BIT,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_NM_NORMAL_BIT,,,                    # Alias of ADC_MXCODE
# r,,NSY11,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_NSY11,,,                                    # Alias of ADC_MXCODE
# w,,NSY11,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_NSY11,,,                                    # Alias of ADC_MXCODE
# r,,NSY12,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_NSY12,,,                                    # Alias of ADC_MXCODE
# w,,NSY12,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_NSY12,,,                                    # Alias of ADC_MXCODE
# r,,QQ_M11,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_QQ_M11,,,                                  # Alias of ADC_MXCODE
# w,,QQ_M11,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_QQ_M11,,,                                  # Alias of ADC_MXCODE
# r,,TBOOSTRES,0x0003,,,,"BB0203",,s,_8_Skip,,, ,,s,_TBOOSTRES,,,                            # Alias of ADC_MXCODE
# w,,TBOOSTRES,0x0003,,,,"BB0203",,m,_8_Skip,,, ,,m,_TBOOSTRES,,,                            # Alias of ADC_MXCODE
r,,ACK_FE01,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_ACK_FE01,,,
w,,ACK_FE01,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_ACK_FE01,,,
# r,,AIN_ERR_TAUSS,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_AIN_ERR_TAUSS,,,                    # Alias of ACK_FE01
# w,,AIN_ERR_TAUSS,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_AIN_ERR_TAUSS,,,                    # Alias of ACK_FE01
# r,,AI_TRL,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_AI_TRL,,,                                  # Alias of ACK_FE01
# w,,AI_TRL,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_AI_TRL,,,                                  # Alias of ACK_FE01
# r,,BOOSTER_ORL_MASK,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_BOOSTER_ORL_MASK,,,              # Alias of ACK_FE01
# w,,BOOSTER_ORL_MASK,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_BOOSTER_ORL_MASK,,,              # Alias of ACK_FE01
# r,,EE_RANGE_FAIL__BCC_STAT,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL__BCC_STAT,,, # Alias of ACK_FE01
# w,,EE_RANGE_FAIL__BCC_STAT,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_EE_RANGE_FAIL__BCC_STAT,,, # Alias of ACK_FE01
# r,,EM_EE_REDUND__RED_FS,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_FS,,,      # Alias of ACK_FE01
# w,,EM_EE_REDUND__RED_FS,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_EM_EE_REDUND__RED_FS,,,      # Alias of ACK_FE01
# r,,L_EEA_MAIN_CRC,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_L_EEA_MAIN_CRC,,,                  # Alias of ACK_FE01
# w,,L_EEA_MAIN_CRC,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_L_EEA_MAIN_CRC,,,                  # Alias of ACK_FE01
# r,,NFSOUT,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_NFSOUT,,,                                  # Alias of ACK_FE01
# w,,NFSOUT,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_NFSOUT,,,                                  # Alias of ACK_FE01
# r,,NM_NETZSTATUS_BIT,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_NM_NETZSTATUS_BIT,,,            # Alias of ACK_FE01
# w,,NM_NETZSTATUS_BIT,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_NM_NETZSTATUS_BIT,,,            # Alias of ACK_FE01
# r,,NTC1_SCHLUSS,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_NTC1_SCHLUSS,,,                      # Alias of ACK_FE01
# w,,NTC1_SCHLUSS,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_NTC1_SCHLUSS,,,                      # Alias of ACK_FE01
# r,,NTC_TEMP_TOL,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_NTC_TEMP_TOL,,,                      # Alias of ACK_FE01
# w,,NTC_TEMP_TOL,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_NTC_TEMP_TOL,,,                      # Alias of ACK_FE01
# r,,RES_CNT_OFF,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_RES_CNT_OFF,,,                        # Alias of ACK_FE01
# w,,RES_CNT_OFF,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_RES_CNT_OFF,,,                        # Alias of ACK_FE01
# r,,TBOOST,0x0004,,,,"BC0204",,s,_8_Skip,,, ,,s,_TBOOST,,,                                  # Alias of ACK_FE01
# w,,TBOOST,0x0004,,,,"BC0204",,m,_8_Skip,,, ,,m,_TBOOST,,,                                  # Alias of ACK_FE01
r,,AI_ANAIN5,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_AI_ANAIN5,,,
w,,AI_ANAIN5,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_AI_ANAIN5,,,
# r,,AI_ESTB1,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_AI_ESTB1,,,                              # Alias of AI_ANAIN5
# w,,AI_ESTB1,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_AI_ESTB1,,,                              # Alias of AI_ANAIN5
# r,,C_MX_RES_CNT,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_C_MX_RES_CNT,,,                      # Alias of AI_ANAIN5
# w,,C_MX_RES_CNT,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_C_MX_RES_CNT,,,                      # Alias of AI_ANAIN5
# r,,K_NTC1,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_K_NTC1,,,                                  # Alias of AI_ANAIN5
# w,,K_NTC1,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_K_NTC1,,,                                  # Alias of AI_ANAIN5
# r,,MAXIONTST0,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_MAXIONTST0,,,                          # Alias of AI_ANAIN5
# w,,MAXIONTST0,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_MAXIONTST0,,,                          # Alias of AI_ANAIN5
# r,,NGPBS_IMPS,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_NGPBS_IMPS,,,                          # Alias of AI_ANAIN5
# w,,NGPBS_IMPS,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_NGPBS_IMPS,,,                          # Alias of AI_ANAIN5
# r,,NM_STARTFLAG_BIT,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_NM_STARTFLAG_BIT,,,              # Alias of AI_ANAIN5
# w,,NM_STARTFLAG_BIT,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_NM_STARTFLAG_BIT,,,              # Alias of AI_ANAIN5
# r,,REF_FUSE,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_REF_FUSE,,,                              # Alias of AI_ANAIN5
# w,,REF_FUSE,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_REF_FUSE,,,                              # Alias of AI_ANAIN5
# r,,V24_KM_ADR_MAX,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_V24_KM_ADR_MAX,,,                  # Alias of AI_ANAIN5
# w,,V24_KM_ADR_MAX,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_V24_KM_ADR_MAX,,,                  # Alias of AI_ANAIN5
# r,,V24_KM_ADR_MAX_SCOM,0x0005,,,,"BD0205",,s,_8_Skip,,, ,,s,_V24_KM_ADR_MAX_SCOM,,,        # Alias of AI_ANAIN5
# w,,V24_KM_ADR_MAX_SCOM,0x0005,,,,"BD0205",,m,_8_Skip,,, ,,m,_V24_KM_ADR_MAX_SCOM,,,        # Alias of AI_ANAIN5
r,,AI_ANAIN6,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_ANAIN6,,,
w,,AI_ANAIN6,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_AI_ANAIN6,,,
# r,,AI_THZ,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_THZ,,,                                  # Alias of AI_ANAIN6
# w,,AI_THZ,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_AI_THZ,,,                                  # Alias of AI_ANAIN6
# r,,AI_TVL,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_AI_TVL,,,                                  # Alias of AI_ANAIN6
# w,,AI_TVL,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_AI_TVL,,,                                  # Alias of AI_ANAIN6
# r,,EPIONTSTDUR,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_EPIONTSTDUR,,,                        # Alias of AI_ANAIN6
# w,,EPIONTSTDUR,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_EPIONTSTDUR,,,                        # Alias of AI_ANAIN6
# r,,NM_NO_AUTOSYN,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_NM_NO_AUTOSYN,,,                    # Alias of AI_ANAIN6
# w,,NM_NO_AUTOSYN,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_NM_NO_AUTOSYN,,,                    # Alias of AI_ANAIN6
# r,,N_50HZ_IN,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_N_50HZ_IN,,,                            # Alias of AI_ANAIN6
# w,,N_50HZ_IN,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_N_50HZ_IN,,,                            # Alias of AI_ANAIN6
# r,,SPEICHER_TIEFE,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_SPEICHER_TIEFE,,,                  # Alias of AI_ANAIN6
# w,,SPEICHER_TIEFE,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_SPEICHER_TIEFE,,,                  # Alias of AI_ANAIN6
# r,,V24_TECHOHW,0x0006,,,,"BE0206",,s,_8_Skip,,, ,,s,_V24_TECHOHW,,,                        # Alias of AI_ANAIN6
# w,,V24_TECHOHW,0x0006,,,,"BE0206",,m,_8_Skip,,, ,,m,_V24_TECHOHW,,,                        # Alias of AI_ANAIN6
r,,AI_ANAIN7,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_AI_ANAIN7,,,
w,,AI_ANAIN7,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_AI_ANAIN7,,,
# r,,AI_ESTB2,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_AI_ESTB2,,,                              # Alias of AI_ANAIN7
# w,,AI_ESTB2,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_AI_ESTB2,,,                              # Alias of AI_ANAIN7
# r,,K_NTC2,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_K_NTC2,,,                                  # Alias of AI_ANAIN7
# w,,K_NTC2,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_K_NTC2,,,                                  # Alias of AI_ANAIN7
# r,,NGPBS_FABTAST,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_NGPBS_FABTAST,,,                    # Alias of AI_ANAIN7
# w,,NGPBS_FABTAST,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_NGPBS_FABTAST,,,                    # Alias of AI_ANAIN7
# r,,NM_TALK_EBUS_BIT,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_NM_TALK_EBUS_BIT,,,              # Alias of AI_ANAIN7
# w,,NM_TALK_EBUS_BIT,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_NM_TALK_EBUS_BIT,,,              # Alias of AI_ANAIN7
# r,,TTOL__SW_CONTR,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_TTOL__SW_CONTR,,,                  # Alias of AI_ANAIN7
# w,,TTOL__SW_CONTR,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_TTOL__SW_CONTR,,,                  # Alias of AI_ANAIN7
# r,,ZST_ENABLE,0x0007,,,,"BF0207",,s,_8_Skip,,, ,,s,_ZST_ENABLE,,,                          # Alias of AI_ANAIN7
# w,,ZST_ENABLE,0x0007,,,,"BF0207",,m,_8_Skip,,, ,,m,_ZST_ENABLE,,,                          # Alias of AI_ANAIN7
r,,EM_EE_REDUND__RED_NFS,0x0008,,,,"B00208",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_NFS,,,
w,,EM_EE_REDUND__RED_NFS,0x0008,,,,"B00208",,m,_8_Skip,,, ,,m,_EM_EE_REDUND__RED_NFS,,,
# r,,L_PRUEF_DAT_CRC,0x0008,,,,"B00208",,s,_8_Skip,,, ,,s,_L_PRUEF_DAT_CRC,,,                # Alias of EM_EE_REDUND__RED_NFS
# w,,L_PRUEF_DAT_CRC,0x0008,,,,"B00208",,m,_8_Skip,,, ,,m,_L_PRUEF_DAT_CRC,,,                # Alias of EM_EE_REDUND__RED_NFS
# r,,NTC1_BRUCH,0x0008,,,,"B00208",,s,_8_Skip,,, ,,s,_NTC1_BRUCH,,,                          # Alias of EM_EE_REDUND__RED_NFS
# w,,NTC1_BRUCH,0x0008,,,,"B00208",,m,_8_Skip,,, ,,m,_NTC1_BRUCH,,,                          # Alias of EM_EE_REDUND__RED_NFS
# r,,RECORD,0x0008,,,,"B00208",,s,_8_Skip,,, ,,s,_RECORD,,,                                  # Alias of EM_EE_REDUND__RED_NFS
# w,,RECORD,0x0008,,,,"B00208",,m,_8_Skip,,, ,,m,_RECORD,,,                                  # Alias of EM_EE_REDUND__RED_NFS
# r,,REGBNK_TASK_1,0x0008,,,,"B00208",,s,_8_Skip,,, ,,s,_REGBNK_TASK_1,,,                    # Alias of EM_EE_REDUND__RED_NFS
# w,,REGBNK_TASK_1,0x0008,,,,"B00208",,m,_8_Skip,,, ,,m,_REGBNK_TASK_1,,,                    # Alias of EM_EE_REDUND__RED_NFS
r,,INIT_TCYCL_0503,0x000A,,,,"B2020A",,s,_8_Skip,,, ,,s,_INIT_TCYCL_0503,,,
w,,INIT_TCYCL_0503,0x000A,,,,"B2020A",,m,_8_Skip,,, ,,m,_INIT_TCYCL_0503,,,
# r,,L_ID_PARA_BCC,0x000A,,,,"B2020A",,s,_8_Skip,,, ,,s,_L_ID_PARA_BCC,,,                    # Alias of INIT_TCYCL_0503
# w,,L_ID_PARA_BCC,0x000A,,,,"B2020A",,m,_8_Skip,,, ,,m,_L_ID_PARA_BCC,,,                    # Alias of INIT_TCYCL_0503
r,,INIT_TCYCL_0800,0x000B,,,,"B3020B",,s,_8_Skip,,, ,,s,_INIT_TCYCL_0800,,,
w,,INIT_TCYCL_0800,0x000B,,,,"B3020B",,m,_8_Skip,,, ,,m,_INIT_TCYCL_0800,,,
r,,HZ_HYS__POS,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_HZ_HYS__POS,,,
w,,HZ_HYS__POS,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_HZ_HYS__POS,,,
# r,,IPC_IO_MASK,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_IPC_IO_MASK,,,                        # Alias of HZ_HYS__POS
# w,,IPC_IO_MASK,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_IPC_IO_MASK,,,                        # Alias of HZ_HYS__POS
# r,,KTNMULFACT,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_KTNMULFACT,,,                          # Alias of HZ_HYS__POS
# w,,KTNMULFACT,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_KTNMULFACT,,,                          # Alias of HZ_HYS__POS
# r,,MASKFSOUT,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_MASKFSOUT,,,                            # Alias of HZ_HYS__POS
# w,,MASKFSOUT,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_MASKFSOUT,,,                            # Alias of HZ_HYS__POS
# r,,NG_INCR_DECR__INCR,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_NG_INCR_DECR__INCR,,,          # Alias of HZ_HYS__POS
# w,,NG_INCR_DECR__INCR,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_NG_INCR_DECR__INCR,,,          # Alias of HZ_HYS__POS
# r,,NG_REG_ANPASS__SELF,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS__SELF,,,        # Alias of HZ_HYS__POS
# w,,NG_REG_ANPASS__SELF,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_NG_REG_ANPASS__SELF,,,        # Alias of HZ_HYS__POS
# r,,PU_TAKT__PAUSE,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_PU_TAKT__PAUSE,,,                  # Alias of HZ_HYS__POS
# w,,PU_TAKT__PAUSE,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_PU_TAKT__PAUSE,,,                  # Alias of HZ_HYS__POS
# r,,P_HZTHTWWSOLL_MIN,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_P_HZTHTWWSOLL_MIN,,,            # Alias of HZ_HYS__POS
# w,,P_HZTHTWWSOLL_MIN,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_P_HZTHTWWSOLL_MIN,,,            # Alias of HZ_HYS__POS
# r,,P_LPG__START,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_P_LPG__START,,,                      # Alias of HZ_HYS__POS
# w,,P_LPG__START,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_P_LPG__START,,,                      # Alias of HZ_HYS__POS
# r,,SEL_IN_1_2__1,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_IN_1_2__1,,,                    # Alias of HZ_HYS__POS
# w,,SEL_IN_1_2__1,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_SEL_IN_1_2__1,,,                    # Alias of HZ_HYS__POS
# r,,SEL_IN_3_4__3,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_IN_3_4__3,,,                    # Alias of HZ_HYS__POS
# w,,SEL_IN_3_4__3,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_SEL_IN_3_4__3,,,                    # Alias of HZ_HYS__POS
# r,,SEL_PR_1_2__1,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_PR_1_2__1,,,                    # Alias of HZ_HYS__POS
# w,,SEL_PR_1_2__1,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_SEL_PR_1_2__1,,,                    # Alias of HZ_HYS__POS
# r,,SEL_PR_3_4__3,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_SEL_PR_3_4__3,,,                    # Alias of HZ_HYS__POS
# w,,SEL_PR_3_4__3,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_SEL_PR_3_4__3,,,                    # Alias of HZ_HYS__POS
# r,,WW_HYS__POS,0x000F,,,,"B7020F",,s,_8_Skip,,, ,,s,_WW_HYS__POS,,,                        # Alias of HZ_HYS__POS
# w,,WW_HYS__POS,0x000F,,,,"B7020F",,m,_8_Skip,,, ,,m,_WW_HYS__POS,,,                        # Alias of HZ_HYS__POS
r,,AIN_ERR_BW1,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_AIN_ERR_BW1,,,
w,,AIN_ERR_BW1,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_AIN_ERR_BW1,,,
# r,,EM_EE_REDUND__RED_DEF,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_DEF,,,    # Alias of AIN_ERR_BW1
# w,,EM_EE_REDUND__RED_DEF,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_EM_EE_REDUND__RED_DEF,,,    # Alias of AIN_ERR_BW1
# r,,NTC2_SCHLUSS,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_NTC2_SCHLUSS,,,                      # Alias of AIN_ERR_BW1
# w,,NTC2_SCHLUSS,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_NTC2_SCHLUSS,,,                      # Alias of AIN_ERR_BW1
# r,,QQ_M2,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_QQ_M2,,,                                    # Alias of AIN_ERR_BW1
# w,,QQ_M2,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_QQ_M2,,,                                    # Alias of AIN_ERR_BW1
# r,,REGBANK_TASK_2,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_REGBANK_TASK_2,,,                  # Alias of AIN_ERR_BW1
# w,,REGBANK_TASK_2,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_REGBANK_TASK_2,,,                  # Alias of AIN_ERR_BW1
# r,,REGBNK_TASK_2,0x0010,,,,"A80210",,s,_8_Skip,,, ,,s,_REGBNK_TASK_2,,,                    # Alias of AIN_ERR_BW1
# w,,REGBNK_TASK_2,0x0010,,,,"A80210",,m,_8_Skip,,, ,,m,_REGBNK_TASK_2,,,                    # Alias of AIN_ERR_BW1
r,,DE_MIN_CNT,0x0011,,,,"A90211",,s,_8_Skip,,, ,,s,_DE_MIN_CNT,,,
w,,DE_MIN_CNT,0x0011,,,,"A90211",,m,_8_Skip,,, ,,m,_DE_MIN_CNT,,,
r,,DDSPERRZAEHLER,0x0012,,,,"AA0212",,s,_8_Skip,,, ,,s,_DDSPERRZAEHLER,,,
w,,DDSPERRZAEHLER,0x0012,,,,"AA0212",,m,_8_Skip,,, ,,m,_DDSPERRZAEHLER,,,
r,,DDRX_OFFSET_S1,0x0013,,,,"AB0213",,s,_8_Skip,,, ,,s,_DDRX_OFFSET_S1,,,
w,,DDRX_OFFSET_S1,0x0013,,,,"AB0213",,m,_8_Skip,,, ,,m,_DDRX_OFFSET_S1,,,
r,,AD_SCALE_2,0x0014,,,,"AC0214",,s,_8_Skip,,, ,,s,_AD_SCALE_2,,,
w,,AD_SCALE_2,0x0014,,,,"AC0214",,m,_8_Skip,,, ,,m,_AD_SCALE_2,,,
# r,,DDTX_OFFSET_CNT,0x0014,,,,"AC0214",,s,_8_Skip,,, ,,s,_DDTX_OFFSET_CNT,,,                # Alias of AD_SCALE_2
# w,,DDTX_OFFSET_CNT,0x0014,,,,"AC0214",,m,_8_Skip,,, ,,m,_DDTX_OFFSET_CNT,,,                # Alias of AD_SCALE_2
# r,,DIG_TST,0x0014,,,,"AC0214",,s,_8_Skip,,, ,,s,_DIG_TST,,,                                # Alias of AD_SCALE_2
# w,,DIG_TST,0x0014,,,,"AC0214",,m,_8_Skip,,, ,,m,_DIG_TST,,,                                # Alias of AD_SCALE_2
# r,,L_EWIGEN_ZAEHLER,0x0014,,,,"AC0214",,s,_8_Skip,,, ,,s,_L_EWIGEN_ZAEHLER,,,              # Alias of AD_SCALE_2
# w,,L_EWIGEN_ZAEHLER,0x0014,,,,"AC0214",,m,_8_Skip,,, ,,m,_L_EWIGEN_ZAEHLER,,,              # Alias of AD_SCALE_2
r,,L_FS_PARA,0x0016,,,,"AE0216",,s,_8_Skip,,, ,,s,_L_FS_PARA,,,
w,,L_FS_PARA,0x0016,,,,"AE0216",,m,_8_Skip,,, ,,m,_L_FS_PARA,,,
r,,EEA_CONST_CRC,0x0018,,,,"A00218",,s,_8_Skip,,, ,,s,_EEA_CONST_CRC,,,
w,,EEA_CONST_CRC,0x0018,,,,"A00218",,m,_8_Skip,,, ,,m,_EEA_CONST_CRC,,,
# r,,REGB_TIRP,0x0018,,,,"A00218",,s,_8_Skip,,, ,,s,_REGB_TIRP,,,                            # Alias of EEA_CONST_CRC
# w,,REGB_TIRP,0x0018,,,,"A00218",,m,_8_Skip,,, ,,m,_REGB_TIRP,,,                            # Alias of EEA_CONST_CRC
r,,EEA_RAM_ANF,0x0019,,,,"A10219",,s,_8_Skip,,, ,,s,_EEA_RAM_ANF,,,
w,,EEA_RAM_ANF,0x0019,,,,"A10219",,m,_8_Skip,,, ,,m,_EEA_RAM_ANF,,,
# r,,ROM_END_L,0x0019,,,,"A10219",,s,_8_Skip,,, ,,s,_ROM_END_L,,,                            # Alias of EEA_RAM_ANF
# w,,ROM_END_L,0x0019,,,,"A10219",,m,_8_Skip,,, ,,m,_ROM_END_L,,,                            # Alias of EEA_RAM_ANF
# r,,RX_BUF_LEN,0x0019,,,,"A10219",,s,_8_Skip,,, ,,s,_RX_BUF_LEN,,,                          # Alias of EEA_RAM_ANF
# w,,RX_BUF_LEN,0x0019,,,,"A10219",,m,_8_Skip,,, ,,m,_RX_BUF_LEN,,,                          # Alias of EEA_RAM_ANF
r,,EEAEPKANF,0x001B,,,,"A3021B",,s,_8_Skip,,, ,,s,_EEAEPKANF,,,
w,,EEAEPKANF,0x001B,,,,"A3021B",,m,_8_Skip,,, ,,m,_EEAEPKANF,,,
r,,NTCYCL_0503,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_0503,,,
w,,NTCYCL_0503,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_0503,,,
# r,,NTCYCL_0800,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_0800,,,                        # Alias of NTCYCL_0503
# w,,NTCYCL_0800,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_0800,,,                        # Alias of NTCYCL_0503
# r,,NTCYCL_EIG_QQ,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_EIG_QQ,,,                    # Alias of NTCYCL_0503
# w,,NTCYCL_EIG_QQ,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_EIG_QQ,,,                    # Alias of NTCYCL_0503
# r,,NTCYCL_MAX,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_MAX,,,                          # Alias of NTCYCL_0503
# w,,NTCYCL_MAX,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_MAX,,,                          # Alias of NTCYCL_0503
# r,,NTCYCL_QQ_M10,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_QQ_M10,,,                    # Alias of NTCYCL_0503
# w,,NTCYCL_QQ_M10,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_QQ_M10,,,                    # Alias of NTCYCL_0503
# r,,NTCYCL_QQ_M2,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTCYCL_QQ_M2,,,                      # Alias of NTCYCL_0503
# w,,NTCYCL_QQ_M2,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTCYCL_QQ_M2,,,                      # Alias of NTCYCL_0503
# r,,NTC_MIN,0x001E,,,,"A6021E",,s,_8_Skip,,, ,,s,_NTC_MIN,,,                                # Alias of NTCYCL_0503
# w,,NTC_MIN,0x001E,,,,"A6021E",,m,_8_Skip,,, ,,m,_NTC_MIN,,,                                # Alias of NTCYCL_0503
r,,TFRS_A__SELF,0x001F,,,,"A7021F",,s,_8_Skip,,, ,,s,_TFRS_A__SELF,,,
w,,TFRS_A__SELF,0x001F,,,,"A7021F",,m,_8_Skip,,, ,,m,_TFRS_A__SELF,,,
r,,EM_EE_REDUND__RED_INTBCC,0x0020,,,,"980220",,s,_8_Skip,,, ,,s,_EM_EE_REDUND__RED_INTBCC,,,
w,,EM_EE_REDUND__RED_INTBCC,0x0020,,,,"980220",,m,_8_Skip,,, ,,m,_EM_EE_REDUND__RED_INTBCC,,,
# r,,GEC_LDW_RUHE,0x0020,,,,"980220",,s,_8_Skip,,, ,,s,_GEC_LDW_RUHE,,,                      # Alias of EM_EE_REDUND__RED_INTBCC
# w,,GEC_LDW_RUHE,0x0020,,,,"980220",,m,_8_Skip,,, ,,m,_GEC_LDW_RUHE,,,                      # Alias of EM_EE_REDUND__RED_INTBCC
# r,,NTC2_BRUCH,0x0020,,,,"980220",,s,_8_Skip,,, ,,s,_NTC2_BRUCH,,,                          # Alias of EM_EE_REDUND__RED_INTBCC
# w,,NTC2_BRUCH,0x0020,,,,"980220",,m,_8_Skip,,, ,,m,_NTC2_BRUCH,,,                          # Alias of EM_EE_REDUND__RED_INTBCC
r,,GENPOLY8SIG,0x0021,,,,"990221",,s,_8_Skip,,, ,,s,_GENPOLY8SIG,,,
w,,GENPOLY8SIG,0x0021,,,,"990221",,m,_8_Skip,,, ,,m,_GENPOLY8SIG,,,
r,,GEC_PUHZ_SW,0x0024,,,,"9C0224",,s,_8_Skip,,, ,,s,_GEC_PUHZ_SW,,,
w,,GEC_PUHZ_SW,0x0024,,,,"9C0224",,m,_8_Skip,,, ,,m,_GEC_PUHZ_SW,,,
r,,L_S5_DAT_CRC,0x0027,,,,"9F0227",,s,_8_Skip,,, ,,s,_L_S5_DAT_CRC,,,
w,,L_S5_DAT_CRC,0x0027,,,,"9F0227",,m,_8_Skip,,, ,,m,_L_S5_DAT_CRC,,,
r,,DL_BOOSTERPLUS,0x0028,,,,"900228",,s,_8_Skip,,, ,,s,_DL_BOOSTERPLUS,,,
w,,DL_BOOSTERPLUS,0x0028,,,,"900228",,m,_8_Skip,,, ,,m,_DL_BOOSTERPLUS,,,
# r,,P_KOTHTWWSOLL_MIN,0x0028,,,,"900228",,s,_8_Skip,,, ,,s,_P_KOTHTWWSOLL_MIN,,,            # Alias of DL_BOOSTERPLUS
# w,,P_KOTHTWWSOLL_MIN,0x0028,,,,"900228",,m,_8_Skip,,, ,,m,_P_KOTHTWWSOLL_MIN,,,            # Alias of DL_BOOSTERPLUS
r,,MIN_TAUTOSYN,0x0029,,,,"910229",,s,_8_Skip,,, ,,s,_MIN_TAUTOSYN,,,
w,,MIN_TAUTOSYN,0x0029,,,,"910229",,m,_8_Skip,,, ,,m,_MIN_TAUTOSYN,,,
r,,GEC_N_NOK_LIMIT,0x002B,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_LIMIT,,,
w,,GEC_N_NOK_LIMIT,0x002B,,,,"93022B",,m,_8_Skip,,, ,,m,_GEC_N_NOK_LIMIT,,,
# r,,GEC_N_NOK_VSP,0x002B,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_VSP,,,                    # Alias of GEC_N_NOK_LIMIT
# w,,GEC_N_NOK_VSP,0x002B,,,,"93022B",,m,_8_Skip,,, ,,m,_GEC_N_NOK_VSP,,,                    # Alias of GEC_N_NOK_LIMIT
# r,,GEC_N_NOK_ZUE_N,0x002B,,,,"93022B",,s,_8_Skip,,, ,,s,_GEC_N_NOK_ZUE_N,,,                # Alias of GEC_N_NOK_LIMIT
# w,,GEC_N_NOK_ZUE_N,0x002B,,,,"93022B",,m,_8_Skip,,, ,,m,_GEC_N_NOK_ZUE_N,,,                # Alias of GEC_N_NOK_LIMIT
r,,GEC_N_NOK_RUHE,0x002C,,,,"94022C",,s,_8_Skip,,, ,,s,_GEC_N_NOK_RUHE,,,
w,,GEC_N_NOK_RUHE,0x002C,,,,"94022C",,m,_8_Skip,,, ,,m,_GEC_N_NOK_RUHE,,,
r,,GEC_LDW_ARB,0x002D,,,,"95022D",,s,_8_Skip,,, ,,s,_GEC_LDW_ARB,,,
w,,GEC_LDW_ARB,0x002D,,,,"95022D",,m,_8_Skip,,, ,,m,_GEC_LDW_ARB,,,
r,,QAC_MIN,0x002E,,,,"96022E",,s,_8_Skip,,, ,,s,_QAC_MIN,,,
w,,QAC_MIN,0x002E,,,,"96022E",,m,_8_Skip,,, ,,m,_QAC_MIN,,,
r,,QAC_SHORT,0x002F,,,,"97022F",,s,_8_Skip,,, ,,s,_QAC_SHORT,,,
w,,QAC_SHORT,0x002F,,,,"97022F",,m,_8_Skip,,, ,,m,_QAC_SHORT,,,
r,,AD_SCALE_3,0x0030,,,,"880230",,s,_8_Skip,,, ,,s,_AD_SCALE_3,,,
w,,AD_SCALE_3,0x0030,,,,"880230",,m,_8_Skip,,, ,,m,_AD_SCALE_3,,,
# r,,L_FHIST,0x0030,,,,"880230",,s,_8_Skip,,, ,,s,_L_FHIST,,,                                # Alias of AD_SCALE_3
# w,,L_FHIST,0x0030,,,,"880230",,m,_8_Skip,,, ,,m,_L_FHIST,,,                                # Alias of AD_SCALE_3
r,,KPMULFACT,0x0032,,,,"8A0232",,s,_8_Skip,,, ,,s,_KPMULFACT,,,
w,,KPMULFACT,0x0032,,,,"8A0232",,m,_8_Skip,,, ,,m,_KPMULFACT,,,
# r,,RES_MAX_TIME,0x0032,,,,"8A0232",,s,_8_Skip,,, ,,s,_RES_MAX_TIME,,,                      # Alias of KPMULFACT
# w,,RES_MAX_TIME,0x0032,,,,"8A0232",,m,_8_Skip,,, ,,m,_RES_MAX_TIME,,,                      # Alias of KPMULFACT
r,,GEC_AIN_REF,0x0035,,,,"8D0235",,s,_8_Skip,,, ,,s,_GEC_AIN_REF,,,
w,,GEC_AIN_REF,0x0035,,,,"8D0235",,m,_8_Skip,,, ,,m,_GEC_AIN_REF,,,
r,,L_EEAEPKDAT,0x0036,,,,"8E0236",,s,_8_Skip,,, ,,s,_L_EEAEPKDAT,,,
w,,L_EEAEPKDAT,0x0036,,,,"8E0236",,m,_8_Skip,,, ,,m,_L_EEAEPKDAT,,,
# r,,L_KES_DAT_CRC,0x0036,,,,"8E0236",,s,_8_Skip,,, ,,s,_L_KES_DAT_CRC,,,                    # Alias of L_EEAEPKDAT
# w,,L_KES_DAT_CRC,0x0036,,,,"8E0236",,m,_8_Skip,,, ,,m,_L_KES_DAT_CRC,,,                    # Alias of L_EEAEPKDAT
r,,FCODE_NOT,0x0038,,,,"800238",,s,_8_Skip,,, ,,s,_FCODE_NOT,,,
w,,FCODE_NOT,0x0038,,,,"800238",,m,_8_Skip,,, ,,m,_FCODE_NOT,,,
r,,FCODE_MAX,0x0039,,,,"810239",,s,_8_Skip,,, ,,s,_FCODE_MAX,,,
w,,FCODE_MAX,0x0039,,,,"810239",,m,_8_Skip,,, ,,m,_FCODE_MAX,,,
r,,NTCYCL_EBUS_SCOM,0x003C,,,,"84023C",,s,_8_Skip,,, ,,s,_NTCYCL_EBUS_SCOM,,,
w,,NTCYCL_EBUS_SCOM,0x003C,,,,"84023C",,m,_8_Skip,,, ,,m,_NTCYCL_EBUS_SCOM,,,
r,,MAX_TAUTOSYN,0x003D,,,,"85023D",,s,_8_Skip,,, ,,s,_MAX_TAUTOSYN,,,
w,,MAX_TAUTOSYN,0x003D,,,,"85023D",,m,_8_Skip,,, ,,m,_MAX_TAUTOSYN,,,
r,,P_KOTHTWWSOLL_MAX,0x003F,,,,"87023F",,s,_8_Skip,,, ,,s,_P_KOTHTWWSOLL_MAX,,,
w,,P_KOTHTWWSOLL_MAX,0x003F,,,,"87023F",,m,_8_Skip,,, ,,m,_P_KOTHTWWSOLL_MAX,,,
r,,AIN_ERR_BW2,0x0040,,,,"F80240",,s,_8_Skip,,, ,,s,_AIN_ERR_BW2,,,
w,,AIN_ERR_BW2,0x0040,,,,"F80240",,m,_8_Skip,,, ,,m,_AIN_ERR_BW2,,,
# r,,NTC1_NTC2,0x0040,,,,"F80240",,s,_8_Skip,,, ,,s,_NTC1_NTC2,,,                            # Alias of AIN_ERR_BW2
# w,,NTC1_NTC2,0x0040,,,,"F80240",,m,_8_Skip,,, ,,m,_NTC1_NTC2,,,                            # Alias of AIN_ERR_BW2
r,,P_HZTHTWWSOLL_MAX,0x0041,,,,"F90241",,s,_8_Skip,,, ,,s,_P_HZTHTWWSOLL_MAX,,,
w,,P_HZTHTWWSOLL_MAX,0x0041,,,,"F90241",,m,_8_Skip,,, ,,m,_P_HZTHTWWSOLL_MAX,,,
r,,NIT_SHORT,0x0044,,,,"FC0244",,s,_8_Skip,,, ,,s,_NIT_SHORT,,,
w,,NIT_SHORT,0x0044,,,,"FC0244",,m,_8_Skip,,, ,,m,_NIT_SHORT,,,
r,,NIT_MIN,0x0045,,,,"FD0245",,s,_8_Skip,,, ,,s,_NIT_MIN,,,
w,,NIT_MIN,0x0045,,,,"FD0245",,m,_8_Skip,,, ,,m,_NIT_MIN,,,
# r,,WAIT_A_2,0x0045,,,,"FD0245",,s,_8_Skip,,, ,,s,_WAIT_A_2,,,                              # Alias of NIT_MIN
# w,,WAIT_A_2,0x0045,,,,"FD0245",,m,_8_Skip,,, ,,m,_WAIT_A_2,,,                              # Alias of NIT_MIN
r,,L_FCODE_ZAEHLER,0x0048,,,,"F00248",,s,_8_Skip,,, ,,s,_L_FCODE_ZAEHLER,,,
w,,L_FCODE_ZAEHLER,0x0048,,,,"F00248",,m,_8_Skip,,, ,,m,_L_FCODE_ZAEHLER,,,
r,,NR_ACTIVATE_STATI,0x004F,,,,"F7024F",,s,_8_Skip,,, ,,s,_NR_ACTIVATE_STATI,,,
w,,NR_ACTIVATE_STATI,0x004F,,,,"F7024F",,m,_8_Skip,,, ,,m,_NR_ACTIVATE_STATI,,,
r,,AD_SCALE_4,0x0050,,,,"E80250",,s,_8_Skip,,, ,,s,_AD_SCALE_4,,,
w,,AD_SCALE_4,0x0050,,,,"E80250",,m,_8_Skip,,, ,,m,_AD_SCALE_4,,,
# r,,DE_MAX_CNT,0x0050,,,,"E80250",,s,_8_Skip,,, ,,s,_DE_MAX_CNT,,,                          # Alias of AD_SCALE_4
# w,,DE_MAX_CNT,0x0050,,,,"E80250",,m,_8_Skip,,, ,,m,_DE_MAX_CNT,,,                          # Alias of AD_SCALE_4
# r,,K_ID,0x0050,,,,"E80250",,s,_8_Skip,,, ,,s,_K_ID,,,                                      # Alias of AD_SCALE_4
# w,,K_ID,0x0050,,,,"E80250",,m,_8_Skip,,, ,,m,_K_ID,,,                                      # Alias of AD_SCALE_4
r,,EEAEPKCRC,0x0051,,,,"E90251",,s,_8_Skip,,, ,,s,_EEAEPKCRC,,,
w,,EEAEPKCRC,0x0051,,,,"E90251",,m,_8_Skip,,, ,,m,_EEAEPKCRC,,,
r,,EEAEPKANF2,0x0053,,,,"EB0253",,s,_8_Skip,,, ,,s,_EEAEPKANF2,,,
w,,EEAEPKANF2,0x0053,,,,"EB0253",,m,_8_Skip,,, ,,m,_EEAEPKANF2,,,
r,,PH_TST_T1,0x0059,,,,"E10259",,s,_8_Skip,,, ,,s,_PH_TST_T1,,,
w,,PH_TST_T1,0x0059,,,,"E10259",,m,_8_Skip,,, ,,m,_PH_TST_T1,,,
r,,NG_GR_MIN__IMPS,0x0060,,,,"D80260",,s,_8_Skip,,, ,,s,_NG_GR_MIN__IMPS,,,
w,,NG_GR_MIN__IMPS,0x0060,,,,"D80260",,m,_8_Skip,,, ,,m,_NG_GR_MIN__IMPS,,,
r,,SCHEDULE_TAKT,0x0064,,,,"DC0264",,s,_8_Skip,,, ,,s,_SCHEDULE_TAKT,,,
w,,SCHEDULE_TAKT,0x0064,,,,"DC0264",,m,_8_Skip,,, ,,m,_SCHEDULE_TAKT,,,
r,,NR_NG_BR_MIN,0x0065,,,,"DD0265",,s,_8_Skip,,, ,,s,_NR_NG_BR_MIN,,,
w,,NR_NG_BR_MIN,0x0065,,,,"DD0265",,m,_8_Skip,,, ,,m,_NR_NG_BR_MIN,,,
r,,AD_SCALE_5,0x0070,,,,"C80270",,s,_8_Skip,,, ,,s,_AD_SCALE_5,,,
w,,AD_SCALE_5,0x0070,,,,"C80270",,m,_8_Skip,,, ,,m,_AD_SCALE_5,,,
# r,,KESS_BIT_MASK,0x0070,,,,"C80270",,s,_8_Skip,,, ,,s,_KESS_BIT_MASK,,,                    # Alias of AD_SCALE_5
# w,,KESS_BIT_MASK,0x0070,,,,"C80270",,m,_8_Skip,,, ,,m,_KESS_BIT_MASK,,,                    # Alias of AD_SCALE_5
# r,,OFFSET_NR_CCINFO_NR,0x0070,,,,"C80270",,s,_8_Skip,,, ,,s,_OFFSET_NR_CCINFO_NR,,,        # Alias of AD_SCALE_5
# w,,OFFSET_NR_CCINFO_NR,0x0070,,,,"C80270",,m,_8_Skip,,, ,,m,_OFFSET_NR_CCINFO_NR,,,        # Alias of AD_SCALE_5
r,,OFFSET_NR_CC_RELAESE,0x0071,,,,"C90271",,s,_8_Skip,,, ,,s,_OFFSET_NR_CC_RELAESE,,,
w,,OFFSET_NR_CC_RELAESE,0x0071,,,,"C90271",,m,_8_Skip,,, ,,m,_OFFSET_NR_CC_RELAESE,,,
r,,OFFSET_NR_FW1,0x0072,,,,"CA0272",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW1,,,
w,,OFFSET_NR_FW1,0x0072,,,,"CA0272",,m,_8_Skip,,, ,,m,_OFFSET_NR_FW1,,,
r,,OFFSET_NR_FW2,0x0073,,,,"CB0273",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW2,,,
w,,OFFSET_NR_FW2,0x0073,,,,"CB0273",,m,_8_Skip,,, ,,m,_OFFSET_NR_FW2,,,
r,,OFFSET_NR_FW3,0x0074,,,,"CC0274",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW3,,,
w,,OFFSET_NR_FW3,0x0074,,,,"CC0274",,m,_8_Skip,,, ,,m,_OFFSET_NR_FW3,,,
r,,OFFSET_NR_FW4,0x0075,,,,"CD0275",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW4,,,
w,,OFFSET_NR_FW4,0x0075,,,,"CD0275",,m,_8_Skip,,, ,,m,_OFFSET_NR_FW4,,,
r,,OFFSET_NR_FW5,0x0076,,,,"CE0276",,s,_8_Skip,,, ,,s,_OFFSET_NR_FW5,,,
w,,OFFSET_NR_FW5,0x0076,,,,"CE0276",,m,_8_Skip,,, ,,m,_OFFSET_NR_FW5,,,
r,,OFFSET_NR_CRC,0x0077,,,,"CF0277",,s,_8_Skip,,, ,,s,_OFFSET_NR_CRC,,,
w,,OFFSET_NR_CRC,0x0077,,,,"CF0277",,m,_8_Skip,,, ,,m,_OFFSET_NR_CRC,,,
r,,ANZ_INFONR,0x0078,,,,"C00278",,s,_8_Skip,,, ,,s,_ANZ_INFONR,,,
w,,ANZ_INFONR,0x0078,,,,"C00278",,m,_8_Skip,,, ,,m,_ANZ_INFONR,,,
# r,,REF_MIN_OFF,0x0078,,,,"C00278",,s,_8_Skip,,, ,,s,_REF_MIN_OFF,,,                        # Alias of ANZ_INFONR
# w,,REF_MIN_OFF,0x0078,,,,"C00278",,m,_8_Skip,,, ,,m,_REF_MIN_OFF,,,                        # Alias of ANZ_INFONR
r,,ION_GRENZ,0x007A,,,,"C2027A",,s,_8_Skip,,, ,,s,_ION_GRENZ,,,
w,,ION_GRENZ,0x007A,,,,"C2027A",,m,_8_Skip,,, ,,m,_ION_GRENZ,,,
r,,ADX_TEST,0x007C,,,,"C4027C",,s,_8_Skip,,, ,,s,_ADX_TEST,,,
w,,ADX_TEST,0x007C,,,,"C4027C",,m,_8_Skip,,, ,,m,_ADX_TEST,,,
r,,V24_KM_ADR_DEFAULT,0x007D,,,,"C5027D",,s,_8_Skip,,, ,,s,_V24_KM_ADR_DEFAULT,,,
w,,V24_KM_ADR_DEFAULT,0x007D,,,,"C5027D",,m,_8_Skip,,, ,,m,_V24_KM_ADR_DEFAULT,,,
# r,,V24_KM_ADR_SCOM_DEFAULT,0x007D,,,,"C5027D",,s,_8_Skip,,, ,,s,_V24_KM_ADR_SCOM_DEFAULT,,, # Alias of V24_KM_ADR_DEFAULT
# w,,V24_KM_ADR_SCOM_DEFAULT,0x007D,,,,"C5027D",,m,_8_Skip,,, ,,m,_V24_KM_ADR_SCOM_DEFAULT,,, # Alias of V24_KM_ADR_DEFAULT
r,,MINTVSOLL__SELF,0x007F,,,,"C7027F",,s,_8_Skip,,, ,,s,_MINTVSOLL__SELF,,,
w,,MINTVSOLL__SELF,0x007F,,,,"C7027F",,m,_8_Skip,,, ,,m,_MINTVSOLL__SELF,,,
# r,,PNL_HZ__SELF,0x007F,,,,"C7027F",,s,_8_Skip,,, ,,s,_PNL_HZ__SELF,,,                      # Alias of MINTVSOLL__SELF
# w,,PNL_HZ__SELF,0x007F,,,,"C7027F",,m,_8_Skip,,, ,,m,_PNL_HZ__SELF,,,                      # Alias of MINTVSOLL__SELF
# r,,REF_MIN_ON,0x007F,,,,"C7027F",,s,_8_Skip,,, ,,s,_REF_MIN_ON,,,                          # Alias of MINTVSOLL__SELF
# w,,REF_MIN_ON,0x007F,,,,"C7027F",,m,_8_Skip,,, ,,m,_REF_MIN_ON,,,                          # Alias of MINTVSOLL__SELF
# r,,TBRMINOFF__SELF,0x007F,,,,"C7027F",,s,_8_Skip,,, ,,s,_TBRMINOFF__SELF,,,                # Alias of MINTVSOLL__SELF
# w,,TBRMINOFF__SELF,0x007F,,,,"C7027F",,m,_8_Skip,,, ,,m,_TBRMINOFF__SELF,,,                # Alias of MINTVSOLL__SELF
r,,MINTVSOLL__TRLAUF,0x0080,,,,"380280",,s,_8_Skip,,, ,,s,_MINTVSOLL__TRLAUF,,,
w,,MINTVSOLL__TRLAUF,0x0080,,,,"380280",,m,_8_Skip,,, ,,m,_MINTVSOLL__TRLAUF,,,
# r,,NG_GR_MIN__FABTAST,0x0080,,,,"380280",,s,_8_Skip,,, ,,s,_NG_GR_MIN__FABTAST,,,          # Alias of MINTVSOLL__TRLAUF
# w,,NG_GR_MIN__FABTAST,0x0080,,,,"380280",,m,_8_Skip,,, ,,m,_NG_GR_MIN__FABTAST,,,          # Alias of MINTVSOLL__TRLAUF
# r,,PNL_HZ__BETRART,0x0080,,,,"380280",,s,_8_Skip,,, ,,s,_PNL_HZ__BETRART,,,                # Alias of MINTVSOLL__TRLAUF
# w,,PNL_HZ__BETRART,0x0080,,,,"380280",,m,_8_Skip,,, ,,m,_PNL_HZ__BETRART,,,                # Alias of MINTVSOLL__TRLAUF
# r,,PNL_HZ__PDL,0x0080,,,,"380280",,s,_8_Skip,,, ,,s,_PNL_HZ__PDL,,,                        # Alias of MINTVSOLL__TRLAUF
# w,,PNL_HZ__PDL,0x0080,,,,"380280",,m,_8_Skip,,, ,,m,_PNL_HZ__PDL,,,                        # Alias of MINTVSOLL__TRLAUF
# r,,TBRMINOFF__ERDGAS,0x0080,,,,"380280",,s,_8_Skip,,, ,,s,_TBRMINOFF__ERDGAS,,,            # Alias of MINTVSOLL__TRLAUF
# w,,TBRMINOFF__ERDGAS,0x0080,,,,"380280",,m,_8_Skip,,, ,,m,_TBRMINOFF__ERDGAS,,,            # Alias of MINTVSOLL__TRLAUF
r,,EEAEPKCRC2,0x0089,,,,"310289",,s,_8_Skip,,, ,,s,_EEAEPKCRC2,,,
w,,EEAEPKCRC2,0x0089,,,,"310289",,m,_8_Skip,,, ,,m,_EEAEPKCRC2,,,
r,,EEA_RAM_ANF2,0x008A,,,,"32028A",,s,_8_Skip,,, ,,s,_EEA_RAM_ANF2,,,
w,,EEA_RAM_ANF2,0x008A,,,,"32028A",,m,_8_Skip,,, ,,m,_EEA_RAM_ANF2,,,
# r,,WAIT_A_1,0x008A,,,,"32028A",,s,_8_Skip,,, ,,s,_WAIT_A_1,,,                              # Alias of EEA_RAM_ANF2
# w,,WAIT_A_1,0x008A,,,,"32028A",,m,_8_Skip,,, ,,m,_WAIT_A_1,,,                              # Alias of EEA_RAM_ANF2
r,,EEA_CONST_ANF2,0x008C,,,,"34028C",,s,_8_Skip,,, ,,s,_EEA_CONST_ANF2,,,
w,,EEA_CONST_ANF2,0x008C,,,,"34028C",,m,_8_Skip,,, ,,m,_EEA_CONST_ANF2,,,
r,,AD_SCALE_6,0x0090,,,,"280290",,s,_8_Skip,,, ,,s,_AD_SCALE_6,,,
w,,AD_SCALE_6,0x0090,,,,"280290",,m,_8_Skip,,, ,,m,_AD_SCALE_6,,,
# r,,NTC_ERR_ZEIT,0x0090,,,,"280290",,s,_8_Skip,,, ,,s,_NTC_ERR_ZEIT,,,                      # Alias of AD_SCALE_6
# w,,NTC_ERR_ZEIT,0x0090,,,,"280290",,m,_8_Skip,,, ,,m,_NTC_ERR_ZEIT,,,                      # Alias of AD_SCALE_6
# r,,SST1,0x0090,,,,"280290",,s,_8_Skip,,, ,,s,_SST1,,,                                      # Alias of AD_SCALE_6
# w,,SST1,0x0090,,,,"280290",,m,_8_Skip,,, ,,m,_SST1,,,                                      # Alias of AD_SCALE_6
r,,CS_BYTE_WR,0x00A0,,,,"1802A0",,s,_8_Skip,,, ,,s,_CS_BYTE_WR,,,
w,,CS_BYTE_WR,0x00A0,,,,"1802A0",,m,_8_Skip,,, ,,m,_CS_BYTE_WR,,,
# r,,ENAB_MASK,0x00A0,,,,"1802A0",,s,_8_Skip,,, ,,s,_ENAB_MASK,,,                            # Alias of CS_BYTE_WR
# w,,ENAB_MASK,0x00A0,,,,"1802A0",,m,_8_Skip,,, ,,m,_ENAB_MASK,,,                            # Alias of CS_BYTE_WR
# r,,ENAB_MASK_WD,0x00A0,,,,"1802A0",,s,_8_Skip,,, ,,s,_ENAB_MASK_WD,,,                      # Alias of CS_BYTE_WR
# w,,ENAB_MASK_WD,0x00A0,,,,"1802A0",,m,_8_Skip,,, ,,m,_ENAB_MASK_WD,,,                      # Alias of CS_BYTE_WR
r,,CS_BYTE_RD,0x00A1,,,,"1902A1",,s,_8_Skip,,, ,,s,_CS_BYTE_RD,,,
w,,CS_BYTE_RD,0x00A1,,,,"1902A1",,m,_8_Skip,,, ,,m,_CS_BYTE_RD,,,
r,,EEA_CONST_CRC2,0x00A2,,,,"1A02A2",,s,_8_Skip,,, ,,s,_EEA_CONST_CRC2,,,
w,,EEA_CONST_CRC2,0x00A2,,,,"1A02A2",,m,_8_Skip,,, ,,m,_EEA_CONST_CRC2,,,

BCC_ID
r,,INT_EEA_ID_NR_BCC,0x00A3,,,,"1B02A3",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC,,,
w,,INT_EEA_ID_NR_BCC,0x00A3,,,,"1B02A3",,m,_8_Skip,,, ,,m,_INT_EEA_ID_NR_BCC,,,
r,,INT_EEA_ID_NR_BCC_1,0x00A4,,,,"1C02A4",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC_1,,,
w,,INT_EEA_ID_NR_BCC_1,0x00A4,,,,"1C02A4",,m,_8_Skip,,, ,,m,_INT_EEA_ID_NR_BCC_1,,,
r,,INT_EEA_ID_CRC_BCC,0x00A5,,,,"1D02A5",,s,_8_Skip,,, ,,s,_INT_EEA_ID_CRC_BCC,,,
w,,INT_EEA_ID_CRC_BCC,0x00A5,,,,"1D02A5",,m,_8_Skip,,, ,,m,_INT_EEA_ID_CRC_BCC,,,


r,,INT_EEA_ID_NR_BCC_2,0x00A6,,,,"1E02A6",,s,_8_Skip,,, ,,s,_INT_EEA_ID_NR_BCC_2,,,
w,,INT_EEA_ID_NR_BCC_2,0x00A6,,,,"1E02A6",,m,_8_Skip,,, ,,m,_INT_EEA_ID_NR_BCC_2,,,
r,,INT_EEA_ID_CRC_BCC_2,0x00A8,,,,"1002A8",,s,_8_Skip,,, ,,s,_INT_EEA_ID_CRC_BCC_2,,,
w,,INT_EEA_ID_CRC_BCC_2,0x00A8,,,,"1002A8",,m,_8_Skip,,, ,,m,_INT_EEA_ID_CRC_BCC_2,,,
# r,,NCL1HRS,0x00A8,,,,"1002A8",,s,_8_Skip,,, ,,s,_NCL1HRS,,,                                # Alias of INT_EEA_ID_CRC_BCC_2
# w,,NCL1HRS,0x00A8,,,,"1002A8",,m,_8_Skip,,, ,,m,_NCL1HRS,,,                                # Alias of INT_EEA_ID_CRC_BCC_2
r,,EEA_ION_KALIB,0x00A9,,,,"1102A9",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB,,,
w,,EEA_ION_KALIB,0x00A9,,,,"1102A9",,m,_8_Skip,,, ,,m,_EEA_ION_KALIB,,,
r,,EEA_ION_KALIB_INV,0x00AA,,,,"1202AA",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB_INV,,,
w,,EEA_ION_KALIB_INV,0x00AA,,,,"1202AA",,m,_8_Skip,,, ,,m,_EEA_ION_KALIB_INV,,,
r,,EEA_ION_KALIB_2,0x00AB,,,,"1302AB",,s,_8_Skip,,, ,,s,_EEA_ION_KALIB_2,,,
w,,EEA_ION_KALIB_2,0x00AB,,,,"1302AB",,m,_8_Skip,,, ,,m,_EEA_ION_KALIB_2,,,
r,,SST3,0x00B0,,,,"0802B0",,s,_8_Skip,,, ,,s,_SST3,,,
w,,SST3,0x00B0,,,,"0802B0",,m,_8_Skip,,, ,,m,_SST3,,,
r,,C_DECGAP,0x00B4,,,,"0C02B4",,s,_8_Skip,,, ,,s,_C_DECGAP,,,
w,,C_DECGAP,0x00B4,,,,"0C02B4",,m,_8_Skip,,, ,,m,_C_DECGAP,,,
# r,,NCL20SEC,0x00B4,,,,"0C02B4",,s,_8_Skip,,, ,,s,_NCL20SEC,,,                              # Alias of C_DECGAP
# w,,NCL20SEC,0x00B4,,,,"0C02B4",,m,_8_Skip,,, ,,m,_NCL20SEC,,,                              # Alias of C_DECGAP
r,,REF_MAX_ON,0x00B7,,,,"0F02B7",,s,_8_Skip,,, ,,s,_REF_MAX_ON,,,
w,,REF_MAX_ON,0x00B7,,,,"0F02B7",,m,_8_Skip,,, ,,m,_REF_MAX_ON,,,
r,,ROM_PAGES,0x00BF,,,,"0702BF",,s,_8_Skip,,, ,,s,_ROM_PAGES,,,
w,,ROM_PAGES,0x00BF,,,,"0702BF",,m,_8_Skip,,, ,,m,_ROM_PAGES,,,
r,,REF_MAX_OFF,0x00C1,,,,"7902C1",,s,_8_Skip,,, ,,s,_REF_MAX_OFF,,,
w,,REF_MAX_OFF,0x00C1,,,,"7902C1",,m,_8_Skip,,, ,,m,_REF_MAX_OFF,,,
r,,NCL100MSEC,0x00C8,,,,"7002C8",,s,_8_Skip,,, ,,s,_NCL100MSEC,,,
w,,NCL100MSEC,0x00C8,,,,"7002C8",,m,_8_Skip,,, ,,m,_NCL100MSEC,,,
r,,RST1,0x00D0,,,,"6802D0",,s,_8_Skip,,, ,,s,_RST1,,,
w,,RST1,0x00D0,,,,"6802D0",,m,_8_Skip,,, ,,m,_RST1,,,
r,,AD8_OF_25GRDC,0x00D5,,,,"6D02D5",,s,_8_Skip,,, ,,s,_AD8_OF_25GRDC,,,
w,,AD8_OF_25GRDC,0x00D5,,,,"6D02D5",,m,_8_Skip,,, ,,m,_AD8_OF_25GRDC,,,
r,,TFRS_A__REST,0x00E0,,,,"5802E0",,s,_8_Skip,,, ,,s,_TFRS_A__REST,,,
w,,TFRS_A__REST,0x00E0,,,,"5802E0",,m,_8_Skip,,, ,,m,_TFRS_A__REST,,,
r,,NTC_TOL_ZEIT,0x00E1,,,,"5902E1",,s,_8_Skip,,, ,,s,_NTC_TOL_ZEIT,,,
w,,NTC_TOL_ZEIT,0x00E1,,,,"5902E1",,m,_8_Skip,,, ,,m,_NTC_TOL_ZEIT,,,
r,,AD_TWWSOLL_MAX,0x00E9,,,,"5102E9",,s,_8_Skip,,, ,,s,_AD_TWWSOLL_MAX,,,
w,,AD_TWWSOLL_MAX,0x00E9,,,,"5102E9",,m,_8_Skip,,, ,,m,_AD_TWWSOLL_MAX,,,
r,,QAC_MAX,0x00EB,,,,"5302EB",,s,_8_Skip,,, ,,s,_QAC_MAX,,,
w,,QAC_MAX,0x00EB,,,,"5302EB",,m,_8_Skip,,, ,,m,_QAC_MAX,,,
r,,HZ_HYS__NEG,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_HZ_HYS__NEG,,,
w,,HZ_HYS__NEG,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_HZ_HYS__NEG,,,
# r,,NG_INCR_DECR__DECR,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_NG_INCR_DECR__DECR,,,          # Alias of HZ_HYS__NEG
# w,,NG_INCR_DECR__DECR,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_NG_INCR_DECR__DECR,,,          # Alias of HZ_HYS__NEG
# r,,NG_REG_ANPASS__START,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_NG_REG_ANPASS__START,,,      # Alias of HZ_HYS__NEG
# w,,NG_REG_ANPASS__START,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_NG_REG_ANPASS__START,,,      # Alias of HZ_HYS__NEG
# r,,PU_TAKT__PULS,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_PU_TAKT__PULS,,,                    # Alias of HZ_HYS__NEG
# w,,PU_TAKT__PULS,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_PU_TAKT__PULS,,,                    # Alias of HZ_HYS__NEG
# r,,P_LPG__BETRIEB,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_P_LPG__BETRIEB,,,                  # Alias of HZ_HYS__NEG
# w,,P_LPG__BETRIEB,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_P_LPG__BETRIEB,,,                  # Alias of HZ_HYS__NEG
# r,,RST3,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_RST3,,,                                      # Alias of HZ_HYS__NEG
# w,,RST3,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_RST3,,,                                      # Alias of HZ_HYS__NEG
# r,,SEL_IN_1_2__2,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_IN_1_2__2,,,                    # Alias of HZ_HYS__NEG
# w,,SEL_IN_1_2__2,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_SEL_IN_1_2__2,,,                    # Alias of HZ_HYS__NEG
# r,,SEL_IN_3_4__4,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_IN_3_4__4,,,                    # Alias of HZ_HYS__NEG
# w,,SEL_IN_3_4__4,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_SEL_IN_3_4__4,,,                    # Alias of HZ_HYS__NEG
# r,,SEL_PR_1_2__2,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_PR_1_2__2,,,                    # Alias of HZ_HYS__NEG
# w,,SEL_PR_1_2__2,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_SEL_PR_1_2__2,,,                    # Alias of HZ_HYS__NEG
# r,,SEL_PR_3_4__4,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_SEL_PR_3_4__4,,,                    # Alias of HZ_HYS__NEG
# w,,SEL_PR_3_4__4,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_SEL_PR_3_4__4,,,                    # Alias of HZ_HYS__NEG
# r,,WW_HYS__NEG,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_WW_HYS__NEG,,,                        # Alias of HZ_HYS__NEG
# w,,WW_HYS__NEG,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_WW_HYS__NEG,,,                        # Alias of HZ_HYS__NEG
# r,,XRAM_PAGE_DEFAULT,0x00F0,,,,"4802F0",,s,_8_Skip,,, ,,s,_XRAM_PAGE_DEFAULT,,,            # Alias of HZ_HYS__NEG
# w,,XRAM_PAGE_DEFAULT,0x00F0,,,,"4802F0",,m,_8_Skip,,, ,,m,_XRAM_PAGE_DEFAULT,,,            # Alias of HZ_HYS__NEG
r,,NTC_TA_MAX,0x00F1,,,,"4902F1",,s,_8_Skip,,, ,,s,_NTC_TA_MAX,,,
w,,NTC_TA_MAX,0x00F1,,,,"4902F1",,m,_8_Skip,,, ,,m,_NTC_TA_MAX,,,
# r,,QQ_M10,0x00F1,,,,"4902F1",,s,_8_Skip,,, ,,s,_QQ_M10,,,                                  # Alias of NTC_TA_MAX
# w,,QQ_M10,0x00F1,,,,"4902F1",,m,_8_Skip,,, ,,m,_QQ_M10,,,                                  # Alias of NTC_TA_MAX
r,,NIT_MAX,0x00F3,,,,"4B02F3",,s,_8_Skip,,, ,,s,_NIT_MAX,,,
w,,NIT_MAX,0x00F3,,,,"4B02F3",,m,_8_Skip,,, ,,m,_NIT_MAX,,,
r,,DIG_TST_2,0x00F5,,,,"4D02F5",,s,_8_Skip,,, ,,s,_DIG_TST_2,,,
w,,DIG_TST_2,0x00F5,,,,"4D02F5",,m,_8_Skip,,, ,,m,_DIG_TST_2,,,
r,,NTC_MAX,0x00F8,,,,"4002F8",,s,_8_Skip,,, ,,s,_NTC_MAX,,,
w,,NTC_MAX,0x00F8,,,,"4002F8",,m,_8_Skip,,, ,,m,_NTC_MAX,,,
# r,,TTOL__NON_ZERO_CHECK,0x00F8,,,,"4002F8",,s,_8_Skip,,, ,,s,_TTOL__NON_ZERO_CHECK,,,      # Alias of NTC_MAX
# w,,TTOL__NON_ZERO_CHECK,0x00F8,,,,"4002F8",,m,_8_Skip,,, ,,m,_TTOL__NON_ZERO_CHECK,,,      # Alias of NTC_MAX
r,,EEA_P_CODE,0x00FA,,,,"4202FA",,s,_8_Skip,,, ,,s,_EEA_P_CODE,,,
w,,EEA_P_CODE,0x00FA,,,,"4202FA",,m,_8_Skip,,, ,,m,_EEA_P_CODE,,,
# r,,EEA_STATI_AKTIV,0x00FA,,,,"4202FA",,s,_8_Skip,,, ,,s,_EEA_STATI_AKTIV,,,                # Alias of EEA_P_CODE
# w,,EEA_STATI_AKTIV,0x00FA,,,,"4202FA",,m,_8_Skip,,, ,,m,_EEA_STATI_AKTIV,,,                # Alias of EEA_P_CODE
# r,,MX_RES_CYCL,0x00FA,,,,"4202FA",,s,_8_Skip,,, ,,s,_MX_RES_CYCL,,,                        # Alias of EEA_P_CODE
# w,,MX_RES_CYCL,0x00FA,,,,"4202FA",,m,_8_Skip,,, ,,m,_MX_RES_CYCL,,,                        # Alias of EEA_P_CODE
r,,BOOSTER_ANL_MASK,0x00FB,,,,"4302FB",,s,_8_Skip,,, ,,s,_BOOSTER_ANL_MASK,,,
w,,BOOSTER_ANL_MASK,0x00FB,,,,"4302FB",,m,_8_Skip,,, ,,m,_BOOSTER_ANL_MASK,,,
r,,HZ_KTND__D,0x00FC,,,,"4402FC",,s,_8_Skip,,, ,,s,_HZ_KTND__D,,,
w,,HZ_KTND__D,0x00FC,,,,"4402FC",,m,_8_Skip,,, ,,m,_HZ_KTND__D,,,
r,,ADC_BREAK,0x00FF,,,,"4702FF",,s,_8_Skip,,, ,,s,_ADC_BREAK,,,
w,,ADC_BREAK,0x00FF,,,,"4702FF",,m,_8_Skip,,, ,,m,_ADC_BREAK,,,
# r,,L_EEPROM,0x00FF,,,,"4702FF",,s,_8_Skip,,, ,,s,_L_EEPROM,,,                              # Alias of ADC_BREAK
# w,,L_EEPROM,0x00FF,,,,"4702FF",,m,_8_Skip,,, ,,m,_L_EEPROM,,,                              # Alias of ADC_BREAK
# r,,QQ_M25,0x00FF,,,,"4702FF",,s,_8_Skip,,, ,,s,_QQ_M25,,,                                  # Alias of ADC_BREAK
# w,,QQ_M25,0x00FF,,,,"4702FF",,m,_8_Skip,,, ,,m,_QQ_M25,,,                                  # Alias of ADC_BREAK
r,,EEA_ANF2,0x0100,,,,"3406010200",,s,_8_Skip,,, ,,s,_EEA_ANF2,,,
w,,EEA_ANF2,0x0100,,,,"3406010200",,m,_8_Skip,,, ,,m,_EEA_ANF2,,,
r,,TWARTEQQ,0x011D,,,,"290601021D",,s,_8_Skip,,, ,,s,_TWARTEQQ,,,
w,,TWARTEQQ,0x011D,,,,"290601021D",,m,_8_Skip,,, ,,m,_TWARTEQQ,,,
r,,EEA_HL_HIADR,0x0191,,,,"A506010291",,s,_8_Skip,,, ,,s,_EEA_HL_HIADR,,,
w,,EEA_HL_HIADR,0x0191,,,,"A506010291",,m,_8_Skip,,, ,,m,_EEA_HL_HIADR,,,
r,,EEA_WRONG_ADR,0x0192,,,,"A606010292",,s,_8_Skip,,, ,,s,_EEA_WRONG_ADR,,,
w,,EEA_WRONG_ADR,0x0192,,,,"A606010292",,m,_8_Skip,,, ,,m,_EEA_WRONG_ADR,,,
r,,EEA_FCODE_NOT,0x0194,,,,"A006010294",,s,_8_Skip,,, ,,s,_EEA_FCODE_NOT,,,
w,,EEA_FCODE_NOT,0x0194,,,,"A006010294",,m,_8_Skip,,, ,,m,_EEA_FCODE_NOT,,,
r,,EEA_FC_57,0x0196,,,,"A206010296",,s,_8_Skip,,, ,,s,_EEA_FC_57,,,
w,,EEA_FC_57,0x0196,,,,"A206010296",,m,_8_Skip,,, ,,m,_EEA_FC_57,,,
r,,EEA_FC_55,0x0198,,,,"AC06010298",,s,_8_Skip,,, ,,s,_EEA_FC_55,,,
w,,EEA_FC_55,0x0198,,,,"AC06010298",,m,_8_Skip,,, ,,m,_EEA_FC_55,,,
r,,EEA_FC_53,0x019A,,,,"AE0601029A",,s,_8_Skip,,, ,,s,_EEA_FC_53,,,
w,,EEA_FC_53,0x019A,,,,"AE0601029A",,m,_8_Skip,,, ,,m,_EEA_FC_53,,,
r,,EEA_FC_52,0x019C,,,,"A80601029C",,s,_8_Skip,,, ,,s,_EEA_FC_52,,,
w,,EEA_FC_52,0x019C,,,,"A80601029C",,m,_8_Skip,,, ,,m,_EEA_FC_52,,,
r,,EEA_FC_51,0x019E,,,,"AA0601029E",,s,_8_Skip,,, ,,s,_EEA_FC_51,,,
w,,EEA_FC_51,0x019E,,,,"AA0601029E",,m,_8_Skip,,, ,,m,_EEA_FC_51,,,
r,,EEA_FC_49,0x01A0,,,,"94060102A0",,s,_8_Skip,,, ,,s,_EEA_FC_49,,,
w,,EEA_FC_49,0x01A0,,,,"94060102A0",,m,_8_Skip,,, ,,m,_EEA_FC_49,,,
r,,EEA_FC_48,0x01A2,,,,"96060102A2",,s,_8_Skip,,, ,,s,_EEA_FC_48,,,
w,,EEA_FC_48,0x01A2,,,,"96060102A2",,m,_8_Skip,,, ,,m,_EEA_FC_48,,,
r,,EEA_FC_47,0x01A4,,,,"90060102A4",,s,_8_Skip,,, ,,s,_EEA_FC_47,,,
w,,EEA_FC_47,0x01A4,,,,"90060102A4",,m,_8_Skip,,, ,,m,_EEA_FC_47,,,
r,,EEA_FC_46,0x01A6,,,,"92060102A6",,s,_8_Skip,,, ,,s,_EEA_FC_46,,,
w,,EEA_FC_46,0x01A6,,,,"92060102A6",,m,_8_Skip,,, ,,m,_EEA_FC_46,,,
r,,EEA_FC_45,0x01A8,,,,"9C060102A8",,s,_8_Skip,,, ,,s,_EEA_FC_45,,,
w,,EEA_FC_45,0x01A8,,,,"9C060102A8",,m,_8_Skip,,, ,,m,_EEA_FC_45,,,
r,,EEA_FC_44,0x01AA,,,,"9E060102AA",,s,_8_Skip,,, ,,s,_EEA_FC_44,,,
w,,EEA_FC_44,0x01AA,,,,"9E060102AA",,m,_8_Skip,,, ,,m,_EEA_FC_44,,,
r,,EEA_FC_43,0x01AC,,,,"98060102AC",,s,_8_Skip,,, ,,s,_EEA_FC_43,,,
w,,EEA_FC_43,0x01AC,,,,"98060102AC",,m,_8_Skip,,, ,,m,_EEA_FC_43,,,
r,,EEA_FC_41,0x01AE,,,,"9A060102AE",,s,_8_Skip,,, ,,s,_EEA_FC_41,,,
w,,EEA_FC_41,0x01AE,,,,"9A060102AE",,m,_8_Skip,,, ,,m,_EEA_FC_41,,,
r,,EEA_FC_39,0x01B0,,,,"84060102B0",,s,_8_Skip,,, ,,s,_EEA_FC_39,,,
w,,EEA_FC_39,0x01B0,,,,"84060102B0",,m,_8_Skip,,, ,,m,_EEA_FC_39,,,
r,,EEA_FC_38,0x01B2,,,,"86060102B2",,s,_8_Skip,,, ,,s,_EEA_FC_38,,,
w,,EEA_FC_38,0x01B2,,,,"86060102B2",,m,_8_Skip,,, ,,m,_EEA_FC_38,,,
r,,EEA_FC_37,0x01B4,,,,"80060102B4",,s,_8_Skip,,, ,,s,_EEA_FC_37,,,
w,,EEA_FC_37,0x01B4,,,,"80060102B4",,m,_8_Skip,,, ,,m,_EEA_FC_37,,,
r,,EEA_FC_36,0x01B6,,,,"82060102B6",,s,_8_Skip,,, ,,s,_EEA_FC_36,,,
w,,EEA_FC_36,0x01B6,,,,"82060102B6",,m,_8_Skip,,, ,,m,_EEA_FC_36,,,
r,,EEA_FC_35,0x01B8,,,,"8C060102B8",,s,_8_Skip,,, ,,s,_EEA_FC_35,,,
w,,EEA_FC_35,0x01B8,,,,"8C060102B8",,m,_8_Skip,,, ,,m,_EEA_FC_35,,,
r,,EEA_FC_34,0x01BA,,,,"8E060102BA",,s,_8_Skip,,, ,,s,_EEA_FC_34,,,
w,,EEA_FC_34,0x01BA,,,,"8E060102BA",,m,_8_Skip,,, ,,m,_EEA_FC_34,,,
r,,EEA_FC_33,0x01BC,,,,"88060102BC",,s,_8_Skip,,, ,,s,_EEA_FC_33,,,
w,,EEA_FC_33,0x01BC,,,,"88060102BC",,m,_8_Skip,,, ,,m,_EEA_FC_33,,,
r,,EEA_FC_32,0x01BE,,,,"8A060102BE",,s,_8_Skip,,, ,,s,_EEA_FC_32,,,
w,,EEA_FC_32,0x01BE,,,,"8A060102BE",,m,_8_Skip,,, ,,m,_EEA_FC_32,,,
r,,EEA_FC_31,0x01C0,,,,"F4060102C0",,s,_8_Skip,,, ,,s,_EEA_FC_31,,,
w,,EEA_FC_31,0x01C0,,,,"F4060102C0",,m,_8_Skip,,, ,,m,_EEA_FC_31,,,
r,,EEA_FC_30,0x01C2,,,,"F6060102C2",,s,_8_Skip,,, ,,s,_EEA_FC_30,,,
w,,EEA_FC_30,0x01C2,,,,"F6060102C2",,m,_8_Skip,,, ,,m,_EEA_FC_30,,,
r,,EEA_FC_24,0x01C4,,,,"F0060102C4",,s,_8_Skip,,, ,,s,_EEA_FC_24,,,
w,,EEA_FC_24,0x01C4,,,,"F0060102C4",,m,_8_Skip,,, ,,m,_EEA_FC_24,,,
r,,EEA_FC_23,0x01C6,,,,"F2060102C6",,s,_8_Skip,,, ,,s,_EEA_FC_23,,,
w,,EEA_FC_23,0x01C6,,,,"F2060102C6",,m,_8_Skip,,, ,,m,_EEA_FC_23,,,
r,,EEA_FC_22,0x01C8,,,,"FC060102C8",,s,_8_Skip,,, ,,s,_EEA_FC_22,,,
w,,EEA_FC_22,0x01C8,,,,"FC060102C8",,m,_8_Skip,,, ,,m,_EEA_FC_22,,,
r,,EEA_FC_21,0x01CA,,,,"FE060102CA",,s,_8_Skip,,, ,,s,_EEA_FC_21,,,
w,,EEA_FC_21,0x01CA,,,,"FE060102CA",,m,_8_Skip,,, ,,m,_EEA_FC_21,,,
r,,EEA_FC_18,0x01CC,,,,"F8060102CC",,s,_8_Skip,,, ,,s,_EEA_FC_18,,,
w,,EEA_FC_18,0x01CC,,,,"F8060102CC",,m,_8_Skip,,, ,,m,_EEA_FC_18,,,
r,,EEA_FC_16,0x01CE,,,,"FA060102CE",,s,_8_Skip,,, ,,s,_EEA_FC_16,,,
w,,EEA_FC_16,0x01CE,,,,"FA060102CE",,m,_8_Skip,,, ,,m,_EEA_FC_16,,,
r,,EEA_FC_15,0x01D0,,,,"E4060102D0",,s,_8_Skip,,, ,,s,_EEA_FC_15,,,
w,,EEA_FC_15,0x01D0,,,,"E4060102D0",,m,_8_Skip,,, ,,m,_EEA_FC_15,,,
r,,EEA_FC_14,0x01D2,,,,"E6060102D2",,s,_8_Skip,,, ,,s,_EEA_FC_14,,,
w,,EEA_FC_14,0x01D2,,,,"E6060102D2",,m,_8_Skip,,, ,,m,_EEA_FC_14,,,
r,,EEA_FC_12,0x01D4,,,,"E0060102D4",,s,_8_Skip,,, ,,s,_EEA_FC_12,,,
w,,EEA_FC_12,0x01D4,,,,"E0060102D4",,m,_8_Skip,,, ,,m,_EEA_FC_12,,,
r,,EEA_FC_11,0x01D6,,,,"E2060102D6",,s,_8_Skip,,, ,,s,_EEA_FC_11,,,
w,,EEA_FC_11,0x01D6,,,,"E2060102D6",,m,_8_Skip,,, ,,m,_EEA_FC_11,,,
r,,EEA_HBRONTAG,0x01D8,,,,"EC060102D8",,s,_8_Skip,,, ,,s,_EEA_HBRONTAG,,,
w,,EEA_HBRONTAG,0x01D8,,,,"EC060102D8",,m,_8_Skip,,, ,,m,_EEA_HBRONTAG,,,
r,,EEA_NZUENDTAG,0x01D9,,,,"ED060102D9",,s,_8_Skip,,, ,,s,_EEA_NZUENDTAG,,,
w,,EEA_NZUENDTAG,0x01D9,,,,"ED060102D9",,m,_8_Skip,,, ,,m,_EEA_NZUENDTAG,,,
r,,EEA_N_PON,0x01DA,,,,"EE060102DA",,s,_8_Skip,,, ,,s,_EEA_N_PON,,,
w,,EEA_N_PON,0x01DA,,,,"EE060102DA",,m,_8_Skip,,, ,,m,_EEA_N_PON,,,
r,,EEA_N_KON,0x01DD,,,,"E9060102DD",,s,_8_Skip,,, ,,s,_EEA_N_KON,,,
w,,EEA_N_KON,0x01DD,,,,"E9060102DD",,m,_8_Skip,,, ,,m,_EEA_N_KON,,,
r,,EEA_RES_CNT,0x01E0,,,,"D4060102E0",,s,_8_Skip,,, ,,s,_EEA_RES_CNT,,,
w,,EEA_RES_CNT,0x01E0,,,,"D4060102E0",,m,_8_Skip,,, ,,m,_EEA_RES_CNT,,,
r,,EEA_SHUT_OFF,0x01E3,,,,"D7060102E3",,s,_8_Skip,,, ,,s,_EEA_SHUT_OFF,,,
w,,EEA_SHUT_OFF,0x01E3,,,,"D7060102E3",,m,_8_Skip,,, ,,m,_EEA_SHUT_OFF,,,
r,,EEA_H_PON,0x01E6,,,,"D2060102E6",,s,_8_Skip,,, ,,s,_EEA_H_PON,,,
w,,EEA_H_PON,0x01E6,,,,"D2060102E6",,m,_8_Skip,,, ,,m,_EEA_H_PON,,,
r,,EEA_H_BON,0x01E9,,,,"DD060102E9",,s,_8_Skip,,, ,,s,_EEA_H_BON,,,
w,,EEA_H_BON,0x01E9,,,,"DD060102E9",,m,_8_Skip,,, ,,m,_EEA_H_BON,,,
r,,EEA_N_ZUE,0x01EB,,,,"DF060102EB",,s,_8_Skip,,, ,,s,_EEA_N_ZUE,,,
w,,EEA_N_ZUE,0x01EB,,,,"DF060102EB",,m,_8_Skip,,, ,,m,_EEA_N_ZUE,,,
r,,EEA_BAUSTAND,0x01EE,,,,"DA060102EE",,s,_8_Skip,,, ,,s,_EEA_BAUSTAND,,,
w,,EEA_BAUSTAND,0x01EE,,,,"DA060102EE",,m,_8_Skip,,, ,,m,_EEA_BAUSTAND,,,
# r,,EEA_PRUEF_LOW,0x01EE,,,,"DA060102EE",,s,_8_Skip,,, ,,s,_EEA_PRUEF_LOW,,,                # Alias of EEA_BAUSTAND
# w,,EEA_PRUEF_LOW,0x01EE,,,,"DA060102EE",,m,_8_Skip,,, ,,m,_EEA_PRUEF_LOW,,,                # Alias of EEA_BAUSTAND
r,,EEA_KUNDE,0x01F0,,,,"C4060102F0",,s,_8_Skip,,, ,,s,_EEA_KUNDE,,,
w,,EEA_KUNDE,0x01F0,,,,"C4060102F0",,m,_8_Skip,,, ,,m,_EEA_KUNDE,,,
r,,EEA_VARIANTE,0x01F1,,,,"C5060102F1",,s,_8_Skip,,, ,,s,_EEA_VARIANTE,,,
w,,EEA_VARIANTE,0x01F1,,,,"C5060102F1",,m,_8_Skip,,, ,,m,_EEA_VARIANTE,,,
r,,EEA_SERIAL_NO,0x01F3,,,,"C7060102F3",,s,_8_Skip,,, ,,s,_EEA_SERIAL_NO,,,
w,,EEA_SERIAL_NO,0x01F3,,,,"C7060102F3",,m,_8_Skip,,, ,,m,_EEA_SERIAL_NO,,,
r,,EEA_PRUEF_CRC,0x01F6,,,,"C2060102F6",,s,_8_Skip,,, ,,s,_EEA_PRUEF_CRC,,,
w,,EEA_PRUEF_CRC,0x01F6,,,,"C2060102F6",,m,_8_Skip,,, ,,m,_EEA_PRUEF_CRC,,,
r,,EEA_F_HIST_PTR_LOW,0x0200,,,,"AC06020200",,s,_8_Skip,,, ,,s,_EEA_F_HIST_PTR_LOW,,,
w,,EEA_F_HIST_PTR_LOW,0x0200,,,,"AC06020200",,m,_8_Skip,,, ,,m,_EEA_F_HIST_PTR_LOW,,,
r,,EEA_F_HIST_PTR_HIGH,0x0201,,,,"AD06020201",,s,_8_Skip,,, ,,s,_EEA_F_HIST_PTR_HIGH,,,
w,,EEA_F_HIST_PTR_HIGH,0x0201,,,,"AD06020201",,m,_8_Skip,,, ,,m,_EEA_F_HIST_PTR_HIGH,,,
r,,EEA_F_HIST_ANF,0x0202,,,,"AE06020202",,s,_8_Skip,,, ,,s,_EEA_F_HIST_ANF,,,
w,,EEA_F_HIST_ANF,0x0202,,,,"AE06020202",,m,_8_Skip,,, ,,m,_EEA_F_HIST_ANF,,,
r,,EEA_F_HIST_END,0x0231,,,,"9D06020231",,s,_8_Skip,,, ,,s,_EEA_F_HIST_END,,,
w,,EEA_F_HIST_END,0x0231,,,,"9D06020231",,m,_8_Skip,,, ,,m,_EEA_F_HIST_END,,,
r,,SYS_TAKT,0x02EE,,,,"42060202EE",,s,_8_Skip,,, ,,s,_SYS_TAKT,,,
w,,SYS_TAKT,0x02EE,,,,"42060202EE",,m,_8_Skip,,, ,,m,_SYS_TAKT,,,

# Main Paras
r,,EEA_TVSOLL_EPM,0x0300,,,,"1006030200",,s,_8_Skip,,, ,,s,_EEA_TVSOLL_EPM,,,
w,,EEA_TVSOLL_EPM,0x0300,,,,"1006030200",,m,_8_Skip,,, ,,m,_EEA_TVSOLL_EPM,,,
r,,EEA_TVABSENK,0x0301,,,,"1106030201",,s,_8_Skip,,, ,,s,_EEA_TVABSENK,,,
w,,EEA_TVABSENK,0x0301,,,,"1106030201",,m,_8_Skip,,, ,,m,_EEA_TVABSENK,,,
r,,EEA_TWWSOLL_EPM,0x0302,,,,"1206030202",,s,_8_Skip,,, ,,s,_EEA_TWWSOLL_EPM,,,
w,,EEA_TWWSOLL_EPM,0x0302,,,,"1206030202",,m,_8_Skip,,, ,,m,_EEA_TWWSOLL_EPM,,,
r,,EEA_WISO_EPM,0x0303,,,,"1306030203",,s,_8_Skip,,, ,,s,_EEA_WISO_EPM,,,
w,,EEA_WISO_EPM,0x0303,,,,"1306030203",,m,_8_Skip,,, ,,m,_EEA_WISO_EPM,,,
r,,EEA_MAINPARACRC,0x0304,,,,"1406030204",,s,_8_Skip,,, ,,s,_EEA_MAINPARACRC,,,
w,,EEA_MAINPARACRC,0x0304,,,,"1406030204",,m,_8_Skip,,, ,,m,_EEA_MAINPARACRC,,,


r,,EEA_TVSOLL_EPM2,0x0307,,,,"1706030207",,s,_8_Skip,,, ,,s,_EEA_TVSOLL_EPM2,,,
w,,EEA_TVSOLL_EPM2,0x0307,,,,"1706030207",,m,_8_Skip,,, ,,m,_EEA_TVSOLL_EPM2,,,

# --- External RAM (XRAM) ---
r,,TX_BUFFER_END,0xF000,,,,"E40300",,s,_8_Skip,,, ,,s,_TX_BUFFER_END,,,
w,,TX_BUFFER_END,0xF000,,,,"E40300",,m,_8_Skip,,, ,,m,_TX_BUFFER_END,,,
r,,EBUS_ERROR,0xF001,,,,"E50301",,s,_8_Skip,,, ,,s,_EBUS_ERROR,,,
w,,EBUS_ERROR,0xF001,,,,"E50301",,m,_8_Skip,,, ,,m,_EBUS_ERROR,,,
r,,TX_QQ,0xF002,,,,"E60302",,s,_8_Skip,,, ,,s,_TX_QQ,,,
w,,TX_QQ,0xF002,,,,"E60302",,m,_8_Skip,,, ,,m,_TX_QQ,,,
# r,,TX_XRAM,0xF002,,,,"E60302",,s,_8_Skip,,, ,,s,_TX_XRAM,,,                                # Alias of TX_QQ
# w,,TX_XRAM,0xF002,,,,"E60302",,m,_8_Skip,,, ,,m,_TX_XRAM,,,                                # Alias of TX_QQ
r,,TX_ZZ,0xF003,,,,"E70303",,s,_8_Skip,,, ,,s,_TX_ZZ,,,
w,,TX_ZZ,0xF003,,,,"E70303",,m,_8_Skip,,, ,,m,_TX_ZZ,,,
r,,TX_PB,0xF004,,,,"E00304",,s,_8_Skip,,, ,,s,_TX_PB,,,
w,,TX_PB,0xF004,,,,"E00304",,m,_8_Skip,,, ,,m,_TX_PB,,,
r,,TX_SB,0xF005,,,,"E10305",,s,_8_Skip,,, ,,s,_TX_SB,,,
w,,TX_SB,0xF005,,,,"E10305",,m,_8_Skip,,, ,,m,_TX_SB,,,
r,,TX_NN,0xF006,,,,"E20306",,s,_8_Skip,,, ,,s,_TX_NN,,,
w,,TX_NN,0xF006,,,,"E20306",,m,_8_Skip,,, ,,m,_TX_NN,,,
r,,TX_DB1,0xF007,,,,"E30307",,s,_8_Skip,,, ,,s,_TX_DB1,,,
w,,TX_DB1,0xF007,,,,"E30307",,m,_8_Skip,,, ,,m,_TX_DB1,,,
r,,TX_DB2,0xF008,,,,"EC0308",,s,_8_Skip,,, ,,s,_TX_DB2,,,
w,,TX_DB2,0xF008,,,,"EC0308",,m,_8_Skip,,, ,,m,_TX_DB2,,,
r,,TX_DB3,0xF009,,,,"ED0309",,s,_8_Skip,,, ,,s,_TX_DB3,,,
w,,TX_DB3,0xF009,,,,"ED0309",,m,_8_Skip,,, ,,m,_TX_DB3,,,
r,,TX_DB4,0xF00A,,,,"EE030A",,s,_8_Skip,,, ,,s,_TX_DB4,,,
w,,TX_DB4,0xF00A,,,,"EE030A",,m,_8_Skip,,, ,,m,_TX_DB4,,,
r,,TX_DB5,0xF00B,,,,"EF030B",,s,_8_Skip,,, ,,s,_TX_DB5,,,
w,,TX_DB5,0xF00B,,,,"EF030B",,m,_8_Skip,,, ,,m,_TX_DB5,,,
r,,TX_DB6,0xF00C,,,,"E8030C",,s,_8_Skip,,, ,,s,_TX_DB6,,,
w,,TX_DB6,0xF00C,,,,"E8030C",,m,_8_Skip,,, ,,m,_TX_DB6,,,
r,,TX_DBX,0xF00D,,,,"E9030D",,s,_8_Skip,,, ,,s,_TX_DBX,,,
w,,TX_DBX,0xF00D,,,,"E9030D",,m,_8_Skip,,, ,,m,_TX_DBX,,,
r,,RX_QQ,0xF01B,,,,"FF031B",,s,_8_Skip,,, ,,s,_RX_QQ,,,
w,,RX_QQ,0xF01B,,,,"FF031B",,m,_8_Skip,,, ,,m,_RX_QQ,,,
# r,,RX_XRAM,0xF01B,,,,"FF031B",,s,_8_Skip,,, ,,s,_RX_XRAM,,,                                # Alias of RX_QQ
# w,,RX_XRAM,0xF01B,,,,"FF031B",,m,_8_Skip,,, ,,m,_RX_XRAM,,,                                # Alias of RX_QQ
r,,RX_ZZ,0xF01C,,,,"F8031C",,s,_8_Skip,,, ,,s,_RX_ZZ,,,
w,,RX_ZZ,0xF01C,,,,"F8031C",,m,_8_Skip,,, ,,m,_RX_ZZ,,,
r,,RX_PB,0xF01D,,,,"F9031D",,s,_8_Skip,,, ,,s,_RX_PB,,,
w,,RX_PB,0xF01D,,,,"F9031D",,m,_8_Skip,,, ,,m,_RX_PB,,,
r,,RX_SB,0xF01E,,,,"FA031E",,s,_8_Skip,,, ,,s,_RX_SB,,,
w,,RX_SB,0xF01E,,,,"FA031E",,m,_8_Skip,,, ,,m,_RX_SB,,,
r,,RX_NN,0xF01F,,,,"FB031F",,s,_8_Skip,,, ,,s,_RX_NN,,,
w,,RX_NN,0xF01F,,,,"FB031F",,m,_8_Skip,,, ,,m,_RX_NN,,,
r,,RX_DB1,0xF020,,,,"C40320",,s,_8_Skip,,, ,,s,_RX_DB1,,,
w,,RX_DB1,0xF020,,,,"C40320",,m,_8_Skip,,, ,,m,_RX_DB1,,,
r,,RX_DB2,0xF021,,,,"C50321",,s,_8_Skip,,, ,,s,_RX_DB2,,,
w,,RX_DB2,0xF021,,,,"C50321",,m,_8_Skip,,, ,,m,_RX_DB2,,,
r,,RX_DB3,0xF022,,,,"C60322",,s,_8_Skip,,, ,,s,_RX_DB3,,,
w,,RX_DB3,0xF022,,,,"C60322",,m,_8_Skip,,, ,,m,_RX_DB3,,,
r,,RX_DB4,0xF023,,,,"C70323",,s,_8_Skip,,, ,,s,_RX_DB4,,,
w,,RX_DB4,0xF023,,,,"C70323",,m,_8_Skip,,, ,,m,_RX_DB4,,,
r,,RX_DB5,0xF024,,,,"C00324",,s,_8_Skip,,, ,,s,_RX_DB5,,,
w,,RX_DB5,0xF024,,,,"C00324",,m,_8_Skip,,, ,,m,_RX_DB5,,,
r,,RX_DB6,0xF025,,,,"C10325",,s,_8_Skip,,, ,,s,_RX_DB6,,,
w,,RX_DB6,0xF025,,,,"C10325",,m,_8_Skip,,, ,,m,_RX_DB6,,,
r,,RX_DB7,0xF026,,,,"C20326",,s,_8_Skip,,, ,,s,_RX_DB7,,,
w,,RX_DB7,0xF026,,,,"C20326",,m,_8_Skip,,, ,,m,_RX_DB7,,,
r,,RX_DB8,0xF027,,,,"C30327",,s,_8_Skip,,, ,,s,_RX_DB8,,,
w,,RX_DB8,0xF027,,,,"C30327",,m,_8_Skip,,, ,,m,_RX_DB8,,,
r,,RX_DB10,0xF029,,,,"CD0329",,s,_8_Skip,,, ,,s,_RX_DB10,,,
w,,RX_DB10,0xF029,,,,"CD0329",,m,_8_Skip,,, ,,m,_RX_DB10,,,
r,,RX_DB12,0xF02B,,,,"CF032B",,s,_8_Skip,,, ,,s,_RX_DB12,,,
w,,RX_DB12,0xF02B,,,,"CF032B",,m,_8_Skip,,, ,,m,_RX_DB12,,,
r,,RX_DB14,0xF02D,,,,"C9032D",,s,_8_Skip,,, ,,s,_RX_DB14,,,
w,,RX_DB14,0xF02D,,,,"C9032D",,m,_8_Skip,,, ,,m,_RX_DB14,,,
r,,RX_DB16,0xF02F,,,,"CB032F",,s,_8_Skip,,, ,,s,_RX_DB16,,,
w,,RX_DB16,0xF02F,,,,"CB032F",,m,_8_Skip,,, ,,m,_RX_DB16,,,
r,,RX_DB18,0xF031,,,,"D50331",,s,_8_Skip,,, ,,s,_RX_DB18,,,
w,,RX_DB18,0xF031,,,,"D50331",,m,_8_Skip,,, ,,m,_RX_DB18,,,
r,,RX_DB20,0xF033,,,,"D70333",,s,_8_Skip,,, ,,s,_RX_DB20,,,
w,,RX_DB20,0xF033,,,,"D70333",,m,_8_Skip,,, ,,m,_RX_DB20,,,
r,,RX_OFFSET_CNT,0xF035,,,,"D10335",,s,_8_Skip,,, ,,s,_RX_OFFSET_CNT,,,
w,,RX_OFFSET_CNT,0xF035,,,,"D10335",,m,_8_Skip,,, ,,m,_RX_OFFSET_CNT,,,
# r,,RX_XRAM_END,0xF035,,,,"D10335",,s,_8_Skip,,, ,,s,_RX_XRAM_END,,,                        # Alias of RX_OFFSET_CNT
# w,,RX_XRAM_END,0xF035,,,,"D10335",,m,_8_Skip,,, ,,m,_RX_XRAM_END,,,                        # Alias of RX_OFFSET_CNT
r,,RX_BUFFER_END,0xF036,,,,"D20336",,s,_8_Skip,,, ,,s,_RX_BUFFER_END,,,
w,,RX_BUFFER_END,0xF036,,,,"D20336",,m,_8_Skip,,, ,,m,_RX_BUFFER_END,,,
r,,EBUS_ACK,0xF037,,,,"D30337",,s,_8_Skip,,, ,,s,_EBUS_ACK,,,
w,,EBUS_ACK,0xF037,,,,"D30337",,m,_8_Skip,,, ,,m,_EBUS_ACK,,,
r,,TALK_EBUS,0xF038,,,,"DC0338",,s,_8_Skip,,, ,,s,_TALK_EBUS,,,
w,,TALK_EBUS,0xF038,,,,"DC0338",,m,_8_Skip,,, ,,m,_TALK_EBUS,,,
r,,T_SYN,0xF039,,,,"DD0339",,s,_8_Skip,,, ,,s,_T_SYN,,,
w,,T_SYN,0xF039,,,,"DD0339",,m,_8_Skip,,, ,,m,_T_SYN,,,
r,,V24_DELAY_TIMER,0xF03A,,,,"DE033A",,s,_8_Skip,,, ,,s,_V24_DELAY_TIMER,,,
w,,V24_DELAY_TIMER,0xF03A,,,,"DE033A",,m,_8_Skip,,, ,,m,_V24_DELAY_TIMER,,,
r,,DL_HYS_TH_OFF_,0xF03B,,,,"DF033B",,s,_8_Skip,,, ,,s,_DL_HYS_TH_OFF_,,,
w,,DL_HYS_TH_OFF_,0xF03B,,,,"DF033B",,m,_8_Skip,,, ,,m,_DL_HYS_TH_OFF_,,,
r,,TXist,0xF03C,,,,"D8033C",,s,_8_Skip,,, ,,s,_TXist,,,
w,,TXist,0xF03C,,,,"D8033C",,m,_8_Skip,,, ,,m,_TXist,,,
r,,TVist_start_FL,0xF03D,,,,"D9033D",,s,_8_Skip,,, ,,s,_TVist_start_FL,,,
w,,TVist_start_FL,0xF03D,,,,"D9033D",,m,_8_Skip,,, ,,m,_TVist_start_FL,,,
r,,DL_TH_OFF_SEC,0xF03E,,,,"DA033E",,s,_8_Skip,,, ,,s,_DL_TH_OFF_SEC,,,
w,,DL_TH_OFF_SEC,0xF03E,,,,"DA033E",,m,_8_Skip,,, ,,m,_DL_TH_OFF_SEC,,,
r,,minWUTzeit,0xF03F,,,,"DB033F",,s,_8_Skip,,, ,,s,_minWUTzeit,,,
w,,minWUTzeit,0xF03F,,,,"DB033F",,m,_8_Skip,,, ,,m,_minWUTzeit,,,
r,,tMinCombi,0xF040,,,,"A40340",,s,_8_Skip,,, ,,s,_tMinCombi,,,
w,,tMinCombi,0xF040,,,,"A40340",,m,_8_Skip,,, ,,m,_tMinCombi,,,
r,,cntFlaStabHZ,0xF041,,,,"A50341",,s,_8_Skip,,, ,,s,_cntFlaStabHZ,,,
w,,cntFlaStabHZ,0xF041,,,,"A50341",,m,_8_Skip,,, ,,m,_cntFlaStabHZ,,,
r,,ihilf,0xF042,,,,"A60342",,s,_8_Skip,,, ,,s,_ihilf,,,
w,,ihilf,0xF042,,,,"A60342",,m,_8_Skip,,, ,,m,_ihilf,,,
r,,uk1,0xF044,,,,"A00344",,s,_8_Skip,,, ,,s,_uk1,,,
w,,uk1,0xF044,,,,"A00344",,m,_8_Skip,,, ,,m,_uk1,,,
r,,CNTTW,0xF045,,,,"A10345",,s,_8_Skip,,, ,,s,_CNTTW,,,
w,,CNTTW,0xF045,,,,"A10345",,m,_8_Skip,,, ,,m,_CNTTW,,,
r,,max_nGsoll,0xF046,,,,"A20346",,s,_8_Skip,,, ,,s,_max_nGsoll,,,
w,,max_nGsoll,0xF046,,,,"A20346",,m,_8_Skip,,, ,,m,_max_nGsoll,,,
r,,cnt_tTvGradient,0xF047,,,,"A30347",,s,_8_Skip,,, ,,s,_cnt_tTvGradient,,,
w,,cnt_tTvGradient,0xF047,,,,"A30347",,m,_8_Skip,,, ,,m,_cnt_tTvGradient,,,
r,,secWWbetr,0xF048,,,,"AC0348",,s,_8_Skip,,, ,,s,_secWWbetr,,,
w,,secWWbetr,0xF048,,,,"AC0348",,m,_8_Skip,,, ,,m,_secWWbetr,,,
r,,icl1HrsKick,0xF049,,,,"AD0349",,s,_8_Skip,,, ,,s,_icl1HrsKick,,,
w,,icl1HrsKick,0xF049,,,,"AD0349",,m,_8_Skip,,, ,,m,_icl1HrsKick,,,
r,,cntConfig,0xF04A,,,,"AE034A",,s,_8_Skip,,, ,,s,_cntConfig,,,
w,,cntConfig,0xF04A,,,,"AE034A",,m,_8_Skip,,, ,,m,_cntConfig,,,
r,,cnt_sw_fc41,0xF04C,,,,"A8034C",,s,_8_Skip,,, ,,s,_cnt_sw_fc41,,,
w,,cnt_sw_fc41,0xF04C,,,,"A8034C",,m,_8_Skip,,, ,,m,_cnt_sw_fc41,,,
r,,N_DTMax_VL_eSTB,0xF04D,,,,"A9034D",,s,_8_Skip,,, ,,s,_N_DTMax_VL_eSTB,,,
w,,N_DTMax_VL_eSTB,0xF04D,,,,"A9034D",,m,_8_Skip,,, ,,m,_N_DTMax_VL_eSTB,,,
r,,DL_TVIST_NGMIN_SEC,0xF04E,,,,"AA034E",,s,_8_Skip,,, ,,s,_DL_TVIST_NGMIN_SEC,,,
w,,DL_TVIST_NGMIN_SEC,0xF04E,,,,"AA034E",,m,_8_Skip,,, ,,m,_DL_TVIST_NGMIN_SEC,,,
r,,dT_VLRL_Filter,0xF04F,,,,"AB034F",,s,_8_Skip,,, ,,s,_dT_VLRL_Filter,,,
w,,dT_VLRL_Filter,0xF04F,,,,"AB034F",,m,_8_Skip,,, ,,m,_dT_VLRL_Filter,,,
r,,prev_tWWist_2,0xF050,,,,"B40350",,s,_8_Skip,,, ,,s,_prev_tWWist_2,,,
w,,prev_tWWist_2,0xF050,,,,"B40350",,m,_8_Skip,,, ,,m,_prev_tWWist_2,,,
r,,cntGDW,0xF051,,,,"B50351",,s,_8_Skip,,, ,,s,_cntGDW,,,
w,,cntGDW,0xF051,,,,"B50351",,m,_8_Skip,,, ,,m,_cntGDW,,,
r,,DL_TH_OFF_SEC_MAX_,0xF052,,,,"B60352",,s,_8_Skip,,, ,,s,_DL_TH_OFF_SEC_MAX_,,,
w,,DL_TH_OFF_SEC_MAX_,0xF052,,,,"B60352",,m,_8_Skip,,, ,,m,_DL_TH_OFF_SEC_MAX_,,,
r,,SA_Th,0xF053,,,,"B70353",,s,_8_Skip,,, ,,s,_SA_Th,,,
w,,SA_Th,0xF053,,,,"B70353",,m,_8_Skip,,, ,,m,_SA_Th,,,
r,,PNL_HZcnt,0xF054,,,,"B00354",,s,_8_Skip,,, ,,s,_PNL_HZcnt,,,
w,,PNL_HZcnt,0xF054,,,,"B00354",,m,_8_Skip,,, ,,m,_PNL_HZcnt,,,
r,,BetrArt,0xF056,,,,"B20356",,s,_8_Skip,,, ,,s,_BetrArt,,,
w,,BetrArt,0xF056,,,,"B20356",,m,_8_Skip,,, ,,m,_BetrArt,,,
r,,NDTMaxWT,0xF057,,,,"B30357",,s,_8_Skip,,, ,,s,_NDTMaxWT,,,
w,,NDTMaxWT,0xF057,,,,"B30357",,m,_8_Skip,,, ,,m,_NDTMaxWT,,,
r,,dT_Abtastzeit,0xF058,,,,"BC0358",,s,_8_Skip,,, ,,s,_dT_Abtastzeit,,,
w,,dT_Abtastzeit,0xF058,,,,"BC0358",,m,_8_Skip,,, ,,m,_dT_Abtastzeit,,,
r,,prevTVist,0xF059,,,,"BD0359",,s,_8_Skip,,, ,,s,_prevTVist,,,
w,,prevTVist,0xF059,,,,"BD0359",,m,_8_Skip,,, ,,m,_prevTVist,,,
r,,DL_HYS_TH_ON_,0xF05A,,,,"BE035A",,s,_8_Skip,,, ,,s,_DL_HYS_TH_ON_,,,
w,,DL_HYS_TH_ON_,0xF05A,,,,"BE035A",,m,_8_Skip,,, ,,m,_DL_HYS_TH_ON_,,,
r,,PNL_WWcnt,0xF05B,,,,"BF035B",,s,_8_Skip,,, ,,s,_PNL_WWcnt,,,
w,,PNL_WWcnt,0xF05B,,,,"BF035B",,m,_8_Skip,,, ,,m,_PNL_WWcnt,,,
r,,yDT1,0xF05D,,,,"B9035D",,s,_8_Skip,,, ,,s,_yDT1,,,
w,,yDT1,0xF05D,,,,"B9035D",,m,_8_Skip,,, ,,m,_yDT1,,,
r,,TVsoll_WUT,0xF05F,,,,"BB035F",,s,_8_Skip,,, ,,s,_TVsoll_WUT,,,
w,,TVsoll_WUT,0xF05F,,,,"BB035F",,m,_8_Skip,,, ,,m,_TVsoll_WUT,,,
r,,TRList_start_FL,0xF060,,,,"840360",,s,_8_Skip,,, ,,s,_TRList_start_FL,,,
w,,TRList_start_FL,0xF060,,,,"840360",,m,_8_Skip,,, ,,m,_TRList_start_FL,,,
r,,CNTDTMaxWT,0xF061,,,,"850361",,s,_8_Skip,,, ,,s,_CNTDTMaxWT,,,
w,,CNTDTMaxWT,0xF061,,,,"850361",,m,_8_Skip,,, ,,m,_CNTDTMaxWT,,,
r,,secFCodeW,0xF062,,,,"860362",,s,_8_Skip,,, ,,s,_secFCodeW,,,
w,,secFCodeW,0xF062,,,,"860362",,m,_8_Skip,,, ,,m,_secFCodeW,,,
r,,AbgSS_cnt,0xF063,,,,"870363",,s,_8_Skip,,, ,,s,_AbgSS_cnt,,,
w,,AbgSS_cnt,0xF063,,,,"870363",,m,_8_Skip,,, ,,m,_AbgSS_cnt,,,
r,,dtWWist,0xF064,,,,"800364",,s,_8_Skip,,, ,,s,_dtWWist,,,
w,,dtWWist,0xF064,,,,"800364",,m,_8_Skip,,, ,,m,_dtWWist,,,
r,,cntLDW_Versuche,0xF065,,,,"810365",,s,_8_Skip,,, ,,s,_cntLDW_Versuche,,,
w,,cntLDW_Versuche,0xF065,,,,"810365",,m,_8_Skip,,, ,,m,_cntLDW_Versuche,,,
r,,DL_XW_NGMIN_,0xF066,,,,"820366",,s,_8_Skip,,, ,,s,_DL_XW_NGMIN_,,,
w,,DL_XW_NGMIN_,0xF066,,,,"820366",,m,_8_Skip,,, ,,m,_DL_XW_NGMIN_,,,
r,,scHilf,0xF067,,,,"830367",,s,_8_Skip,,, ,,s,_scHilf,,,
w,,scHilf,0xF067,,,,"830367",,m,_8_Skip,,, ,,m,_scHilf,,,
r,,cntGDWtime,0xF068,,,,"8C0368",,s,_8_Skip,,, ,,s,_cntGDWtime,,,
w,,cntGDWtime,0xF068,,,,"8C0368",,m,_8_Skip,,, ,,m,_cntGDWtime,,,
r,,DL_XW_NGMAX_,0xF069,,,,"8D0369",,s,_8_Skip,,, ,,s,_DL_XW_NGMAX_,,,
w,,DL_XW_NGMAX_,0xF069,,,,"8D0369",,m,_8_Skip,,, ,,m,_DL_XW_NGMAX_,,,
r,,ucHilf,0xF06A,,,,"8E036A",,s,_8_Skip,,, ,,s,_ucHilf,,,
w,,ucHilf,0xF06A,,,,"8E036A",,m,_8_Skip,,, ,,m,_ucHilf,,,
r,,PuPWM_tempoffset,0xF06B,,,,"8F036B",,s,_8_Skip,,, ,,s,_PuPWM_tempoffset,,,
w,,PuPWM_tempoffset,0xF06B,,,,"8F036B",,m,_8_Skip,,, ,,m,_PuPWM_tempoffset,,,
r,,DTVIST,0xF06C,,,,"88036C",,s,_8_Skip,,, ,,s,_DTVIST,,,
w,,DTVIST,0xF06C,,,,"88036C",,m,_8_Skip,,, ,,m,_DTVIST,,,
r,,CNTGradTVist,0xF06D,,,,"89036D",,s,_8_Skip,,, ,,s,_CNTGradTVist,,,
w,,CNTGradTVist,0xF06D,,,,"89036D",,m,_8_Skip,,, ,,m,_CNTGradTVist,,,
r,,cntSoft,0xF06E,,,,"8A036E",,s,_8_Skip,,, ,,s,_cntSoft,,,
w,,cntSoft,0xF06E,,,,"8A036E",,m,_8_Skip,,, ,,m,_cntSoft,,,
r,,CntAusg1,0xF06F,,,,"8B036F",,s,_8_Skip,,, ,,s,_CntAusg1,,,
w,,CntAusg1,0xF06F,,,,"8B036F",,m,_8_Skip,,, ,,m,_CntAusg1,,,
r,,DL_Comf_Soll,0xF070,,,,"940370",,s,_8_Skip,,, ,,s,_DL_Comf_Soll,,,
w,,DL_Comf_Soll,0xF070,,,,"940370",,m,_8_Skip,,, ,,m,_DL_Comf_Soll,,,
r,,Min_nGsoll,0xF071,,,,"950371",,s,_8_Skip,,, ,,s,_Min_nGsoll,,,
w,,Min_nGsoll,0xF071,,,,"950371",,m,_8_Skip,,, ,,m,_Min_nGsoll,,,
r,,TWWISTAD,0xF072,,,,"960372",,s,_8_Skip,,, ,,s,_TWWISTAD,,,
w,,TWWISTAD,0xF072,,,,"960372",,m,_8_Skip,,, ,,m,_TWWISTAD,,,
r,,TAUSSAD,0xF073,,,,"970373",,s,_8_Skip,,, ,,s,_TAUSSAD,,,
w,,TAUSSAD,0xF073,,,,"970373",,m,_8_Skip,,, ,,m,_TAUSSAD,,,
r,,TRLISTAD,0xF074,,,,"900374",,s,_8_Skip,,, ,,s,_TRLISTAD,,,
w,,TRLISTAD,0xF074,,,,"900374",,m,_8_Skip,,, ,,m,_TRLISTAD,,,
r,,AIN_WPAD,0xF075,,,,"910375",,s,_8_Skip,,, ,,s,_AIN_WPAD,,,
w,,AIN_WPAD,0xF075,,,,"910375",,m,_8_Skip,,, ,,m,_AIN_WPAD,,,
r,,AIN_0_10VAD,0xF076,,,,"920376",,s,_8_Skip,,, ,,s,_AIN_0_10VAD,,,
w,,AIN_0_10VAD,0xF076,,,,"920376",,m,_8_Skip,,, ,,m,_AIN_0_10VAD,,,
r,,AIN_0_10V,0xF077,,,,"930377",,s,_8_Skip,,, ,,s,_AIN_0_10V,,,
w,,AIN_0_10V,0xF077,,,,"930377",,m,_8_Skip,,, ,,m,_AIN_0_10V,,,
r,,AIN_STB,0xF078,,,,"9C0378",,s,_8_Skip,,, ,,s,_AIN_STB,,,
w,,AIN_STB,0xF078,,,,"9C0378",,m,_8_Skip,,, ,,m,_AIN_STB,,,
r,,AIN_STBA,0xF079,,,,"9D0379",,s,_8_Skip,,, ,,s,_AIN_STBA,,,
w,,AIN_STBA,0xF079,,,,"9D0379",,m,_8_Skip,,, ,,m,_AIN_STBA,,,
r,,AIN_ANAIN6AD,0xF07A,,,,"9E037A",,s,_8_Skip,,, ,,s,_AIN_ANAIN6AD,,,
w,,AIN_ANAIN6AD,0xF07A,,,,"9E037A",,m,_8_Skip,,, ,,m,_AIN_ANAIN6AD,,,
r,,AIN_ANAIN7AD,0xF07B,,,,"9F037B",,s,_8_Skip,,, ,,s,_AIN_ANAIN7AD,,,
w,,AIN_ANAIN7AD,0xF07B,,,,"9F037B",,m,_8_Skip,,, ,,m,_AIN_ANAIN7AD,,,
r,,TWEICHEIST,0xF07C,,,,"98037C",,s,_8_Skip,,, ,,s,_TWEICHEIST,,,
w,,TWEICHEIST,0xF07C,,,,"98037C",,m,_8_Skip,,, ,,m,_TWEICHEIST,,,
r,,TWEICHEAD,0xF07D,,,,"99037D",,s,_8_Skip,,, ,,s,_TWEICHEAD,,,
w,,TWEICHEAD,0xF07D,,,,"99037D",,m,_8_Skip,,, ,,m,_TWEICHEAD,,,
r,,TABGAD,0xF07E,,,,"9A037E",,s,_8_Skip,,, ,,s,_TABGAD,,,
w,,TABGAD,0xF07E,,,,"9A037E",,m,_8_Skip,,, ,,m,_TABGAD,,,
r,,ICL20SEC_BON,0xF07F,,,,"9B037F",,s,_8_Skip,,, ,,s,_ICL20SEC_BON,,,
w,,ICL20SEC_BON,0xF07F,,,,"9B037F",,m,_8_Skip,,, ,,m,_ICL20SEC_BON,,,
r,,ALARM_TIMER,0xF080,,,,"640380",,s,_8_Skip,,, ,,s,_ALARM_TIMER,,,
w,,ALARM_TIMER,0xF080,,,,"640380",,m,_8_Skip,,, ,,m,_ALARM_TIMER,,,
r,,CNT_REF_OK,0xF081,,,,"650381",,s,_8_Skip,,, ,,s,_CNT_REF_OK,,,
w,,CNT_REF_OK,0xF081,,,,"650381",,m,_8_Skip,,, ,,m,_CNT_REF_OK,,,
r,,CNT_KASK_REL,0xF082,,,,"660382",,s,_8_Skip,,, ,,s,_CNT_KASK_REL,,,
w,,CNT_KASK_REL,0xF082,,,,"660382",,m,_8_Skip,,, ,,m,_CNT_KASK_REL,,,
r,,VAR_VERBRAUCHER,0xF083,,,,"670383",,s,_8_Skip,,, ,,s,_VAR_VERBRAUCHER,,,
w,,VAR_VERBRAUCHER,0xF083,,,,"670383",,m,_8_Skip,,, ,,m,_VAR_VERBRAUCHER,,,
r,,FE_CNT,0xF084,,,,"600384",,s,_8_Skip,,, ,,s,_FE_CNT,,,
w,,FE_CNT,0xF084,,,,"600384",,m,_8_Skip,,, ,,m,_FE_CNT,,,
r,,CNT_DECGAP,0xF085,,,,"610385",,s,_8_Skip,,, ,,s,_CNT_DECGAP,,,
w,,CNT_DECGAP,0xF085,,,,"610385",,m,_8_Skip,,, ,,m,_CNT_DECGAP,,,
r,,ISECFEPRESSED,0xF086,,,,"620386",,s,_8_Skip,,, ,,s,_ISECFEPRESSED,,,
w,,ISECFEPRESSED,0xF086,,,,"620386",,m,_8_Skip,,, ,,m,_ISECFEPRESSED,,,
r,,ABREGELTEMP,0xF087,,,,"630387",,s,_8_Skip,,, ,,s,_ABREGELTEMP,,,
w,,ABREGELTEMP,0xF087,,,,"630387",,m,_8_Skip,,, ,,m,_ABREGELTEMP,,,
r,,INIT_ORDER_BYTE,0xF088,,,,"6C0388",,s,_8_Skip,,, ,,s,_INIT_ORDER_BYTE,,,
w,,INIT_ORDER_BYTE,0xF088,,,,"6C0388",,m,_8_Skip,,, ,,m,_INIT_ORDER_BYTE,,,
r,,CNT_MB_2_TO_EEPROM,0xF08A,,,,"6E038A",,s,_8_Skip,,, ,,s,_CNT_MB_2_TO_EEPROM,,,
w,,CNT_MB_2_TO_EEPROM,0xF08A,,,,"6E038A",,m,_8_Skip,,, ,,m,_CNT_MB_2_TO_EEPROM,,,
r,,YTVREG,0xF08B,,,,"6F038B",,s,_8_Skip,,, ,,s,_YTVREG,,,
w,,YTVREG,0xF08B,,,,"6F038B",,m,_8_Skip,,, ,,m,_YTVREG,,,
r,,FDE_XRAM,0xF08D,,,,"69038D",,s,_8_Skip,,, ,,s,_FDE_XRAM,,,
w,,FDE_XRAM,0xF08D,,,,"69038D",,m,_8_Skip,,, ,,m,_FDE_XRAM,,,
r,,AIN_ERR_MASK,0xF095,,,,"710395",,s,_8_Skip,,, ,,s,_AIN_ERR_MASK,,,
w,,AIN_ERR_MASK,0xF095,,,,"710395",,m,_8_Skip,,, ,,m,_AIN_ERR_MASK,,,
r,,SIPHON_OSZ_CNT,0xF096,,,,"720396",,s,_8_Skip,,, ,,s,_SIPHON_OSZ_CNT,,,
w,,SIPHON_OSZ_CNT,0xF096,,,,"720396",,m,_8_Skip,,, ,,m,_SIPHON_OSZ_CNT,,,
r,,CNT_NTC_TOL,0xF097,,,,"730397",,s,_8_Skip,,, ,,s,_CNT_NTC_TOL,,,
w,,CNT_NTC_TOL,0xF097,,,,"730397",,m,_8_Skip,,, ,,m,_CNT_NTC_TOL,,,
r,,CNT_NTC_ERR,0xF098,,,,"7C0398",,s,_8_Skip,,, ,,s,_CNT_NTC_ERR,,,
w,,CNT_NTC_ERR,0xF098,,,,"7C0398",,m,_8_Skip,,, ,,m,_CNT_NTC_ERR,,,
r,,NTC1_TEMP,0xF099,,,,"7D0399",,s,_8_Skip,,, ,,s,_NTC1_TEMP,,,
w,,NTC1_TEMP,0xF099,,,,"7D0399",,m,_8_Skip,,, ,,m,_NTC1_TEMP,,,
r,,NTC2_TEMP,0xF09A,,,,"7E039A",,s,_8_Skip,,, ,,s,_NTC2_TEMP,,,
w,,NTC2_TEMP,0xF09A,,,,"7E039A",,m,_8_Skip,,, ,,m,_NTC2_TEMP,,,
r,,NTC1_AD,0xF09B,,,,"7F039B",,s,_8_Skip,,, ,,s,_NTC1_AD,,,
w,,NTC1_AD,0xF09B,,,,"7F039B",,m,_8_Skip,,, ,,m,_NTC1_AD,,,
r,,NTC2_AD,0xF09C,,,,"78039C",,s,_8_Skip,,, ,,s,_NTC2_AD,,,
w,,NTC2_AD,0xF09C,,,,"78039C",,m,_8_Skip,,, ,,m,_NTC2_AD,,,
r,,CNT_W89,0xF09D,,,,"79039D",,s,_8_Skip,,, ,,s,_CNT_W89,,,
w,,CNT_W89,0xF09D,,,,"79039D",,m,_8_Skip,,, ,,m,_CNT_W89,,,
r,,HZZUSTBM_2,0xF09F,,,,"7B039F",,s,_8_Skip,,, ,,s,_HZZUSTBM_2,,,
w,,HZZUSTBM_2,0xF09F,,,,"7B039F",,m,_8_Skip,,, ,,m,_HZZUSTBM_2,,,
r,,EPIONNULL_INV,0xF0A0,,,,"4403A0",,s,_8_Skip,,, ,,s,_EPIONNULL_INV,,,
w,,EPIONNULL_INV,0xF0A0,,,,"4403A0",,m,_8_Skip,,, ,,m,_EPIONNULL_INV,,,
r,,MIN_BR_OFF_VL_ESTB_RL,0xF0A1,,,,"4503A1",,s,_8_Skip,,, ,,s,_MIN_BR_OFF_VL_ESTB_RL,,,
w,,MIN_BR_OFF_VL_ESTB_RL,0xF0A1,,,,"4503A1",,m,_8_Skip,,, ,,m,_MIN_BR_OFF_VL_ESTB_RL,,,
r,,TWEICHEIST_INTERN,0xF0A2,,,,"4603A2",,s,_8_Skip,,, ,,s,_TWEICHEIST_INTERN,,,
w,,TWEICHEIST_INTERN,0xF0A2,,,,"4603A2",,m,_8_Skip,,, ,,m,_TWEICHEIST_INTERN,,,
r,,TWEICHEIST_EXTERN,0xF0A3,,,,"4703A3",,s,_8_Skip,,, ,,s,_TWEICHEIST_EXTERN,,,
w,,TWEICHEIST_EXTERN,0xF0A3,,,,"4703A3",,m,_8_Skip,,, ,,m,_TWEICHEIST_EXTERN,,,
r,,CNT_1_5MIN_RETRY_KLAPPE,0xF0A4,,,,"4003A4",,s,_8_Skip,,, ,,s,_CNT_1_5MIN_RETRY_KLAPPE,,,
w,,CNT_1_5MIN_RETRY_KLAPPE,0xF0A4,,,,"4003A4",,m,_8_Skip,,, ,,m,_CNT_1_5MIN_RETRY_KLAPPE,,,
r,,SERVICEBETR_VIA_CUI_U8,0xF0A5,,,,"4103A5",,s,_8_Skip,,, ,,s,_SERVICEBETR_VIA_CUI_U8,,,
w,,SERVICEBETR_VIA_CUI_U8,0xF0A5,,,,"4103A5",,m,_8_Skip,,, ,,m,_SERVICEBETR_VIA_CUI_U8,,,
r,,DEBUG_VAR_1,0xF0A6,,,,"4203A6",,s,_8_Skip,,, ,,s,_DEBUG_VAR_1,,,
w,,DEBUG_VAR_1,0xF0A6,,,,"4203A6",,m,_8_Skip,,, ,,m,_DEBUG_VAR_1,,,
r,,DEBUG_VAR_2,0xF0A7,,,,"4303A7",,s,_8_Skip,,, ,,s,_DEBUG_VAR_2,,,
w,,DEBUG_VAR_2,0xF0A7,,,,"4303A7",,m,_8_Skip,,, ,,m,_DEBUG_VAR_2,,,
r,,TWWIST_2,0xF0A8,,,,"4C03A8",,s,_8_Skip,,, ,,s,_TWWIST_2,,,
w,,TWWIST_2,0xF0A8,,,,"4C03A8",,m,_8_Skip,,, ,,m,_TWWIST_2,,,
r,,TRLIST_2,0xF0A9,,,,"4D03A9",,s,_8_Skip,,, ,,s,_TRLIST_2,,,
w,,TRLIST_2,0xF0A9,,,,"4D03A9",,m,_8_Skip,,, ,,m,_TRLIST_2,,,
r,,TVIST_2,0xF0AA,,,,"4E03AA",,s,_8_Skip,,, ,,s,_TVIST_2,,,
w,,TVIST_2,0xF0AA,,,,"4E03AA",,m,_8_Skip,,, ,,m,_TVIST_2,,,
r,,TWW_DLPLUS,0xF0AB,,,,"4F03AB",,s,_8_Skip,,, ,,s,_TWW_DLPLUS,,,
w,,TWW_DLPLUS,0xF0AB,,,,"4F03AB",,m,_8_Skip,,, ,,m,_TWW_DLPLUS,,,
r,,WW_DURCHFL,0xF0AC,,,,"4803AC",,s,_8_Skip,,, ,,s,_WW_DURCHFL,,,
w,,WW_DURCHFL,0xF0AC,,,,"4803AC",,m,_8_Skip,,, ,,m,_WW_DURCHFL,,,
r,,DL_Y_VORST,0xF0AD,,,,"4903AD",,s,_8_Skip,,, ,,s,_DL_Y_VORST,,,
w,,DL_Y_VORST,0xF0AD,,,,"4903AD",,m,_8_Skip,,, ,,m,_DL_Y_VORST,,,
r,,TA_FILTER,0xF0AF,,,,"4B03AF",,s,_8_Skip,,, ,,s,_TA_FILTER,,,
w,,TA_FILTER,0xF0AF,,,,"4B03AF",,m,_8_Skip,,, ,,m,_TA_FILTER,,,
r,,TA_MITTEL,0xF0B1,,,,"5503B1",,s,_8_Skip,,, ,,s,_TA_MITTEL,,,
w,,TA_MITTEL,0xF0B1,,,,"5503B1",,m,_8_Skip,,, ,,m,_TA_MITTEL,,,
r,,MODULATIONSGRAD,0xF0B2,,,,"5603B2",,s,_8_Skip,,, ,,s,_MODULATIONSGRAD,,,
w,,MODULATIONSGRAD,0xF0B2,,,,"5603B2",,m,_8_Skip,,, ,,m,_MODULATIONSGRAD,,,
r,,SECBROFF,0xF0B3,,,,"5703B3",,s,_8_Skip,,, ,,s,_SECBROFF,,,
w,,SECBROFF,0xF0B3,,,,"5703B3",,m,_8_Skip,,, ,,m,_SECBROFF,,,
r,,CNTF_CODE_1X,0xF0B5,,,,"5103B5",,s,_8_Skip,,, ,,s,_CNTF_CODE_1X,,,
w,,CNTF_CODE_1X,0xF0B5,,,,"5103B5",,m,_8_Skip,,, ,,m,_CNTF_CODE_1X,,,
r,,CNTF_CODE_2X,0xF0B6,,,,"5203B6",,s,_8_Skip,,, ,,s,_CNTF_CODE_2X,,,
w,,CNTF_CODE_2X,0xF0B6,,,,"5203B6",,m,_8_Skip,,, ,,m,_CNTF_CODE_2X,,,
r,,CNTF_CODE_6X,0xF0B7,,,,"5303B7",,s,_8_Skip,,, ,,s,_CNTF_CODE_6X,,,
w,,CNTF_CODE_6X,0xF0B7,,,,"5303B7",,m,_8_Skip,,, ,,m,_CNTF_CODE_6X,,,
r,,EM_EE_REDUND,0xF0B8,,,,"5C03B8",,s,_8_Skip,,, ,,s,_EM_EE_REDUND,,,
w,,EM_EE_REDUND,0xF0B8,,,,"5C03B8",,m,_8_Skip,,, ,,m,_EM_EE_REDUND,,,
r,,EE_RANGE_FAIL,0xF0B9,,,,"5D03B9",,s,_8_Skip,,, ,,s,_EE_RANGE_FAIL,,,
w,,EE_RANGE_FAIL,0xF0B9,,,,"5D03B9",,m,_8_Skip,,, ,,m,_EE_RANGE_FAIL,,,
r,,WR_KESS_P_HILF,0xF0BA,,,,"5E03BA",,s,_8_Skip,,, ,,s,_WR_KESS_P_HILF,,,
w,,WR_KESS_P_HILF,0xF0BA,,,,"5E03BA",,m,_8_Skip,,, ,,m,_WR_KESS_P_HILF,,,
r,,WR_KESS_P_HILF2,0xF0BB,,,,"5F03BB",,s,_8_Skip,,, ,,s,_WR_KESS_P_HILF2,,,
w,,WR_KESS_P_HILF2,0xF0BB,,,,"5F03BB",,m,_8_Skip,,, ,,m,_WR_KESS_P_HILF2,,,
r,,ANF_WR_KESS_P,0xF0BC,,,,"5803BC",,s,_8_Skip,,, ,,s,_ANF_WR_KESS_P,,,
w,,ANF_WR_KESS_P,0xF0BC,,,,"5803BC",,m,_8_Skip,,, ,,m,_ANF_WR_KESS_P,,,
r,,CNT_15MIN_TKKB,0xF0BD,,,,"5903BD",,s,_8_Skip,,, ,,s,_CNT_15MIN_TKKB,,,
w,,CNT_15MIN_TKKB,0xF0BD,,,,"5903BD",,m,_8_Skip,,, ,,m,_CNT_15MIN_TKKB,,,
r,,P_CODE,0xF0BE,,,,"5A03BE",,s,_8_Skip,,, ,,s,_P_CODE,,,
w,,P_CODE,0xF0BE,,,,"5A03BE",,m,_8_Skip,,, ,,m,_P_CODE,,,
r,,MKESSSTATUSBM,0xF0BF,,,,"5B03BF",,s,_8_Skip,,, ,,s,_MKESSSTATUSBM,,,
w,,MKESSSTATUSBM,0xF0BF,,,,"5B03BF",,m,_8_Skip,,, ,,m,_MKESSSTATUSBM,,,
r,,TVSOLL_HS,0xF0C0,,,,"2403C0",,s,_8_Skip,,, ,,s,_TVSOLL_HS,,,
w,,TVSOLL_HS,0xF0C0,,,,"2403C0",,m,_8_Skip,,, ,,m,_TVSOLL_HS,,,
r,,EE_ERR_STATUS,0xF0C1,,,,"2503C1",,s,_8_Skip,,, ,,s,_EE_ERR_STATUS,,,
w,,EE_ERR_STATUS,0xF0C1,,,,"2503C1",,m,_8_Skip,,, ,,m,_EE_ERR_STATUS,,,
r,,NM_TX_ADR,0xF0C2,,,,"2603C2",,s,_8_Skip,,, ,,s,_NM_TX_ADR,,,
w,,NM_TX_ADR,0xF0C2,,,,"2603C2",,m,_8_Skip,,, ,,m,_NM_TX_ADR,,,
r,,RX_TX_ZUSTAND,0xF0C3,,,,"2703C3",,s,_8_Skip,,, ,,s,_RX_TX_ZUSTAND,,,
w,,RX_TX_ZUSTAND,0xF0C3,,,,"2703C3",,m,_8_Skip,,, ,,m,_RX_TX_ZUSTAND,,,
r,,TX_ANF_05,0xF0C4,,,,"2003C4",,s,_8_Skip,,, ,,s,_TX_ANF_05,,,
w,,TX_ANF_05,0xF0C4,,,,"2003C4",,m,_8_Skip,,, ,,m,_TX_ANF_05,,,
r,,TX_ANF_50,0xF0C5,,,,"2103C5",,s,_8_Skip,,, ,,s,_TX_ANF_50,,,
w,,TX_ANF_50,0xF0C5,,,,"2103C5",,m,_8_Skip,,, ,,m,_TX_ANF_50,,,
r,,TX_ANF_FE,0xF0C6,,,,"2203C6",,s,_8_Skip,,, ,,s,_TX_ANF_FE,,,
w,,TX_ANF_FE,0xF0C6,,,,"2203C6",,m,_8_Skip,,, ,,m,_TX_ANF_FE,,,
# r,,TX_ANF_FF,0xF0C6,,,,"2203C6",,s,_8_Skip,,, ,,s,_TX_ANF_FF,,,                            # Alias of TX_ANF_FE
# w,,TX_ANF_FF,0xF0C6,,,,"2203C6",,m,_8_Skip,,, ,,m,_TX_ANF_FF,,,                            # Alias of TX_ANF_FE
r,,TX_ANF_07,0xF0C7,,,,"2303C7",,s,_8_Skip,,, ,,s,_TX_ANF_07,,,
w,,TX_ANF_07,0xF0C7,,,,"2303C7",,m,_8_Skip,,, ,,m,_TX_ANF_07,,,
r,,M_5023_CRC,0xF0C8,,,,"2C03C8",,s,_8_Skip,,, ,,s,_M_5023_CRC,,,
w,,M_5023_CRC,0xF0C8,,,,"2C03C8",,m,_8_Skip,,, ,,m,_M_5023_CRC,,,
r,,TX_ANF_08,0xF0C9,,,,"2D03C9",,s,_8_Skip,,, ,,s,_TX_ANF_08,,,
w,,TX_ANF_08,0xF0C9,,,,"2D03C9",,m,_8_Skip,,, ,,m,_TX_ANF_08,,,
r,,TCYCL_MAX,0xF0CA,,,,"2E03CA",,s,_8_Skip,,, ,,s,_TCYCL_MAX,,,
w,,TCYCL_MAX,0xF0CA,,,,"2E03CA",,m,_8_Skip,,, ,,m,_TCYCL_MAX,,,
r,,TCYCL_QQ_M2,0xF0CB,,,,"2F03CB",,s,_8_Skip,,, ,,s,_TCYCL_QQ_M2,,,
w,,TCYCL_QQ_M2,0xF0CB,,,,"2F03CB",,m,_8_Skip,,, ,,m,_TCYCL_QQ_M2,,,
r,,TCYCL_QQ_M10,0xF0CC,,,,"2803CC",,s,_8_Skip,,, ,,s,_TCYCL_QQ_M10,,,
w,,TCYCL_QQ_M10,0xF0CC,,,,"2803CC",,m,_8_Skip,,, ,,m,_TCYCL_QQ_M10,,,
r,,TCYCL_EIG_QQ,0xF0CD,,,,"2903CD",,s,_8_Skip,,, ,,s,_TCYCL_EIG_QQ,,,
w,,TCYCL_EIG_QQ,0xF0CD,,,,"2903CD",,m,_8_Skip,,, ,,m,_TCYCL_EIG_QQ,,,
r,,TCYCL_TALK_EBUS,0xF0CE,,,,"2A03CE",,s,_8_Skip,,, ,,s,_TCYCL_TALK_EBUS,,,
w,,TCYCL_TALK_EBUS,0xF0CE,,,,"2A03CE",,m,_8_Skip,,, ,,m,_TCYCL_TALK_EBUS,,,
r,,NM_SOLL_KONF_M2,0xF0CF,,,,"2B03CF",,s,_8_Skip,,, ,,s,_NM_SOLL_KONF_M2,,,
w,,NM_SOLL_KONF_M2,0xF0CF,,,,"2B03CF",,m,_8_Skip,,, ,,m,_NM_SOLL_KONF_M2,,,
r,,NM_SOLL_KONF_M10,0xF0D0,,,,"3403D0",,s,_8_Skip,,, ,,s,_NM_SOLL_KONF_M10,,,
w,,NM_SOLL_KONF_M10,0xF0D0,,,,"3403D0",,m,_8_Skip,,, ,,m,_NM_SOLL_KONF_M10,,,
r,,z_count,0xF0D1,,,,"3503D1",,s,_8_Skip,,, ,,s,_z_count,,,
w,,z_count,0xF0D1,,,,"3503D1",,m,_8_Skip,,, ,,m,_z_count,,,
r,,delta,0xF0D2,,,,"3603D2",,s,_8_Skip,,, ,,s,_delta,,,
w,,delta,0xF0D2,,,,"3603D2",,m,_8_Skip,,, ,,m,_delta,,,
r,,Z_IonOndmueA,0xF0D4,,,,"3003D4",,s,_8_Skip,,, ,,s,_Z_IonOndmueA,,,
w,,Z_IonOndmueA,0xF0D4,,,,"3003D4",,m,_8_Skip,,, ,,m,_Z_IonOndmueA,,,
r,,Z_IondmueA,0xF0D5,,,,"3103D5",,s,_8_Skip,,, ,,s,_Z_IondmueA,,,
w,,Z_IondmueA,0xF0D5,,,,"3103D5",,m,_8_Skip,,, ,,m,_Z_IondmueA,,,
r,,Z_IonOffdmueA,0xF0D6,,,,"3203D6",,s,_8_Skip,,, ,,s,_Z_IonOffdmueA,,,
w,,Z_IonOffdmueA,0xF0D6,,,,"3203D6",,m,_8_Skip,,, ,,m,_Z_IonOffdmueA,,,
r,,z_last_signal,0xF0D7,,,,"3303D7",,s,_8_Skip,,, ,,s,_z_last_signal,,,
w,,z_last_signal,0xF0D7,,,,"3303D7",,m,_8_Skip,,, ,,m,_z_last_signal,,,
r,,ANAIN4AD,0xF0D8,,,,"3C03D8",,s,_8_Skip,,, ,,s,_ANAIN4AD,,,
w,,ANAIN4AD,0xF0D8,,,,"3C03D8",,m,_8_Skip,,, ,,m,_ANAIN4AD,,,
r,,AIN_REF,0xF0D9,,,,"3D03D9",,s,_8_Skip,,, ,,s,_AIN_REF,,,
w,,AIN_REF,0xF0D9,,,,"3D03D9",,m,_8_Skip,,, ,,m,_AIN_REF,,,
r,,AIN_REF_U,0xF0DA,,,,"3E03DA",,s,_8_Skip,,, ,,s,_AIN_REF_U,,,
w,,AIN_REF_U,0xF0DA,,,,"3E03DA",,m,_8_Skip,,, ,,m,_AIN_REF_U,,,
r,,AIN_REF_I,0xF0DB,,,,"3F03DB",,s,_8_Skip,,, ,,s,_AIN_REF_I,,,
w,,AIN_REF_I,0xF0DB,,,,"3F03DB",,m,_8_Skip,,, ,,m,_AIN_REF_I,,,
r,,NGKORR,0xF0DC,,,,"3803DC",,s,_8_Skip,,, ,,s,_NGKORR,,,
w,,NGKORR,0xF0DC,,,,"3803DC",,m,_8_Skip,,, ,,m,_NGKORR,,,
r,,NG_REG_FAKT,0xF0DD,,,,"3903DD",,s,_8_Skip,,, ,,s,_NG_REG_FAKT,,,
w,,NG_REG_FAKT,0xF0DD,,,,"3903DD",,m,_8_Skip,,, ,,m,_NG_REG_FAKT,,,
r,,MODI_NGSOLL,0xF0DE,,,,"3A03DE",,s,_8_Skip,,, ,,s,_MODI_NGSOLL,,,
w,,MODI_NGSOLL,0xF0DE,,,,"3A03DE",,m,_8_Skip,,, ,,m,_MODI_NGSOLL,,,
r,,MERK_NG_RAMPE,0xF0DF,,,,"3B03DF",,s,_8_Skip,,, ,,s,_MERK_NG_RAMPE,,,
w,,MERK_NG_RAMPE,0xF0DF,,,,"3B03DF",,m,_8_Skip,,, ,,m,_MERK_NG_RAMPE,,,
r,,step_Klappe,0xF0E0,,,,"0403E0",,s,_8_Skip,,, ,,s,_step_Klappe,,,
w,,step_Klappe,0xF0E0,,,,"0403E0",,m,_8_Skip,,, ,,m,_step_Klappe,,,
r,,cnt_HZ_SW_Versuche,0xF0E1,,,,"0503E1",,s,_8_Skip,,, ,,s,_cnt_HZ_SW_Versuche,,,
w,,cnt_HZ_SW_Versuche,0xF0E1,,,,"0503E1",,m,_8_Skip,,, ,,m,_cnt_HZ_SW_Versuche,,,
r,,cnt_Klappe,0xF0E2,,,,"0603E2",,s,_8_Skip,,, ,,s,_cnt_Klappe,,,
w,,cnt_Klappe,0xF0E2,,,,"0603E2",,m,_8_Skip,,, ,,m,_cnt_Klappe,,,
r,,Anlagen_Druck_cnt,0xF0E3,,,,"0703E3",,s,_8_Skip,,, ,,s,_Anlagen_Druck_cnt,,,
w,,Anlagen_Druck_cnt,0xF0E3,,,,"0703E3",,m,_8_Skip,,, ,,m,_Anlagen_Druck_cnt,,,
r,,CNT_GDW_LDW,0xF0E4,,,,"0003E4",,s,_8_Skip,,, ,,s,_CNT_GDW_LDW,,,
w,,CNT_GDW_LDW,0xF0E4,,,,"0003E4",,m,_8_Skip,,, ,,m,_CNT_GDW_LDW,,,
r,,CNTGFASTART,0xF0E5,,,,"0103E5",,s,_8_Skip,,, ,,s,_CNTGFASTART,,,
w,,CNTGFASTART,0xF0E5,,,,"0103E5",,m,_8_Skip,,, ,,m,_CNTGFASTART,,,
r,,VARIANTE,0xF0E6,,,,"0203E6",,s,_8_Skip,,, ,,s,_VARIANTE,,,
w,,VARIANTE,0xF0E6,,,,"0203E6",,m,_8_Skip,,, ,,m,_VARIANTE,,,
r,,TCYCL_0503,0xF0E8,,,,"0C03E8",,s,_8_Skip,,, ,,s,_TCYCL_0503,,,
w,,TCYCL_0503,0xF0E8,,,,"0C03E8",,m,_8_Skip,,, ,,m,_TCYCL_0503,,,
r,,TCYCL_0800,0xF0E9,,,,"0D03E9",,s,_8_Skip,,, ,,s,_TCYCL_0800,,,
w,,TCYCL_0800,0xF0E9,,,,"0D03E9",,m,_8_Skip,,, ,,m,_TCYCL_0800,,,
