# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#02 00
r1,,HeatDemandTemp,Heat demand HK ,,,,"020002",HeatDemandTemp,,_16_Temp10,,,

#04 00
r1,,SupplySetPointTemp,Supply SetPoint (121) ,,,,"040002",SupplySetPointTemp,,_16_Temp10,,,

#05 00
r9,,RoomNormalTemp,Normal Room Temperature (112) ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r9,,RoomSetbackTemp,Setback Room tRmperature (113) ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#0C 00
r5,,OutsideTemp,B1 Outside Sensor Temperature,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#0D 00
r1,,SupplyWTCTemp,Flow temperature WTC ,,,,"0D0002",SupplyWTCTemp,,_16_Temp10,,,

#0F 00
r1,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#11 00
r5,,RoomTemp,Room Sensor Temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r9,,RoomSetPointTemp,Room setpoint ,,,,"120002",RoomSetPointTemp,,_16_Temp10,,,

#28 00
r9,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
w,,SupplyMaxTemp, ,,,,"2800",SupplyMaxTemp,,_16_Temp10,,,

#2B 00
r9,,MixerParameterTemp,Mixer Parameter (425) ,,,,"2B0002",MixerParameterTemp,,_16_TempK10,,,
w,,MixerParameterTemp, ,,,,"2B00",,,_16_TempK10,,,

#01 01
r9,,DHWLegionellaDay,Legionella Protection Function (605) ,,,,"010102",DHWLegionellaDay,,_16_Legionelladay,,,
w,,DHWLegionellaDay, ,,,,"0101",,,_16_Legionelladay,,,

#0F 01
r9,,RoomFactorCurve,Room Factor-P (508) ,,,,"0F0102",RoomFactorCurve,,_16_RoomFactor,,,
w,,RoomFactorCurve, ,,,,"0F01",,,_16_RoomFactor,,,

#09 01
r9,,RoomSensorCorrectionTemp,Room Sensor Correction (101) ,,,,"090102",RoomSensorCorrectionTemp,,_16_TempK10,,,
w,,RoomSensorCorrectionTemp, ,,,,"0901",,,_16_TempK10,,,

#0E 01
r9,,GradientCurve,Steepness (175) ,,,,"0E0102",GradientCurve,,_16_Gradient10,,,
w,,GradientCurve, ,,,,"0E01",,,_16_Gradient10,,,

#10 01
r9,,SwitchOnRuntime,Switch-on delay (353) ,,,,"100102",SwitchOnRuntime,,_16_Minutes,,,
w,,SwitchOnRuntime, ,,,,"1001",,,_16_Minutes,,,

#11 01
r9,,BoilerMCBoostTemp,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoostTemp,,_16_TempK10,,,
w,,BoilerMCBoostTemp, ,,,,"1101",,,_16_TempK10,,,

#12 01
r9,,ProgramMode,Program selector switch position ,,,,"120102",ProgramMode,,_16_ProgramMode,,,
w,,ProgramMode, ,,,,"1201",,,_16_ProgramMode,,,

#15 01
r9,,AdaptionMode,Adaption (507) ,,,,"150102",AdaptionMode,,_16_OnOff,,,
w,,AdaptionMode, ,,,,"1501",,,_16_OnOff,,,

#16 01
r9,,SummerWinterChangeOverTemp,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
w,,SummerWinterChangeOverTemp, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r,,FloorDryingMode,Screed function (381) ,,,,"1A0102",FloorDryingMode,,_16_Floordrying,,,

#1B 01
r9,,HolidayRuntimeStart,Start of vacation (181) ,,,,"1B0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,HolidayRuntimeStart, ,,,,"1B01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r9,,HolidayRuntimeStart.Day,Start of vacation Day (181) ,,,,"1B0102",HolidayRuntimeStart.Day,,_16_HolidayDay,,,
#w,,HolidayRuntimeStart.Day, ,,,,"1B01",,,_16_HolidayDay,,,

