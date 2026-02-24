# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#01 00
r,,ErrorStatus,Error Status ,,,,"010002",ErrorCode,,UIN,,,

#02 00
r,,HeatDemandTemp,Heat demand HK ,,,,"020002",HeatDemandTemp,,_16_Temp10,,,

#04 00
r1,,SupplySetPointTemp,Supply SetPoint (121) ,,,,"040002",SupplySetPointTemp,,_16_Temp10,,,

#05 00
r9,,RoomNormalTemp,Normal Room Temperature (112) ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r9,,RoomSetbackTemp,Setback Room tRmperature (113) ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#0B 00
r,,UnknownSensor15, ,,,,"0B0002",UnknownSensor15,,UIN,,,

#0C 00
r,,OutsideTemp,B1 Outside Sensor Temperature,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#0D 00
r,,SupplyWTCTemp,Flow temperature WTC ,,,,"0D0002",SupplyWTCTemp,,_16_Temp10,,,

#0F 00
r,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#10 00
r,,ConfigStatus,Configuration Status,,,,"0F0002",ConfigCode,,UIN,,,

#11 00
r,,RoomTemp,Room Sensor Temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r9,,RoomSetPointTemp,Room setpoint ,,,,"120002",RoomSetPointTemp,,_16_Temp10,,,

#23 00
r,,WWOperationMode,WW Operation (343),,,,"230002",WWOperationMode,,_16_WWOp,,,
w,,WWOperationMode, ,,,,"2300",WWOperationMode,,_16_WWOp,,,

#25 00
r,,BlockingTime,Maximum Blocking Time (537) ,,,,"250002",BlockingTime,,_16_Minutes,,,
w,,BlockingTime, ,,,,"2500",BlockingTime,,_16_Minutes,,,

#28 00
r,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
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
r,,BoilerMCBoostTemp,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoostTemp,,_16_TempK10,,,
w,,BoilerMCBoostTemp, ,,,,"1101",,,_16_TempK10,,,

#12 01
r5,,ProgramMode,Program selector switch position ,,,,"120102",ProgramMode,,_16_ProgramMode,,,
w,,ProgramMode, ,,,,"1201",,,_16_ProgramMode,,,

#15 01
r,,AdaptionMode,Adaption (507) ,,,,"150102",AdaptionMode,,_16_OnOff,,,
w,,AdaptionMode, ,,,,"1501",,,_16_OnOff,,,

#16 01
r9,,SummerWinterChangeOverTemp,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
w,,SummerWinterChangeOverTemp, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r,,FloorDryingMode,Screed function (381) ,,,,"1A0102",FloorDryingMode,,_16_Floordrying,,,

#1B;1C;1D 01
r,,HolidayRuntimeFrom,Start of vacation ,,,,"1B0106",,,_16_Day,,, ,,,_16_Month,,, ,,,_16_Year,,,

#1B 01
r,,HolidayRuntimeFrom.Day,Start of vacation ,,,,"1B0102",,,_16_Day,,, 
w,,HolidayRuntimeFrom.Day, ,,,,"1B01",,,_16_Day,,,

#1C 01
r,,HolidayRuntimeFrom.Month,Start of vacation ,,,,"1C0102",,,_16_Month,,,
w,,HolidayRuntimeFrom.Month, ,,,,"1C01",,,_16_Month,,,

#1D 01
r,,HolidayRuntimeFrom.Year,Start of vacation ,,,,"1D0102",,,_16_Year,,,
w,,HolidayRuntimeFrom.Year, ,,,,"1D01",,,_16_Year,,,

#1E;1F;20 01
r,,HolidayRuntimeTo,End of vacation ,,,,"1E0106",,,_16_Day,,, ,,,_16_Month,,, ,,,_16_Year,,,

#1E 01
r,,HolidayRuntimeTo.Day,Start of vacation ,,,,"1E0102",,,_16_Day,,, 
w,,HolidayRuntimeTo.Day, ,,,,"1E01",,,_16_Day,,,

#1F 01
r,,HolidayRuntimeTo.Month,Start of vacation ,,,,"1F0102",,,_16_Month,,,
w,,HolidayRuntimeTo.Month, ,,,,"1F01",,,_16_Month,,,

#20 01
r,,HolidayRuntimeTo.Year,Start of vacation ,,,,"200102",,,_16_Year,,,
w,,HolidayRuntimeTo.Year, ,,,,"2001",,,_16_Year,,,

