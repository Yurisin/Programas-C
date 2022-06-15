#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Exercício 7 - Funções
Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro
Sua função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k,
e b seja o menor possível.
*/

int teste(int n);

int main() {
    int n, resposta;

    printf("Informe um valor para n: ");
    scanf("%d", &n);

    printf("Menor valor de b é: %d\n", teste(n));
    return 0;
}


int teste(int n) {
    int b; //base da potência
    int k; //expoente da potencia
    int aux; // grava o valor da potencia calculada

    if (n == 0) {
        return 0;
    }

    for (b = 2; ; b++) {
        for (k = 1; ; k++) {
            aux = pow(b, k);

                if (aux == n) { //Verifica se a potencia resulta em n
                    return b; //Se a potencia resultar em n, retorna o b calculado na auxiliar
                }

                    // se aux > n, para o for interno
                    if (aux > n) {
                        break;
                }
            }
        }
    }
