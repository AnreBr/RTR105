#include <math.h>
#include <stdio.h>

float a, b, prec, x1, x2, x3, value1 = 0., value2, h;
int k, n=2;



void main() {
    printf("Funkcijas cosh(sqrt(x)) defin�cijas apgabals X = (0, +inf), t�d��\na un b v�rt�bas nedr�kst b�t maz�kas par 0 \n__________________________________________________________________________________\n\n\n");
    
    
    
    
    printf("L�dzu ievadi a v�rt�bu: ");
    scanf("%f", &a);
    printf("L�dzu ievadi b v�rt�bu: ");
    scanf("%f", &b);
    printf("L�dzu ievadi precizit�tes v�rt�bu: ");
    scanf("%f", &prec);
    
   value2 = (b-a)*cosh(sqrt((a+b)/n));
   printf("\n%f", value2);
   while(fabs(value2-value1)>prec)
   {
    n*=2;
    h=(b-a)/n;
    value1=value2;
    value2=0;
    
    for (k = 0; k < n; k++)
    {
        value2 += h * cosh(sqrt(a+(k+0.5)*h) );
    }
   } 
    printf("\nIntegr�lis izmantojot taisnst�ru metodi = %f", value2);
    
   n=2;
   value1 = 0.;
   h = 0;
   
   value2 = cosh(sqrt(a))*(b-a)+((cosh(sqrt(b))-cosh(sqrt(a)))*(b-a))/2;
   
   
   
   printf("\n%f", value2);
   while(fabs(value2-value1)>prec)
   {
    
    
    n*=2;
    h=(b-a)/n;
   printf("\nS�kum value1 = %f", value1);
   printf("\nS�kum value2 = %f", value2);
   printf("\n at��ir�ba1 = %f", value1-value2);
    value1=value2;
    value2=0;
    
    for (k = 0; k < n; k++)
    {
        value2 += h*cosh(sqrt(a+h*k))+(((b-a)/(n+k))*cosh(sqrt(a+k*((b-a)/(n+k)))))-h*cosh(sqrt(a+h*k))/2 ;
        //value2 += h*cosh(sqrt(a+k*h))+((h*cosh(sqrt(a+2*k*h)))-h*cosh(sqrt(a+h*k)))/2;
        printf("\nvalue2 = %f", value2);
    }
   printf("\n at��ir�ba2 = %f", value1-value2);
     
   } 
    printf("\nIntegr�lis izmantojot trape�u metodi = %f", value2);
    return 0;
}