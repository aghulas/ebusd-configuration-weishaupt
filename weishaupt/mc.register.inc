# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller9,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#0B 00
r0,,UnknownSensor17, ,,,,"0B0002",UnknownSensor17,,UIN,,,

#0F 00
r1,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#0E 00
r0,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#28 00
r0,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
w,,SupplyMaxTemp, ,,,,"2800",SupplyMaxTemp,,_16_Temp10,,,

#2B 00
r9,,MixerParameterTemp,Mixer Parameter (425) ,,,,"2B0002",MixerParameterTemp,,_16_TempK10,,,
w,,MixerParameterTemp, ,,,,"2B00",,,_16_TempK10,,,

#0C 00
r0,,OutsideTemp,B1 Outside Sensor Temperature,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#10 01
r9,,SwitchOnRuntime,Switch-on delay (353) ,,,,"100102",SwitchOnRuntime,,_16_Minutes,,,
w,,SwitchOnRuntime, ,,,,"1001",,,_16_Minutes,,,

#11 01
r0,,BoilerMCBoostTemp,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoostTemp,,_16_TempK10,,,
w,,BoilerMCBoostTemp, ,,,,"1101",,,_16_TempK10,,,

#15 01
r0,,AdaptionMode,Adaption (507) ,,,,"150102",AdaptionMode,,_16_OnOff,,,
w,,AdaptionMode, ,,,,"1501",,,_16_OnOff,,,

#2B 01
r0,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
w,,SupplyMinTemp, ,,,,"2B01",SupplyMinTemp,,_16_Temp10,,,

#2D 01
r9,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r9,,WtcDelayRuntime,WTC delay(430) ,,,,"2E0102",WtcDelayRuntime,,_16_Minutes,,,
w,,WtcDelayRuntime, ,,,,"2E01",,,_16_Minutes,,,

#2F 01
r0,,PumpMaxSpeed,Max Pump speed (358) ,,,,"2F0102",PumpMaxSpeed,,_16_Percent,,,
w,,PumpMaxSpeed, ,,,,"2F01",,,_16_Percent,,

#30 01,
r0,,PumpMinSpeed,Min Pump speed (359) ,,,,"300102",PumpMinSpeed,,_16_Percent,,,
w,,PumpMinSpeed, ,,,,"3001",,,_16_Percent,,,

#31 01
r0,,PumpVSDvariable,VSD variable (429) ,,,,"310102",PumpVSDvariable,,_16_PumpVariationSpeed,,,
w,,PumpVSDvariable, ,,,,"3101",,,_16_PumpVariationSpeed,,,

#32 01
r9,,ReductTemp,ReductTemp (501) ,,,,"320102",ReductTemp,,_16_TempReduced,,,
w,,ReductTemp, ,,,,"3201",,,_16_TempReduced,,,

#41 01
r0,,FS_EM_W2_Sensor, ,,,,"410102",FS_EM_W2_Sensor,,UIN,,,
w,,FS_EM_W2_Sensor, ,,,,"4101",FS_EM_W2_Sensor,,UIN,,,

#8F 01
r9,,UnknownSensor15, ,,,,"8F0102",UnknownSensor15,,UIN,,,

#99 01
r0,,FS_EM_R1_sensor, ,,,,"990102",FS_EM_R1_Sensor,,UIN,,,

#A9 01
#r9,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
#r9,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,

#85 02
r0,,FS_EM_W4_Sensor, ,,,,"850202",FS_EM_W4_Sensor,,UIN,,,
w,,FS_EM_W4_Sensor, ,,,,"8502",FS_EM_W4_Sensor,,UIN,,,

#59 03
r0,,FS_EM_R2_Sensor, ,,,,"590302",FS_EM_R2_Sensor,,UIN,,,

#E9 04
r9,,UnknownSensor16, ,,,,"E90402",UnknownSensor16,,UIN,,,

#73 09
r0,,FS_EM_W3_Sensor, ,,,,"730902",FS_EM_W2_Sensor,,UIN,,,
w,,FS_EM_W3_Sensor, ,,,,"7309",FS_EM_W2_Sensor,,UIN,,,

#81 09
r0,,FS_EM_W5_Sensor, ,,,,"B10902",FS_EM_W5_Sensor,,UIN,,,
w,,FS_EM_W5_Sensor, ,,,,"B109",FS_EM_W5_Sensor,,UIN,,,

#0C 0A
r0,,OutsideBlendedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideBlendedTemp,,_16_Temp10,,,

#12 0A
r0,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r0,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#20 0A
r0,,FS_EM_W1_Sensor, ,,,,"200A02",FS_EM_W1_Sensor,,UIN,,,
w,,FS_EM_W1_Sensor, ,,,,"200A",FS_EM_W1_Sensor,,UIN,,,

#29 0A
r0,,FS_EM_R3_Sensor, ,,,,"290A02",FS_EM_R3_Sensor,,UIN,,,

#FB FD
r9,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,UIN,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,UIN,,,