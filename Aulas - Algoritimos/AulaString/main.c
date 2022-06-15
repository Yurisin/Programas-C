// Ler uma string e imprimir ela invertida
// -> Adicione a possibilidade de ter espaços em branca nas string
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    // variáveis
    char st[81], stInv[81];
    int i, j, tam;

    // Ler a string original a ser invertida
    printf("Digite um string sem espaços em branco: ");
    scanf("%[^\n]", st);

    // encontar a posição do '\0'
    tam=0;
    while(st[tam] != '\0' && tam<81) {
        tam++;
    }

    // inverte a string st colocando sua inversa em stInv
    j = tam - 1; // j vai controlar o indice da string invertida
    i = 0; // i vai contralar o indice da string normal
    while(i<tam) {
        stInv[j] = st[i];
        i++;
        j--;
    }
    stInv[tam] = '\0'; // seta o final da string invertida

    // imprime a string ivertida
    printf("STR Ivertida: %s\n", stInv);


    //Verificar se a palava e um palindromo
    int ehPalindromo = 1;
    for(int contadora=0;contadora<=tam;contadora++);{
        if(st[i] != stInv[j]){
        ehPalindromo = 0;
        }
    }

    if(ehPalindromo == 1) {
        printf("\nE PALINDROMO!");
    }else{
    printf("NAO E PALINDROMO!");
        }




    return 0;
}

