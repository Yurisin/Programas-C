#include <stdio.h>
#include <stdlib.h>

int main()
{
int Vet[10],aux;
    for(int i = 1; i<=10; i++){
        printf("Informe o numero %d de vetor: ", i);
            scanf("%d", &Vet[i]);
}
    for (int x = 1; x<=10; x++){
        for(int y = x; y<10; y++){
            if(Vet[x]> Vet[y]){
                aux=Vet[x];
                Vet[x]=Vet[y];
                Vet[y]=Vet;
            }
        }
    }

        for(int i = 1; i<= 10; i++){
            printf("Numero %d eh: %d\n",i,Vet[i]);
                }
        }

