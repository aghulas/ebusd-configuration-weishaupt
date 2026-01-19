# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,


#13 00
r0,,DHWSetpoint,Hot water setpoint (176) ,,,,"130002",DHWSetpoint,,_16_Temp10,,,
w,,DHWSetpoint, ,,,,"1300",,,_16_Temp10,,,

#03 00
r0,,DHWSetValue,Hot water setpoint ,,,,"030002",DHWSetValue,,_16_Temp10,,,

#0B 00
r0,,UnknownSensor17, ,,,,"0B0002",UnknownSensor17,,UIN,,,

#0E 00
r0,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

#01 01
r9,,DHWLegionellaDay,Legionella Protection Function (605) ,,,,"010102",DHWLegionellaDay,,_16_Legionelladay,,,
w,,DHWLegionellaDay, ,,,,"0101",,,_16_Legionelladay,,,

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

#99 01
r0,,FS_EM_R1_sensor, ,,,,"990102",FS_EM_R1_Sensor,,UIN,,,

#A9 01
r0,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
r0,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,


#10 17
r0,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"101702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"1017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 17
r0,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"111702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"1117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 17
r0,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"121702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"1217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 17
r0,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"201702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"2017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 17
r0,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"211702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"2117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 17
r0,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"221702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"2217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 17
r0,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"301702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"3017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 17
r0,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"311702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"3117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#32 17
r0,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"321702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"3217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 17
r0,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"401702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"4017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 17
r0,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"411702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"4117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 17
r0,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"421702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"4217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 17
r0,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"501702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"5017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 17
r0,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"511702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"5117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 17
r0,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"521702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"5217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 17
r0,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"601702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"6017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 17
r0,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"611702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"6117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 17
r0,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"621702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"6217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 17
r0,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"701702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"7017",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 17
r0,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"711702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"7117",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 17
r0,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"721702",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"7217",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#10 1A
r0,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#11 1A
r0,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#12 1A
r0,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#20 1A
r0,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#21 1A
r0,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#22 1A
r0,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#30 1A
r0,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r0,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#31 1A
r0,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#40 1A
r0,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#41 1A
r0,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#42 1A
r0,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#50 1A
r0,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#51 1A
r0,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#52 1A
r0,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#60 1A
r0,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#61 1A
r0,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#62 1A
r0,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#70 1A
r0,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#71 1A
r0,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#72 1A
r0,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A02",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,
w,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A",,,_8_TimeEnd,,, ,,,_8_TimeStart,,,

#FB FD
r0,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,UIN,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,UIN,,,