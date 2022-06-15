#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");


    int i, n, atual, anterior, ordenado, contadora;

    printf("Digite a quantidade de n�meros da sequ�ncia: ");
    scanf("%d", &n);


    // primeiro valor � lido fora do la�o de repeti��o
    printf("Digite um valor: ");
    scanf("%d", &anterior);

    contadora = 1;
    ordenado = 1; // assume que a sequencia est� ordenada, onde 1 representa verdadeiro
    i = 2; // inicia a leitura no segundo n�emro, pois o primeiro foi lido fora do while
    while (i <= n) {

        printf("Digite um valor: ");
        scanf("%d", &atual);

        if (atual < anterior) {
            ordenado = 0; // digo que a sequencia n�o est� ordenada
            break;
        }

        anterior = atual;

        i++;
        contadora++;
    }


    if (ordenado == 1) {
        printf("A sequ�ncia est� ordenada! e foi digitado em ordem %d n�meros!\n", contadora);
    } else {
        printf("A sequ�ncia N�O est� ordenada! e foi digitado em ordem %d n�meros!\n", contadora);
    }

    return 0;
}


