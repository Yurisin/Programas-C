#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma; //Variavel auxiuliar para calculo da media
    int tam_linha = 5; //Linhas -> Alunos
    int tam_coluna = 4; // Colunas -> Notas
    float notas[tam_linha][tam_coluna];
    float medias[tam_linha];//Medias de Cada Aluno

    //Preencher as notas
    for(int linha = 0; linha<tam_linha; linha++){

        printf("Notas do Aluno N.%d\n ", linha+1);
        for(int coluna = 0; coluna<tam_coluna; coluna++){
            printf("Nota do Trabalho N.%d: ", coluna+1);
            scanf("%f", &notas[linha][coluna]);
        }
    printf("\n");
    }

    for(int linha = 0; linha<tam_linha; linha++){
        soma = 0;
        for(int coluna = 0; coluna<tam_coluna; coluna++){
            soma += notas[linha][coluna];
        }
        medias[linha] = soma/tam_coluna;
    }

    //Imprime cada media de cada aluno
    for(int linha; linha<tam_linha; linha++){
        printf("Media do aluno N.: %.2f\n", linha+1, medias[linha]);
    }

    return 0;
}
