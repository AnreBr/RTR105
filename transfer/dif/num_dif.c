#include <math.h>
#include <stdio.h>

float a, b, x, delta_x, x_v[4096], y[4096], ypa[4096], ypd[4096], yppa[4096], yppd[4096];
int k;

int main() {

	
  FILE *f1;
  f1 = fopen("values.dat", "w");
  if (f1 == NULL) printf("write error!");
	








    
    printf("Lūdzu ievadi a vērtību: ");
    scanf("%f", &a);
    
    printf("Lūdzu ievadi b vērtību: ");
    scanf("%f", &b);
    
    printf("Lūdzu ievadi precizitāti: ");
    scanf("%f", &delta_x);
   
    x=a;
    
    while (x<b)
    {
        
        x_v[k]=x;
        fprintf(f1, "%f ", x_v[k]);
        y[k]=cosh(sqrt(x));
        fprintf(f1, "%f ", y[k]);
        ypa[k]=sinh(sqrt(x))/2*sqrt(x);
        fprintf(f1, "%f ", ypa[k]);
        ypd[k]=(cosh(sqrt(x+delta_x))-cosh(sqrt(x)))/delta_x;
	fprintf(f1, "%f ", ypd[k]);
        yppa[k]=((sqrt(x)*cosh(sqrt(x)))-sinh(sqrt(x)))/4*pow(x, 1.5);
	fprintf(f1, "%f ", yppa[k]);
        yppd[k]=(cosh(sqrt(x+delta_x))-2*cosh(sqrt(x))+cosh(sqrt(x-delta_x)))/pow(delta_x, 2);
	fprintf(f1, "%f\n", yppd[k]);
          //printf ("f``(x) analītiski = %f\n\n\n",((sqrt(x)*cosh(sqrt(x)))-sinh(sqrt(x)))/4*pow(x, 1.5));
        x = delta_x + x;
        k++;
    }

    printf("  x          | f(x) skaitliski  | f'(x) ar dif |  f''(x) skaitliski   |    f''(x) ar dif    | f''(x) ar dif |\n");
    printf("_____________________________________________________________________________________________________________\n");

    for(k=0; k <= 255; k++)
    {
    if(x_v[k]>0)
    {
    
    printf("%f   |     %f     |   %f   |    %f          |      %f       | %f      |\n",x_v[k],y[k],ypa[k],ypd[k],yppa[k], yppd[k] );
    }
    else break;
        
    }


 
  fclose(f1);



 return 0;
}
