# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#01 01
r,,LegionnairesFunction,Legionella function (363) ,,,,"010102",,,_16_Legionnairesday,,,
w,,LegionnairesFunction, ,,,,"0101",,,_16_Legionnairesday,,,

#0F 01
r,,RoomInfluence,Spatial influence (341) ,,,,"0F0102",RoomInfluence,,_16_Roominfluence,,,
w,,RoomInfluence, ,,,,"0F01",,,_16_Roominfluence,,,

#09 01
r,,RoomSensorCorrection,Room Sensor Correction (342) ,,,,"090102",RoomSensorCorrection,,_16_Temp10,,,
w,,RoomSensorCorrection, ,,,,"0901",,,_16_Temp10,,,

#0E 01
r,,Gradient,Steepness (175) ,,,,"0E0102",Gradient,,_16_Gradient10,,,
w,,Gradient, ,,,,"0E01",,,_16_Gradient10,,,

#10 01
r,,SwitchOnSetting,Switch-on delay (353) ,,,,"100102",SwitchOnSetting,,_16_Minutes,,,
w,,SwitchOnSetting, ,,,,"1001",,,_16_Minutes,,,

#11 01
r,,BoilerMKIncrease,Boiler MK increase(355) ,,,,"110102",BoilerMKIncrease,,_16_Temp10,,,
w,,BoilerMKIncrease, ,,,,"1101",,,_16_Temp10,,,

#12 01
r,,ProgramChooseSwitch,Program selector switch position ,,,,"120102",ProgramChooseSwitch,,_16_ProgramChooseSwitch,,,

#15 01
r,,Adaption,Adaption (343) ,,,,"150102",Adaption,,_16_OnOff,,,
w,,Adaption, ,,,,"1501",,,_16_OnOff,,,

#16 01
r,,SummerWinterChangeOverTemperature,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemperature,,_16_Temp10,,,
w,,SummerWinterChangeOverTemperature, ,,,,"1601",,,_16_Temp10,,,

#1A 01
r,,FloorDryingFunction,Screed function (381) ,,,,"1A0102",FloorDryingFunction,,_16_Floordrying,,,

#1B 01
r,,StartOfHoliday,Start of vacation (181) ,,,,"1B0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,StartOfHoliday, ,,,,"1B01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r,,StartOfHoliday.Day,Start of vacation Day (181) ,,,,"1B0102",,,_16_HolidayDay,,,
w,,StartOfHoliday.Day, ,,,,"1B01",,,_16_HolidayDay,,,

#1C 01
r,,StartOfHoliday.Month,Start of vacation Month (181) ,,,,"1C0102",,,_16_HolidayMonth,,,
w,,StartOfHoliday.Month, ,,,,"1C0102",,,_16_HolidayMonth,,,

#1E 01
r,,EndOfHoliday, (182) ,,,,"1E0104",Day,,_16_HolidayDay,,,Day ,Month,,_16_HolidayMonth,,,Month
w,,EndOfHoliday, ,,,,"1E01",Day,,_16_HolidayDay,,, ,Month,,_16_HolidayMonth,,,
r,,EndOfHoliday.Day, Day (182) ,,,,"1E0102",,,_16_HolidayDay,,,
w,,EndOfHoliday.Day, ,,,,"1E01",,,_16_HolidayDay,,,

#1F 01
r,,EndOfHoliday.Month, Month (182) ,,,,"1F0102",,,_16_HolidayMonth,,,
w,,EndOfHoliday.Month, ,,,,"1F01",,,_16_HolidayMonth,,,

#28 01
r,,TypeOfConstruction,Construction method (371) ,,,,"280102",,,_16_Constructiontype,,,
w,,TypeOfConstruction, ,,,,"2801",,,_16_Constructiontype,,,

#2B 01
r,,MinSupplyTemperature,Minimum flow temperature (351) ,,,,"2B0102",MinSupplyTemperature,,_16_Temp10,,,
w,,MinSupplyTemperature, ,,,,"2B01",MinSupplyTemperature,,_16_Temp10,,,

#2D 01
r,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r,,SwitchOffSetting,Switch-off delay (354) ,,,,"2E0102",SwitchOffSetting,,_16_Minutes,,,
w,,SwitchOffSetting, ,,,,"2E01",,,_16_Minutes,,,

#2F 01
r,,MaxPumpSpeed,Max Pump speed (358) ,,,,"2F0102",MaxPumpSpeed,,_16_Percent,,,
w,,MaxPumpSpeed, ,,,,"2F01",,,_16_Percent,,

#30 01,
r,,MinPumpSpeed,Min Pump speed (359) ,,,,"300102",MinPumpSpeed,,_16_Percent,,,
w,,MinPumpSpeed, ,,,,"3001",,,_16_Percent,,,

#31 01
r,,SpeedVariation,Speed ​​variant (357) ,,,,"310102",SpeedVariation,,_16_Speedvariation,,,
w,,SpeedVariation, ,,,,"3101",,,_16_Speedvariation,,,

#32 01
r,,Reduces,Reduced (350) ,,,,"320102",Reduces,,_16_TempReduced,,,
w,,Reduces, ,,,,"3201",,,_16_TempReduced,,,

#33 01
r,,DHWMin,Hot water Min (177) ,,,,"330102",,,_16_Temp10,,,
w,,DHWMin, ,,,,"3301",,,_16_Temp10,,,

#34 01
r,,MaxDHWTemp,Max-WW-Temp (362) ,,,,"340102",,,_16_Temp10,,,
w,,MaxDHWTemp, ,,,,"3401",,,_16_Temp10,,,

#35 01
r,,DHWMode,WW-Mode (361) ,,,,"350102",,,_16_DhwMode,,,
w,,DHWMode, ,,,,"3501",,,_16_DhwMode,,,

#37 01
r,,DHWOperation,WW operation (360) ,,,,"370102",DHWOperation,,_16_DhwOperation,,,
w,,DHWOperation, ,,,,"3701",,,_16_DhwOperation,,,

#41 01
r,,Unknown2, ,,,,"410102",Unknown2,,_16_Temp10,,,
w,,Unknown2, ,,,,"4101",Unknown2,,_16_Temp10,,,

#99 01
r,,Unknown9, ,,,,"990102",Unknown9,,_16_Temp10,,,