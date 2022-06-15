#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 7;
    int vet[tamanho];

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
    //imprimir vetor sem repeticao
    int contador = 0;
    printf("\nVetor Sem Repeticao: ");
    for(int i=0;i<tamanho;i++){
            contador = 0;
        //contar se existe mais de 1 numero repetido para a posicao i
            for(int j=0;j < i; j++){
                if(vet[i] == vet[j]){
                    contador++;
                    break;
                }
            }


            if(contador == 0){
                printf("%d ", vet[i]);
            }



    }


    return 0;
}
