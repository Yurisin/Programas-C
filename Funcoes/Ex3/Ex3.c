#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);
int n;

int main(){
    int x;
    x=fibonacci(n);


return 0;
}
 int fibonacci(int n){
  int a=0,b=1,c;

   printf("Digite um numero:\n");
   scanf(" %d",&n);

   while(b<n){
    c=b+a;

    a=b;
    b=c;
    printf(" %d",b);
  }
return fibonacci;
 }









