#include <stdio.h>
#include <stdlib.h>
/*
Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
ser impresso o maior e o menor elemento do vetor.
*/
int main()
{
    int Vet[9];
    int maior, menor;

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
        }
        if(Vet[i]<menor){
            menor = Vet[i];
        }
    }

    printf("\nMaior -> %d\n", maior);
    printf("Menor -> %d\n", menor);
}
