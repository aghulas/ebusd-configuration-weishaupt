# Maintainer wanted
I'm searching for a maintainer for this project who reworks and translates the definitions to english.
The aim is to move these definitions to John's official ebusd-configuration repository.
I don't have a Weishaupt-burner any more and I don't have any spare time for this project.

Please take my stuff and just do it! ;)
...and send me a short message!

# ebusd-configuration-weishaupt
This repository serves configuration files for ebusd for **Weishaupt WTC** devices.

## Fork École Sainte-Marie (Hesto)

Ce fork (`aghulas/ebusd-configuration-weishaupt`) sert le pilote GTB de l'École Sainte-Marie (chaudières Weishaupt
2 × WTC 250 kW, régulateurs WCM KA / FS1-3 / EM1-3). Ajouts par rapport à l'amont :

- **Écritures de régulation** : lectures `5022` et écritures `5023` marquées `[WCRC]` (CRC Weishaupt calculé à
  l'exécution par le fork `aghulas/ebusd`), écoute passive `0902`/`0903` ; définitions par régulateur
  (`weishaupt/regulator.active.inc` / `regulator.passive.inc`, générées par `diag/build_regulator_inc.py`).
- **Historique et compteurs de défauts** des WTC (`weishaupt/wtc.history.inc`, généré par
  `diag/generate_fault_history.py`) : `FaultHistorySlot1-6` et `FaultCount<code>`, lus via EEPROM 5000, en lecture seule.
- **Catalogue** depuis le classeur « WCM » (`catalog/`, `diag/build_catalog.py`) : points mémoire, infos 5022, règles
  d'accès par adresse source.
- **Correctifs de codec** : `_16_WeekDay` (1 = lundi), `HolidayTempLevel` = `_16_TempReduced` (niveau de congés, pas
  une température), découplage / tampon en `_16_Temp10` (°C) / `_16_TempK10` (K) au lieu de `_16_Temp1` (×10 faux).

Déploiement sur le Pi (Home Assistant) : clone dans `/addon_configs/09e0ce7c_ebusd/ebusd-configuration`, mise à jour par
`git pull` puis `ebusctl reload`. Suivi du chantier : `~/dev/sainte-marie-pilote/data/rex/ebusd/etat-chantier.md`.

---


## wiki
You are welcome to take a look at my wiki!  
There are some unsortet articles about ebusd, FHEM and stuff...  
https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki

## Links to the ebusd project
Here are the links to the original ebusd project  
https://github.com/john30/ebusd  
https://github.com/john30/ebusd-configuration

# quick hint: create local clone
```
git clone https://github.com/J0EK3R/ebusd-configuration-weishaupt.git /etc/ebusd/
```

# some screenshots from FHEM
These charts are made of values taken by **ebusd**!   
![Außentemperatur](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-outsidetemp.png)  
![Kessel Temperaturen](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-kesseltemp.png)  
![Kessel Status](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-kesselstatus.png)  
![HC1 Temperatur](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-hc1temp.png)  
![HC2 Temperatur](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-hc2temp.png)  
![HWC Temperatur](https://github.com/J0EK3R/ebusd-configuration-weishaupt/wiki/images/fhem-chart-hwctemp.png)  
