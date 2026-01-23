# type (r;w;u;1-9),class,name,comment,QQ,ZZ,PBSB,ID,field1,part (m;s),type / templates,divider / values,unit,comment,field2,part (m;s),type / templates,divider / values,unit,comment,field3,part (m;s),type / templates,divider / values,unit,comment,field4,part (m;s),type / templates,divider / values,unit,comment,field5,part (m;s),type / templates,divider / values,unit,comment,field6,part (m;s),type / templates,divider / values,unit,comment,field7,part (m;s),type / templates,divider / values,unit,comment,field8,part (m;s),type / templates,divider / values,unit,comment
#,,Process values ​​heating Circuit controller,,,,,,,,,,,,
*r,,,,,,"0902",,,,,,,
*w,,,,,,"0903",,,,,,,


#13 00
r,,DHWSetpoint,Hot water setpoint (176) ,,,,"130002",DHWSetpoint,,_16_Temp10,,,
w,,DHWSetpoint, ,,,,"1300",,,_16_Temp10,,,

#03 00
r,,DHWSetValue,Hot water setpoint ,,,,"030002",DHWSetValue,,_16_Temp10,,,

#0E 00
r,,DHWTemp,B3 DHW Sensor Temperature ,,,,"0E0002",DHWTemp,,_16_Temp10,,,

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
r,,FS_EM_R1_sensor, ,,,,"990102",FS_EM_R1_Sensor,,UIN,,,

#A9 01
r,,UnknownSensor13, ,,,,"A90102",UnknownSensor13,,UIN,,,

#AA 01
r,,UnknownSensor14, ,,,,"AA0102",UnknownSensor14,,UIN,,,

#10;11;12 17
r,,DHWRuntimeProgram.Mo,Hot Water Program Monday ,,,,"101702;111702;121702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Mo,Hot Water Program Monday ,,,,"1017:2;1117:2;1217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#10 17
r,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"101702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.1,Hot Water Program Mo 1 Start/End (User 151) ,,,,"1017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 17
r,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"111702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.2,Hot Water Program Mo 2 Start/End (User 151) ,,,,"1117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 17
r,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"121702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Mo.3,Hot Water Program Mo 3 Start/End (User 151) ,,,,"1217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20;21;22 17
r,,DHWRuntimeProgram.Tu,Hot Water Program Tuesday ,,,,"201702;211702;221702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Tu,Hot Water Program Tuesday ,,,,"2017:2;2117:2;2217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#20 17
r,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"201702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.1,Hot Water Program Tu 1 Start/End (User 152) ,,,,"2017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 17
r,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"211702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.2,Hot Water Program Tu 2 Start/End (User 152) ,,,,"2117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 17
r,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"221702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Tu.3,Hot Water Program Tu 3 Start/End (User 152) ,,,,"2217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30;31;32 17
r,,DHWRuntimeProgram.We,Hot Water Program Wednesday ,,,,"301702;311702;321702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.We,Hot Water Program Wendesday ,,,,"3017:2;3117:2;3217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#30 17
r,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"301702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.1,Hot Water Program We 1 Start/End (User 153) ,,,,"3017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 17
r,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"311702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.2,Hot Water Program We 2 Start/End (User 153) ,,,,"3117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#32 17
r,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"321702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.We.3,Hot Water Program We 3 Start/End (User 153) ,,,,"3217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40;41;42 17
r,,DHWRuntimeProgram.Th,Hot Water Program Thursday ,,,,"401702;411702;421702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Th,Hot Water Program Thursday ,,,,"4017:2;4117:2;4217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#40 17
r,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"401702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.1,Hot Water Program Th 1 Start/End (User 154) ,,,,"4017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 17
r,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"411702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.2,Hot Water Program Th 2 Start/End (User 154) ,,,,"4117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 17
r,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"421702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Th.3,Hot Water Program Th 3 Start/End (User 154) ,,,,"4217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50;51;52 17
r,,DHWRuntimeProgram.Fr,Hot Water Program Friday ,,,,"501702;511702;521702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Fr,Hot Water Program Friday ,,,,"5017:2;5117:2;5217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#50 17
r,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"501702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.1,Hot Water Program Fr 1 Start/End (User 155) ,,,,"5017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 17
r,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"511702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.2,Hot Water Program Fr 2 Start/End (User 155) ,,,,"5117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#52 17
r,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"521702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Fr.3,Hot Water Program Fr 3 Start/End (User 155) ,,,,"5217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60;61;62 17
r,,DHWRuntimeProgram.Sa,Hot Water Program Saturday ,,,,"601702;611702;621702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Sa,Hot Water Program Saturday ,,,,"6017:2;6117:2;6217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#60 17
r,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"601702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.1,Hot Water Program Sa 1 Start/End (User 156) ,,,,"6017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 17
r,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"611702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.2,Hot Water Program Sa 2 Start/End (User 156) ,,,,"6117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 17
r,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"621702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Sa.3,Hot Water Program Sa 3 Start/End (User 156) ,,,,"6217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70;71;72 17
r,,DHWRuntimeProgram.Su,Hot Water Program Sunday ,,,,"701702;711702;721702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 
w,,DHWRuntimeProgram.Su,Hot Water Program Sunday ,,,,"7017:2;7117:2;7217:2",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, ,,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,, 

