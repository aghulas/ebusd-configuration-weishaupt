# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#02 00
r,,HeatDemand,Heat demand HK ,,,,"020002",HeatDemand,,_16_Temp10,,,

#04 00
r,,SupplyNormalSetPoint,Normal Supply SetPoint (115) ,,,,"040002",SupplyNormalSetPoint,,_16_Temp10,,,

#05 00
r,,RoomNormalTemp,Normal Room Temperature (112) ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r,,RoomSetbackTemp,Setback Room tRmperature (113) ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#0C 00
r,,OutsideTemp,Outside Temperature ,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#0D 00
r,,WTCSupplyTemp,Flow temperature WTC ,,,,"0D0002",WTCSupplyTemp,,_16_Temp10,,,

#0F 00
r,,HCSupplyTemp,Heating Circuit Supply Temperature (523) ,,,,"0F0002",HCSupplyTemp,,_16_Temp10,,,

#11 00
r,,RoomTemp,Room temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r,,RoomSetValue,Room setpoint ,,,,"120002",RoomSetValue,,_16_Temp10,,,

#13 00
r,,DHWSetpoint,Hot water setpoint (176) ,,,,"130002",DHWSetpoint,,_16_Temp10,,,
w,,DHWSetpoint, ,,,,"1300",,,_16_Temp10,,,

#1A 00
r,,OutsideWeightedTemp,Weighted Outside Temperature ,,,,"1A0A02",OutsideWeightedTemp,,_16_Temp10,,,

#03 00
r,,DHWSetValue,Hot water setpoint ,,,,"030002",DHWSetValue,,_16_Temp10,,,

#0E 00
r,,DHWTemp,Domestic Hot Water temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#28 00
r,,SupplyMaxTemp,Maximum Supply Temperature (422) ,,,,"280002",SupplyMaxTemp,,_16_Temp10,,,
w,,SupplyMaxTemp, ,,,,"2800",SupplyMaxTemp,,_16_Temp10,,,

#2B 00
r,,MixerParameter,Mixer Parameter (425) ,,,,"2B0002",MixerParameter,,_16_TempK10,,,
w,,MixerParameter, ,,,,"2B00",,,_16_TempK10,,,

#01 01
r,,LegionellaFunction,Legionella Protection Function (605) ,,,,"010102",LegionellaFunction,,_16_Legionelladay,,,
w,,LegionellaFunction, ,,,,"0101",,,_16_Legionelladay,,,

#0F 01
r,,RoomFactorP,Room Factor-P (508) ,,,,"0F0102",RoomFactorP,,_16_RoomFactorP,,,
w,,RoomFactorP, ,,,,"0F01",,,_16_RoomFactorP,,,

#09 01
r,,RoomSensorCorrection,Room Sensor Correction (101) ,,,,"090102",RoomSensorCorrection,,_16_TempK10,,,
w,,RoomSensorCorrection, ,,,,"0901",,,_16_TempK10,,,

#0E 01
r,,Gradient,Steepness (175) ,,,,"0E0102",Gradient,,_16_Gradient10,,,
w,,Gradient, ,,,,"0E01",,,_16_Gradient10,,,

#10 01
r,,SwitchOnSetting,Switch-on delay (353) ,,,,"100102",SwitchOnSetting,,_16_Minutes,,,
w,,SwitchOnSetting, ,,,,"1001",,,_16_Minutes,,,

#11 01
r,,BoilerMCBoost,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoost,,_16_TempK10,,,
w,,BoilerMCBoost, ,,,,"1101",,,_16_TempK10,,,

#12 01
r,,ProgramChooseSwitch,Program selector switch position ,,,,"120102",ProgramChooseSwitch,,_16_ProgramChooseSwitch,,,

#15 01
r,,Adaption,Adaption (507) ,,,,"150102",Adaption,,_16_OnOff2,,,
w,,Adaption, ,,,,"1501",,,_16_OnOff2,,,

#16 01
r,,SummerWinterChangeOverTemp,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
w,,SummerWinterChangeOverTemp, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r,,FloorDryingFunction,Screed function (381) ,,,,"1A0102",FloorDryingFunction,,_16_Floordrying,,,

