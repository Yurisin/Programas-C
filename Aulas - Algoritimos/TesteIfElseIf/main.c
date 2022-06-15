#include <stdio.h>
#include <stdlib.h>

/*Quando ações são vendidas ou compradas por meio de um corretor, a comissão do corretor é muitas vezes calculada usando uma escala que depende do valor das ações negociadas. Escreva um programa calcule o valor da comissão a partir do valor da transação informado pelo usuário, sabendo-se que o corretor cobra os valores indicados abaixo e que a comissão mínima é de R$ 39:

Até R$ 2.500,00, comissão de R$30+1,7%
R$2.500,01 até R$6.250,00, comissão de R$56 + 0,66%
R$6.250,01 até R$20.000,00, comissão de R$76 + 0,34%
R$20.000,01 até R$50.000,00, comissão de R$100 + 0,22%
R$50.000,01 até R$500.000,00, comissão de R$155 + 0,11%
Mais que R$ 500.000,00, comissão de R$255 + 0,09%
*/

int main()
{
    //Variaveis
    float acao;
    float comissao;

    printf("Digite o valor da acao:");
    scanf("%f", &acao);

    if (acao <= 2500) {
     comissao = 30 + (acao * (1.7/100));
     if (comissao < 39){
        comissao = 39;
     }
     printf("A comissao do vendedor e de: R$%.2f", comissao);
    }

    else if ((acao >= 2500.01) && (acao <= 6250.00)){
        comissao = 56 + (acao * (0.66/100));
        printf("A comissao do vendedor e de: R$%.2f", comissao);
    }

    else if ((acao >= 6250.01) && (acao <= 20000.00)){
        comissao = 76 + (acao * (0.34/100));
        printf("A comissao do vendedor e de: R$%.2f", comissao);
    }

    else if ((acao >= 20000.01) && (acao <= 50000.00)){
        comissao = 100 + (acao * (0.22/100));
        printf("A comissao do vendedor e de: R$%.2f", comissao);
    }

    else if ((acao >= 50000.01) && (acao <= 500000.00)){
        comissao = 155 + (acao * (0.11/100));
        printf("A comissao do vendedor e de: R$%.2f", comissao);
    }

    else if (acao >= 500000.01) {
     comissao = 255 + (acao * (0.09/100));
     printf("A comissao do vendedor e de: R$%.2f", comissao);
    }


    }









