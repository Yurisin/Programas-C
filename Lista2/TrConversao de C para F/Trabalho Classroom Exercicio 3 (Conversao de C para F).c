#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    int conv;

    printf("Digite o valor em Celsius para conversao em Farenheit:");
    scanf("%f", &c);

    conv = ((c*1.8)+32);

    printf("O valor convertido é:%d\n", conv);

}
