# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller9,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#02 00
r,,HeatDemandTemp,Heat demand HK ,,,,"020002",HeatDemandTemp,,_16_Temp10,,,

#04 00
r,,SupplySetPointTemp,Supply SetPoint ,,,,"040002",SupplySetPointTemp,,_16_Temp10,,,

#05 00
r9,,RoomNormalTemp,Normal Room Temperature ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r9,,RoomSetbackTemp,Setback Room tRmperature ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#11 00
r,,RoomTemp,Room Sensor Temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r9,,RoomSetPointTemp,Room setpoint ,,,,"120002",RoomSetPointTemp,,_16_Temp10,,,

#1A 00
r5,,OutsideBlendedTemp,Weighted Outside Temperature ,,,,"1A0A02",OutsideBlendedTemp,,_16_Temp10,,,

#0F 01
r9,,RoomFactorCurve,Room Factor-P ,,,,"0F0102",RoomFactorCurve,,_16_RoomFactor,,,,
w,,RoomFactorCurve, ,,,,"0F01",,,_16_RoomFactor,,,,

#09 01
r9,,RoomSensorCorrectionTemp,Room Sensor Correction ,,,,"090102",RoomSensorCorrectionTemp,,_16_TempK10,,,
w,,RoomSensorCorrectionTemp, ,,,,"0901",,,_16_TempK10,,,

#0E 01
r9,,GradientCurve,Steepness ,,,,"0E0102",GradientCurve,,_16_Gradient10,,,
w,,GradientCurve, ,,,,"0E01",,,_16_Gradient10,,,

#11 01
r,,BoilerMCBoostTemp,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoostTemp,,_16_TempK10,,,
w,,BoilerMCBoostTemp, ,,,,"1101",,,_16_TempK10,,,

#12 01
r5,,ProgramMode,Program selector switch position ,,,,"120102",ProgramMode,,_16_ProgramMode,,,
w,,ProgramMode, ,,,,"1201",,,_16_ProgramMode,,,

#16 01
r9,,SummerWinterChangeOverTemp,Summer/winter changeover temperature ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
w,,SummerWinterChangeOverTemp, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r,,FloorDryingMode,Screed function ,,,,"1A0102",FloorDryingMode,,_16_Floordrying,,,

#1B;1C 01
r,,HolidayRuntimeFrom,Start of vacation ,,,,"1B0104",,s,_16_HolidayDay,,, ,,s,_16_HolidayMonth,,,
#w,,HolidayRuntimeFrom,Start of vacation ,,,,"1B01:2;1C01:2",,m,_16_HolidayDay,,, ,,m,_16_HolidayMonth,,,

#1B 01
w,,HolidayRuntimeFrom.Day, ,,,,"1B01",,,_16_HolidayDay,,,

#1C 01
w,,HolidayRuntimeFrom.Month, ,,,,"1C01",,,_16_HolidayMonth,,,

#1E;1F 01
r,,HolidayRuntimeTo,End of vacation ,,,,"1E0104",,,_16_HolidayDay,,, ,,,_16_HolidayMonth,,,
#w,,HolidayRuntimeTo,End of vacation ,,,,"1E01:2;1F01:2",,:,UIN,,, ,,m,UIN,,,

#1E 01
w,,HolidayRuntimeTo.Day, ,,,,"1E01",,,_16_HolidayDay,,,

#1F 01
w,,HolidayRuntimeTo.Month, ,,,,"1F01",,,_16_HolidayMonth,,,

#28 01
r9,,TypeOfConstructionMode,Construction method ,,,,"280102",TypeOfConstructionMode,,_16_Constructiontype,,,
w,,TypeOfConstructionMode, ,,,,"2801",,,_16_Constructiontype,,,

#1C 0A 
r,,RoomThermostatTemp,Room thermostat ,,,,"1C0A02",RoomThermostatTemp,,_16_Temp1,,,
w,,RoomThermostatTemp, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r9,,RoomFrostProtectionTemp,Room frost protection ,,,,"140A02",RoomFrostProtectionTemp,,_16_Temp10,,,
w,,RoomFrostProtectionTemp, ,,,,"140A",,,_16_Temp10,,,

#0C 0A
#r,,OutsideWeightedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideWeightedTemp,,_16_Temp10,,,

