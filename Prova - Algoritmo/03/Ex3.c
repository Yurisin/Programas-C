//Yuri Botelho
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Vet[9];
    int maior, menor, pares, impares, soma;
    float media = 0;

    //Percorrer e preencher o vetor
    for(int i=0;i<10; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &Vet[i]);
    }

    maior = Vet[0];
    menor = Vet[0];
    pares = 0;
    impares = 0;
    soma = 0;

     //Verificar o maior e o menor vetor
    for(int i=0;i<10; i++){
        if(Vet[i]>maior){
            maior = Vet[i];
        }

        if(Vet[i]<menor){
            menor = Vet[i];
        }

        if(Vet[i]%2==0){
            pares++;
        }

        if(Vet[i]%2!=0){
            impares++;
        }

        soma += Vet[i];
    }

        media = soma/10;


    printf("\nMaior -> %d\n", maior);
    printf("Media -> %.f\n", media);
    printf("Menor -> %d\n", menor);
    printf("Ha %d pares!\n", pares);
    printf("Ha %d impares!\n", impares);



}
