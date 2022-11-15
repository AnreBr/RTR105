#include <stdio.h>

char teikums[50];
int sk, sk1, sk2;
char burti[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char br = 'a';
char skaits[32];
int main()

{
   printf("Lūdzu ievadi teikumu\n");
   fgets(teikums, sizeof(teikums), stdin);

    for(sk = 0; sk < 50; sk++)
     {
	for(sk1 = 0; sk1 < 32; sk1++)
        {

	if(teikums[sk] == burti[sk1]) skaits[sk1]++;
	}

     }
    for(sk2 = 0; sk2 < 26; sk2++)

	{
	if (skaits[sk2] > 0) printf("\n%c burta skaits teikumā: %d",burti[sk2],skaits[sk2]);
        else printf("\n%c burtu nav", burti[sk2]);
	}
printf("\n");
return 0;
}
