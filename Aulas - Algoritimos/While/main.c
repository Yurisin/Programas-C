#include <stdio.h>
#include <stdlib.h>

int main()
{
//While
printf("Versao com While\n");

int i = 0;
while (i < 5){
        printf("# ");
        i = i + 1;
}

//Do While
printf("Versao com do-while\n");

i = 0;
do {
        printf("$ ");
        i++;
}   while (i <5);

//For
printf("Versao com For\n");
for(i=0; i < 5; i++);{
printf("% ");
}






     return 0;
}
