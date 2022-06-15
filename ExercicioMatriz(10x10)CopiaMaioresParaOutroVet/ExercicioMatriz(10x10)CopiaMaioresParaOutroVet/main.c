// Fa�a um programa em C que leia uma matriz de inteiros de tamanho 10x10  meio de uma fun��o.
// Dada a matriz inserida pelo usu�rio, encontre todos os n�meros maiores que 20 e copie eles
// para um vetor (use fun��o). Ao final, imprima o vetor na tela de forma ordenada crescentemente.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

void leMatriz(int m[TAM][TAM]);
int copiaMaior20(int m[TAM][TAM], int v[TAM*TAM]);
void imprimeVetor(int v[TAM*TAM], int limite);
int indiceMenor(int v[TAM*TAM], int limite, int inicio);
void selectionSort(int v[TAM*TAM], int limite);

int main() {
    setlocale(LC_ALL, "");

    int matriz[TAM][TAM];
    int vetor[TAM*TAM];
    int limite;

    leMatriz(matriz);
    limite = copiaMaior20(matriz, vetor);

    printf("Antes de ordenar:\n");
    imprimeVetor(vetor, limite);

    selectionSort(vetor, limite);

    printf("Despois de ordenar:\n");
    imprimeVetor(vetor, limite);


    return 0;
}


// Fun��o para atribuir dados a uma matriz[TAM][TAM]
void leMatriz(int m[TAM][TAM]) {

    int linha, coluna;

    printf("Peenchendo a Matriz[%d][%d]:\n", TAM, TAM);
    for(linha=0;linha<TAM;linha++) {

        printf("Linha %d da Matriz:\n", linha);
        for(coluna=0;coluna<TAM;coluna++) {
            printf("Entre com o valor para Matriz[%d][%d]: ", linha,coluna);
            scanf("%d", &m[linha][coluna]);
        }
        printf("\n");
    }
}

// fun��o para copiar todos os n�meros maiores que 20 da matriz para o vetor e retornar a ultima posi��o usada no vetor
int copiaMaior20(int m[TAM][TAM], int v[TAM*TAM]) {

    int linha, coluna, indice=0;

    for(linha=0;linha<TAM;linha++) {
        for(coluna=0;coluna<TAM;coluna++) {
            if (m[linha][coluna] > 20) {
                v[indice] = m[linha][coluna];
                indice++;
            }
        }
    }

    // retorna ultima posi��o �til do vetor
    return indice-1;
}

// fun��o que imprime a �rea �ltil do vetor
void imprimeVetor(int v[TAM*TAM], int limite) {

    int i;

    printf("Vetor: ");
    for(i=0;i<=limite;i++) {
        printf("[%3d] ", v[i]);
    }
    printf("\n");
}

// retornar o indice do menor elemento do vetor dado um inicio e fim
int indiceMenor(int v[TAM*TAM], int limite, int inicio) {
    int min = inicio, j;

    for(j=inicio+1; j<=limite;j++) {
        if(v[min] > v[j])
            min = j;
    }
    return min;
}

void selectionSort(int v[TAM*TAM], int limite) {

    int i, min, aux;

    // percorrer o vetor achando o menor e trocando de posi��o
    for(i=0; i<=limite; i++) {
        min = indiceMenor(v, limite, i);

        // troca
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }

}
