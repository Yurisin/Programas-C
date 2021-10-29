#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int VetA[9], VetB[9], VetC[9];
    int i;

    srand(time(NULL));

    printf("Informado Randomicamente o Vetor A!\n\n");
    for(i=0; i<=9;i++){
        VetA[i] = rand()%20;
        printf("%d ", VetA[i]);
    }

    printf("\n\nInformado Randomicamente o Vetor B!\n\n");
    for(i=0; i<=9;i++){
        VetB[i] = rand()%20;
        printf("%d ", VetB[i]);
    }

    for(i=0; i<=9;i++){
        if(VetA[i]>VetB[i]){
            VetC[i] = 1;
        }

        else if(VetA[i]==VetB[i]){
                VetC[i] = 0;
        }

        else if(VetA[i]<VetB[i]){
                VetC[i] = -1;
        }
    }

    printf("\n\nImprimindo o Vetor C!\n");
    for(i=0; i<=9;i++){
        printf("%d ", VetC[i]);
    }


}
