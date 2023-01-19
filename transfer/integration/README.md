# Laboratorijas darbs integreeshana

## Darba uzdevums
1. Izpeetiit integraalja darbiibu
2. Uzrakstiit programmu kas speej apreekjinaat integraali
3. Papildinaat programu, lai taa speetu atrast integraali izmantojot triis dazhaadas metodes - taisnstruuru, trapeces, un simpsona metodi.
4. Likt programmai ieguut veertiibas apreekjiniem no lietotaaja

## Koda izpildes piemeers
![sc1](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-19-25.png)

## Programmas ierobezhojumi
1. Programma nespeej atteelot a un b veertiibas zem 0. , jo funkcija eksistee x = (0; +inf)
2. Katrai metodei ir sava precizitaate, simpsona metodei labaakaa, paareejaam mazliet sliktaaka
3. Paarbaudi var veikt ar maajaslapu wolframalpha.com, shiis probleemas risinaajumu var atrast [te](https://www.wolframalpha.com/input?i=integrate+cosh%28sqrt%28x%29%29+from+1+to+2)
![sc2](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-23-34.png)

## Koda izklaasts

1. Visaam metodeem ir savas formulas, taas var atrast wikipedia.com [te](https://en.wikipedia.org/wiki/Numerical_integration) un 
[te](https://en.wikipedia.org/wiki/Simpson%27s_rule)
![sc3](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-10-40.png)
![sc4](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-10-51.png)
![sc5](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-12-00.png)

2. Formulas jaapaarveido lai taas vareetu izpildiit ciklos, apreekjinot un saskaitot savaa starpaa katru rezultaatu, liidz peedeejie divi rezultaati neatschiraas vairaak par precizitaates veertiibu.
3. Pirmaa metode ir taisnstuura metode:
![sc6](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-44-32.png)
4. Otraaa metode ir trapechu metode, pirms to izpilda, tiek paarstaadiitas apreekjinu veertiibas:
![sc7](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-08-32.png)
5. Treshaa metode ir simpsona metode, saakumaa atkal tiek nomainiitas veertiibas, tachu shajaa gadiijumaa darbiiba tiek dariita pa daljaam, jo formulas atskhiraas no kaartas numura:
![sc8](https://github.com/AnreBr/RTR105/blob/main/transfer/integration/bildes/Screenshot%20from%202023-01-19%2020-09-17.png)