#21 01
r,,SystemDate.Weekday,System Date Weekday ,,,,"210102",,,_16_WeekDay,,,
w,,SystemDate.Weekday, ,,,,"2101",,,_16_WeekDay,,,

#22 01
r,,SystemDate.Day,System Date Day ,,,,"220102",,,_16_Day,,,
w,,SystemDate.Day, ,,,,"2201",,,_16_Day,,,

#23 01
r,,SystemDate.Month,System Date Month ,,,,"230102",,,_16_Month,,,
w,,SystemDate.Month, ,,,,"2301",,,_16_Month,,,

#24 01
r,,SystemDate.Year,System Date Year ,,,,"240102",,,_16_Year,,,
w,,SystemDate.Year, ,,,,"2401",,,_16_Year,,,

#25 01
,,SystemTime.Hour,System Time Hour ,,,,"250102",,,_16_Hours,,,
w,,SystemTime.Hour, ,,,,"2501",,,_16_Hours,,,

#26 01
r,,SystemTime.Minute,System Time Minute ,,,,"260102",,,_16_Minutes,,,
w,,SystemTime.Minute, ,,,,"2601",,,_16_Minutes,,,

#27 01
r,,SystemTime.Second,System Time Second ,,,,"270102",,,_16_Seconds,,,
w,,SystemTime.Second, ,,,,"2701",,,_16_Seconds,,,

#28 01
r9,,TypeOfConstructionMode,Construction method (371) ,,,,"280102",TypeOfConstructionMode,,_16_Constructiontype,,,
w,,TypeOfConstructionMode, ,,,,"2801",,,_16_Constructiontype,,,

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

#41 01
r,,ControlVariationMode,Control Variation (318),,,,"410102",ControlVariationMode,,_16_CVariation,,,
w,,ControlVariationMode, ,,,,"4101",ControlVariationMode,,_16_CVariation,,,

#8F 01
r,,KaVersion, ,,,,"8F0102",KaVersion,,SIN,,,

#99 01
r,,Version, ,,,,"990102",Version,,UIN,,,

#A9 01
r,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
r,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,




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


#1C 0A 
r,,RoomThermostatTemp,Room thermostat (344) ,,,,"1C0A02",RoomThermostatTemp,,_16_Temp1,,,
w,,RoomThermostatTemp, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r9,,RoomFrostProtectionTemp,Room frost protection (173) ,,,,"140A02",RoomFrostProtectionTemp,,_16_Temp10,,,
w,,RoomFrostProtectionTemp, ,,,,"140A",,,_16_Temp10,,,

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

#9A 0B
r,,Error.Id, ,,,,"9A0B02",Error.Id,,UIN,,,
w,,Error.Id, ,,,,"9A0B",Error.Id,,UIN,,,

#9B 0B
r,,Error.Code, ,,,,"9B0B02",Error.Code,,UIN,,,

#9C 0B
r,,Error.Type, ,,,,"9C0B02",Error.Type,,UIN,,,

#9D 0B
r,,Error.Device, ,,,,"9D0B02",Error.Device,,UIN,,,

#9F 0B
r,,Error.Minute,Error Time Minute ,,,,"9F0B02",,,_16_Minutes,,,

#A0 0B
r,,Error.Hour,Error Time Hour ,,,,"A00B02",,,_16_Hours,,,

#A1 0B
r,,Error.Day,Error Date Day ,,,,"A10B02",,,_16_Day,,,

#A2 0B
r,,Error.Month,Error Date Month ,,,,"A20B02",,,_16_Month,,,

#A3 0B
r,,Error.Year,Error Date Year ,,,,"A30B02",,,_16_Year,,,

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

