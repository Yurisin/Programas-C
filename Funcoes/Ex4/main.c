#include <stdio.h>
#include <stdlib.h>
/*
Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número
primo que é menor ou igual a n.
*/

int primo(int n){
    for (int i=n;i>0; i--) {
        //Verifica se "i" eh primo
        eh_primo = 1;
        for (int j=2;j<i; j++){
            if (i % j == 0)
                eh_primo = 0; //nao eh primo, pois a divisao da linha de cima foi possivel ser feita
            }
            //Imprime que o numero avaliado "i" e primop e para a busca com break no for
            if (eh_primo == 1){
                printf("Proximo primo sucessor eh: %d\n", i);
                break;
            }
        }

}


int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("A soma eh: %d\n", somaPA(num));



    return 0;
}

