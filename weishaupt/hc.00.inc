# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating circuit controller,,,,,,,,,,,,

#02 00
r,,HeatDemand,Heat demand HK ,,,,"020002",HeatDemand,,_16_Temp10,,,

#04 00
r,,SupplySetValueHC,Flow temperature setpoint (heating circuit) ,,,,"040002",SupplySetValueHC,,_16_Temp10,,,

#05 00
r,,NormalSetTemp,Normal target temperature (171) ,,,,"050002",NormalSetTemp,,_16_Temp10,,,
w,,NormalSetTemp, ,,,,"0500",,,_16_Temp10,,,

#08 00
r,,ReducedSetTemp,Setback target temperature (172) ,,,,"080002",ReducedSetTemp,,_16_Temp10,,,
w,,ReducedSetTemp, ,,,,"0800",,,_16_Temp10,,,

#0C 00
r,,ExternalTemperature,Outside temperature ,,,,"0C0002",ExternalTemperature,,_16_Temp10,,,

#0D 00
r,,SupplyTemperatureWTC,Flow temperature WTC ,,,,"0D0002",SupplyTemperatureWTC,,_16_Temp10,,,

#0F 00
r,,SupplyTemperatureHC,Flow temperature (heating circuit) ,,,,"0F0002",SupplyTemperatureHC,,_16_Temp10,,,

#11 00
r,,RoomTemperature,Room temperature ,,,,"110002",RoomTemperature,,_16_Temp10,,,

#12 00
r,,RoomSetValue,Room setpoint ,,,,"120002",RoomSetValue,,_16_Temp10,,,

#13 00
r,,DHWSetpoint,Hot water setpoint (176) ,,,,"130002",,,_16_Temp10,,,
w,,DHWSetpoint, ,,,,"1300",,,_16_Temp10,,,

#1A 00
r,,AveragedExternalTemperature,Averaged outside temperature ,,,,"1A0A02",AveragedExternalTemperature,,_16_Temp10,,,

#03 00
r,,DHWSetValue,Hot water setpoint ,,,,"030002",,,_16_Temp10,,,

#0E 00
r,,DHWTemperature,DH water temperature ,,,,"0E0002",,,_16_Temp10,,,

#28 00
r,,MaxSupplyTemperature,Maximum flow temperature (352) ,,,,"280002",MaxSupplyTemperature,,_16_Temp10,,,
w,,MaxSupplyTemperature, ,,,,"2800",MaxSupplyTemperature,,_16_Temp10,,,

#2B 00
r,,MaxMixerRuntime,Maximum mixer runtime (356) ,,,,"2B0002",MaxMixerRuntime,,_16_Seconds,,,
w,,MaxMixerRuntime, ,,,,"2B00",,,_16_Seconds,,,