#include <stdio.h>
int main()
 {
  char a = 10; // divas darbības - mainīgā deklarēšana - char a - vietas piešķiršana atmiņā
              // vērtības piešķiršana - a = 10;
              //                        10 - vesela tipa konstane
              //                        int - vesela tipa konstantēm
              //                        double reāla tipa konstantēm
              // mainīgā nosaukums nevar sākteis ar skaitli, vai saturēt atstarpes
              // var būt ar mnemonisko nosaukumu, piem. cilindra_tilpums
 printf("a mainīgā vērtība (kā simbols); %c\n",a);
 printf("a mainīgā vērtība (kā decimāls skaitlis); %d\n",a);
 printf("a mainīgā vērtība (kā hex skaitlis); %#x\n",a);
 printf("a mainīgā vērtība (kā oktāls skaitlis); %#o\n",a);
 char b = 10;
 printf("\nb mainīgā vērtība pirms vērtības piešķiršanas (kā simbols); %c\n",b);
 printf("b mainīgā vērtība -\"- (kā decimāls skaitlis); %d\n",b);
 printf("b mainīgā vērtība -\"- (kā hex skaitlis); %#x\n",b);
 printf("b mainīgā vērtība -\"- (kā oktāls skaitlis); %#o\n",b);
 b = 250;
 
 printf("\nb mainīgā vērtība pirms vērtības piešķiršanas (kā simbols); %c\n",b);
 printf("b mainīgā vērtība -\"- (kā decimāls skaitlis); %d\n",b);
 printf("b mainīgā vērtība -\"- (kā hex skaitlis); %#x\n",b);
 printf("b mainīgā vērtība -\"- (kā oktāls skaitlis); %#o\n",b);

 }
