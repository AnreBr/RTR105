# Laboratorijas darbs teilora rindas

## Darba meerkjis
1. Uzrakstiit kodu, kas apreekjina aptuveno funkcijas cosh(sqrt(x)) veertiibu izmantojot teilora rindas.
2. Ieguut x veertiibu no lietotaaja.
3. Paraadiit gan tiesho apreekjinaato veertibu, gan ar teilora rindaam apreekjinaato veertiibu.
4. Vizuaali atteelot vienaadojumu ar ASCII simboliem.

## Programmas rezultaata piemeers
![screenshot1](https://github.com/AnreBr/RTR105/blob/main/transfer/rindas/bildes/Screenshot%20from%202023-01-18%2018-02-57.png)

## Programmas ierobezhojumi
Programma nestraadaas ar x veertiibaam zem 0, jo funkcijas definiicijas apgabals = (0; +inf)

## Programmas izklaasts

1. Pirmas uzdevums bija atrast rekurences reizinaataaju no teilora rindaam, jo tas ir labaakais variants prieksh datora apreekjiniem, jo nesatur faktoriaaljus. Rekurences reizinaataajs cosh(sqrt(x))=x/((2k-1)*2k)
2. Tika izveidota lietotaaja defineeta funkcija, kuraa notika rindu apreekjins. Shis apreekjins notiek 500 reizes, katru naakamo rezultaatu piereiznot ieprieksheejam, lai ieguutu a veertiibu, vai pieskaitiits ieprieksheejam, lai ieguutu S veertiibu.
![screenshot2](https://github.com/AnreBr/RTR105/blob/main/transfer/rindas/bildes/Screenshot%20from%202023-01-18%2018-04-11.png)
3. Tiek izdariits apreekjins izmantojot math.h biblioteekas funkcijas, lai vareetu saliidzinaat rezultaatu.
4. Lai atteelotu funkciju tika izmantoti ascii simboli ar printf() funkcijaam.
![screenshot3](https://github.com/AnreBr/RTR105/blob/main/transfer/rindas/bildes/Screenshot%20from%202023-01-18%2018-08-59.png)

# Funkcijas grafiks. 
Sheit redzams f(x)=cosh(sqrt(x)) grafiks
![screenshot4](https://github.com/AnreBr/RTR105/blob/main/transfer/rindas/bildes/Screenshot%20from%202023-01-18%2018-27-33.png)

Shajaa atteelaa redzams cosh(sqrt(x)) funckijas grafiks (sarkans) un teilora rindu pietuvinaajums shim grafikam(zils). Grafika ziimeshanai izmantota maajaslapa desmos.com/calculator
![screenshot5](https://github.com/AnreBr/RTR105/blob/main/transfer/rindas/bildes/Screenshot%20from%202023-01-18%2018-27-41.png)