#10;11;12 17
r,,DHWRuntimeProgram.Mo,Hot Water Program Monday ,,,,"101702;111702;121702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Mo,Hot Water Program Monday ,,,,"1017:2;1117:2;1217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 17
r,,DHWRuntimeProgram.Mo.1,Hot Water Program Monday 1 To/From ,,,,"101702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.1,Hot Water Program Monday 1 To/From ,,,,"1017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 17
r,,DHWRuntimeProgram.Mo.2,Hot Water Program Monday 2 To/From ,,,,"111702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.2,Hot Water Program Monday 2 To/From ,,,,"1117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 17
r,,DHWRuntimeProgram.Mo.3,Hot Water Program Monday 3 To/From ,,,,"121702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.3,Hot Water Program Monday 3 To/From ,,,,"1217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 17
r,,DHWRuntimeProgram.Tu,Hot Water Program Tuesday ,,,,"201702;211702;221702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Tu,Hot Water Program Tuesday ,,,,"2017:2;2117:2;2217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 17
r,,DHWRuntimeProgram.Tu.1,Hot Water Program Tuesday 1 To/From ,,,,"201702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.1,Hot Water Program Tuesday 1 To/From ,,,,"2017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 17
r,,DHWRuntimeProgram.Tu.2,Hot Water Program Tuesday 2 To/From ,,,,"211702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.2,Hot Water Program Tuesday 2 To/From ,,,,"2117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 17
r,,DHWRuntimeProgram.Tu.3,Hot Water Program Tuesday 3 To/From ,,,,"221702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.3,Hot Water Program Tuesday 3 To/From ,,,,"2217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 17
r,,DHWRuntimeProgram.We,Hot Water Program Wednesday ,,,,"301702;311702;321702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.We,Hot Water Program Wendesday ,,,,"3017:2;3117:2;3217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 17
r,,DHWRuntimeProgram.We.1,Hot Water Program Wednesday 1 To/From ,,,,"301702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.1,Hot Water Program Wednesday 1 To/From ,,,,"3017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 17
r,,DHWRuntimeProgram.We.2,Hot Water Program Wednesday 2 To/From ,,,,"311702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.2,Hot Water Program Wednesday 2 To/From ,,,,"3117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#32 17
r,,DHWRuntimeProgram.We.3,Hot Water Program Wednesday 3 To/From ,,,,"321702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.3,Hot Water Program Wednesday 3 To/From ,,,,"3217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 17
r,,DHWRuntimeProgram.Th,Hot Water Program Thursday ,,,,"401702;411702;421702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Th,Hot Water Program Thursday ,,,,"4017:2;4117:2;4217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 17
r,,DHWRuntimeProgram.Th.1,Hot Water Program Thursday 1 To/From ,,,,"401702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.1,Hot Water Program Thursday 1 To/From ,,,,"4017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 17
r,,DHWRuntimeProgram.Th.2,Hot Water Program Thursday 2 To/From ,,,,"411702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.2,Hot Water Program Thursday 2 To/From ,,,,"4117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 17
r,,DHWRuntimeProgram.Th.3,Hot Water Program Thursday 3 To/From ,,,,"421702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.3,Hot Water Program Thursday 3 To/From ,,,,"4217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 17
r,,DHWRuntimeProgram.Fr,Hot Water Program Friday ,,,,"501702;511702;521702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Fr,Hot Water Program Friday ,,,,"5017:2;5117:2;5217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 17
r,,DHWRuntimeProgram.Fr.1,Hot Water Program Friday 1 To/From ,,,,"501702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.1,Hot Water Program Friday 1 To/From ,,,,"5017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 17
r,,DHWRuntimeProgram.Fr.2,Hot Water Program Friday 2 To/From ,,,,"511702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.2,Hot Water Program Friday 2 To/From ,,,,"5117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#52 17
r,,DHWRuntimeProgram.Fr.3,Hot Water Program Friday 3 To/From ,,,,"521702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.3,Hot Water Program Friday 3 To/From ,,,,"5217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 17
r,,DHWRuntimeProgram.Sa,Hot Water Program Saturday ,,,,"601702;611702;621702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Sa,Hot Water Program Saturday ,,,,"6017:2;6117:2;6217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 17
r,,DHWRuntimeProgram.Sa.1,Hot Water Program Saturday 1 To/From ,,,,"601702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.1,Hot Water Program Saturday 1 To/From ,,,,"6017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 17
r,,DHWRuntimeProgram.Sa.2,Hot Water Program Saturday 2 To/From ,,,,"611702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.2,Hot Water Program Saturday 2 To/From ,,,,"6117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 17
r,,DHWRuntimeProgram.Sa.3,Hot Water Program Saturday 3 To/From ,,,,"621702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.3,Hot Water Program Saturday 3 To/From ,,,,"6217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 17
r,,DHWRuntimeProgram.Su,Hot Water Program Sunday ,,,,"701702;711702;721702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Su,Hot Water Program Sunday ,,,,"7017:2;7117:2;7217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 17
r,,DHWRuntimeProgram.Su.1,Hot Water Program Sunday 1 To/From ,,,,"701702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.1,Hot Water Program Sunday 1 To/From ,,,,"7017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 17
r,,DHWRuntimeProgram.Su.2,Hot Water Program Sunday 2 To/From ,,,,"711702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.2,Hot Water Program Sunday 2 To/From ,,,,"7117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 17
r,,DHWRuntimeProgram.Su.3,Hot Water Program Sunday 3 To/From ,,,,"721702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.3,Hot Water Program Sunday 3 To/From ,,,,"7217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#10;11;12 1A
r,,CircRuntimeProgram.Mo,Circulation Program Monday ,,,,"101A02;111A02;121A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Mo,Circulation Program Monday ,,,,"101A:2;111A:2;121A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 1A
r,,CircRuntimeProgram.Mo.1,Circulation Program Monday 1 To/From ,,,,"101A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.1,Circulation Program Monday 1 To/From ,,,,"101A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 1A
r,,CircRuntimeProgram.Mo.2,Circulation Program Monday 2 To/From ,,,,"111A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.2,Circulation Program Monday 2 To/From ,,,,"111A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 1A
r,,CircRuntimeProgram.Mo.3,Circulation Program Monday 3 To/From ,,,,"121A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.3,Circulation Program Monday 3 To/From ,,,,"121A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 1A
r,,CircRuntimeProgram.Tu,Circulation Program Tuesday ,,,,"201A02;211A02;221A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Tu,Circulation Program Tuesday ,,,,"201A:2;211A:2;221A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 1A
r,,CircRuntimeProgram.Tu.1,Circulation Program Tuesday 1 To/From ,,,,"201A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.1,Circulation Program Tuesday 1 To/From ,,,,"201A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 1A
r,,CircRuntimeProgram.Tu.2,Circulation Program Tuesday 2 To/From ,,,,"211A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.2,Circulation Program Tuesday 2 To/From ,,,,"211A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 1A
r,,CircRuntimeProgram.Tu.3,Circulation Program Tuesday 3 To/From ,,,,"221A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.3,Circulation Program Tuesday 3 To/From ,,,,"221A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 1A
r,,CircRuntimeProgram.We,Circulation Program Wednesday ,,,,"301A02;311A02;321A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.We,Circulation Program Wendesday ,,,,"301A:2;311A:2;321A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 1A
r,,CircRuntimeProgram.We.1,Circulation Program Wednesday 1 To/From ,,,,"301A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.1,Circulation Program Wednesday 1 To/From ,,,,"301A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 1A
r,,CircRuntimeProgram.We.2,Circulation Program Wednesday 2 To/From ,,,,"311A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.2,Circulation Program Wednesday 2 To/From ,,,,"311A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 1A
r,,CircRuntimeProgram.We.3,Circulation Program Wednesday 3 To/From ,,,,"321A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.3,Circulation Program Wednesday 3 To/From ,,,,"321A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 1A
r,,CircRuntimeProgram.Th,Circulation Program Thursday ,,,,"401A02;411A02;421A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Th,Circulation Program Thursday ,,,,"401A:2;411A:2;421A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 1A
r,,CircRuntimeProgram.Th.1,Circulation Program Thursday 1 To/From ,,,,"401A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.1,Circulation Program Thursday 1 To/From ,,,,"401A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 1A
r,,CircRuntimeProgram.Th.2,Circulation Program Thursday 2 To/From ,,,,"411A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.2,Circulation Program Thursday 2 To/From ,,,,"411A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 1A
r,,CircRuntimeProgram.Th.3,Circulation Program Thursday 3 To/From ,,,,"421A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.3,Circulation Program Thursday 3 To/From ,,,,"421A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 1A
r,,CircRuntimeProgram.Fr,Circulation Program Friday ,,,,"501A02;511A02;521A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Fr,Circulation Program Friday ,,,,"501A:2;511A:2;521A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 1A
r,,CircRuntimeProgram.Fr.1,Circulation Program Friday 1 To/From ,,,,"501A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.1,Circulation Program Friday 1 To/From ,,,,"501A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 1A
r,,CircRuntimeProgram.Fr.2,Circulation Program Friday 2 To/From ,,,,"511A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.2,Circulation Program Friday 2 To/From ,,,,"511A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#52 1A
r,,CircRuntimeProgram.Fr.3,Circulation Program Friday 3 To/From ,,,,"521A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.3,Circulation Program Friday 3 To/From ,,,,"521A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 1A
r,,CircRuntimeProgram.Sa,Circulation Program Saturday ,,,,"601A02;611A02;621A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Sa,Circulation Program Saturday ,,,,"601A:2;611A:2;621A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 1A
r,,CircRuntimeProgram.Sa.1,Circulation Program Saturday 1 To/From ,,,,"601A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.1,Circulation Program Saturday 1 To/From ,,,,"601A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 1A
r,,CircRuntimeProgram.Sa.2,Circulation Program Saturday 2 To/From ,,,,"611A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.2,Circulation Program Saturday 2 To/From ,,,,"611A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 1A
r,,CircRuntimeProgram.Sa.3,Circulation Program Saturday 3 To/From ,,,,"621A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.3,Circulation Program Saturday 3 To/From ,,,,"621A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 1A
r,,CircRuntimeProgram.Su,Circulation Program Sunday ,,,,"701A02;711A02;721A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,CircRuntimeProgram.Su,Circulation Program Sunday ,,,,"701A:2;711A:2;721A:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 1A
r,,CircRuntimeProgram.Su.1,Circulation Program Sunday 1 To/From ,,,,"701A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.1,Circulation Program Sunday 1 To/From ,,,,"701A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 1A
r,,CircRuntimeProgram.Su.2,Circulation Program Sunday 2 To/From ,,,,"711A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.2,Circulation Program Sunday 2 To/From ,,,,"711A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 1A
r,,CircRuntimeProgram.Su.3,Circulation Program Sunday 3 To/From ,,,,"721A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.3,Circulation Program Sunday 3 To/From ,,,,"721A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#04 76
r,,UnknownSensor11, ,,,,"047602",UnknownSensor11,,UIN,,,
w,,UnknownSensor11, ,,,,"0476",UnknownSensor11,,UIN,,,

