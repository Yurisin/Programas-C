#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");


    int i, n, atual, anterior, ordenado, contadora;

    printf("Digite a quantidade de números da sequência: ");
    scanf("%d", &n);


    // primeiro valor é lido fora do laço de repetição
    printf("Digite um valor: ");
    scanf("%d", &anterior);

    contadora = 1;
    ordenado = 1; // assume que a sequencia está ordenada, onde 1 representa verdadeiro
    i = 2; // inicia a leitura no segundo núemro, pois o primeiro foi lido fora do while
    while (i <= n) {

        printf("Digite um valor: ");
        scanf("%d", &atual);

        if (atual < anterior) {
            ordenado = 0; // digo que a sequencia não está ordenada
            break;
        }

        anterior = atual;

        i++;
        contadora++;
    }


    if (ordenado == 1) {
        printf("A sequência está ordenada! e foi digitado em ordem %d números!\n", contadora);
    } else {
        printf("A sequência NÃO está ordenada! e foi digitado em ordem %d números!\n", contadora);
    }

    return 0;
}


