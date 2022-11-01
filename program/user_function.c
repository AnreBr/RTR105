#include <stdio.h>

char dialogs(); // funkcijas deklarēšana (var būt ievietota pēc main apraksta)
 // funkcijas definēšana (var būt uzreiz bez deklarēšanas, var būt ievetota pēc main apraksta
//                                       , deklarēšanai vai definēšanai ir jābūt pirms funkcijas izmantošanas)
char dialogs_i(int i_dialogs_arg);

void test_1(int a, int b, int c); //void nozīmē, ka retun nebūs

int main()
 {
 char c_main_local;
 c_main_local = 10;
/*
 printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
 scanf("%hhd",&c);
 printf("Ir ievadīts skaitlis: %hhd\n",c);


 printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
 scanf("%hhd",&c);
 printf("Ir ievadīts skaitlis: %hhd\n",c);
*/
 c_main_local = dialogs();
 printf("Ir ievadīts skaitlis (izdruka no main funkcijas): %hhd\n",c_main_local);
 dialogs();
 int i_main = 1;
 dialogs_i(i_main);
 i_main++;
 dialogs_i(i_main);
 return 0;
 }
char dialogs()
 {
 char c_dialogs_local; 

 printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis(izdruka no dialogs funkcijas): %hhd\n",c_dialogs_local);
 
 return c_dialogs_local;
 }

char dialogs_i(int i_dialogs_arg)
 {
 char c_dialogs_local; 

 printf("\n Funkcija dialogs_i tiek izpildīta %d. reizi: \n", i_dialogs_arg);
 printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
 scanf("%hhd",&c_dialogs_local);
 printf("Ir ievadīts skaitlis(izdruka no dialogs funkcijas): %hhd\n",c_dialogs_local);
 
 return c_dialogs_local;
 }
