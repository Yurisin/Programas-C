#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main(){
int a;
printf("Digite um n�mero inteiro:");
scanf("%d", &a);
if( ( a % 2 == 0) && (a<100) )
printf("O n�mero � par e menor que 100\n");
else if( a>=100 )
printf("O n�mero � par e maior ou igual a 100\n");
if( ( a % 2 != 0) && (a<100) )
printf("O n�mero � �mpar e menor que 100\n");
else if (a>=100)
printf("O n�mero � �mpar e maior que 100\n");
}
