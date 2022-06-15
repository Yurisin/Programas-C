#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

double potencia (double exp, int base) {

    int i, resultado = 1;

    for (i=0; i<exp ;i++)
        resultado *= base;

    return(resultado);

}

int main() {
    int Expoente; //Expoente
    int BaseMaxima = 0;
    int base = 2;
    int ExpoenteMax = 10;

    for(Expoente=0; Expoente<=ExpoenteMax; Expoente++){

        printf("%d^%d = %.0lf\n", base, Expoente, potencia(Expoente, base));

    if(Expoente==10){

        base++;

        printf("\n");

        Expoente = 0;

        BaseMaxima++;

    }else if(BaseMaxima==9)

    break;

    }

    return 0;
}
