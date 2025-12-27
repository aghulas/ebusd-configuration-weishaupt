# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller9,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#0F 00
r1,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#0E 00
r9,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#28 00
r9,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
w,,SupplyMaxTemp, ,,,,"2800",SupplyMaxTemp,,_16_Temp10,,,

#2B 00
r9,,MixerParameter,Mixer Parameter (425) ,,,,"2B0002",MixerParameter,,_16_TempK10,,,
w,,MixerParameter, ,,,,"2B00",,,_16_TempK10,,,

#10 01
r9,,SwitchOnSetting,Switch-on delay (353) ,,,,"100102",SwitchOnSetting,,_16_Minutes,,,
w,,SwitchOnSetting, ,,,,"1001",,,_16_Minutes,,,

#11 01
r9,,BoilerMCBoost,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoost,,_16_TempK10,,,
w,,BoilerMCBoost, ,,,,"1101",,,_16_TempK10,,,

#15 01
r9,,Adaption,Adaption (507) ,,,,"150102",Adaption,,_16_OnOff,,,
w,,Adaption, ,,,,"1501",,,_16_OnOff,,,

#2B 01
r9,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
w,,SupplyMinTemp, ,,,,"2B01",SupplyMinTemp,,_16_Temp10,,,

#2D 01
r9,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r9,,WtcDelay,WTC delay(430) ,,,,"2E0102",WtcDelay,,_16_Minutes,,,
w,,WtcDelay, ,,,,"2E01",,,_16_Minutes,,,

#2F 01
r9,,PumpMaxSpeed,Max Pump speed (358) ,,,,"2F0102",PumpMaxSpeed,,_16_Percent,,,
w,,PumpMaxSpeed, ,,,,"2F01",,,_16_Percent,,

#30 01,
r9,,PumpMinSpeed,Min Pump speed (359) ,,,,"300102",PumpMinSpeed,,_16_Percent,,,
w,,PumpMinSpeed, ,,,,"3001",,,_16_Percent,,,

#31 01
r9,,PumpVSDvariable,VSD variable (429) ,,,,"310102",PumpVSDvariable,,_16_PumpVariationSpeed,,,
w,,PumpVSDvariable, ,,,,"3101",,,_16_PumpVariationSpeed,,,

#32 01
r9,,Reduct,Reduct (501) ,,,,"320102",Reduct,,_16_TempReduced,,,
w,,Reduct, ,,,,"3201",,,_16_TempReduced,,,

#41 01
r9,,FS_EM_W2, ,,,,"410102",FS_EM_W2,,_16_Temp10,,,
w,,FS_EM_W2, ,,,,"4101",FS_EM_W2,,_16_Temp10,,,

#8F 01
r9,,Unknown15, ,,,,"8F0102",Unknown15,,_16_Temp10,,,

#99 01
r9,,FS_EM_R1, ,,,,"990102",FS_EM_R1,,UIN,,,

#A9 01
#r9,,Unknown13, ,,,,"A90102",Unknown13,,_16_Temp10,,,

#AA 01
#r9,,Unknown14, ,,,,"AA0102",Unknown14,,_16_Temp10,,,

#85 02
r9,,FS_EM_W4, ,,,,"850202",FS_EM_W4,,_16_Temp10,,,
w,,FS_EM_W4, ,,,,"8502",FS_EM_W4,,_16_Temp10,,,

#59 03
r9,,FS_EM_R2, ,,,,"590302",FS_EM_R2,,_16_Temp10,,,

#E9 04
r9,,Unknown16, ,,,,"E90402",Unknown16,,_16_Temp10,,,

#73 09
r9,,FS_EM_W3, ,,,,"730902",FS_EM_W2,,_16_Temp10,,,
w,,FS_EM_W3, ,,,,"7309",FS_EM_W2,,_16_Temp10,,,

#81 09
r9,,FS_EM_W5, ,,,,"B10902",FS_EM_W5,,UIN,,,
w,,FS_EM_W5, ,,,,"B109",FS_EM_W5,,UIN,,,

#0C 0A
r9,,OutsideBlendedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideBlendedTemp,,_16_Temp10,,,

#12 0A
r9,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r9,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#20 0A
r9,,FS_EM_W1, ,,,,"200A02",FS_EM_W1,,_16_Temp10,,,
w,,FS_EM_W1, ,,,,"200A",FS_EM_W1,,_16_Temp10,,,

#29 0A
r,,FS_EM_R3, ,,,,"290A02",FS_EM_R3,,_16_Temp10,,,

#FB FD
r9,,Unknown8, ,,,,"FBFD02",Unknown8,,SIN,,,
w,,Unknown8, ,,,,"FBFD",Unknown8,,SIN,,,