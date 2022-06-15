#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posicao que ele se encontra.
*/
int main()
{
    int Vet[9];
    int maior, menor;
    int n=0, m=0;//n = posicao do maior, m = posicao do menor

    //Percorrer e preencher o vetor
    for(int i=0;i<9; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &Vet[i]);
    }

    maior = Vet[0];
    menor = Vet[0];

     //Verificar o maior e o menor vetor
    for(int i=1;i<9; i++){
        if(Vet[i]>maior){
            maior = Vet[i];
                n = i;
        }
        if(Vet[i]<menor){
            menor = Vet[i];
                m = i;
        }
    }

    printf("\nMaior e Posicao -> %d e %d\n", maior, n);
    printf("\nMenor e Posicao -> %d e %d\n", menor, m);
}
