// masīvi - secīgi novietotas vērtības atmiņa izgūstamas ar viena identifikatora palīdzību: a[0], a[1], a[2]
// alternatīva - a0, a1, a2 - kas nav ērti? - nav iespējama algoritmizācija, jo tikšana pie vērtībām ir manuāli jāmaina mainīgā vārds,
// bet masīva gadījumā jāmaina indekss, tātad i=0; a[i]; i=1; a[i]; i=2; a[i] ;
// NB! masīva pirmā elementa indekss ir - 0;
// NB! masīvam arī ir adrese - tā ir 0. elementa adtese

#include <stdio.h>

int main()
{
 int i_array_1[10];  // int lieluma masīva deklarēšana (piesaukt drīkst, bet vērtības nav zināmas)
 int i_array_2[3]={1,2,3};  // int lielumu masīva definēšana
 int i_array_with_zero[5]={0};

 int i_array_2D[2][3]={{7,8,9},
                       {10,11,12}};   // [2 - rindu skaits][3 - kolonu skaits]; dimensijas var būt vairākas

 printf("\n\nmasīva i_array_2 adrese: %p\n\n",i_array_2);

 printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n\n",*(i_array_2+0));


 printf("masīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n\n",*(i_array_2+1));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n\n",*(i_array_2+2));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n\n",*(i_array_2+2));

 return 0;
}


