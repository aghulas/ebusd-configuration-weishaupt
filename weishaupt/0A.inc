# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,


#1C 0A 
r,,RoomThermostat,Room thermostat (344) ,,,,"1C0A02",RoomThermostat,,_16_Temp1,,,
w,,RoomThermostat, ,,,,"1C0A",,,_16_Temp1,,,

#14 0A
r,,FrostProtection,Room frost protection (173) ,,,,"140A02",FrostProtection,,_16_Temp10,,,
w,,FrostProtection, ,,,,"140A",,,_16_Temp10,,,

#20 0A
r,,Unknown1, ,,,,"200A02",Unknown1,,_16_Temp10,,,
w,,Unknown1, ,,,,"200A",Unknown1,,_16_Temp10,,,

#0C 0A
r,,Unknown6, ,,,,"0C0A02",Unknown6,,_16_Temp10,,,

#12 0A
r,,FloorDryingDay,Screed day (382) ,,,,"120A02",FloorDryingDay,,_16_Day,,,

#13 0A
r,,FloorDryingTemperature,Screed temperature (383) ,,,,"130A02",FloorDryingTemperature,,_16_Temp1,,,

#29 0A
r,,Unknown7, ,,,,"290A02",Unknown7,,_16_Temp10,,,
