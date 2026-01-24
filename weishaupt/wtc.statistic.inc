# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
*r,,,,,,"5000",,,,,,,
r,,Statistic1,Statistics ,,,,"67B2A3",Byte0,s,UCH,,, ,BurnerOperationSinceLastService,s,_16_Hours,,,I45: Burner operation since last service ,Byte3,s,UCH,,, ,Byte4,s,UCH,,, ,ErrorSCOTCalibration8,s,_16_Counter,,,6 8: SCOT calibration error ,ErrorSCOTCalibration6,s,_16_Counter,,,6 6: SCOT calibration error ,ErrorSCOTCalibration5,s,_16_Counter,,,6 5: SCOT calibration error ,ErrorSCOTCalibration4,s,_16_Counter,,,6 4: SCOT calibration error 
r,,Statistic2,Statistics ,,,,"6BB2AF",Byte0,s,UCH,,, ,ErrorSCOTControlInput,s,_16_Counter,,,6 2: SCOT control signal error ,ErrorSCOTIOControl,s,_16_Counter,,,6 1: SCOT IO control error ,ErrorVoltageSupply,s,_16_Counter,,,5 3: Fehler Spannungsversorgung ,CRCErrorManufacturerParameter,s,_16_Counter,,,5 2: CRC-Fehler Herstellerparameter ,CRCErrorHeatingEngeneerParameter,s,_16_Counter,,,5 1: CRC-Fehler Heizungsfachmannparameter ,FanFaultDuringShutdown,s,_16_Counter,,,4 4: Gebläsefehler im Stillstand 
r,,Statistic3,Statistics ,,,,"7FB2BB",Byte0,s,UCH,,, ,FanFaultDuringOperation,s,_16_Counter,,,4 3: Blower malfunction during operation ,PWMPumpDefective,s,_16_Counter,,,4 2: PWM-Pumpe defective ,GasValveCycleV1V2Defective,s,_16_Counter,,,4 1: Gasventilkreis V1/V2 defective ,GPSFailureDuringSafetyTime,s,_16_Counter,,,3 7: GDW-Abfall in Sicherheitszeit ,NoGasPressureAvailable,s,_16_Counter,,,3 6: Gasdruck nicht vorhanden ,WWTurbineDefective,s,_16_Counter,,,3 5: Warmwasserturbine defective 
r,,Statistic4,Statistics ,,,,"03B2C7",Byte0,s,UCH,,, ,ExternalSensordefectiveive,s,_16_Counter,,,3 4: External sensor defective ,DHWSensorDefective,s,_16_Counter,,,3 3: Warmwasserfühler defective ,FlueGasSensorDefective,s,_16_Counter,,,3 2: Abgasfühler defective ,BoilerSensorDefective,s,_16_Counter,,,3 1: Kesselfühler defective ,H2EmergencyOffFunction,s,_16_Counter,,,2 4: H2-NotAus Function ,FlameSimulation,s,_16_Counter,,,2 3: Flammvortäuschung 
r,,Statistic5,Statistics ,,,,"17B2D3",Byte0,s,UCH,,, ,FlameFailureDuringOperation,s,_16_Counter,,,Flame failure during operation ,NoFlameFormation,s,_16_Counter,,,Keine Flammbildung ,Byte5,s,UCH,,, ,Byte6,s,UCH,,, ,Byte7,s,UCH,,, ,Byte8,s,UCH,,, ,Byte9,s,UCH,,, ,Byte10,s,UCH,,, ,Byte11,s,UCH,,, ,Byte12,s,UCH,,, 
r,,Statistic6,Statistics ,,,,"1BB2DF",Byte0,s,UCH,,, ,STWExcess,s,_8_Counter,,,STW Overtemperature ,Byte2,s,UCH,,, ,Byte3,s,UCH,,, ,Byte4,s,UCH,,, ,DayOperatingHours,s,_8_Counter,,,I41: Daily operating hours counter in 15 minutes ,Byte6,s,UCH,,, ,NumberMainsOn,s,_16_Counter,,,Number of network ,Byte9,s,UCH,,, ,Byte10,s,UCH,,, ,Byte11,s,UCH,,, ,Byte12,s,UCH,,,
#r,,Statistic7,Statistics ,,,,"B4A2EB0234",Byte0,s,UCH,,, ,Byte1,s,UCH,,, ,Byte2,s,UCH,,, ,Byte3,s,UCH,,, ,OperatingHoursBoiler,s,_24_Hours,,,Boiler operating hours ,OperatingHoursBurner,s,_16_Hours,,,I43: Burner operating hours ,SwitchHysteresisCounterBurner,s,_24_Counter,,,I42: Burner switching cycle counter ,Byte12,s,UCH,,, 

