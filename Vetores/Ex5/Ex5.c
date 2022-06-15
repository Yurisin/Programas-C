#include <stdio.h>
#include <stdlib.h>

/*
Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.
*/

int main()
{
    int Vet[9];
    int pares;

    //Percorrer e preencher o vetor
    for(int i=0;i<9; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &Vet[i]);
    }

    //Verificar os vetores com atribuicoes pares
    for(int i=0;i<9; i++){
        if(Vet[i]%2==0)
            pares++;
    }

    //Mostrar quantos pares tem
    printf("Foram atribuidos %d numeros pares!", pares);
}