#1C 01
r9,,HolidayRuntimeStart.Month,Start of vacation Month (181) ,,,,"1C0102",HolidayRuntimeStart.Month,,_16_HolidayMonth,,,
w,,HolidayRuntimeStart.Month, ,,,,"1C0102",,,_16_HolidayMonth,,,

#1E 01
r9,,HolidayRuntimeEnd, (182) ,,,,"1E0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,HolidayRuntimeEnd, ,,,,"1E01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r9,,HolidayRuntimeEnd.Day, Day (182) ,,,,"1E0102",HolidayRuntimeEnd.Day,,_16_HolidayDay,,,
#w,,HolidayRuntimeEnd.Day, ,,,,"1E01",,,_16_HolidayDay,,,

#1F 01
r9,,HolidayRuntimeEnd.Month, Month (182) ,,,,"1F0102",HolidayRuntimeEnd.Month,,_16_HolidayMonth,,,
w,,HolidayRuntimeEnd.Month, ,,,,"1F01",,,_16_HolidayMonth,,,

#28 01
r9,,TypeOfConstructionMode,Construction method (371) ,,,,"280102",TypeOfConstructionMode,,_16_Constructiontype,,,
w,,TypeOfConstructionMode, ,,,,"2801",,,_16_Constructiontype,,,

#2B 01
r9,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
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

#33 01
r9,,DHWMinTemp,Hot water Min (177) ,,,,"330102",DHWMinTemp,,_16_Temp10,,,
w,,DHWMinTemp, ,,,,"3301",,,_16_Temp10,,,

#34 01
r9,,DHWMaxTemp, DHW maximum Temp (601) ,,,,"340102",DHWMaxTemp,,_16_Temp10,,,
w,,DHWMaxTemp, ,,,,"3401",,,_16_Temp10,,,

#35 01
r9,,DHWMode,WW-Mode (361) ,,,,"350102",DHWMode,,_16_DhwMode,,,
w,,DHWMode, ,,,,"3501",,,_16_DhwMode,,,

#37 01
r9,,DHWOperationMode,WW operation (360) ,,,,"370102",DHWOperationMode,,_16_DHWOperationMode,,,
w,,DHWOperationMode, ,,,,"3701",,,_16_DHWOperationMode,,,

#8F 01
r,,UnknownSensor15, ,,,,"8F0102",UnknownSensor15,,UIN,,,

#99 01
r,,FS_EM_R1_sensor, ,,,,"990102",FS_EM_R1_sensor,,UIN,,,

#A9 01
r,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
r,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,


#59 03
r,,FS_EM_R2_Sensor, ,,,,"590302",FS_EM_R2_Sensor,,UIN,,,

#E9 04
r,,UnknownSensor16, ,,,,"E90402",UnknownSensor16,,UIN,,,


#1C 0A 
r9,,RoomThermostatTemp,Room thermostat (344) ,,,,"1C0A02",RoomThermostatTemp,,_16_Temp1,,,
w,,RoomThermostatTemp, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r9,,RoomFrostProtectionTemp,Room frost protection (173) ,,,,"140A02",RoomFrostProtectionTemp,,_16_Temp10,,,
w,,RoomFrostProtectionTemp, ,,,,"140A",,,_16_Temp10,,,

#0C 0A
r5,,OutsideBlendedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideBlendedTemp,,_16_Temp10,,,

#12 0A
r,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#29 0A
r,,FS_EM_R3_Sensor, ,,,,"290A02",FS_EM_R3_Sensor,,UIN,,,


