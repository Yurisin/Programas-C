#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 8 - Fun��es
Escreva uma fun��o chamada teste que recebe um valor inteiro n (positivo ou negativo) como
par�metro. Sua fun��o deve imprimir todos os valores a e b (inclusive negativos) tais que
 a * b = n.
*/

void teste(int Valor);

int main() {
    int Valor;

    printf("Informe um valor inteiro(negativo ou positivo): ");
    scanf("%d", &Valor);

    teste(Valor); //Chama a funcao teste

    return 0;
}

void teste(int Valor) {
    int n1, n2;
        for (n1=-Valor; n1<=Valor;n1++) {
            for (n2=-n;n2<=Valor;n2++) {
                if (n1*n2 == Valor) {
                    printf("a:[%4d] * b:[%4d] = r:[%4d]\n", m1,n2,Valor);
                }
            }
        }

}
