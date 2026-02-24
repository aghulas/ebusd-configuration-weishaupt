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

#A9 01
r,,H1ControlVoltage, ,,,,"A90102",H1ControlVoltage,,UIN,,,

#AA 01
r,,H1ControlCurrent, ,,,,"AA0102",H1ControlCurrent,,UIN,,,

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
