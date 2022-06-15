#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa
devera escrever a soma dos valores encontrados nas respectivas posicoes X e Y
*/

int main()
{
    int Vet[7];
    int x, y, soma;

    //Percorrer e preencher o vetor
    for(int i=0;i<7; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &Vet[i]);
    }

    printf("Os valores a serem informados devem estar entre 0 e 7!\n");
    printf("Informe um valor para X: ");
    scanf("%d", &x);
    printf("Informe um valor para Y: ");
    scanf("%d", &y);

    soma = Vet[x] + Vet[y];

    printf("%d", soma);

}
