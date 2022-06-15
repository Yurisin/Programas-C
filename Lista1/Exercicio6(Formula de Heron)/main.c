#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int L1, L2, L3, s, area;

  printf("Informe os 3 lados do triangulo:\n");
  scanf("%d %d %d", &L1, &L2, &L3);


  s = (a + b + c)/2;

  area = sqrt(s*(s-L1)*(s-L2)*(s-L3));
  printf("O valor da area eh:%d", area);

  return 0;
}