#04 78
r,,UnknownSensor12, ,,,,"047802",UnknownSensor12,,UIN,,,
w,,UnknownSensor12, ,,,,"0478",UnknownSensor12,,UIN,,,

#A4 FD
r,,OutputMFA2, 522 Output MFA 2,,,,"A4FD02",OutputMFA2,,UIN,,,
w,,OutputMFA2, 522 Output MFA 2,,,,"A4FD",OutputMFA2,,UIN,,,

#C2 FD
r,,InputN1, 526 Input N1,,,,"C2FD02",InputN1,,UIN,,,
w,,InputN1, 526 Input N1,,,,"C2FD",InputN1,,UIN,,,

#CA FD
r,,BoilerSequence1.1, 533 Boiler Sequence 1 #1,,,,"CAFD02",BoilerSequence1.1,,_16_Temp1,,,
w,,BoilerSequence1.1, 533 Boiler Sequence 1 #1,,,,"CAFD",BoilerSequence1.1,,_16_Temp1,,,

#CB FD
r,,BoilerSequence1.2, 533 Boiler Sequence 1 #2,,,,"CBFD02",BoilerSequence1.2,,_16_Temp1,,,
w,,BoilerSequence1.2, 533 Boiler Sequence 1 #2,,,,"CBFD",BoilerSequence1.2,,_16_Temp1,,,