#1B 01
r,,StartOfHoliday,Start of vacation (181) ,,,,"1B0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,StartOfHoliday, ,,,,"1B01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r,,StartOfHoliday.Day,Start of vacation Day (181) ,,,,"1B0102",StartOfHoliday.Day,,_16_HolidayDay,,,
#w,,StartOfHoliday.Day, ,,,,"1B01",,,_16_HolidayDay,,,

#1C 01
r,,StartOfHoliday.Month,Start of vacation Month (181) ,,,,"1C0102",StartOfHoliday.Month,,_16_HolidayMonth,,,
w,,StartOfHoliday.Month, ,,,,"1C0102",,,_16_HolidayMonth,,,

#1E 01
r,,EndOfHoliday, (182) ,,,,"1E0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,EndOfHoliday, ,,,,"1E01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r,,EndOfHoliday.Day, Day (182) ,,,,"1E0102",EndOfHoliday.Day,,_16_HolidayDay,,,
#w,,EndOfHoliday.Day, ,,,,"1E01",,,_16_HolidayDay,,,

#1F 01
r,,EndOfHoliday.Month, Month (182) ,,,,"1F0102",EndOfHoliday.Month,,_16_HolidayMonth,,,
w,,EndOfHoliday.Month, ,,,,"1F01",,,_16_HolidayMonth,,,

#28 01
r,,TypeOfConstruction,Construction method (371) ,,,,"280102",TypeOfConstruction,,_16_Constructiontype,,,
w,,TypeOfConstruction, ,,,,"2801",,,_16_Constructiontype,,,

#2B 01
r,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
w,,SupplyMinTemp, ,,,,"2B01",SupplyMinTemp,,_16_Temp10,,,

#2D 01
r,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r,,WtcDelay,WTC delay(430) ,,,,"2E0102",WtcDelay,,_16_Minutes,,,
w,,WtcDelay, ,,,,"2E01",,,_16_Minutes,,,

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
r,,Reduct,Reduct (501) ,,,,"320102",Reduct,,_16_TempReduced,,,
w,,Reduct, ,,,,"3201",,,_16_TempReduced,,,

#33 01
#r,,DHWMin,Hot water Min (177) ,,,,"330102",DHWMin,,_16_Temp10,,,
#w,,DHWMin, ,,,,"3301",,,_16_Temp10,,,

#34 01
#r,,DHWMaxTemp, DHW maximum Temp (601) ,,,,"340102",DHWMaxTemp,,_16_Temp10,,,
#w,,DHWMaxTemp, ,,,,"3401",,,_16_Temp10,,,

#35 01
#r,,DHWMode,WW-Mode (361) ,,,,"350102",DHWMode,,_16_DhwMode,,,
#w,,DHWMode, ,,,,"3501",,,_16_DhwMode,,,

#37 01
r,,DHWOperation,WW operation (360) ,,,,"370102",DHWOperation,,_16_DhwOperation,,,
w,,DHWOperation, ,,,,"3701",,,_16_DhwOperation,,,

#41 01
r,,Unknown2, ,,,,"410102",Unknown2,,_16_Temp10,,,
w,,Unknown2, ,,,,"4101",Unknown2,,_16_Temp10,,,

#8F 01
r,,Unknown15, ,,,,"8F0102",Unknown15,,_16_Temp10,,,

#99 01
r,,Unknown9, ,,,,"990102",Unknown9,,HCD:2,,,

#A9 01
r,,Unknown13, ,,,,"A90102",Unknown13,,_16_Temp10,,,

#AA 01
r,,Unknown14, ,,,,"AA0102",Unknown14,,_16_Temp10,,,




#85 02
r,,Unknown4, ,,,,"850202",Unknown4,,_16_Temp10,,,
w,,Unknown4, ,,,,"8502",Unknown4,,_16_Temp10,,,


#59 03
r,,Unknown10, ,,,,"590302",Unknown10,,_16_Temp10,,,

#E9 04
r,,Unknown16, ,,,,"E90402",Unknown16,,_16_Temp10,,,


#73 09
r,,Unknown3, ,,,,"730902",Unknown2,,_16_Temp10,,,
w,,Unknown3, ,,,,"7309",Unknown2,,_16_Temp10,,,

#81 09
r,,Unknown5, ,,,,"B10902",Unknown5,,UIN,,,
w,,Unknown5, ,,,,"B109",Unknown5,,UIN,,,


