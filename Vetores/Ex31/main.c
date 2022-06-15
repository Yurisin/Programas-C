/*
Faca um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao
entre os 2 vetores anteriores, ou seja, que contem os numeros dos dois vetores. Nao
deve conter numeros repetidos.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int i=0, j;
    int Vet1[TAM];
    int Vet2[TAM];
    int VetUniao[20];
    int NR[20]; //Nao repetidos

    printf("Informe os valores da primeira sequencia: \n");
        for(i=0; i< TAM; i++){
            printf("Vet[%d]:", i);
            scanf("%d", &Vet1[i]);
        }

    printf("Informe os valores da segunda sequencia: \n");
        for(i=0; i< TAM; i++){
            printf("Vet[%d]:", i);
            scanf("%d", &Vet2[i]);
    }

    for(i=0; i<3; i++){
            VetUniao[i] = Vet1[i];
    }

    for(i=3; i<6; i++){
            VetUniao[i] = Vet2[i-3];
    }

    for(i=0; i<=6; i++){
        for(j=1; j<=6; j++){
            if(VetUniao[i] =! VetUniao[j]){
                NR[i] = VetUniao[i];
            }

        }
    }

    for(i=0; i<6; i++){
        printf("[%d]", VetUniao[i]);
    }








    return 0;
}
