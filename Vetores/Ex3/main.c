#include <stdio.h>
#include <stdlib.h>

/*
Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das  ́
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.
*/

int main()
{
    double Vet[10];
    double VetAo2[10];

    //Percorrer e preencher o vetor
    for(int i=0;i<10; i++){
        printf("Informe os valores do vetor: ");
        scanf("%lf", &Vet[i]);
    }

    //Realizar o quadrado dos numeros
    for(int i=0;i<10; i++){
        VetAo2[i] = Vet[i] * Vet[i];
    }

    //Imprimir na tela os vetores
    printf("\nVetores Normais:\n\n");
    for(int i=0;i<10; i++){
        printf("Os valores informados foram: %.2lf \n", Vet[i]);
    }

    //Imprimir na tela os vetores
    printf("\nVetores Potenciados:\n\n");
    for(int i=0;i<10; i++){
        printf("Os valores informados foram: %.2lf \n", VetAo2[i]);
    }



}
