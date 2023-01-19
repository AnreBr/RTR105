# Laboratorijas darbs skaitliskaa diferenceeshana

## Darba meerjkis
1. Izveidot programmu kas speej atrast funkciju atvasinaajumu veertiibas pie noteiktaam x veertiibaam.
2. Iekodeet iespeeju programmai ieguut apreekjinu veertiibas no lietotaaja.
3. Ieguutos rezultaatus apkopot .dat failaa
4. Uzrakstiit skriptu, kas pielietos .dat failaa esoshos datus un ar gnuplot paliidziibu izveidos grafikus no tiem.

## Programmas izpildes piemeers
![sc1](https://github.com/AnreBr/RTR105/blob/main/transfer/dif/bildes/Screenshot%20from%202023-01-19%2021-19-50.png)

## Programmas ierobezhojumi

1. x veertiiba nevar buut mazaaka par 0.
2. parasto atvasinaajumu un diferenciaalja veertiibas ir vienaadas saakumaa, bet atskhiriibaa no ievadiitaas precizitaates saak attaalinaaties. Lai to samazinaatu, var pietuvinaat nullei precizitaates veertiibu.
3. Nav iespeejams pielietot ljoti mazu precizitaati, jo taa tiek ljoti aatri paarlaadeeta masiiva maksimaalaas informaacijas robezha.

## Programmas izklaasts

1. Programma ir vienkaarsha, wikipediaa ieguutaas, vai pasha apreekjinaataas formulas tiek izmantotas ciklaa kuraa katru apreekjinaato veertiibu ieliek savaa masiivaa.
![sc2](https://github.com/AnreBr/RTR105/blob/main/transfer/dif/bildes/Screenshot%20from%202023-01-19%2021-23-28.png)
2. Programma ieguutos masiivus ieraksta failaa values.dat.
![sc3](https://github.com/AnreBr/RTR105/blob/main/transfer/dif/bildes/Screenshot%20from%202023-01-19%2021-20-20.png)
3. Tiek atveerta programma gnuplot, kuraa tiek palaists skripts ar komandu "load "plotscript.p" "
![sc4](https://github.com/AnreBr/RTR105/blob/main/transfer/dif/bildes/Screenshot%20from%202023-01-19%2021-22-11.png)
4. Atveraas grafiks, kuraa atteelotas visas funkcijas.
![sc5](https://github.com/AnreBr/RTR105/blob/main/transfer/dif/bildes/Screenshot%20from%202023-01-19%2021-21-56.png)
