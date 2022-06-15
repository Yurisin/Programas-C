#include <stdio.h>
#include <stdlib.h>

//Prototipo da funcao
void imprimeVetor(int v[], int tam);

int main()
{
   int tam=5;
   int vet[tam];

   //preencher vetor com uma sequencia 0,1,2,3,..., tam-1
   for (int i=0;i<tam;i++){
    vet[i] = i;
   }

   //chama a funcao para imprimir o valor
   imprimeVetor(vet, tam);

   //chama a funcao para imprimir o valor
   imprimeVetor(vet, tam);


   return 0;
}

//Funcao para imprimir o vetor 'v' na tela
void imprimeVetor(int v[], int tam){

    printf("\nVETOR:[");
    for(int i=0; i<tam;i++){
        printf("%d ", v[i]);
    }
    printf("]\n");

    v[3] = 42;
}
