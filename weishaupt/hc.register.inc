# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller9,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#02 00
r,,HeatDemandTemp,Heat demand HK ,,,,"020002",HeatDemandTemp,,_16_Temp10,,,

#04 00
r5,,SupplySetPointTemp,Supply SetPoint (121) ,,,,"040002",SupplySetPointTemp,,_16_Temp10,,,

#05 00
r9,,RoomNormalTemp,Normal Room Temperature (112) ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r9,,RoomSetbackTemp,Setback Room tRmperature (113) ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#0B 00
r,,UnknownSensor17, ,,,,"0B0002",UnknownSensor17,,UIN,,,

#11 00
r1,,RoomTemp,Room Sensor Temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r9,,RoomSetPointTemp,Room setpoint ,,,,"120002",RoomSetPointTemp,,_16_Temp10,,,

#1A 00
r5,,OutsideBlendedTemp,Weighted Outside Temperature ,,,,"1A0A02",OutsideBlendedTemp,,_16_Temp10,,,

#0F 01
r9,,RoomFactorCurve,Room Factor-P (508) ,,,,"0F0102",RoomFactorCurve,,_16_RoomFactor,,,,
w,,RoomFactorCurve, ,,,,"0F01",,,_16_RoomFactor,,,,

#09 01
r9,,RoomSensorCorrectionTemp,Room Sensor Correction (101) ,,,,"090102",RoomSensorCorrectionTemp,,_16_TempK10,,,
w,,RoomSensorCorrectionTemp, ,,,,"0901",,,_16_TempK10,,,

#0E 01
r9,,GradientCurve,Steepness (175) ,,,,"0E0102",GradientCurve,,_16_Gradient10,,,
w,,GradientCurve, ,,,,"0E01",,,_16_Gradient10,,,

#12 01
r5,,ProgramMode,Program selector switch position ,,,,"120102",ProgramMode,,_16_ProgramMode,,,
w,,ProgramMode, ,,,,"1201",,,_16_ProgramMode,,,

#16 01
r9,,SummerWinterChangeOverTemp,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
w,,SummerWinterChangeOverTemp, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r9,,FloorDryingMode,Screed function (381) ,,,,"1A0102",FloorDryingMode,,_16_Floordrying,,,

#1B 01
r9,,HolidayRuntimeStart,Start of vacation (181) ,,,,"1B0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
#w,,HolidayRuntimeStart, ,,,,"1B01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
#r,,HolidayRuntimeStart.Day,Start of vacation Day (181) ,,,,"1B0102",HolidayRuntimeStart.Day,,_16_HolidayDay,,,
w,,HolidayRuntimeStart.Day, ,,,,"1B01",,,_16_HolidayDay,,,

#1C 01
#r,,HolidayRuntimeStart.Month,Start of vacation Month (181) ,,,,"1C0102",HolidayRuntimeStart.Month,,_16_HolidayMonth,,,
w,,HolidayRuntimeStart.Month, ,,,,"1C0102",,,_16_HolidayMonth,,,

#1E 01
r9,,HolidayRuntimeEnd, (182) ,,,,"1E0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
#w,,HolidayRuntimeEnd, ,,,,"1E01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
#r,,HolidayRuntimeEnd.Day, Day (182) ,,,,"1E0102",HolidayRuntimeEnd.Day,,_16_HolidayDay,,,
w,,HolidayRuntimeEnd.Day, ,,,,"1E01",,,_16_HolidayDay,,,

#1F 01
#r,,HolidayRuntimeEnd.Month, Month (182) ,,,,"1F0102",HolidayRuntimeEnd.Month,,_16_HolidayMonth,,,
w,,HolidayRuntimeEnd.Month, ,,,,"1F01",,,_16_HolidayMonth,,,

#28 01
r9,,TypeOfConstructionMode,Construction method (371) ,,,,"280102",TypeOfConstructionMode,,_16_Constructiontype,,,
w,,TypeOfConstructionMode, ,,,,"2801",,,_16_Constructiontype,,,

#1C 0A 
r,,RoomThermostatTemp,Room thermostat (344) ,,,,"1C0A02",RoomThermostatTemp,,_16_Temp1,,,
w,,RoomThermostatTemp, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r9,,RoomFrostProtectionTemp,Room frost protection (173) ,,,,"140A02",RoomFrostProtectionTemp,,_16_Temp10,,,
w,,RoomFrostProtectionTemp, ,,,,"140A",,,_16_Temp10,,,

#0C 0A
#r,,OutsideWeightedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideWeightedTemp,,_16_Temp10,,,

#12 0A
#r,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
#r,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,


#10 14
r,,HCRuntimeProgram1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"101402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"1014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 14
r,,HCRuntimeProgram1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"111402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"1114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 14
r,,HCRuntimeProgram1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"121402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"1214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 14
r,,HCRuntimeProgram1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"201402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"2014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 14
r,,HCRuntimeProgram1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"211402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"2114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 14
r,,HCRuntimeProgram1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"221402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"2214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 14
r,,HCRuntimeProgram1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"301402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"3014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 14
r,,HCRuntimeProgram1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"311402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"3114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 14
r,,HCRuntimeProgram1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"321402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"3214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 14
r,,HCRuntimeProgram1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"401402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"4014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 14
r,,HCRuntimeProgram1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"411402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"4114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 14
r,,HCRuntimeProgram1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"421402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"4214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 14
r,,HCRuntimeProgram1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"501402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"5014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 14
r,,HCRuntimeProgram1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"511402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"5114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 14
r,,HCRuntimeProgram1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"521402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"5214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 14
r,,HCRuntimeProgram1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"601402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"6014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 14
r,,HCRuntimeProgram1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"611402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"6114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 14
r,,HCRuntimeProgram1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"621402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"6214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 14
r,,HCRuntimeProgram1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"701402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"7014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 14
r,,HCRuntimeProgram1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"711402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"7114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 14
r,,HCRuntimeProgram1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"721402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"7214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#10 15
r,,HCRuntimeProgram2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"101502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"1015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 15
r,,HCRuntimeProgram2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"111502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"1115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 15
r,,HCRuntimeProgram2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"121502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"1215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 15
r,,HCRuntimeProgram2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"201502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"2015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 15
r,,HCRuntimeProgram2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"211502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"2115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 15
r,,HCRuntimeProgram2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"221502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"2215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 15
r,,HCRuntimeProgram2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"301502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"3015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 15
r,,HCRuntimeProgram2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"311502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"3115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 15
r,,HCRuntimeProgram2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"321502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"3215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 15
r,,HCRuntimeProgram2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"401502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"4015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 15
r,,HCRuntimeProgram2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"411502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"4115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 15
r,,HCRuntimeProgram2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"421502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"4215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 15
r,,HCRuntimeProgram2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"501502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"5015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r,,HCRuntimeProgram2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"511502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"5115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r,,HCRuntimeProgram2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"521502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"5215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 15
r,,HCRuntimeProgram2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"601502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"6015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 15
r,,HCRuntimeProgram2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"611502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"6115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 15
r,,HCRuntimeProgram2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"621502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"6215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 15
r,,HCRuntimeProgram2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"701502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"7015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 15
r,,HCRuntimeProgram2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"711502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"7115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 15
r,,HCRuntimeProgram2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"721502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HCRuntimeProgram2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"7215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
