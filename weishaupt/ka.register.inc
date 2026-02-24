# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,

#01 00
r,,ErrorStatus,Error Status ,,,,"010002",ErrorCode,,UIN,,,

#02 00
r,,HeatDemandTemp,Heat demand HK ,,,,"020002",HeatDemandTemp,,_16_Temp10,,,

#03 00
r,,DHWSetValue,Hot water setpoint ,,,,"030002",DHWSetValue,,_16_Temp10,,,

#04 00
r,,SupplySetPointTemp,Supply SetPoint (121) ,,,,"040002",SupplySetPointTemp,,_16_Temp10,,,

#05 00
r,,RoomNormalTemp,Normal Room Temperature (112) ,,,,"050002",RoomNormalTemp,,_16_Temp10,,,
w,,RoomNormalTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r,,RoomSetbackTemp,Setback Room tRmperature (113) ,,,,"080002",RoomSetbackTemp,,_16_Temp10,,,
w,,RoomSetbackTemp, ,,,,"0800",,,_16_Temp10,,,

#0B 00
r,,UnknownSensor15, ,,,,"0B0002",UnknownSensor15,,UIN,,,

#0C 00
r,,OutsideTemp,B1 Outside Sensor Temperature,,,,"0C0002",OutsideTemp,,_16_Temp10,,,

#0D 00
r,,SupplyWTCTemp,Flow temperature WTC ,,,,"0D0002",SupplyWTCTemp,,_16_Temp10,,,

#0E 00
r,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#0F 00
r,,SupplyHCTemp,B6 Supply Sensor Temperature,,,,"0F0002",SupplyHCTemp,,_16_Temp10,,,

#10 00
r,,ConfigStatus,Configuration Status,,,,"100002",ConfigCode,,UIN,,,

#11 00
r,,RoomTemp,Room Sensor Temperature ,,,,"110002",RoomTemp,,_16_Temp10,,,

#12 00
r,,RoomSetPointTemp,Room setpoint ,,,,"120002",RoomSetPointTemp,,_16_Temp10,,,

#13 00
r,,DHWSetpoint,Hot water setpoint (176) ,,,,"130002",DHWSetpoint,,_16_Temp10,,,
w,,DHWSetpoint, ,,,,"1300",,,_16_Temp10,,,

#1A 00
r,,OutsideBlendedTemp,Weighted Outside Temperature ,,,,"1A0A02",OutsideBlendedTemp,,_16_Temp10,,,

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
r,,MixerParameterTemp,Mixer Parameter (425) ,,,,"2B0002",MixerParameterTemp,,_16_TempK10,,,
w,,MixerParameterTemp, ,,,,"2B00",,,_16_TempK10,,,

#2C 00
r,,ModulationStatus,Modulation ,,,,"2C0002",ModulationStatus,,_16_Percent,,,
w,,ModulationStatus, ,,,,"2C00",,,_16_Percent,,,

#2D 00
r,,DHWExceeded,576 DHW exceeded ,,,,"2D0002",DHWExceeded,,_16_Temp10,,,
w,,DHWExceeded,576 DHW exceeded ,,,,"2D00",DHWExceeded,,_16_Temp10,,,

#52 00
r,,MixerPump,B3 DHW Sensor Temperature ,,,,"520002",MixerPump,,_16_OnOff,,,

#56 00
r,,ValveOpening,B3 DHW Sensor Temperature ,,,,"560002",ValveOpening,,_16_OnOff,,,

#57 00
r,,ValveClosing,B3 DHW Sensor Temperature ,,,,"570002",ValveClosing,,_16_OnOff,,,

#76 00
r,,ColorifierTopTemp,Calorifier Top Temp B20 ,,,,"760002",ColorifierTopTemp,,_16_Temp10,,,
w,,ColorifierTopTemp,Calorifier Top Temp B20 ,,,,"7600",ColorifierTopTemp,,_16_Temp10,,,

#78 00
r,,ColorifierBottomTemp,Calorifier Bottom Temp B21 ,,,,"780002",ColorifierBottomTemp,,_16_Temp10,,,
w,,ColorifierBottomTemp,Calorifier Bottom Temp B21 ,,,,"7800",ColorifierBottomTemp,,_16_Temp10,,,

#81 00
r,,ReductionSolarYied,114 Target value reduction for solar yield ,,,,"810002",ReductionSolarYied,,_16_TempK10,,,
w,,ReductionSolarYied, ,,,,"8100",ReductionSolarYied,,_16_TempK10,,,

#01 01
r,,DHWLegionellaDay,Legionella Protection Function (605) ,,,,"010102",DHWLegionellaDay,,_16_Legionelladay,,,
w,,DHWLegionellaDay, ,,,,"0101",,,_16_Legionelladay,,,

#0F 01
r,,RoomFactorCurve,Room Factor-P (508) ,,,,"0F0102",RoomFactorCurve,,_16_RoomFactor,,,
w,,RoomFactorCurve, ,,,,"0F01",,,_16_RoomFactor,,,

#09 01
r,,RoomSensorCorrectionTemp,Room Sensor Correction (101) ,,,,"090102",RoomSensorCorrectionTemp,,_16_TempK10,,,
w,,RoomSensorCorrectionTemp, ,,,,"0901",,,_16_TempK10,,,

