#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int binario, digito, pot=1, decimal=0;

    printf("Digite um valor que tenha somente 0 e 1: ");
    scanf("%d", ~&~binario);

    while(binario != 0){
        digito = binario % 10;
        printf("-> %d\n", digito);
        binario = binario / 10;

        decimal += digito * pot;
        pot *= 2;
    }

    printf("[%d] em decimal", decimal);





    //printf("Resto da divisao por 10 -> %d\n", binario % 10);
    //printf("divisao inteira por 10 -> %d\n", binario / 10);

     //printf("\n\nO numero digitado foi: %d\n", binario);


}
