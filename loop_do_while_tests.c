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
//
// do {;;;} while (izteiksme)
//
// aiz while () iekavām esošā darbība (vai darbības) tiks pildītas tikmēr, kamēr iekavas () izteiksmes rezultāts ir "true"
// , "true" - izteiksmes rezultāta bitu secībā ir vismaz viens 1
// "false" vai "absolūtā nulle" - visi biti ar 0 stāvokli

#include <stdio.h>

int main()
 {
 int a=10;  // ar unsigned datu tipu "false" nekad neiestāsies
 do
 {
	printf("a: %d\n",a);
        a--; // a = a - 1; a -= 1;
 }
 while (a>=0);

 printf("a (pēc cikla): %d\n",a);

 return 0;
 }

