#include <stdio.h>
#include <stdlib.h>

int main() {
    int D1, D2, D3, D4;

    for(D1=0;D1<=9;D1++)
        for(D2=0;D2<=9;D2++)
            for(D3=0;D3<=9;D3++)
                for(D4=0;D4<=9;D4++)
                    printf("%d %d %d %d\n", D1,D2,D3,D4);

    printf("\n\n");
}

