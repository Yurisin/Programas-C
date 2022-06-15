#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a, b;
   double adic, sub, mult, div;

   printf("Digite o primeiro numero:");
   scanf("%lf", &a);

   printf("Digite o segundo numero:");
   scanf("%lf", &b);

   adic = a+b;
   sub = a-b;
   mult = a*b;
   div = a/b;

   printf("O resultado da Soma:%lf\n", adic);
   printf("O resultado da Subtracao:%lf\n", sub);
   printf("O resultado da Multiplicacao:%lf\n", mult);
   printf("O resultado da Divisao:%lf\n", div);

}
