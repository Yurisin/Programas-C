#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Para matematica

//Faça um programa que leia um número real x e calcule o valor de f(x) = √x+ (x/2) +x^x.(pesquise sobre as funções sqrt e pow).

int main()
{
  float x, raiz, potencia, Fx, divisao;

  printf("Informe um valor para X:\n");
  scanf("%f", &x);

  //raiz = sqrt(x);
  //divisao = x/2;
  //potencia = pow(x,x);
  //Fx = raiz + divisao + potencia;
  Fx = sqrt(x) + (x/2) + pow(x,x);

  printf("O valor de F(x) eh:%.2f", Fx);

    return 0;
}