#D4 FD
r,,BoilerSequence2.1, 533 Boiler Sequence 2 #1,,,,"D4FD02",BoilerSequence2.1,,_16_Temp1,,,
w,,BoilerSequence2.1, 533 Boiler Sequence 2 #1,,,,"D4FD",BoilerSequence2.1,,_16_Temp1,,,

#D5 FD
r,,BoilerSequence2.2, 533 Boiler Sequence 2 #2,,,,"D5FD02",BoilerSequence2.2,,_16_Temp1,,,
w,,BoilerSequence2.2, 533 Boiler Sequence 2 #2,,,,"D5FD",BoilerSequence2.2,,_16_Temp1,,,

#DE FD
r,,SummerTimeFrom.Day, 593 SummerTime Start Day,,,,"DEFD02",,,_16_Day,,,
w,,SummerTimeFrom.Day, 593 SummerTime Start Day,,,,"DEFD",,,_16_Day,,,

#DF FD
r,,SummerTimeFrom.Month, 593 SummerTime Start Month,,,,"DFFD02",,,_16_Month,,,
w,,SummerTimeFrom.Month, 593 SummerTime Start Month,,,,"DFFD",,,_16_Month,,,

#E0 FD
r,,SummerTimeTo.Day, 594 SummerTime End Day,,,,"E0FD02",,,_16_Day,,,
w,,SummerTimeTo.Day, 594 SummerTime End Day,,,,"E0FD",,,_16_Day,,,

#E1 FD
r,,SummerTimeTo.Month, 594 SummerTime End Month,,,,"E1FD02",,,_16_Month,,,
w,,SummerTimeTo.Month, 594 SummerTime End Month,,,,"E1FD",,,_16_Month,,,

