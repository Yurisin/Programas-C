//Yuri Botelho

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("$Yuri Botelho$\n"); // Escrever o nome

int valor, qtde=0;

    while (1==1) {
        printf("Informe um valor:");
        scanf("%d", &valor);

        if ((valor>=10) && (valor<=20)) {
            qtde=qtde+1;
        }

        else if(valor == 0) { //Se a primeira verificacao for falsa executa este
                    printf("\n\nERRO!\n\n");
                    break; //Para o WHILE
            }
    }


    printf("Foram digitados %d valores no intervalo.", qtde);
    return 0;
}
