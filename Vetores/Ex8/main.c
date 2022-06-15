#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vet[5];

    //Percorrer e preencher o vetor
    for(int i=0;i<6; i++){
        printf("Informe os valores do vetor: ");
        scanf("%d", &Vet[i]);
    }

    printf("\n\n\n\n\n\n");

    //Imprimir na tela os vetores
    for(int i=5;i>=0; i--){
        printf("Os valores informados foram: %d \n", Vet[i]);
    }

}
