
# Laboratorijas darbs statistika

## Darba meerkji

1. Izveidot programmu, kura jautaa lietotaajam ievadiit teksta rindu, vai teikumu.
2. Ieguuto tekstu sakaartot alfabeeta seciibaa, saakot ar lielajiem burtiem.
3. Ieguut teksta videejo ASCII veertiibu.
4. Ieguut teksta modu un mediaanu.

## Koda rezultaata piemeers

![Screenshot1](https://github.com/AnreBr/RTR105/blob/main/transfer/statistika/bildes/Screenshot%20from%202023-01-18%2012-40-08.png)

## Koda darbiiba

### 1. Darbam ar simbolu virkni tiek izmantoti datu masiivi. Shajaa kodaa teksta virknes tureeshanai tika izmantots masiivs burti[255].
### Veertiiba 255 tika izveeleeta, lai vareetu tureet garaaku tekstu, nekaa viens teikums, lai sho kodu vareetu plashaak pielietot. Pirmaa
### darbiiba ir ieguut virkni ar simboliem no lietotaaja.

### 2. Visas darbiibas notiek ciklaa int main, un pirmais apakshcikls sakaarto burtus alfabeeta seciibaa saliidzinot divu burtu veertiibas
### un taas samainot vietaam, ja tas ir nepiecieshams. Shii ir burbulju metode.

for(i = 0; i < 255; i++)
    {
        for(j = 0; j < n; j++ )
        {
            if(burti[j] > burti[j+1])
            {
                temp = burti[j];
                burti[j] = burti [j+1];
                burti[j+1] = temp;
(ciklu atkaarto 255 reizes droshiibas peec, jo ja ir lielaaks skaits ievadiito simbolu, tos nav iespeejams sakaartot maz ciklos ar sho metodi)

### 3. Otrais apakshcikls veic vairaakas darbiibas. Pirmaa ir visu veertiibu saskaitiishana gan ar, gan bez atstarpju simbola. Otraa darbiiba
### ir 
