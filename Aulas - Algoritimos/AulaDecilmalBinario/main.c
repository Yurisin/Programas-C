#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal, binario;
    int bin = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    while(decimal != 0){
        digito = decimal % 2;
        printf("%d\n", digito);
        decimal = decimal / 2;
    }


}