#10 14
r9,,HCRuntimeProgram1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"101402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"1014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 14
r9,,HCRuntimeProgram1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"111402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"1114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 14
r9,,HCRuntimeProgram1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"121402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"1214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 14
r9,,HCRuntimeProgram1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"201402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"2014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 14
r9,,HCRuntimeProgram1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"211402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"2114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 14
r9,,HCRuntimeProgram1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"221402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"2214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 14
r9,,HCRuntimeProgram1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"301402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"3014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 14
r9,,HCRuntimeProgram1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"311402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"3114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 14
r9,,HCRuntimeProgram1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"321402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"3214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 14
r9,,HCRuntimeProgram1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"401402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"4014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 14
r9,,HCRuntimeProgram1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"411402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"4114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 14
r9,,HCRuntimeProgram1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"421402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"4214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 14
r9,,HCRuntimeProgram1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"501402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"5014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 14
r9,,HCRuntimeProgram1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"511402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"5114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 14
r9,,HCRuntimeProgram1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"521402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"5214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 14
r9,,HCRuntimeProgram1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"601402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"6014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 14
r9,,HCRuntimeProgram1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"611402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"6114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 14
r9,,HCRuntimeProgram1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"621402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"6214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 14
r9,,HCRuntimeProgram1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"701402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"7014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 14
r9,,HCRuntimeProgram1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"711402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"7114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 14
r9,,HCRuntimeProgram1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"721402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"7214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#10 15
r9,,HCRuntimeProgram2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"101502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"1015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 15
r9,,HCRuntimeProgram2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"111502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"1115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 15
r9,,HCRuntimeProgram2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"121502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"1215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 15
r9,,HCRuntimeProgram2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"201502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"2015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 15
r9,,HCRuntimeProgram2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"211502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"2115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 15
r9,,HCRuntimeProgram2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"221502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"2215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 15
r9,,HCRuntimeProgram2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"301502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"3015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 15
r9,,HCRuntimeProgram2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"311502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"3115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 15
r9,,HCRuntimeProgram2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"321502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"3215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 15
r9,,HCRuntimeProgram2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"401502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"4015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 15
r9,,HCRuntimeProgram2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"411502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"4115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 15
r9,,HCRuntimeProgram2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"421502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"4215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 15
r9,,HCRuntimeProgram2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"501502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"5015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r9,,HCRuntimeProgram2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"511502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"5115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r9,,HCRuntimeProgram2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"521502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"5215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 15
r9,,HCRuntimeProgram2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"601502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"6015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 15
r9,,HCRuntimeProgram2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"611502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"6115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 15
r9,,HCRuntimeProgram2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"621502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"6215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 15
r9,,HCRuntimeProgram2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"701502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"7015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 15
r9,,HCRuntimeProgram2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"711502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"7115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 15
r9,,HCRuntimeProgram2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"721502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"7215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#10 17
r9,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"101702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"1017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 17
r9,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"111702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"1117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 17
r9,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"121702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"1217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 17
r9,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"201702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"2017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 17
r9,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"211702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"2117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 17
r9,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"221702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"2217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 17
r9,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"301702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"3017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 17
r9,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"311702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"3117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 17
r9,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"321702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"3217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 17
r9,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"401702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"4017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 17
r9,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"411702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"4117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 17
r9,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"421702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"4217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 17
r9,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"501702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"5017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 17
r9,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"511702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"5117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 17
r9,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"521702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"5217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 17
r9,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"601702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"6017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 17
r9,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"611702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"6117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 17
r9,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"621702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"6217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 17
r9,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"701702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"7017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 17
r9,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"711702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"7117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 17
r9,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"721702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"7217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#10 1A
r9,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 1A
r9,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 1A
r9,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 1A
r9,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 1A
r9,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 1A
r9,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 1A
r9,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r9,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r9,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 1A
r9,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 1A
r9,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 1A
r9,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 1A
r9,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 1A
r9,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 1A
r9,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 1A
r9,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 1A
r9,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 1A
r9,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 1A
r9,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 1A
r9,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 1A
r9,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#04 76
r,,UnknownSensor11, ,,,,"047602",UnknownSensor11,,UIN,,,
w,,UnknownSensor11, ,,,,"0476",UnknownSensor11,,UIN,,,

#04 78
r,,UnknownSensor12, ,,,,"047802",UnknownSensor12,,UIN,,,
w,,UnknownSensor12, ,,,,"0478",UnknownSensor12,,UIN,,,

#FB FD
r,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,UIN,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,UIN,,,