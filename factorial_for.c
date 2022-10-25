#include <stdio.h>

int main ()
 {
 long long int i, n, fact;
 printf("cienījamais lietotāj, lūdzu ievadi vienu veselu skaitli: ");
 scanf("%lld",&n);

 i = 0;
 fact = 1;

 for(i=1 ;i<=n ;i++ )
	{
	 fact = fact * i;
	 printf("%3lld! = %15lld\n",i,fact);
	}
 return 0;
 }
