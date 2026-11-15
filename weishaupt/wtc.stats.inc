# type,circuit,name,comment,QQ,ZZ,PBSB,ID,class,name,type,divider,unit,str
# WTC ComfortSoft info values read with 5022 [WCRC] (ID = "00 reg bank"; ebusd computes the Weishaupt CRC).
# Source: catalog/wtc-info-5022.csv. Read only. Method proven live on 15/11/2026 (temps + i45).
#
# NOTE (WTC firmware 11.0e, 15/11/2026): the burner TOTALS — I42 Schaltspiele (reg 7d/7c bank 0c) and
# I43 Betriebsstunden (reg 7f/7e bank 0c) — return 0x8000 ("no value") on both boilers, burner OFF and RUNNING.
# They are not exposed at these addresses on this firmware; do NOT re-add them here without a firmware-specific map.
*r,,,,,,"5022",,,,,,,

r,,BurnerServiceHours,[WCRC] i45 LetzteWartung (service hours counter),,,,00bc02,Value,,UIN,-10,h,
