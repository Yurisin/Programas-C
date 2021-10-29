#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna, n;

    printf("Informe um valor: \n");
    scanf("%d", &n);

    printf("\n\n");

    for(coluna=0;coluna<=n;coluna++){
        for (linha=0;linha<=n;linha++){
                if(linha==coluna) printf("+ ");
                 else printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
}

