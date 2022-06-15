/*
32. Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario nao ̃informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
• Soma entre x e y: soma de cada elemento de x com o elemento da mesma posic ̧ao em y.
• Produto entre x e y: multiplicacao de cada elemento de x com o elemento da mesma
posicao em y.
• Diferenca entre x e y: todos os elementos de x que nao existam em y.
• Intersecao entre x e y: apenas os elementos que aparecem nos dois vetores.
• Uniao entre x e y: todos os elementos de x, e todos os elementos de y que nao
estao em x.
*/

#include <stdio.h>
#include <stdlib.h>


#define TAM 5

int main()
{
    int contadora;
    int VetX[TAM];
    int VetY[TAM];
    int Soma[TAM]; //SOMA DOS VETORES
    int Produto[TAM]; //MULTIPLICACAO DOS VETORES
    int Diferenca[10];  // todos os elementos de x que nao existam em y.
    int Inter[contadora]; //apenas os elementos que aparecem nos dois vetores.
    int Uniao[10]; //todos os elementos de x, e todos os elementos de y que nao estao em x

    printf("NAO REPITA VALORES NO MESMO VETOR!\n");

    //Percorrer e preencher o vetor X
    for(int i=0;i<TAM; i++){
        printf("Informe os valores do vetor X: ");
        scanf("%d", &VetX[i]);
    }

    //Percorrer e preencher o vetor Y
    for(int i=0;i<TAM; i++){
        printf("Informe os valores do vetor Y: ");
        scanf("%d", &VetY[i]);
    }

    //Percorrer e preencher o vetor SOMA
    for(int i=0;i<TAM; i++){
        Soma[i] = VetX[i] + VetY[i];
    }

    //Percorrer e preencher o vetor PRODUTO
    for(int i=0;i<TAM; i++){
        Produto[i] = VetX[i] * VetY[i];
    }

    //Percorrer e preencher o vetor DIFERENCA (ARRUMAR ARRUMAR ARRUMAR ARRUMAR ARRUMAR ARRUMAR)
    contadora = 0;
    for(int i=0;i<TAM; i++){
            for(int j=0; j<TAM;j++){
                if(VetX[i] != VetY[j]){
                        Diferenca[contadora] = VetX[i];
                            contadora++;
            }
        }
    }

    //Percorrer e preencher o vetor INTERSECCAO
    contadora = 0;
    for(int i=0;i<TAM; i++){
            for(int j=0; j<TAM;j++){
                if(VetX[i] == VetY[j]){
                        Inter[contadora] = VetX[i];
                            contadora++;
            }
        }
    }




    //Imprimir na tela o vetor X
    printf("Vetor X:\n");
    for(int i=0;i<TAM; i++){
        printf("[%d ]", VetX[i]);
    }

    printf("\n\n");

    //Imprimir na tela o vetor Y
    printf("Vetor Y:\n");
    for(int i=0;i<TAM; i++){
        printf("[%d ]", VetY[i]);
    }

    printf("\n\n");

    //Imprimir na tela o vetor SOMA
    printf("SOMA:\n");
    for(int i=0;i<TAM; i++){
        printf("[%d ]", Soma[i]);
    }

    printf("\n\n");

    //Imprimir na tela o vetor PRODUTO
    printf("PRODUTO:\n");
    for(int i=0;i<TAM; i++){
        printf("[%d ]", Produto[i]);
    }

    printf("\n\n");

    //Imprimir na tela o vetor DIFERENCA
    printf("DIFERENCA:\n");
    for(int i=0;i<contadora; i++){
        printf("[%d ]", Diferenca[i]);
    }


    printf("\n\n");

    //Imprimir na tela o vetor PRODUTO
    printf("INTERSECCAO:\n");
    for(int i=0;i<contadora; i++){
        printf("[%d ]", Inter[i]);
    }













}
