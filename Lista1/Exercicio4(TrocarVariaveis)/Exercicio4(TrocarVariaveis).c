#include <stdio.h>
#include <stdlib.h>

int main()
{
 //Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.

 int x, y, backup;

 printf("Digite o valor de X:\n");
 scanf("%d", &x);

 printf("\nDigite o valor de Y:\n");
 scanf("%d", &y);

 printf("\nValores antes da troca\n");
 printf("\nO valor de X e:%d\n", x);
 printf("\nO valor de Y e:%d\n", y);

 backup = x;
 x = y;
 y = backup;


 printf("\nValores depois da troca\n");
 printf("\nO valor de X e:%d\n", x);
 printf("\nO valor de Y e:%d\n", y);




}
