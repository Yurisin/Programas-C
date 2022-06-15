#include <stdio.h>
#define MAX 10
int main(){
    int valor, existente, Vet[MAX]={0}, i = 0, n;
        while(i < MAX){

            printf("Valor: ");

        scanf("%d", &valor);

    for(n = existente = 0; n < i; n++)

            if(Vet[n] == valor) existente5 = 1;

        if(existente)

        printf("o valor [%d] ja existe\n", valor);

    else
            Vet[i++] = valor;
             }
        printf("\nVetor:\n\n");


     for(i = 0; i < MAX; i++)
            printf("%d\n", Vet[i]);


    return 0;
}
