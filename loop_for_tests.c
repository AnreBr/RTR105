// cikla operatori:
// while - "kamēŗ"
// do while - "darīt kamēr"
// for - "līdz"

// while (izteiksme);
// while (izteiksme)
//           ;
// while (izteiksme){;;;;}
// while izteiksme {
//   ;
//   ;
//                 }
// aiz while () iekavām esošā darbība (vai darbības) tiks pildītas tikmēr, kamēr iekavas () izteiksmes rezultāts ir "true"
// , "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli

#include <stdio.h>

int main()
 {
 int a=10;  

 for (a=10; a>=0; a--)
 // darbības pirms pirmā semikola ; tiek izpildītas tikai vienu reizi cikla sākumā
 // tālāk izteiksmes rezultāta aprēķins (jeb nosacījuma pārbaude)
 // cikla ķermeņa (iekš {} darbība pildīšana)
 // cikla mainīgo izmaiņa atbilstoši aprakstāma aiz otrā ;
 // turpinājumā cikla izteiksmes (nosacījuma) rezultāta aprēķins
 {
	printf("a: %d\n",a);
        a--; // a = a - 1; a -= 1;
 }

 printf("a (pēc cikla): %d\n",a);

 return 0;
 }