#0E 01
r,,GradientCurve,Steepness (175) ,,,,"0E0102",GradientCurve,,_16_Gradient10,,,
w,,GradientCurve, ,,,,"0E01",,,_16_Gradient10,,,

#10 01
r,,SwitchOnRuntime,Switch-on delay (353) ,,,,"100102",SwitchOnRuntime,,_16_Minutes,,,
w,,SwitchOnRuntime, ,,,,"1001",,,_16_Minutes,,,

#11 01
r,,BoilerMCBoostTemp,Boiler MC Boost(424) ,,,,"110102",BoilerMCBoostTemp,,_16_TempK10,,,
w,,BoilerMCBoostTemp, ,,,,"1101",,,_16_TempK10,,,

#12 01
r,,ProgramMode,Program selector switch position ,,,,"120102",ProgramMode,,_16_ProgramMode,,,
w,,ProgramMode, ,,,,"1201",,,_16_ProgramMode,,,

#15 01
r,,AdaptionMode,Adaption (507) ,,,,"150102",AdaptionMode,,_16_OnOff,,,
w,,AdaptionMode, ,,,,"1501",,,_16_OnOff,,,

#16 01
r,,SummerWinterChangeOverTemp,Summer/winter changeover temperature (174) ,,,,"160102",SuWiChangeOverTemp,,_16_Temp10,,,
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
r,,TypeOfConstructionMode,Construction method (371) ,,,,"280102",TypeOfConstructionMode,,_16_Constructiontype,,,
w,,TypeOfConstructionMode, ,,,,"2801",,,_16_Constructiontype,,,

#29 01
r,,NormalSplSetTemp,115 Normal SPL-Set,,,,"290102",NormalSplSetTemp,,_16_Temp10,,,
w,,NormalSplSetTemp,115 Normal SPL-Set,,,,"2901",NormalSplSetTemp,,_16_Temp10,,,

#2A 01
r,,ReducedSplSetTemp,116 Reduced SPL-Set,,,,"2A0102",ReducedSplSetTemp,,_16_Temp10,,,
w,,ReducedSplSetTemp,116 Reduced SPL-Setl,,,,"2A01",ReducedSplSetTemp,,_16_Temp10,,,

#2B 01
r,,SupplyMinTemp,Minimum Supply Temperature (421) ,,,,"2B0102",SupplyMinTemp,,_16_Temp10,,,
w,,SupplyMinTemp, ,,,,"2B01",SupplyMinTemp,,_16_Temp10,,,

#2D 01
r,,HolidayTemp,Holiday temperature (183) ,,,,"2D0102",,,_16_TempReduced,,,
w,,HolidayTemp, ,,,,"2D01",,,_16_TempReduced,,,

#2E 01
r,,WtcDelayRuntime,WTC delay(430) ,,,,"2E0102",WtcDelayRuntime,,_16_Minutes,,,
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
r,,ReductTemp,ReductTemp (501) ,,,,"320102",ReductTemp,,_16_TempReduced,,,
w,,ReductTemp, ,,,,"3201",,,_16_TempReduced,,,

#33 01
r,,DHWMinTemp,Hot water Min (177) ,,,,"330102",DHWMinTemp,,_16_Temp10,,,
w,,DHWMinTemp, ,,,,"3301",,,_16_Temp10,,,

#34 01
r,,DHWMaxTemp, DHW maximum Temp (601) ,,,,"340102",DHWMaxTemp,,_16_Temp10,,,
w,,DHWMaxTemp, ,,,,"3401",,,_16_Temp10,,,

#35 01
r,,DHWMode,WW-Mode (361) ,,,,"350102",DHWMode,,_16_DhwMode,,,
w,,DHWMode, ,,,,"3501",,,_16_DhwMode,,,

#37 01
r,,DHWOperationMode,WW operation (360) ,,,,"370102",DHWOperationMode,,_16_DHWOperationMode,,,
w,,DHWOperationMode, ,,,,"3701",,,_16_DHWOperationMode,,,

#3D 01
r,,HolidayTempLevel,142 Holiday Temperature Level,,,,"3D0102",HolidayTempLevel,,_16_Temp10,,,
w,,HolidayTempLevel,142 Holiday Temperature Level,,,,"3D01",HolidayTempLevel,,_16_Temp10,,,

#40 01
r,,DHWSwitchDiff,575 DHW Switch Diff	,,,,"400102",ControlVariationMode,,_16_TempK10,,,
w,,DHWSwitchDiff,575 DHW Switch Diff	,,,,"4001",ControlVariationMode,,_16_TempK10,,,

#41 01
r,,ControlVariationMode,Control Variation (318),,,,"410102",ControlVariationMode,,_16_CVariation,,,
w,,ControlVariationMode, ,,,,"4101",ControlVariationMode,,_16_CVariation,,,

#81 01
r,,DHWLoadTime,577 WW Load Time,,,,"800102",DHWLoadTime,,_16_Minutes,,,
w,,DHWLoadTime,577 WW Load Time,,,,"8001",DHWLoadTime,,_16_Minutes,,,

#81 01
r,,DHWMaxTemp2,574 DHW-Max,,,,"810102",DHWMaxTemp2,,_16_Temp10,,,
w,,DHWMaxTemp2,574 DHW-Max,,,,"8101",DHWMaxTemp2,,_16_Temp10,,,
		
#8F 01
r,,KaVersion, ,,,,"8F0102",KaVersion,,SIN,,,
