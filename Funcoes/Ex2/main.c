#include <stdio.h>
#include <stdlib.h>

int fat(int n) {
    int resultado = 1;
        while (n > 1){
            resultado *= n--;
        }

    return resultado;
}

int main()
{
    int n;
    printf("Digite um numero n:\n");
    scanf("%d", &n);
    printf("o fatorial do numero digitado e:%d\n", fat(n));


    return 0;
}
