#include <stdio.h>

int main()


 {
 int a = 50, b = 5;
 char c = 'K', d = 'H';
 int c1 = 0;

 printf("%d (%ld bytes) / %d (%ld bytes)",a,sizeof(a),b,sizeof(b));
 printf("= %d (%ld bytes)\n",a/b,sizeof(a/b));

 printf("%d (%ld bytes) / %d (%ld bytes)",c,sizeof(c),d,sizeof(d));
 printf("= %d (%ld bytes)\n",c/d,sizeof(c/d));
 unsigned char uc1 = 1;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));

 c1 = 2;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 3;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 4;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 5;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 6;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 7;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 31;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1));
 c1 = 7;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",(char)(uc1<c1),sizeof((char)uc1<<c1)); 
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",(unsigned char)(uc1<<c1),sizeof(uc1<<c1));

 return 0;
 }