#1C 0A 
r,,RoomThermostat,Room thermostat (344) ,,,,"1C0A02",RoomThermostat,,_16_Temp1,,,
w,,RoomThermostat, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r,,FrostProtection,Room frost protection (173) ,,,,"140A02",FrostProtection,,_16_Temp10,,,
w,,FrostProtection, ,,,,"140A",,,_16_Temp10,,,

#0C 0A
r,,OutsideBlendedTemp,Blended Outside Temperature ,,,,"0C0A02",OutsideBlendedTemp,,_16_Temp10,,,

#12 0A
r,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r,,FloorDryingTemp,Screed temperature (383) ,,,,"130A02",FloorDryingTemp,,_16_Temp1,,,

#20 0A
r,,Unknown1, ,,,,"200A02",Unknown1,,_16_Temp10,,,
w,,Unknown1, ,,,,"200A",Unknown1,,_16_Temp10,,,

#29 0A
r,,Unknown7, ,,,,"290A02",Unknown7,,_16_Temp10,,,


#10 14
r,,HP1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"101402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Mo.1,Heating Program 1 Mo 1 Start/End (User 121) ,,,,"1014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 14
r,,HP1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"111402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Mo.2,Heating Program 1 Mo 2 Start/End (User 121) ,,,,"1114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 14
r,,HP1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"121402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Mo.3,Heating Program 1 Mo 3 Start/End (User 121) ,,,,"1214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 14
r,,HP1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"201402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Tu.1,Heating Program 1 Tu 1 Start/End (User 122) ,,,,"2014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 14
r,,HP1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"211402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Tu.2,Heating Program 1 Tu 2 Start/End (User 122) ,,,,"2114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 14
r,,HP1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"221402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Tu.3,Heating Program 1 Tu 3 Start/End (User 122) ,,,,"2214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 14
r,,HP1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"301402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.We.1,Heating Program 1 We 1 Start/End (User 123) ,,,,"3014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 14
r,,HP1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"311402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.We.2,Heating Program 1 We 2 Start/End (User 123) ,,,,"3114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 14
r,,HP1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"321402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.We.3,Heating Program 1 We 3 Start/End (User 123) ,,,,"3214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 14
r,,HP1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"401402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Th.1,Heating Program 1 Th 1 Start/End (User 124) ,,,,"4014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 14
r,,HP1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"411402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Th.2,Heating Program 1 Th 2 Start/End (User 124) ,,,,"4114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 14
r,,HP1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"421402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Th.3,Heating Program 1 Th 3 Start/End (User 124) ,,,,"4214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 14
r,,HP1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"501402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Fr.1,Heating Program 1 Fr 1 Start/End (User 125) ,,,,"5014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 14
r,,HP1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"511402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Fr.2,Heating Program 1 Fr 2 Start/End (User 125) ,,,,"5114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 14
r,,HP1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"521402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Fr.3,Heating Program 1 Fr 3 Start/End (User 125) ,,,,"5214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 14
r,,HP1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"601402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Sa.1,Heating Program 1 Sa 1 Start/End (User 126) ,,,,"6014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 14
r,,HP1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"611402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Sa.2,Heating Program 1 Sa 2 Start/End (User 126) ,,,,"6114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 14
r,,HP1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"621402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Sa.3,Heating Program 1 Sa 3 Start/End (User 126) ,,,,"6214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 14
r,,HP1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"701402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Su.1,Heating Program 1 Su 1 Start/End (User 127) ,,,,"7014",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 14
r,,HP1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"711402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Su.2,Heating Program 1 Su 2 Start/End (User 127) ,,,,"7114",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 14
r,,HP1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"721402",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP1.Su.3,Heating Program 1 Su 3 Start/End (User 127) ,,,,"7214",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#10 15
r,,HP2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"101502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Mo.1,Heating Program 2 Mo 1 Start/End (User 131) ,,,,"1015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 15
r,,HP2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"111502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Mo.2,Heating Program 2 Mo 2 Start/End (User 131) ,,,,"1115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 15
r,,HP2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"121502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Mo.3,Heating Program 2 Mo 3 Start/End (User 131) ,,,,"1215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 15
r,,HP2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"201502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Tu.1,Heating Program 2 Tu 1 Start/End (User 132) ,,,,"2015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 15
r,,HP2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"211502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Tu.2,Heating Program 2 Tu 2 Start/End (User 132) ,,,,"2115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 15
r,,HP2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"221502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Tu.3,Heating Program 2 Tu 3 Start/End (User 132) ,,,,"2215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 15
r,,HP2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"301502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.We.1,Heating Program 2 We 1 Start/End (User 133) ,,,,"3015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 15
r,,HP2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"311502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.We.2,Heating Program 2 We 2 Start/End (User 133) ,,,,"3115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 15
r,,HP2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"321502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.We.3,Heating Program 2 We 3 Start/End (User 133) ,,,,"3215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 15
r,,HP2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"401502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Th.1,Heating Program 2 Th 1 Start/End (User 134) ,,,,"4015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 15
r,,HP2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"411502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Th.2,Heating Program 2 Th 2 Start/End (User 134) ,,,,"4115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 15
r,,HP2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"421502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Th.3,Heating Program 2 Th 3 Start/End (User 134) ,,,,"4215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 15
r,,HP2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"501502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Fr.1,Heating Program 2 Fr 1 Start/End (User 135) ,,,,"5015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r,,HP2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"511502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Fr.2,Heating Program 2 Fr 2 Start/End (User 135) ,,,,"5115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 15
r,,HP2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"521502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Fr.3,Heating Program 2 Fr 3 Start/End (User 135) ,,,,"5215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 15
r,,HP2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"601502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Sa.1,Heating Program 2 Sa 1 Start/End (User 136) ,,,,"6015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 15
r,,HP2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"611502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Sa.2,Heating Program 2 Sa 2 Start/End (User 136) ,,,,"6115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 15
r,,HP2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"621502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Sa.3,Heating Program 2 Sa 3 Start/End (User 136) ,,,,"6215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 15
r,,HP2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"701502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Su.1,Heating Program 2 Su 1 Start/End (User 137) ,,,,"7015",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 15
r,,HP2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"711502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Su.2,Heating Program 2 Su 2 Start/End (User 137) ,,,,"7115",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 15
r,,HP2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"721502",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,HP2.Su.3,Heating Program 2 Su 3 Start/End (User 137) ,,,,"7215",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#10 17
r,,WP.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"101702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"1017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 17
r,,WP.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"111702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"1117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 17
r,,WP.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"121702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"1217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 17
r,,WP.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"201702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"2017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 17
r,,WP.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"211702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"2117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 17
r,,WP.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"221702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"2217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 17
r,,WP.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"301702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"3017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 17
r,,WP.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"311702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"3117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 17
r,,WP.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"321702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"3217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 17
r,,WP.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"401702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"4017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 17
r,,WP.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"411702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"4117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 17
r,,WP.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"421702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"4217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 17
r,,WP.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"501702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"5017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 17
r,,WP.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"511702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"5117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 17
r,,WP.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"521702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"5217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 17
r,,WP.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"601702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"6017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 17
r,,WP.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"611702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"6117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 17
r,,WP.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"621702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"6217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 17
r,,WP.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"701702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"7017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 17
r,,WP.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"711702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"7117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 17
r,,WP.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"721702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,WP.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"7217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#10 1A
r,,ZP.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 1A
r,,ZP.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 1A
r,,ZP.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 1A
r,,ZP.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 1A
r,,ZP.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 1A
r,,ZP.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 1A
r,,ZP.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r,,ZP.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r,,ZP.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 1A
r,,ZP.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 1A
r,,ZP.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 1A
r,,ZP.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 1A
r,,ZP.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 1A
r,,ZP.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 1A
r,,ZP.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 1A
r,,ZP.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 1A
r,,ZP.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 1A
r,,ZP.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 1A
r,,ZP.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 1A
r,,ZP.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 1A
r,,ZP.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,ZP.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,


#04 76
r,,Unknown11, ,,,,"047602",Unknown11,,SIN,,,
w,,Unknown11, ,,,,"0476",Unknown11,,SIN,,,

#04 78
r,,Unknown12, ,,,,"047802",Unknown12,,SIN,,,
w,,Unknown12, ,,,,"0478",Unknown12,,SIN,,,

#FB FD
r,,Unknown8, ,,,,"FBFD02",Unknown8,,SIN,,,
w,,Unknown8, ,,,,"FBFD",Unknown8,,SIN,,,