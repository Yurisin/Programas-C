#include <stdio.h>
#include <stdlib.h>

int main()
{
 //Fa�a um programa que leia dois valores inteiros nas vari�veis x e y e troque o conte�do das vari�veis. Refa�a este problema sem o uso de outras vari�veis que n�o x e y.

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
