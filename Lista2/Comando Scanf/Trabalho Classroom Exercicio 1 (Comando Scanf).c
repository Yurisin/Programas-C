#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char c;
    float f;

    printf("Digite uma letra:");
    scanf("%c" , &c);
    printf("O dado lido foi: %c", c);


    printf("\nDigite um numero:");
    scanf("%d" , &n);
     printf("O dado lido foi: %d", n);

    printf("\nDigite um ponto flutuante: ");
    scanf("%f" , &f);
    printf("O dado lido foi: %f", f);

    return 0;
}
