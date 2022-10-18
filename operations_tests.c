// operācijas:      operands_1 operācija operands_2
//                   (datu tips)       (datu tips)
//                                ||
//                                \/
//                         operācijas_rezultāts
//      parasti operācijas rezultāta datu tips ir "lielākais" datu tips
// matemātiskās operācijas: +,-,*,/,%
// loģiskās: &&, ||
// loģiskās pa bitiem: &, |, ^, !
// bitu: >>, <<
// attiecību: <, <=, >=, >, ==, !=
// int i1 = 5, i2 = 6, ir;
// ir = i1 + i2;
// ir = ir + 10;
// ir += 10;
// ir++; //ir = ir + 1; vai ir += 1;
//
// Ko pētīt šodien: kā strādā operācija?
//                  vai operācijā drīkst izmantot jebkuru datu tipu?
//                  operāciju izpildīšanas secība? (to nosaka prioritāte;
//                                                  secības kontrolei izmanot () )
// % c valodā nedrīkst lietot reāliem skaitļiem
// 78 % 65 -> 13
// 999 % 1000 -> 999
// / (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>
#include <stdio.h>

int main ()
 {
 char c ='A';
 int i = 2000;
 float f = 2.3;-
 double d = -5.6e4;

 printf("%d (%ld bytes) * %d (%ld bytes)",c,sizeof(c),i,sizeof(i));
 printf("= %d (%ld bytes)\n",c*i,sizeof(c*i));
 return 0;
 }
