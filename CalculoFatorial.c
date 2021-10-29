#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,        /* guarda o numero dado */
      contador,
      fatorial;

  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um inteiro nao-negativo: ");
  scanf("%d", &n);

  /* inicializacoes */
  fatorial = 1;
  contador = 2;
if (n>-1)
    while (contador <= n) {
    fatorial = fatorial * contador;
    contador = contador + 1;
    }
     printf("O valor de %d!: %d\n", n, fatorial);
  return 0;
}