#E2 FD
r,,CalorfierSwitchDifference, 562 Calorfier Switch Difference,,,,"E2FD02",CalorfierSwitchDifference,,_16_Temp1,,,
w,,CalorfierSwitchDifference, 562 Calorfier Switch Difference,,,,"E2FD",CalorfierSwitchDifference,,_16_Temp1,,,

#E3 FD
r,,CalorfierExceeded, 561 Calorfier exceeded,,,,"E3FD02",CalorfierExceeded,,_16_Temp1,,,
w,,CalorfierExceeded, 561 Calorfier exceeded,,,,"E3FD",CalorfierExceeded,,_16_Temp1,,,

#E6 FD
r,,DeCoupleMax, 553 De-Couple Max,,,,"E6FD02",DeCoupleMax,,_16_Temp1,,,
w,,DeCoupleMax, 553 De-Couple Max,,,,"E6FD",DeCoupleMax,,_16_Temp1,,,

#E7 FD
r,,DeCoupleMin, 552 De-Couple Min,,,,"E7FD02",DeCoupleMin,,_16_Temp1,,,
w,,DeCoupleMin, 552 De-Couple Min,,,,"E7FD",DeCoupleMin,,_16_Temp1,,,

#E8 FD
r,,DeCoupleExceeded, 551 De-Couple Exceeded,,,,"E8FD02",DeCoupleExceeded,,_16_Temp1,,,
w,,DeCoupleExceeded, 551 De-Couple Exceeded,,,,"E8FD",DeCoupleExceeded,,_16_Temp1,,,

#E9 FD
r,,ContTemp, 538 Cont. Temp,,,,"E9FD02",ContTemp,,_16_Temp1,,,
w,,ContTemp, 538 Cont. Temp,,,,"E9FD",ContTemp,,_16_Temp1,,,

#EA FD
r,,ModulationMax, 536 Modulation Max,,,,"EAFD02",ModulationMax,,_16_Temp1,,,
w,,ModulationMax, 536 Modulation Max,,,,"EAFD",ModulationMax,,_16_Temp1,,,

#EB FD
r,,ModulationMin, 535 Modulation Min,,,,EBFD02",ModulationMin,,_16_Temp1,,,
w,,ModulationMin, 535 Modulation Min,,,,"EBFD",ModulationMin,,_16_Temp1,,,

#EC FD
r,,ChangeOverTime, 532 Change Over Time,,,,"ECFD02",ChangeOverTime,,_16_Temp1,,,
w,,ChangeOverTime, 532 Change Over Time,,,,"ECFD",ChangeOverTime,,_16_Temp1,,,

#ED FD
r,,SequenceChangeMode, 531 Sequence Change Mode,,,,"EDFD02",SequenceChangeMode,,_16_Temp1,,,
w,,SequenceChangeMode, 531 Sequence Change Mode,,,,"EDFD",SequenceChangeMode,,_16_Temp1,,,

#EE FD
r,,SpecialLevel, 525 Spectial Level,,,,"EEFD02",SpecialLevel,,_16_Temp1,,,
w,,SpecialLevel, 525 Spectial Level,,,,"EEFD",SpecialLevel,,_16_Temp1,,,

#EF FD
r,,InputH1, 524 Input H1,,,,"EFFD02",InputH1,,_16_Temp1,,,
w,,InputH1, 524 Input H1,,,,"EFFD",InputH1,,_16_Temp1,,,

#F0 FD
r,,VAStatus, VA Status,,,,"F0FD02",VAStatus,,_16_Temp1,,,

#F1 FD
r,,OutputVA, 523 Output VA,,,,"F1FD02",OutputVA,,_16_Temp1,,,
w,,OutputVA, 523 Output VA,,,,"F1FD",OutputVA,,_16_Temp1,,,

#F2 FD
r,,MFA1Status, MFA 1 Status,,,,"F2FD02",MFA1Status,,_16_Temp1,,,

#F3 FD
r,,OutputMFA1, 521 Output MFA 1,,,,"F3FD02",OutputMFA1,,_16_Temp1,,,
w,,OutputMFA1, 521 Output MFA 1,,,,"F3FD",OutputMFA1,,_16_Temp1,,,

#F4 FD
r,,LegioTime, 581 Legio Time	,,,,"F4FD02",LegioTime,,_16_Temp1,,,
w,,LegioTime, 581 Legio Time	,,,,"F4FD",LegioTime,,_16_Temp1,,,

#FB FD
r,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,_16_Temp1,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,_16_Temp1,,,