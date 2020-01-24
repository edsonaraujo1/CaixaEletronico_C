#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


main()
{
      
    // Inicializa variaveis
    
    int car1,car2,car3,car4,car5,car6,i,e,j,k,op1;
    op1  = 0;
    car1 = 187;   
    car2 = 201;   
    car3 = 200;   
    car4 = 188;   
    car5 = 205;   
    car6 = 186;
    
    // Variaveis do Sistema Caixa
    int agen01,conta1,sennha1,conblet1;
    int x,y;      
    char login[10];
    char log[10] = "Edson";
    char letr[5];
    char comb[5] = "fdn";

    // TELA DE LOGIN DA CONTA
    void Sub_tela1()
    {
        system("cls");           
        fflush(stdin);
        printf("%c" ,car2);

        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("%c\n" ,car1);
        printf("%c                                                                                                                           " ,car6);
        printf("%c\n" ,car6);
        printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
        printf("%c\n" ,car6); 
        printf("%c                                                                                                                           " ,car6); 
        printf("%c\n" ,car6); 
        printf("%c" ,car3); 

        for (e = 0; e < 123; e ++)
        {
            printf("%c" ,car5);
        }
        printf("%c" ,car4); 
        
        printf("                                                                                                                                                                                           %s\n",__DATE__);
        printf(" JOINUSBANC S/A                                                              \n");
        
        printf("                       TRANSACAO COM CARTAO                                 \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Digite sua Senha ");
        gets(login);
        
        if(strcmp(login,log))
        {
      
           printf("                       Usuario incorreto \n");
           getch();
           op1 = 9;
                          
         }else{

           printf("                       Usuario correto \n");
           printf("                       Digite a Combinacao de Letras.: => ");
           gets(letr);


           if(strcmp(letr,comb))
           {
                printf("                       Seguencia de Letras Incorreta !!");
                getch();
                op1 = 9;
              
           }else{

                system("cls");
        
                printf("%c" ,car2);

                for (j = 0; j < 123; j ++)
                {
                     printf("%c" ,car5);
                }
                printf("%c\n" ,car1);
                printf("%c                                                                                                                           " ,car6);
                printf("%c\n" ,car6);
                printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
                printf("%c\n" ,car6); 
                printf("%c                                                                                                                           " ,car6); 
                printf("%c\n" ,car6); 
                printf("%c" ,car3); 

                for (e = 0; e < 123; e ++)
                {
                     printf("%c" ,car5);
                }
                printf("%c" ,car4); 

                printf("                                                                                                                                                                                           %s\n",__DATE__);
                printf(" JOINUSBANC S/A                                                              \n");

                printf("                       Ola Edson Seja bem Vindo \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
        
                printf("                       TRANSACAO COM CARTAO                                 \n");
                printf("                                                                            \n");
                printf("                       1 - SAQUE CONTA CORRENTE                             \n");
                printf("                       2 - SAQUE POUPANCA                                   \n");
                printf("                       3 - RESGATE APLICACAO                                \n");
                printf("                       4 - DEPOSITO                                         \n");
                printf("                       5 - SALDO/EXTRATO                                    \n");
                printf("                       6 - TRANFERENCIA (DOC)                               \n");
                printf("                       7 - EMPRESTIMO / CREDITO                             \n");
                printf("                       8 - PAGAMENTO                                        \n");
                printf("                       9 - PARA RETORNAR AO MENU                            \n");
                printf("                                                                            \n");
                printf("                Escolheu a opcao=> ");
                scanf("%d",&op1);
                printf("                                                                            \n");
        

          }

                
      }
      
    }

    // TELA PRINCIPAL DO SISTEMA
    void Sub_tela2()
    {
        system("cls");           
        printf("%c" ,car2);

        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("%c\n" ,car1);
        printf("%c                                                                                                                           " ,car6);
        printf("%c\n" ,car6);
        printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
        printf("%c\n" ,car6); 
        printf("%c                                                                                                                           " ,car6); 
        printf("%c\n" ,car6); 
        printf("%c" ,car3); 

        for (e = 0; e < 123; e ++)
        {
            printf("%c" ,car5);
        }
        printf("%c" ,car4); 

        printf("                                                                                                                                                                                           %s\n",__DATE__);
        printf(" JOINUSBANC S/A                                                             \n");

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       1 - DEPOSITOS                                        \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                Escolheu a opcao=> ");
        scanf("%d",&op1);
        printf("                                                                            \n");
        //system("cls");
        if (op1 == 1)
        {
           // DEPOSITO SEM CARTAO
           //b_tela1();      
        }
        
    }


    // TELA PRINCIPAL DO SISTEMA
    void Tela_mae()
    {
        system("cls");           
        printf("%c" ,car2);

        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("%c\n" ,car1);
        printf("%c                                                                                                                           " ,car6);
        printf("%c\n" ,car6);
        printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
        printf("%c\n" ,car6); 
        printf("%c                                                                                                                           " ,car6); 
        printf("%c\n" ,car6); 
        printf("%c" ,car3); 

        for (e = 0; e < 123; e ++)
        {
            printf("%c" ,car5);
        }
        printf("%c" ,car4); 

        printf("                                                                                                                                                                                           %s\n",__DATE__);
        printf(" JOINUSBANC S/A                                                             \n");

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       1 - TRANSACAO COM CARTAO                             \n");
        printf("                                                                            \n");
        printf("                       2 - TRANSACAO SEM CARTAO                             \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                Escolheu a opcao=> ");
        scanf("%d",&op1);
        printf("                                                                            \n");
        //system("cls");
        
        
    }
      
    void Sub_tela_x()
    {
    
        system("cls");           
        printf("%c" ,car2);

        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("%c\n" ,car1);
        printf("%c                                                                                                                           " ,car6);
        printf("%c\n" ,car6);
        printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
        printf("%c\n" ,car6); 
        printf("%c                                                                                                                           " ,car6); 
        printf("%c\n" ,car6); 
        printf("%c" ,car3); 

        for (e = 0; e < 123; e ++)
        {
            printf("%c" ,car5);
        }
        printf("%c" ,car4); 

        printf("                                                                                                                                                                                           %s\n",__DATE__);
        printf(" JOINUSBANC S/A                                                             \n");

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                        OPCAO DIGITADA INVALIDA                             \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9 - PARA RETORNAR AO MENU                             \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                Escolheu a opcao=> ");
        scanf("%d",&op1);
        printf("                                                                            \n");
        //system("cls");
    
         
    }       
    
    // TELA PRINCIPAL DO SISTEMA
    void Sub_tela4()
    {

        system("cls");           
        printf("%c" ,car2);

        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("%c\n" ,car1);
        printf("%c                                                                                                                           " ,car6);
        printf("%c\n" ,car6);
        printf("%c                                                AUTO ATENDIMENTO ELETRONICO                                                " ,car6);
        printf("%c\n" ,car6); 
        printf("%c                                                                                                                           " ,car6); 
        printf("%c\n" ,car6); 
        printf("%c" ,car3); 

        for (e = 0; e < 123; e ++)
        {
            printf("%c" ,car5);
        }
        printf("%c" ,car4); 

        printf("                                                                                                                                                                                           %s\n",__DATE__);
        printf(" JOINUSBANC S/A                                                             \n");

        printf("                                                                            \n");
         
        printf("Tela Paulo");
    
    }     
    // Funacao Controla o Tecaldo
    void Tela_screem()
    {

        if (op1 == '\0')
        {
            Tela_mae();
        }    
        if (op1 == 1)
        {
            Sub_tela1();
        }    
        if (op1 == 2)
        {
            Sub_tela2();
        }    
        if (op1 == 3)
        {
            //Sub_tela4();
        }    
        if (op1 == 4)
        {
            Sub_tela4();
        }    
        if (op1 == 9)
        {
            Tela_mae();
        }
        if (op1 > 4 && op1 < 9)
        {    
            Sub_tela_x();
        }    
                
   
    }    
    
    // Chama funcao Tela_screem()
    Tela_screem();
    
    // Metodo para continuar rodando o programa
    // ate que o usuario o encerre.
    short int rodando;

    do
    {


        scanf("%d",&op1);
    
        if (op1 == 0)
        {
            system("cls");
            //printf("voce escolheu a opcao 3..");
            exit(0);
        }        
        if (op1 == 1)
        {
            system("cls");
            //printf("voce escolheu a opcao 1..");
            Tela_screem();
        }        
        if (op1 == 2)
        {
            system("cls");
            //printf("voce escolheu a opcao 2..");
            Tela_screem();
        }        
        if (op1 == 3)
        {
            system("cls");
            //printf("voce escolheu a opcao 3..");
            Tela_screem();
        }        
        if (op1 == 9)
        {
            system("cls");
            //printf("voce escolheu a opcao 3..");
            Tela_screem();
        }        

        if (op1 > 3 && op1 < 9)
        {
            
            system("cls");
            //printf("voce escolheu a opcao 3..");
            Tela_screem();
        }        

    
    
    }while(rodando > 0);
        return 0;
        getch();
    
    //Sub_tela1();  

}
