#include <stdio.h>
#include <math.h>

int main()
{
    int n,contadora=0;
    printf("Informe um valor para n: \n");
    scanf("%d", &n);

    for (int i=0;i<=n;i++){
      for (int j=0;j<=i;j++){
             if (i==0 || j==0)
                contadora = 1;
           else
              contadora = contadora * (i-j+1)/j ;
           printf("%d ", contadora);
  }
  printf("\n");
}
    return 0;
}
