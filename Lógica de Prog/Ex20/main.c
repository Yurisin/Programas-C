#include <stdio.h>
#include <stdlib.h>
/*
Um autom�vel possui um medidor que informa de tempos em tempos a um veloc�metro digital a
dist�ncia percorrida (em metros) e o tempo gasto (em segundos). O veloc�metro acumula algumas
medi��es e eventualmente realiza c�lculos para atualizar o valor da velocidade (em km/h) mostrada
no display do autom�vel. Desenvolva um programa que:
� Leia uma sequ�ncia de pares de valores na forma: dist�ncia percorrida<espa�o>tempo gasto<enter>;
� Acumule os valores e quando receber um par de zeros, imprime na sa�da a velocidade m�dia em
km/h, zerando os acumuladores;
� O programa � encerrado quando recebe um par de -1;
*/
int main()
{
    float tempo = 0;
    float distancia =0;
    float distancia_total=0;
    float tempo_total = 0;



    while (distancia != -1 && tempo != -1){
    scanf("%f %f", &distancia, &tempo);

    distancia_total += distancia;
    tempo_total += tempo;

    if (tempo==0 && distancia ==0){
        printf("%.2f Km/h\n", (distancia_total/1000) / (tempo_total/3600));
    }
}





    return 0;
}
