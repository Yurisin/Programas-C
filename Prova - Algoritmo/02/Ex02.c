//Yuri Botelho
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int MaiorSequencia(char s[]);
int maior(int inicio, char s[]);

int main() {
    setlocale(LC_ALL, "");
    int posicao, tamanho;

    char string[]="aahhhhyyyykkkknnnnnjnhntttttsddsgsdgsjfhbvljksfablo"\
                "jigdsjhfgdsjvjhdfdsjkfhdsjhkjzcbvkjdshjfllsdhfjdfh"\
                "dsfgjhsfoujhadkjfsakdjasljdhjkasfkjasfghjashfjkash"\
                "yyyyyyyyyyygafasdfadsfasdsadasfsbzxcszasrrfadsfgaa"\
                "fijghoiadjlkfdlshflkdsjfkadjsdkjflkdsjflkdsjfkldsjf";

    posicao = MaiorSequencia(string);
    tamanho = maior(posicao, string);

    printf("O caractere [%.*s] se repete %d vezes!\n", tamanho, string + posicao, tamanho);



    return 0;
}

int maior(int inicio, char s[]) {
    int i=0;
    while (s[inicio] == s[inicio+i])
        i++;
    return i;
}

int MaiorSequencia(char s[]) {
    int i, aux, max=0, pos=0;
    for (i=0;i<strlen(s);i++) {
        aux = maior(i, s);
        if (aux > max) {
            max = aux;
            pos = i;
        }
    }
    return pos;
}
