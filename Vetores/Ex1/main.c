#include <stdio.h>
#include <stdlib.h>
/*
1. Faça um programa que possua um vetor denominado A que armazene 6 numeros intei-ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic ̧ao 4, atribuindo a esta posic ̧  ̃ ao o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/


int main()
{
    int tamanho = 6;
    int A[tamanho];
    int soma = 0;

    //Percorrer e preencher o vetor
    for(int i=0;i<tamanho; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &A[i]);
    }

    //Somar as devidas posicoes
    soma = A[0] + A[1] + A[5];
    printf("\nSoma -> %d\n", soma);

     //Modificar a posicao 4
    A[4] = 100;

    //Imprimir na tela os vetores
    for(int i=0;i<tamanho; i++){
        printf("Os valores informados foram: %d\n", A[i]);
    }

}
