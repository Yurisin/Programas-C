#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char c;
    float f;

    printf("Digite uma letra: ");
    scanf("%c" , &c);


    printf("Digite um numero:");
    scanf("%d" , &n);


    printf("Digite um ponto flutuante: ");
    scanf("%f" , &f);

    printf("Os dados lidos foram: %c %d %f", c, n,f);
    return 0;
}
