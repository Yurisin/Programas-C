#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct parCalcados{
        int Codigo;
        char Marca[20];
        int Tamanho;
        int Quantidade;
        float Valor;
    }*Lista;

    int i, nCadastro, opcaoMenu1, opcaoConsultar, codigo_verificador, tamanho_verificador, excluirItem;
    char marca_verificador[20];
    int contadora = 1;

    while(opcaoMenu1 != 5){



            printf("========================================================\n");
            printf("                      LOJA DATA SHOW                    \n");
            printf("========================================================\n");
            printf("                           MENU:                        \n");
            printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

            printf("1 - Incluir novo calcado\n");
            printf("2 - Alterar calcado\n");
            printf("3 - Consultar relatorio de calcados\n");
            printf("4 - Excluir calcado\n");
            printf("5 - Sair\n");
            printf("--------------------------------------------------------\n");
            printf("Qual opcao deseja acessar: ");
            scanf("%d", &opcaoMenu1);

                switch(opcaoMenu1){

                    case 1:
                        system("cls");

                        printf("========================================================\n");
                        printf("                      LOJA DATA SHOW                    \n");
                        printf("========================================================\n");
                        printf("                   INCLUIR NOVO CALCADO                 \n");
                        printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                        printf("Quantos itens deseja cadastrar?\n");
                        scanf("%d", &nCadastro);

                        Lista = (struct parCalcados*) malloc (nCadastro * sizeof(struct parCalcados));

                        system("cls");

                        for(i=0;i<nCadastro;i++){

                            printf("========================================================\n");
                            printf("                      LOJA DATA SHOW                    \n");
                            printf("========================================================\n");
                            printf("                   INICIANDO CADASTRO %d...             \n", contadora);
                            printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                            printf("\nInforme o codigo: \n");
                            scanf("%d", &Lista[i].Codigo);
                            fflush(stdin);

                            printf("Informe a marca: \n");
                            scanf("%s", Lista[i].Marca);
                            fflush(stdin);

                            printf("Informe o tamanho do calcado: \n");
                            scanf("%d", &Lista[i].Tamanho);
                            fflush(stdin);

                            printf("Informe a quantidade de pares disponiveis: \n");
                            scanf("%d", &Lista[i].Quantidade);
                            fflush(stdin);

                            printf("Informe o valor de cada par: \n");
                            scanf("%f", &Lista[i].Valor);
                            fflush(stdin);

                            printf("\n             Cadastro do calcado incluso com sucesso\n\n");

                            contadora++;

                            system("cls");
                        }


                            break;

                    case 2:
                        system("cls");

                        printf("========================================================\n");
                        printf("                      LOJA DATA SHOW                    \n");
                        printf("========================================================\n");
                        printf("                   ALTERACAO DE CALCADO                 \n");
                        printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                        printf("Informe o codigo do produto que deseja alterar: ");
                        scanf("%d", &codigo_verificador);

                        for(i=0;i<nCadastro;i++){
                            if(codigo_verificador == Lista[i].Codigo){
                                printf("Informe o codigo: ");
                                scanf("%d", &Lista[i].Codigo);
                                printf("Informe a marca: ");
                                scanf("%s", &Lista[i].Marca);
                                printf("Informe o tamanho do calcado: ");
                                scanf("%d", &Lista[i].Tamanho);
                                printf("Informe a quantidade disponivel: ");
                                scanf("%d", &Lista[i].Quantidade);
                                printf("Informe o valor do par: ");
                                scanf("%f", &Lista[i].Valor);

                                printf("\n             Cadastro do calcado alterado com sucesso\n\n");

                                system("cls");

                            }else{
                            }
                        }

                            break;



                    case 3:
                        system("cls");

                        printf("========================================================\n");
                        printf("                      LOJA DATA SHOW                    \n");
                        printf("========================================================\n");
                        printf("                MENU DE CONSULTA DE CALCADO             \n");
                        printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");
                        printf("1 - Por Marca\n");
                        printf("2 - Por Codigo\n");
                        printf("3 - Por Tamanho\n");
                        printf("4 - Todos\n");
                        printf("--------------------------------------------------------\n");
                        printf("Qual opcao deseja acessar: \n");
                        scanf("%d", &opcaoConsultar);
                                system("cls");

                                    switch(opcaoConsultar){

                                        case 1:
                                                system("cls");
                                            printf("========================================================\n");
                                            printf("                      LOJA DATA SHOW                    \n");
                                            printf("========================================================\n");
                                            printf("                CONSULTA DE CALCADO POR MARCA           \n");
                                            printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");


                                            printf("Informe a marca: ");
                                            scanf("%s", &marca_verificador);

                                            system("cls");

                                           for(i=0;i<nCadastro;i++){
                                                if(strcmp(marca_verificador,Lista[i].Marca)){
                                                }else{

                                                    printf("========================================================\n");
                                                    printf("                      LOJA DATA SHOW                    \n");
                                                    printf("========================================================\n");
                                                    printf("                CONSULTA DE CALCADO POR MARCA           \n");
                                                    printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                                                    printf("Codigo: %d\n", Lista[i].Codigo);
                                                    printf("Marca: %s\n", Lista[i].Marca);
                                                    printf("Tamanho: %d\n", Lista[i].Tamanho);
                                                    printf("Quantidade: %d\n", Lista[i].Quantidade);
                                                    printf("Valor: %.2f\n", Lista[i].Valor);
                                                }
                                            }
                                            break;



                                       case 2:
                                                system("cls");


                                            printf("Informe o codigo do produto: \n");
                                            scanf("%d", &codigo_verificador);

                                            system("cls");

                                            for(i=0;i<nCadastro;i++){
                                                if(codigo_verificador == Lista[i].Codigo){

                                                printf("========================================================\n");
                                                printf("                      LOJA DATA SHOW                    \n");
                                                printf("========================================================\n");
                                                printf("                CONSULTA DE CALCADO POR CODIGO          \n");
                                                printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                                                printf("\nCodigo: %d\n", Lista[i].Codigo);
                                                printf("Marca: %s\n", Lista[i].Marca);
                                                printf("Tamanho: %d\n", Lista[i].Tamanho);
                                                printf("Quantidade: %d\n", Lista[i].Quantidade);
                                                printf("Valor: %.2f\n", Lista[i].Valor);
                                                }
                                            }
                                            break;



                                        case 3:
                                                system("cls");


                                            printf("\nInforme o tamanho: \n");
                                            scanf("%d", &tamanho_verificador);

                                            system("cls");

                                            for(i=0;i<nCadastro;i++){
                                                if(tamanho_verificador <= Lista[i].Tamanho){

                                                    printf("========================================================\n");
                                                    printf("                      LOJA DATA SHOW                    \n");
                                                    printf("========================================================\n");
                                                    printf("                CONSULTA DE CALCADO POR TAMANHO         \n");
                                                    printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");

                                                    printf("\nCodigo: %d\n", Lista[i].Codigo);
                                                    printf("Marca: %s\n", Lista[i].Marca);
                                                    printf("Tamanho: %d\n", Lista[i].Tamanho);
                                                    printf("Quantidade: %d\n", Lista[i].Quantidade);
                                                    printf("Valor: %.2f\n", Lista[i].Valor);
                                                    }
                                                }
                                                break;




                                        case 4:
                                                system("cls");

                                                printf("========================================================\n");
                                                printf("                      LOJA DATA SHOW                    \n");
                                                printf("========================================================\n");
                                                printf("                 EXIBINDO TODOS OS CALCADOS             \n");
                                                printf("-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n");


                                            for(i=0;i<nCadastro;i++){

                                                printf("Codigo: %d\n", Lista[i].Codigo);
                                                printf("Marca: %s\n", Lista[i].Marca);
                                                printf("Tamanho: %d\n", Lista[i].Tamanho);
                                                printf("Quantidade: %d\n", Lista[i].Quantidade);
                                                printf("Valor: %.2f\n", Lista[i].Valor);

                                                printf("\n\n");
                                                }
                                            }
                                            break;

                    case 4:
                        system("cls");

                        int *ponteiro;

                        printf("\nDigite o codigo do calcado que voce deseja excluir: ");
                        scanf("%d", &excluirItem);

                        for(i=0;i<nCadastro;i++){
                            if(excluirItem == Lista[i].Codigo){
                                Lista[i].Codigo = Lista[nCadastro - 1].Codigo;
                                strcpy(Lista[i].Marca,Lista[nCadastro - 1].Marca);
                                Lista[i].Tamanho = Lista[nCadastro - 1].Tamanho;
                                Lista[i].Quantidade = Lista[nCadastro - 1].Quantidade;
                                Lista[i].Valor = Lista[nCadastro - 1].Valor;

                                ponteiro = (struct parCalcados*) realloc (Lista, (nCadastro - 1) * sizeof(struct parCalcados));
                                nCadastro--;
                            }
                        }





                            break;




                    case 5:
                        system("cls");

                        printf("\n\nObrigado por usar nosso sistema, qualquer duvida ou erro reclamar com o estagiario\n\n");

        }
    }
}

