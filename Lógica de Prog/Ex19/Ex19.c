#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0;
   int n1,n2,n3,n4,n5,n6;
   for(n1=1;n1<61;n1++)
    for(n2=n1+1;n2<61;n2++)
        for(n3=n2+1;n3<61;n3++)
            for(n4=n3+1;n4<61;n4++)
                for(n5=n4+1;n5<61;n5++)
                    for(n6=n5+1;n6<61;n6++)
    if((n1%2==0) && (n2%2!=0) &&(n3%2==0)&&(n4%2!=0)&&(n5%2==0)&& (n6%2!=0)){i++;
        i++;

    printf("%d %d %d %d %d %d \n",n1,n2,n3,n4,n5,n6);}

    printf("%d",i);

    return 0;
}
