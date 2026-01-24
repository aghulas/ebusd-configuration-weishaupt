# type (r[1-9];w;u),class,name,comment,QQ,ZZ,PBSB,ID,field,part (m/s),type / templates,divider / values,unit,comment,field,part (m/s),type / templates,divider / values,unit,comment,field,part (m/s),type / templates,divider / values,unit,comment,field,part (m/s),type / templates,divider / values,unit,comment
*r,,,,,"F6",,,,,,,,,,,,,,,,,,,,,,,,,,
#r,,SHC1,System Heat Control Part1 ,,,"5000","0C73BB13AC",UKN0,s,UCH,,,unknown0 ,HC1.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 1 ,HC2.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 2 ,HC3.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 3 ,HC4.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 4 ,HC5.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 5 ,HC6.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 6 ,HC7.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 7 ,HC8.HeatingDemand,s,_8_Temp0,,,Heat demand heating circuit 8 ,UKN1,s,UCH,,,unknown1 ,UKN2,s,UCH,,,unknown2 
#r,,SHC2,System Heat Control Part2 ,,,"5000","E353AE03C3016F",UKN0,s,UCH,,,unknown0 ,UKN1,s,UCH,,,unknown1 ,UKN2,s,UCH,,,unknown2 ,UKN3,s,UCH,,,unknown3 ,UKN4,s,UCH,,,unknown4 ,UKN5,s,UCH,,,unknown5 ,UKN6,s,UCH,,,unknown6 ,SetpointTempSystem,s,_8_Temp0,,,Solltemperatur System ,SetpointDHW,s,_8_Temp0,,,Warmwasser Sollwert 

r,hc1,HeatingDemand,Heat demand heating circuit 1 ,,,"5000","5F03BB",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc2,HeatingDemand,Heat demand heating circuit 2 ,,,"5000","5803BC",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc3,HeatingDemand,Heat demand heating circuit 3 ,,,"5000","5903BD",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc4,HeatingDemand,Heat demand heating circuit 4 ,,,"5000","5A03BE",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc5,HeatingDemand,Heat demand heating circuit 5 ,,,"5000","5B03BF",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc6,HeatingDemand,Heat demand heating circuit 6 ,,,"5000","2403C0",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc7,HeatingDemand,Heat demand heating circuit 7 ,,,"5000","2503C1",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,hc8,HeatingDemand,Heat demand heating circuit 8 ,,,"5000","2603C2",,s,_8_Skip,,, ,,s,_8_Temp0,,, 

r,hc1,Status,heating circuit 1 ,,,"5000","4803AC",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc2,Status,heating circuit 2 ,,,"5000","4903AD",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc3,Status,heating circuit 3 ,,,"5000","4A03AE",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc4,Status,heating circuit 4 ,,,"5000","4B03AF",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc5,Status,heating circuit 5 ,,,"5000","5403B0",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc6,Status,heating circuit 6 ,,,"5000","5503B1",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc7,Status,heating circuit 7 ,,,"5000","5603B2",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 
r,hc8,Status,heating circuit 8 ,,,"5000","5703B3",,s,_8_Skip,,, ,TimeSinceLastCommand,s,_6_TimeSinceLastCommand,,, ,ReleaseDHW,s,_1_ReleaseDHW,,, ,ReleaseHC,s,_1_ReleaseHC,,, 

r,,SetpointTempSystem,Target temperature system ,,,"5000","2703C3",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
r,,SetpointDHW,Hot water setpoint ,,,"5000","33016F",,s,_8_Skip,,, ,,s,_8_Temp0,,, 
