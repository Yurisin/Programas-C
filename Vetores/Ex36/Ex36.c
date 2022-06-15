#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vet[], int tam);

int main()
{
    int i, min, aux;
    int tamanho = 10;
    int vet[tamanho];
    int Ordenado[tamanho];

    //Lendo os dados para um vetor
    for (int i=0;i<tamanho;i++){
        printf("Informe a nota da posicao %d:", i);
        scanf("%d", &vet[i]);
    }

    //imprime os dados de um vetor
    printf("\nVetor com repeticao: ");
    for(int i=0; i<tamanho; i++){
        printf("%d ", vet[i]);
    }

    int j;
    float temp;
        for (i=10; i>0; i--){
            for(j=1; j<=i; j++  ){
                if(vet[j-1] > vet[j]){
                    temp = vet[j-1];
                    vet[j-1] = vet[j];
                    vet[j] = temp;
                }
            }
        }

    //imprime os dado em ordem
    printf("\nVetor Ordenado: ");
    for(int i=0; i<tamanho; i++){
        printf("%d ", vet[i]);
    }


    return 0;
}




