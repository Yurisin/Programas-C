#include <stdlib.h>
#include <stdio.h>

int main(){
 int i, n, x;
 printf("Digite o valor de n\n ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++){
   for (x = 1; x <= i; x++){
     printf("%d", x);
     }
     printf("\n");
 }
 return 0;
}
