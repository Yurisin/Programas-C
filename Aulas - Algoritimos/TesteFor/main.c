#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

int potencia = 1;
int n;

printf("Digite um numero N: ");
scanf("%d", &n);

for (int i = 0; i < n; i++){
        printf("2^%d = %d\n", i, potencia);
        potencia = potencia * 2;
}












return 0;
}
