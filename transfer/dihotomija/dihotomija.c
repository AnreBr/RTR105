#include <math.h>
#include <stdio.h>

int a, it;
float x, fx, c, x_prec;

int main() {
    printf("lūdzu ievadi a vērtību:  ");
    scanf("%d", &a);
    printf("lūdzu ievadi vēlamo precizitāti:  ");
    scanf("%f", &x_prec);
    if (a <= 0 || x_prec <= 0) printf("Ievadītajai a un precizitātes vērtībai jābūt pozitīvai  ");
    
    else {
        while(fabs(a-fx)>x_prec)
    {
        x =x + x_prec ;
        fx = cosh(sqrt(x));
        it++;
    }
     printf("\n\n\n ");    
     printf("\n\n\nfunkcijas sakne x ar precizitāti %f = %f\n Nepiecieshamaas iteraacijas : %d",x_prec ,x, it);
 
     printf("\nPārbaude:\ncosh(sqrt(x)) = %f\n", cosh(sqrt(x)));
    }

    return 0;
}
