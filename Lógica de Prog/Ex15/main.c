#include <stdio.h>
#include <stdlib.h>

int main() {
 int n; // N�mero de entrada
 int resultado; //
 int contadora; // Contador

 printf("Digite o numero: ");
 scanf("%d", &n);

 // Utiliza um n�mero de 32 bits como base para a convers�o.
 for(contadora = 7; contadora >= 0; contadora--) {
    resultado = n >> contadora;
     if(resultado & 1) {
        printf("1");
     } else {
        printf("0");
     }
 }

 printf("\n");

}
