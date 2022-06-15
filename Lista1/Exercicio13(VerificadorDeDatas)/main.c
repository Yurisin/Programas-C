#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

int dia1, mes1, ano1, dia2, mes2, ano2;

printf("Informe a primeira data!!\n");
printf("Informe o dia: \n");
scanf("%d", &dia1);
printf("Informe o mes: \n");
scanf("%d", &mes1);
printf("Informe o ano: \n");
scanf("%d", &ano1);

printf("\n \n");

printf("Informe a segunda data!!\n");
printf("Informe o dia: \n");
scanf("%d", &dia2);
printf("Informe o mes: \n");
scanf("%d", &mes2);
printf("Informe o ano: \n");
scanf("%d", &ano2);

printf("\n \n");

if(ano1 > ano2 || ano1 == ano2 && (mes1 >mes2 || (mes1 == mes2 && dia1 > dia2))){
    printf("A maior data é %d/%d/%d", dia1, mes1, ano1);
} else if( ano1 < ano2 || ano1 == ano2 &&(mes1 < mes2 || (mes1 == mes2 && dia1 < dia2))){
    printf("A maior data é %d/%d/%d", dia2, mes2, ano2);
} else printf("As datas são iguais %d/%d/%d = %d/%d/%d ", dia1, mes1, ano1, dia2, mes2, ano2);
    return 0;
}

