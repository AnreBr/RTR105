#include <stdio.h>

int main()
{
	if(1); // iekš () var būt "apaļā" nulle, vai bitu secība, kas satur kaut vienu bitu ar 1

int a  = 10;

	if (a>7) // a > 7 -> 0000 0000 0000 0000 0000 0000 0000 0001
	printf("viena darbība, kas tiks izpildīta, ja nosacījums a > 7 ir spēkā\n");

 printf("šī darbība tiks izpildīta jebkurā gadījumā\n");
        if (a>7)
{
	printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums a > 7 ir spēkā\".\n");
	printf("Pirmā darbība. \n");
	printf("Otrā darbība. \n");
}
        if (a<7)
{
	printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums a < 7 ir spēkā\".\n");
	printf("Pirmā darbība. \n");
	printf("Otrā darbība. \n");
}
	else
{
	printf("Darbību bloks, kas tiks izpildīts, ja \"nosacījums a < 7 nav spēkā\".\n");
	printf("Pirmā darbība. \n");
	printf("Otrā darbība. \n");
}

 return 0;
}
