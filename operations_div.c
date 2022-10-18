#include <stdio.h>

int main()


 {
 int a = 50, b = 5;
 char c = 'K', d = 'H';


 printf("%d (%ld bytes) / %d (%ld bytes)",a,sizeof(a),b,sizeof(b));
 printf("= %d (%ld bytes)\n",a/b,sizeof(a/b));

 printf("%d (%ld bytes) / %d (%ld bytes)",c,sizeof(c),d,sizeof(d));
 printf("= %d (%ld bytes)\n",c/d,sizeof(c/d));
 return 0;
 }
