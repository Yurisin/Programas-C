#include <stdio.h>
#include <stdlib.h>
 /*
 Escreva uma fun��o que recebe um n�mero ponto flutuante n passado por par�metro e devolve a raiz
quadrada de n.
*/

float raiz(float n){
    float raiz2;

    raiz2 = sqrt(n);

    return raiz2;
}

int main()
{
    float n;
    printf("Informe um valor para N: ");
    scanf("%f", &n);

    printf("Raiz -> %.2f", raiz(n));
}