#12 0A
#r,,FloorDryingDay,Screed day ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
#r,,FloorDryingTemp,Screed temperature ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#10;11;12 14 
r,,HCRuntimeProgram1.Mo,Heating Program1 Monday ,,,,"101402;111402;121402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Mo,Heating Program1 Monday ,,,,"1014 :2;1114 :2;1214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 14
r,,HCRuntimeProgram1.Mo.1,Heating Program1 Monday 1 To/From ,,,,"101402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Mo.1,Heating Program1 Monday 1 To/From ,,,,"1014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 14
r,,HCRuntimeProgram1.Mo.2,Heating Program1 Monday 2 To/From ,,,,"111402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Mo.2,Heating Program1 Monday 2 To/From ,,,,"1114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 14
r,,HCRuntimeProgram1.Mo.3,Heating Program1 Monday 3 To/From ,,,,"121402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Mo.3,Heating Program1 Monday 3 To/From ,,,,"1214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 14 
r,,HCRuntimeProgram1.Tu,Heating Program1Tuesday ,,,,"201402;211402;221402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Tu,Heating Program1Tuesday ,,,,"2014 :2;2114 :2;2214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 14
r,,HCRuntimeProgram1.Tu.1,Heating Program1 Tuesday 1 To/From ,,,,"201402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Tu.1,Heating Program1 Tuesday 1 To/From ,,,,"2014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 14
r,,HCRuntimeProgram1.Tu.2,Heating Program1 Tuesday 2 To/From ,,,,"211402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Tu.2,Heating Program1 Tuesday 2 To/From ,,,,"2114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 14
r,,HCRuntimeProgram1.Tu.3,Heating Program1 Tuesday 3 To/From ,,,,"221402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Tu.3,Heating Program1 Tuesday 3 To/From ,,,,"2214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 14 
r,,HCRuntimeProgram1.We,Heating Program1Wednesday ,,,,"301402;311402;321402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.We,Heating Program1Wendesday ,,,,"3014 :2;3114 :2;3214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 14
r,,HCRuntimeProgram1.We.1,Heating Program1 Wednesday 1 To/From ,,,,"301402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.We.1,Heating Program1 Wednesday 1 To/From ,,,,"3014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 14
r,,HCRuntimeProgram1.We.2,Heating Program1 Wednesday 2 To/From ,,,,"311402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.We.2,Heating Program1 Wednesday 2 To/From ,,,,"3114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#32 14
r,,HCRuntimeProgram1.We.3,Heating Program1 Wednesday 3 To/From ,,,,"321402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.We.3,Heating Program1 Wednesday 3 To/From ,,,,"3214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 14 
r,,HCRuntimeProgram1.Th,Heating Program1Thursday ,,,,"401402;411402;421402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Th,Heating Program1Thursday ,,,,"4014 :2;4114 :2;4214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 14
r,,HCRuntimeProgram1.Th.1,Heating Program1 Thursday 1 To/From ,,,,"401402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Th.1,Heating Program1 Thursday 1 To/From ,,,,"4014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 14
r,,HCRuntimeProgram1.Th.2,Heating Program1 Thursday 2 To/From ,,,,"411402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Th.2,Heating Program1 Thursday 2 To/From ,,,,"4114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 14
r,,HCRuntimeProgram1.Th.3,Heating Program1 Thursday 3 To/From ,,,,"421402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Th.3,Heating Program1 Thursday 3 To/From ,,,,"4214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 14 
r,,HCRuntimeProgram1.Fr,Heating Program1Friday ,,,,"501402;511402;521402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Fr,Heating Program1Friday ,,,,"5014 :2;5114 :2;5214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 14
r,,HCRuntimeProgram1.Fr.1,Heating Program1 Friday 1 To/From ,,,,"501402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Fr.1,Heating Program1 Friday 1 To/From ,,,,"5014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 14
r,,HCRuntimeProgram1.Fr.2,Heating Program1 Friday 2 To/From ,,,,"511402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Fr.2,Heating Program1 Friday 2 To/From ,,,,"5114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#52 14
r,,HCRuntimeProgram1.Fr.3,Heating Program1 Friday 3 To/From ,,,,"521402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Fr.3,Heating Program1 Friday 3 To/From ,,,,"5214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 14 
r,,HCRuntimeProgram1.Sa,Heating Program1Saturday ,,,,"601402;611402;621402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Sa,Heating Program1Saturday ,,,,"6014 :2;6114 :2;6214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 14
r,,HCRuntimeProgram1.Sa.1,Heating Program1 Saturday 1 To/From ,,,,"601402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Sa.1,Heating Program1 Saturday 1 To/From ,,,,"6014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 14
r,,HCRuntimeProgram1.Sa.2,Heating Program1 Saturday 2 To/From ,,,,"611402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Sa.2,Heating Program1 Saturday 2 To/From ,,,,"6114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 14
r,,HCRuntimeProgram1.Sa.3,Heating Program1 Saturday 3 To/From ,,,,"621402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Sa.3,Heating Program1 Saturday 3 To/From ,,,,"6214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 14 
r,,HCRuntimeProgram1.Su,Heating Program1Sunday ,,,,"701402;711402;721402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram1.Su,Heating Program1Sunday ,,,,"7014 :2;7114 :2;7214 :2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 14
r,,HCRuntimeProgram1.Su.1,Heating Program1 Sunday 1 To/From ,,,,"701402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Su.1,Heating Program1 Sunday 1 To/From ,,,,"7014",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 14
r,,HCRuntimeProgram1.Su.2,Heating Program1 Sunday 2 To/From ,,,,"711402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Su.2,Heating Program1 Sunday 2 To/From ,,,,"7114",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 14
r,,HCRuntimeProgram1.Su.3,Heating Program1 Sunday 3 To/From ,,,,"721402",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram1.Su.3,Heating Program1 Sunday 3 To/From ,,,,"7214",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#10;11;12 15
r,,HCRuntimeProgram2.Mo,Heating Program2 Monday ,,,,"101502;111502;121502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Mo,Heating Program2 Monday ,,,,"1015:2;1115:2;1215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 15
r,,HCRuntimeProgram2.Mo.1,Heating Program2 Monday 1 To/From ,,,,"101502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Mo.1,Heating Program2 Monday 1 To/From ,,,,"1015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 15
r,,HCRuntimeProgram2.Mo.2,Heating Program2 Monday 2 To/From ,,,,"111502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Mo.2,Heating Program2 Monday 2 To/From ,,,,"1115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 15
r,,HCRuntimeProgram2.Mo.3,Heating Program2 Monday 3 To/From ,,,,"121502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Mo.3,Heating Program2 Monday 3 To/From ,,,,"1215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 15
r,,HCRuntimeProgram2.Tu,Heating Program2 Tuesday ,,,,"201502;211502;221502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Tu,Heating Program2 Tuesday ,,,,"2015:2;2115:2;2215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 15
r,,HCRuntimeProgram2.Tu.1,Heating Program2 Tuesday 1 To/From ,,,,"201502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Tu.1,Heating Program2 Tuesday 1 To/From ,,,,"2015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 15
r,,HCRuntimeProgram2.Tu.2,Heating Program2 Tuesday 2 To/From ,,,,"211502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Tu.2,Heating Program2 Tuesday 2 To/From ,,,,"2115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 15
r,,HCRuntimeProgram2.Tu.3,Heating Program2 Tuesday 3 To/From ,,,,"221502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Tu.3,Heating Program2 Tuesday 3 To/From ,,,,"2215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 15
r,,HCRuntimeProgram2.We,Heating Program2 Wednesday ,,,,"301502;311502;321502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.We,Heating Program2 Wendesday ,,,,"3015:2;3115:2;3215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 15
r,,HCRuntimeProgram2.We.1,Heating Program2 Wednesday 1 To/From ,,,,"301502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.We.1,Heating Program2 Wednesday 1 To/From ,,,,"3015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 15
r,,HCRuntimeProgram2.We.2,Heating Program2 Wednesday 2 To/From ,,,,"311502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.We.2,Heating Program2 Wednesday 2 To/From ,,,,"3115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#32 15
r,,HCRuntimeProgram2.We.3,Heating Program2 Wednesday 3 To/From ,,,,"321502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.We.3,Heating Program2 Wednesday 3 To/From ,,,,"3215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 15
r,,HCRuntimeProgram2.Th,Heating Program2 Thursday ,,,,"401502;411502;421502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Th,Heating Program2 Thursday ,,,,"4015:2;4115:2;4215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 15
r,,HCRuntimeProgram2.Th.1,Heating Program2 Thursday 1 To/From ,,,,"401502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Th.1,Heating Program2 Thursday 1 To/From ,,,,"4015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 15
r,,HCRuntimeProgram2.Th.2,Heating Program2 Thursday 2 To/From ,,,,"411502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Th.2,Heating Program2 Thursday 2 To/From ,,,,"4115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 15
r,,HCRuntimeProgram2.Th.3,Heating Program2 Thursday 3 To/From ,,,,"421502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Th.3,Heating Program2 Thursday 3 To/From ,,,,"4215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 15
r,,HCRuntimeProgram2.Fr,Heating Program2 Friday ,,,,"501502;511502;521502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Fr,Heating Program2 Friday ,,,,"5015:2;5115:2;5215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 15
r,,HCRuntimeProgram2.Fr.1,Heating Program2 Friday 1 To/From ,,,,"501502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Fr.1,Heating Program2 Friday 1 To/From ,,,,"5015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 15
r,,HCRuntimeProgram2.Fr.2,Heating Program2 Friday 2 To/From ,,,,"511502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Fr.2,Heating Program2 Friday 2 To/From ,,,,"5115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 15
r,,HCRuntimeProgram2.Fr.3,Heating Program2 Friday 3 To/From ,,,,"521502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Fr.3,Heating Program2 Friday 3 To/From ,,,,"5215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 15
r,,HCRuntimeProgram2.Sa,Heating Program2 Saturday ,,,,"601502;611502;621502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Sa,Heating Program2 Saturday ,,,,"6015:2;6115:2;6215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 15
r,,HCRuntimeProgram2.Sa.1,Heating Program2 Saturday 1 To/From ,,,,"601502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Sa.1,Heating Program2 Saturday 1 To/From ,,,,"6015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 15
r,,HCRuntimeProgram2.Sa.2,Heating Program2 Saturday 2 To/From ,,,,"611502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Sa.2,Heating Program2 Saturday 2 To/From ,,,,"6115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 15
r,,HCRuntimeProgram2.Sa.3,Heating Program2 Saturday 3 To/From ,,,,"621502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Sa.3,Heating Program2 Saturday 3 To/From ,,,,"6215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 15
r,,HCRuntimeProgram2.Su,Heating Program2 Sunday ,,,,"701502;711502;721502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram2.Su,Heating Program2 Sunday ,,,,"7015:2;7115:2;7215:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 15
r,,HCRuntimeProgram2.Su.1,Heating Program2 Sunday 1 To/From ,,,,"701502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Su.1,Heating Program2 Sunday 1 To/From ,,,,"7015",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 15
r,,HCRuntimeProgram2.Su.2,Heating Program2 Sunday 2 To/From ,,,,"711502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Su.2,Heating Program2 Sunday 2 To/From ,,,,"7115",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 15
r,,HCRuntimeProgram2.Su.3,Heating Program2 Sunday 3 To/From ,,,,"721502",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram2.Su.3,Heating Program2 Sunday 3 To/From ,,,,"7215",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#10;11;12 16
r,,HCRuntimeProgram3.Mo,Heating Program3 Monday ,,,,"101602;111602;121602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Mo,Heating Program3 Monday ,,,,"1016:2;1116:2;1216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 16
r,,HCRuntimeProgram3.Mo.1,Heating Program3 Monday 1 To/From ,,,,"101602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Mo.1,Heating Program3 Monday 1 To/From ,,,,"1016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 16
r,,HCRuntimeProgram3.Mo.2,Heating Program3 Monday 2 To/From ,,,,"111602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Mo.2,Heating Program3 Monday 2 To/From ,,,,"1116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 16
r,,HCRuntimeProgram3.Mo.3,Heating Program3 Monday 3 To/From ,,,,"121602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Mo.3,Heating Program3 Monday 3 To/From ,,,,"1216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 16
r,,HCRuntimeProgram3.Tu,Heating Program3 Tuesday ,,,,"201602;211602;221602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Tu,Heating Program3 Tuesday ,,,,"2016:2;2116:2;2216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 16
r,,HCRuntimeProgram3.Tu.1,Heating Program3 Tuesday 1 To/From ,,,,"201602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Tu.1,Heating Program3 Tuesday 1 To/From ,,,,"2016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 16
r,,HCRuntimeProgram3.Tu.2,Heating Program3 Tuesday 2 To/From ,,,,"211602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Tu.2,Heating Program3 Tuesday 2 To/From ,,,,"2116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 16
r,,HCRuntimeProgram3.Tu.3,Heating Program3 Tuesday 3 To/From ,,,,"221602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Tu.3,Heating Program3 Tuesday 3 To/From ,,,,"2216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 16
r,,HCRuntimeProgram3.We,Heating Program3 Wednesday ,,,,"301602;311602;321602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.We,Heating Program3 Wendesday ,,,,"3016:2;3116:2;3216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 16
r,,HCRuntimeProgram3.We.1,Heating Program3 Wednesday 1 To/From ,,,,"301602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.We.1,Heating Program3 Wednesday 1 To/From ,,,,"3016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 16
r,,HCRuntimeProgram3.We.2,Heating Program3 Wednesday 2 To/From ,,,,"311602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.We.2,Heating Program3 Wednesday 2 To/From ,,,,"3116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#32 16
r,,HCRuntimeProgram3.We.3,Heating Program3 Wednesday 3 To/From ,,,,"321602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.We.3,Heating Program3 Wednesday 3 To/From ,,,,"3216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 16
r,,HCRuntimeProgram3.Th,Heating Program3 Thursday ,,,,"401602;411602;421602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Th,Heating Program3 Thursday ,,,,"4016:2;4116:2;4216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 16
r,,HCRuntimeProgram3.Th.1,Heating Program3 Thursday 1 To/From ,,,,"401602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Th.1,Heating Program3 Thursday 1 To/From ,,,,"4016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 16
r,,HCRuntimeProgram3.Th.2,Heating Program3 Thursday 2 To/From ,,,,"411602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Th.2,Heating Program3 Thursday 2 To/From ,,,,"4116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 16
r,,HCRuntimeProgram3.Th.3,Heating Program3 Thursday 3 To/From ,,,,"421602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Th.3,Heating Program3 Thursday 3 To/From ,,,,"4216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 16
r,,HCRuntimeProgram3.Fr,Heating Program3 Friday ,,,,"501602;511602;521602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Fr,Heating Program3 Friday ,,,,"5016:2;5116:2;5216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 16
r,,HCRuntimeProgram3.Fr.1,Heating Program3 Friday 1 To/From ,,,,"501602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Fr.1,Heating Program3 Friday 1 To/From ,,,,"5016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 16
r,,HCRuntimeProgram3.Fr.2,Heating Program3 Friday 2 To/From ,,,,"511602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Fr.2,Heating Program3 Friday 2 To/From ,,,,"5116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 16
r,,HCRuntimeProgram3.Fr.3,Heating Program3 Friday 3 To/From ,,,,"521602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Fr.3,Heating Program3 Friday 3 To/From ,,,,"5216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 16
r,,HCRuntimeProgram3.Sa,Heating Program3 Saturday ,,,,"601602;611602;621602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Sa,Heating Program3 Saturday ,,,,"6016:2;6116:2;6216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 16
r,,HCRuntimeProgram3.Sa.1,Heating Program3 Saturday 1 To/From ,,,,"601602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Sa.1,Heating Program3 Saturday 1 To/From ,,,,"6016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 16
r,,HCRuntimeProgram3.Sa.2,Heating Program3 Saturday 2 To/From ,,,,"611602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Sa.2,Heating Program3 Saturday 2 To/From ,,,,"6116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 16
r,,HCRuntimeProgram3.Sa.3,Heating Program3 Saturday 3 To/From ,,,,"621602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Sa.3,Heating Program3 Saturday 3 To/From ,,,,"6216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 16
r,,HCRuntimeProgram3.Su,Heating Program3 Sunday ,,,,"701602;711602;721602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,HCRuntimeProgram3.Su,Heating Program3 Sunday ,,,,"7016:2;7116:2;7216:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 16
r,,HCRuntimeProgram3.Su.1,Heating Program3 Sunday 1 To/From ,,,,"701602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Su.1,Heating Program3 Sunday 1 To/From ,,,,"7016",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 16
r,,HCRuntimeProgram3.Su.2,Heating Program3 Sunday 2 To/From ,,,,"711602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Su.2,Heating Program3 Sunday 2 To/From ,,,,"7116",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 16
r,,HCRuntimeProgram3.Su.3,Heating Program3 Sunday 3 To/From ,,,,"721602",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,HCRuntimeProgram3.Su.3,Heating Program3 Sunday 3 To/From ,,,,"7216",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