#70 17
r,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"701702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.1,Hot Water Program Su 1 Start/End (User 157) ,,,,"7017",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 17
r,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"711702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.2,Hot Water Program Su 2 Start/End (User 157) ,,,,"7117",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 17
r,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"721702",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,DHWRuntimeProgram.Su.3,Hot Water Program Su 3 Start/End (User 157) ,,,,"7217",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#10 1A
r,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.1,Circulation Program Mo 1 Start/End (User 161) ,,,,"101A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#11 1A
r,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.2,Circulation Program Mo 2 Start/End (User 161) ,,,,"111A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#12 1A
r,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Mo.3,Circulation Program Mo 3 Start/End (User 161) ,,,,"121A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#20 1A
r,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.1,Circulation Program Tu 1 Start/End (User 162) ,,,,"201A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#21 1A
r,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.2,Circulation Program Tu 2 Start/End (User 162) ,,,,"211A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#22 1A
r,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Tu.3,Circulation Program Tu 3 Start/End (User 162) ,,,,"221A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#30 1A
r,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.1,Circulation Program We 1 Start/End (User 163) ,,,,"301A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 1A
r,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.2,Circulation Program We 2 Start/End (User 163) ,,,,"311A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#31 1A
r,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.We.3,Circulation Program We 3 Start/End (User 163) ,,,,"321A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#40 1A
r,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.1,Circulation Program Th 1 Start/End (User 164) ,,,,"401A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#41 1A
r,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.2,Circulation Program Th 2 Start/End (User 164) ,,,,"411A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#42 1A
r,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Th.3,Circulation Program Th 3 Start/End (User 164) ,,,,"421A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#50 1A
r,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.1,Circulation Program Fr 1 Start/End (User 165) ,,,,"501A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#51 1A
r,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.2,Circulation Program Fr 2 Start/End (User 165) ,,,,"511A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#52 1A
r,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Fr.3,Circulation Program Fr 3 Start/End (User 165) ,,,,"521A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#60 1A
r,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.1,Circulation Program Sa 1 Start/End (User 166) ,,,,"601A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#61 1A
r,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.2,Circulation Program Sa 2 Start/End (User 166) ,,,,"611A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#62 1A
r,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Sa.3,Circulation Program Sa 3 Start/End (User 166) ,,,,"621A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#70 1A
r,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.1,Circulation Program Su 1 Start/End (User 167) ,,,,"701A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#71 1A
r,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.2,Circulation Program Su 2 Start/End (User 167) ,,,,"711A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#72 1A
r,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A02",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,
w,,CircRuntimeProgram.Su.3,Circulation Program Su 3 Start/End (User 167) ,,,,"721A",,,_7_TimeTo,,, ,,,_1_TimeTo,,, ,,,_7_TimeFrom,,, ,,,_1_TimeFrom,,,

#FB FD
r,,UnknownSensor8, ,,,,"FBFD02",UnknownSensor8,,UIN,,,
w,,UnknownSensor8, ,,,,"FBFD",UnknownSensor8,,UIN,,,