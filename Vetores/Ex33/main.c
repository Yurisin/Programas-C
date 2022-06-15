#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vet[15];
    int i, j, lim=15, k;

    for (i=0;i<15;i++) {
         printf("Digite o valor da posicao %d do vetor: ",i+1);
         scanf("%d", &Vet[i]);
    }
    do {
        k = 0;
        for (i=0;i<lim;i++) {
             if (Vet[i]==0) {
                 for (j=i+1; j<lim; j++)
                        Vet[j-1] = Vet[j];
                 lim--;
                 k++;
             }
        }
    } while (k > 0);
    printf("\n");
    for (i=0;i<lim;i++) {
         printf("Vetor Final [%d] = %d\n",i,Vet[i]);
    }
    return 0;
}
