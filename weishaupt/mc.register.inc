# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller9,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#0F 00
r,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#28 00
r,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
w,,SupplyMaxTemp, ,,,,"2800",SupplyMaxTemp,,_16_Temp10,,,

#2B 00
r9,,MixerParameterTemp,Mixer Parameter (425) ,,,,"2B0002",MixerParameterTemp,,_16_TempK10,,,
w,,MixerParameterTemp, ,,,,"2B00",,,_16_TempK10,,,

#0C 00
r,,OutsideTemp,B1 Outside Sensor Temperature,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#0E 00
r,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#10 01
r9,,SwitchOnRuntime,Switch-on delay (353) ,,,,"100102",SwitchOnRuntime,,_16_Minutes,,,
w,,SwitchOnRuntime, ,,,,"1001",,,_16_Minutes,,,

#15 01
r,,AdaptionMode,Adaption (507) ,,,,"150102",AdaptionMode,,_16_OnOff,,,
w,,AdaptionMode, ,,,,"1501",,,_16_OnOff,,,

#2B 01
r,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
w,,SupplyMinTemp, ,,,,"2B01",SupplyMinTemp,,_16_Temp10,,,

#2D 01
r9,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r9,,WtcDelayRuntime,WTC delay(430) ,,,,"2E0102",WtcDelayRuntime,,_16_Minutes,,,
w,,WtcDelayRuntime, ,,,,"2E01",,,_16_Minutes,,,

#2F 01
r,,PumpMaxSpeed,Max Pump speed (358) ,,,,"2F0102",PumpMaxSpeed,,_16_Percent,,,
w,,PumpMaxSpeed, ,,,,"2F01",,,_16_Percent,,

#30 01,
r,,PumpMinSpeed,Min Pump speed (359) ,,,,"300102",PumpMinSpeed,,_16_Percent,,,
w,,PumpMinSpeed, ,,,,"3001",,,_16_Percent,,,

#31 01
r,,PumpVSDvariable,VSD variable (429) ,,,,"310102",PumpVSDvariable,,_16_PumpVariationSpeed,,,
w,,PumpVSDvariable, ,,,,"3101",,,_16_PumpVariationSpeed,,,

#32 01
r9,,ReductTemp,ReductTemp (501) ,,,,"320102",ReductTemp,,_16_TempReduced,,,
w,,ReductTemp, ,,,,"3201",,,_16_TempReduced,,,

#41 01
r,,ControlVariationMode,Control Variation (318),,,,"410102",ControlVariationMode,,_16_CVariation,,,
w,,ControlVariationMode, ,,,,"4101",ControlVariationMode,,_16_CVariation,,,

#99 01
r,,Version, ,,,,"990102",Version,,UIN,,,

#A9 01
#r9,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
#r9,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,

#85 02
r,,FS_EM_W4_Sensor, ,,,,"850202",FS_EM_W4_Sensor,,UIN,,,
w,,FS_EM_W4_Sensor, ,,,,"8502",FS_EM_W4_Sensor,,UIN,,,

#59 03
r,,FS_EM_R2_Sensor, ,,,,"590302",FS_EM_R2_Sensor,,UIN,,,

#E9 04
r,,B3Sensor, ,,,,"E90402",B3Sensor,,_16_Temp10,,,

#73 09
r,,HCTypeMode,Heating Circuit Type (316) ,,,,"730902",HCTypeMode,,_16_HCType,,,
w,,HCTypeMode, ,,,,"7309",HCTypeMode,,_16_HCType,,,

#81 09
r,,FS_EM_W5_Sensor, ,,,,"B10902",FS_EM_W5_Sensor,,UIN,,,
w,,FS_EM_W5_Sensor, ,,,,"B109",FS_EM_W5_Sensor,,UIN,,,

#0C 0A
r,,OutsideWeightedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideWeightedTemp,,_16_Temp10,,,

#12 0A
r,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#20 0A
r,,FS_EM_W1_Sensor, ,,,,"200A02",FS_EM_W1_Sensor,,UIN,,,
w,,FS_EM_W1_Sensor, ,,,,"200A",FS_EM_W1_Sensor,,UIN,,,

#29 0A
r,,H1Status, ,,,,"290A02",H1Status,,_8_H1Status,,,

#FB FD
r9,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,_16_Temp1,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,_16_Temp1,,,