r,,BurnerOperationSinceLastService,I45: Burner operation since last service ,,,,"AB12A3",,s,_8_Skip,,, ,,s,_16_Hours,,,
r,,StatisticUkn01,Unknown ,,,,"AD12A5",,s,_8_Skip,,, ,,s,_16_Hours,,,
r,,ErrorSCOTCalibration8,6 8: SCOT calibration error ,,,,"AF12A7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration6,6 6: SCOT calibration error ,,,,"A112A9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration5,6 5: SCOT calibration error ,,,,"A312AB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTCalibration4,6 4: SCOT calibration error ,,,,"A512AD",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,ErrorSCOTControlInput,6 2: SCOT control signal error ,,,,"A712AF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorSCOTIOControl,6 1: Fehler SCOT IO-Regelung ,,,,"B912B1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,ErrorVoltagSupply,5 3: Fehler Spannungsversorgung ,,,,"BB12B3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,CRCErrorManufacturerParameter,5 2: CRC-Fehler Herstellerparameter ,,,,"BD12B5",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,CRCErrorHeatingEngeneerParameter,5 1: CRC-Fehler Heizungsfachmannparameter ,,,,"BF12B7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FanFaultDuringShutdown,4 4: Gebläsefehler im Stillstand ,,,,"B112B9",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,FanFaultDuringOperation,4 3: Blower malfunction during operation ,,,,"B312BB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,PWMPumpDefective,4 2: PWM-Pumpe defective ,,,,"B512BD",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,GasValveCycleV1V2Defective,4 1: Gasventilkreis V1/V2 defective ,,,,"B712BF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,GPSFailureDuringSafetyTime,3 7: GDW-Abfall in Sicherheitszeit ,,,,"C912C1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,NoGasPressureAvailable,3 6: Gas pressure not present ,,,,"CB12C3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,WWTurbineDefective,3 5: Hot water turbine defective ,,,,"CD12C5",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,ExternalSensordefectiveive,3 4: External sensor defective ,,,,"CF12C7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,DHWSensorDefective,3 3: Hot water sensor defective ,,,,"C112C9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FlueGasSensorDefective,3 2: Exhaust gas sensor defective ,,,,"C312CB",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,BoilerSensorDefective,3 1: Boiler sensor defective ,,,,"C512CD",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,H2EmergencyOffFunction,2 4: H2 emergency stop Function ,,,,"C712CF",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,FlameSimulation,2 3: Flame simulation ,,,,"D912D1",,s,_8_Skip,,, ,,s,_16_Counter,,,

r,,FlameFailureDuringOperation,Flame failure during operation ,,,,"DB12D3",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,NoFlameFormation,No flame formation ,,,,"DD12D5",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn02,Unknown ,,,,"DF12D7",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn03,Unknown ,,,,"D112D9",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn04,Unknown ,,,,"E912E1",,s,_8_Skip,,, ,,s,_16_Counter,,,
r,,StatisticUkn05,Unknown ,,,,"EB12E3",,s,_8_Skip,,, ,,s,_16_Counter,,,
