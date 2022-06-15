#include <stdio.h>
#include <stdlib.h>

//Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main()
{
    int tamanho = 6;
    int A[tamanho];

    //Percorrer e preencher o vetor
    for(int i=0;i<tamanho; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &A[i]);
    }

    printf("\n\n");

    //Imprimir na tela os vetores
    for(int i=0;i<tamanho; i++){
        printf("Os valores informados foram: %d \n", A[i]);
    }

}
