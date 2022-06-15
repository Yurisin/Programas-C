#include <stdio.h>
#include <stdlib.h>
/*
Um automóvel possui um medidor que informa de tempos em tempos a um velocímetro digital a
distância percorrida (em metros) e o tempo gasto (em segundos). O velocímetro acumula algumas
medições e eventualmente realiza cálculos para atualizar o valor da velocidade (em km/h) mostrada
no display do automóvel. Desenvolva um programa que:
• Leia uma sequência de pares de valores na forma: distância percorrida<espaço>tempo gasto<enter>;
• Acumule os valores e quando receber um par de zeros, imprime na saída a velocidade média em
km/h, zerando os acumuladores;
• O programa é encerrado quando recebe um par de -1;
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
