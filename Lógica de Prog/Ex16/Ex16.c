#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int n;

    printf("Informe um valor menor que 50:");
    scanf("%d", &n);



    while(n<=50){
        for (j=0; j<50; j++){
            for (i=0; i<50; i++){
                if(i == j && n<=50)
                    printf("%d", n);
                        else printf("  ");
                    }
                   printf("\n");
                   n++;
                }}}
