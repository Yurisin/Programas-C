#include <stdio.h>
#include <stdlib.h>


int t;
while(u>0){
    if(v>u){

        t = u;
        u = v;
        v = t;
    }
    u = u - v;
}
return v;
}


int main()
{
  int m, n;
  scanf("%d %d", &m, &n);

  printf("\n%d",mdc(m,n));


    return 0;
}
