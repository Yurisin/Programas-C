#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, aux;
    int acumuladora = 0;

    printf("Digite quantos numeros pretende somar: ");
    scanf("%d", &n);

    for (int i=1; i <= n; i++){
            printf("Digite o valor %d: \n", i);
            scanf("%d", &aux);

            acumuladora = acumuladora + aux;
    }
    printf("\nSoma = %d\n", acumuladora);





    return 0;
}
