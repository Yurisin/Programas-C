    #include<stdio.h>
    #include<conio.h>
    int main (void )
    {
      int matriz[3][3],i, j, n;

      printf("digite o numero de linhas");
      scanf("%d",&n);

      printf ("\nDigite valor para os elementos da matriz\n\n");

      for ( i=1; i<=n; i++ )
        for ( j=0; j<=1; j++ )
        {
          printf ("\nElemento[%d][%d] = ", i, j);
          scanf ("%d", &matriz[ i ][ j ]);
        }

      printf("\n\n******************* Saida de Dados ********************* \n\n");

      for ( i=1; i<=n; i++ )
        for ( j=0; j<=1; j++ )
        {
          printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
        }

      getch();
      return(0);
    }
