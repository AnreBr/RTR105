//*






       Šis nestrādā!
       pareizais ir simboli.c








*//

#include <stdio.h>

char teikums[50];
int sk, sk1, sk2;
unsigned char brt = 0x61;
char skaits[32];
int main()

{
   printf("Lūdzu ievadi teikumu\n");
   fgets(teikums, sizeof(teikums), stdin);

    for(sk = 0; sk < 50; sk++)
     {
	for(brt = 0x61; brt < 0x7a; brt++)
        {
	
	if(teikums[sk] == brt ) skaits[brt]++;
	printf("brt = %d",brt);
	}

     }
    for(sk2 = 0; sk2 < 26; sk2++)

	{
	brt = brt + sk2;
	if (skaits[sk2] > 0) printf("\n%c burta skaits teikumā: %d",brt,skaits[sk2]);
        else printf("\n%c burtu nav", brt);
	}
printf("\n");
return 0;
}
