/*
 -------------------------------------------------------------
  Desenvolvido por...: Edson, Marcos, Leticia, Rogerio, Paulo 
  Finalidade.........: Terminal de Caixa Eletronico PIM
  Criado em Data.....: 04/09/2012
  Ultima Atualiza??o : 13/09/2012 
 -------------------------------------------------------------
 
 Screen Buffer Size
 width = 127
 height = 300
 
 Window Size
 width = 125
 heigth = 40
 
 Fonte 10x 18
 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

struct Cliente{
       
       char nome[30]; 
       char conta[10];
       char senha[10];
       char letras[4];
       float saldo;
       char tipo_c[10];
       };


struct Cliente C = {"Edson de Araujo", "47.509-0", "Edson", "fdn", 5000.00, "Especial"};

main()
{

    int num,car1,car2,car3,car4,car5,car6,i,e,j,k,op1,op2,count,agen01,conta1,sennha1,conblet1,x,y,faz;
          
    char login[10];
    char letr[5];
    char nome_3[10];
    float saldo_fim = C.saldo;

    op1  = 0;
    car1 = 187;   
    car2 = 201;   
    car3 = 200;   
    car4 = 188;   
    car5 = 205;   
    car6 = 186;

void banner_1() // Topo da Tela
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

        printf("                                                                            \n");
        printf(" JOINUSBANC S/A                                                                                              %s\n",__DATE__);

        system ("color a");
 
     
} // Fim Topo da Tela

char menu1() // Menu Principal do Sistema
{
        banner_1();
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       1 - TRANSACAO COM CARTAO                             \n");
        printf("                                                                            \n");
        printf("                       2 - TRANSACAO SEM CARTAO                             \n");
        printf("                                                                            \n");
        printf("                       3 - DEPOSITOS                                        \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");
        return (getchar());

        char op_1 = '1';  

} // Fim Menu Principal



void Tela_login() // Tela de Login
{
        banner_1();
        fflush(stdin);
        printf("                       TRANSACAO COM CARTAO                                 \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Digite sua Senha ");
        gets(login);
        
        if(strcmp(login,C.senha))
        {
      
             printf("                                       \n\n");
             printf("                       <<<<<<<<<<<<<<<<  Usuario incorreto  >>>>>>>>>>>>>>>>\n");

             getchar();
             system("Caixa_fim");

        }else{

             printf("\n");
             printf("                       Digite a Combinacao de Letras.: => ");
             gets(letr);


             if(strcmp(letr,C.letras))
             {
                  printf("                                       \n\n");
                  printf("                       <<<<<<<<<<<<<<<<  Seguencia de Letras Incorreta >>>>>>>>>>>>!!");
                  getchar();
                  system("Caixa_fim");
              
             }else{

                  system("cls");

             }
        }
        printf("                                                                            \n");

        char op_1 = '2';  
      
} // Fim Tela de Login



char menu2() // Menu do Usuario logado
{
     
   if (login != NULL)
   {  
        banner_1();
        fflush(stdin);
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("                                                                             \n");
        printf("                       TRANSACAO COM CARTAO                                  \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       1  - SAQUE CONTA CORRENTE                             \n");
        printf("                       2  - SAQUE POUPANCA                                   \n");
        printf("                       3  - RESGATE APLICACAO                                \n");
        printf("                       4  - DEPOSITO                                         \n");
        printf("                       5  - SALDO/EXTRATO                                    \n");
        printf("                       6  - TRANFERENCIA (DOC)                               \n");
        printf("                       7  - EMPRESTIMO / CREDITO                             \n");
        printf("                       8  - PAGAMENTO                                        \n");
        printf("                       9  - PARA SAIR (FINALIZAR)                            \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       Escolheu a opcao=> ");
        return (getchar());

        char op_1 = '2';  
   }else{
         
   system("Caixa_fim");      
   }        
} // Fim do Menu de Usuario Logado    

void Tela_saque1() // Modulo de Saque
{
        float val_saq;
        val_saq = 0;    
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       TRANSACAO SAQUE CONTA CORRENTE                        \n");
        printf("                                                                             \n");
        printf("                       [Notas Disponiveis: 10,00 - 20,00 - 50,00 - 100,00]                        \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       Digite o Valor.: ");
        scanf("%f",&val_saq);
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       9  - PARA RETORNAR AO MENU                            \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       Escolheu a opcao=> ");
        getchar();

        if (val_saq != 0)
        {
                    
            if (saldo_fim < val_saq){

                banner_1();
                printf("                                                                             \n");
                char car_a = ' ';

                printf("%c" ,car_a);
                for (j = 0; j < 123; j ++)
                {
                    printf("%c" ,car5);
                }

                printf("\n");
                printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
                printf("\n");

                printf("%c" ,car_a);
                for (j = 0; j < 123; j ++)
                {
                    printf("%c" ,car5);
                }
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       >>>>>>>>>>>>>>> SALDO INSUFICIENTE <<<<<<<<<<<<<<<                        \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       9  - PARA RETORNAR AO MENU                           \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       Escolheu a opcao=> ");
                getchar();

            }else{
        

                saldo_fim = saldo_fim - val_saq;  
     
                banner_1();
                printf("                                                                             \n");
                char car_a = ' ';

                printf("%c" ,car_a);
                for (j = 0; j < 123; j ++)
                {
                    printf("%c" ,car5);
                }

                printf("\n");
                printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
                printf("\n");

                printf("%c" ,car_a);
                for (j = 0; j < 123; j ++)
                {
                    printf("%c" ,car5);
                }
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       >>>>>>>>>>>>>>> OPERACAO REALIZADA COM SUCESSO <<<<<<<<<<<<<<<                        \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       Valor Solicitado.: %11.2f", val_saq);
                printf("                                                                            \n");
                printf("                       9  - PARA RETORNAR AO MENU                           \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       Escolheu a opcao=> ");
                getchar();
                //menu2();

               //char op_1 = '2';  
           }


           //Tela_realizada();         
        }else{
        
            banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
            printf("                                                                            \n");
            printf("                                                                            \n");
            printf("                       >>>>>>>>>>>>>>> OPERACAO NAO REALIZADA !!! <<<<<<<<<<<<<<<                        \n");
            printf("                                                                            \n");
            printf("                                                                            \n");
            printf("                                                                            \n");
            printf("                                                                            \n");
            printf("                       9  - PARA RETORNAR AO MENU                           \n");
            printf("                                                                            \n");
            printf("                                                                            \n");
            printf("                       Escolheu a opcao=> ");
            getchar();
            //menu2();
        
              
        }
        //menu2();                  
        char op_1 = '2';  

     
} // Fim Tela de Saque


void Tela_saque2() // Modulo de Saque Poupanca
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       TRANSACAO SAQUE CONTA POUPANCA                        \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       9  - PARA RETORNAR AO MENU                            \n");
        printf("                                                                             \n");
        printf("                                                                             \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Saque Poupanca


void Tela_resgate1() // Modulo de Resgate Aplicacao
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                      TRANSACAO RESGATE E APLICACAO                         \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Resgate Aplicacao

void Tela_deposito2() // Modulo de Deposito Cliente
{
        float val_dep;
        val_dep = 0;  
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                      TRANSACAO DEPOSITO CORRENTISTA                        \n");
        printf("                                                                            \n");
        printf("                      Digite o Valor do Deposito.:");
        scanf("%f", &val_dep);
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");
        getchar();
        
        if (val_dep != 0)
        {
            saldo_fim = saldo_fim + val_dep;

                banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       >>>>>>>>>>>>>>> OPERACAO REALIZADA COM SUCESSO <<<<<<<<<<<<<<<                        \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       Valor Deposito.: %11.2f", val_dep);
                printf("                                                                            \n");
                printf("                       9  - PARA RETORNAR AO MENU                           \n");
                printf("                                                                            \n");
                printf("                                                                            \n");
                printf("                       Escolheu a opcao=> ");
                getchar();

            menu2();            
        }            
        

        char op_1 = '2';  

     
} // Fim Tela de Deposito Correntista


void Tela_saldo() // Modulo de Saldo e Extrato
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                      TRANSACAO SALDO E EXTRATO                             \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Saldo e Extrato


void Tela_transferencia() // Modulo de Transferencia
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                        TRANSACAO TRANSFERENCIA  (DOC)                      \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Transferencia


void Tela_emprestimo() // Modulo de Emprestimo e Credito
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                      TRANSACAO EMPRESTIMO E CREDITO                        \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Emprestimo

void Tela_pagamento() // Modulo de Pagamentos
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                             \n");
        printf("                                                                            \n");
        printf("                         TRANSACAO PAGAMENTO                                \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Pagamentos


void Tela_realizada() // Tela de Resultado da Operacao com Sucesso
{
     
        banner_1();
        printf("                                                                             \n");
        char car_a = ' ';

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }

        printf("\n");
        printf("  Correntista.: %s  -  N. Conta.: %s  - Seu Saldo.: %11.2f ", C.nome, C.conta, saldo_fim);
        printf("\n");

        printf("%c" ,car_a);
        for (j = 0; j < 123; j ++)
        {
            printf("%c" ,car5);
        }
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                     OPERACAO REALIZADA COM SUCESSO                         \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       Escolheu a opcao=> ");

        char op_1 = '2';  

     
} // Fim Tela de Pagamentos


void Tela_deposito() // Modulo de Deposito
{
     
        banner_1();
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                      TRANSACAO DEPOSITO SEM CARTAO                         \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                       9  - PARA RETORNAR AO MENU                           \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                      Escolheu a opcao=> ");
        scanf("%d",&op2);
        //getchar();
        //getchar();
        
        if (op2 == 9)
        {
            system("Caixa_fim");          
        }              
        char op_1 = '1';  

        //sair();
     
} // Fim Tela Deposito


void sair() // Modulo de Saida
{
     
        banner_1();
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                   SAIDA DO CAIXA ELETRONICO JOINUSBANC                     \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
     
        int i;
        printf("\n                           Finalizandoo");
        for (i=0; i<10; i++){
           _sleep(500);
        system ("color a");
        printf(". ");
        }
        system("Caixa_fim");
        
} // Fim modulo Saida



// Manipulacao das Opcoes

char op_1;
 
while(op_1!='s')
{


                
         if (op_1 = '1')  // Primeiro menu sem Cartao
         {
             op_1 = menu1();

            switch(op_1)
            {
               case'1': Tela_login(); break;
               case'2': Tela_deposito(); break;
               case'3': Tela_deposito(); break;
               case'9': system("Caixa_fim"); break;
            }
         
         }


         if (op_1 = '2')  // Segundo menu Cliente logado 
         {
             op_1 = menu2();

            switch(op_1)
            {
               case'1': Tela_saque1(); break;
               case'2': Tela_saque2(); break;
               case'3': Tela_resgate1(); break;
               case'4': Tela_deposito2(); break;
               case'5': Tela_saldo(); break;
               case'6': Tela_transferencia(); break;
               case'7': Tela_emprestimo(); break;
               case'8': Tela_pagamento(); break;
               case'9': sair(); break;
            }

         }      
         

      getchar();
      getchar();
}

} // Fim main
