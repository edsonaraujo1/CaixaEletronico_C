#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>


    // Inicializa variaveis
    
    int car1,car2,car3,car4,car5,car6,i,e,j,k,op1;
    op1  = 0;
    car1 = 187;   
    car2 = 201;   
    car3 = 200;   
    car4 = 188;   
    car5 = 205;   
    car6 = 186;


struct Cliente{
       int num;
       char nome[30]; 
       char conta[10];
       char senha[10];
       char saldo[12];
       char tipo_c[10];
       };
       
FILE *arquivo;
struct Cliente C;

char menu(){
    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
        printf("                                                                            \n");


    printf("                     1- Cadastrar Cliente e Conta\n");
    printf("                     2- Listar Clientes\n");
    printf("                     3- Buscar Clientes\n");
    printf("                     4- Alterar Clientes\n");
    printf("                     5- Sair\n\n");
    printf("                                                                            \n");
    printf("                        Opcao: ");
    system ("color a");
    return (getchar());
     
   
}
/* Buscar Clientes*/

int busca(int n){
    fread(&C, sizeof(C), 1, arquivo);
    while(!feof(arquivo)){
         if(C.num==n){
                      fseek(arquivo, sizeof(C), SEEK_CUR);
                      return 1;
         }
                      fread(&C, sizeof(C), 1, arquivo);
    }
                      return 0;
}

/*Cadastro de Clientes*/

void cad(){
    arquivo = fopen ("cliente.txt", "a+b");

    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
        printf("                                                                            \n");


    if(arquivo==NULL){
        printf("                    \nErro ao abrir o arquivo \n");
           return;
    }    
           printf("\n\n              Numero de Inscricao:");
    C.num++;
    printf("000%d",C.num);         
           printf("\n\n              Nome do Cliente:");
           fflush(stdin);
           gets(C.nome);
           printf("\n                Conta:"); 
           fflush(stdin);     
           gets(C.conta);
           printf("\n                Senha:");
           fflush(stdin);
           gets(C.senha);
           printf("\n                Saldo:");
           fflush(stdin);
           gets(C.saldo);
           printf("\n                Tipo Conta:");
           fflush(stdin);
           gets(C.tipo_c);
           fwrite(&C, sizeof(C), 1, arquivo);
           getchar();
                fclose(arquivo);           
}

/*Listar*/

void listar(){

    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
        printf("                                                                            \n");

     int w=0;
     arquivo= fopen("cliente.txt","rw");
     if(arquivo==NULL){
        printf("                      Erro ao abrir o arquivo");
                       return;
     }
     fread(&C, sizeof(C), 1, arquivo);
         printf("\n      Relacao de Clientes\n");
     while(!feof(arquivo)){
         w++;
         printf("\n\n");
         printf("          Inscricao: %d\n", C.num);
         printf("          Nome: %s\n", C.nome);
         printf("          Conta: %s\n", C.conta);
         printf("          Senha: %s\n", C.senha);
         printf("          Saldo: %s\n", C.saldo);
         printf("          Tipo Conta: %s\n", C.tipo_c); 
         printf("\n");
         fread(&C, sizeof(C), 1, arquivo);
         if(feof(arquivo) || (w==20)){
                          break;
                          getchar();
                          getchar();
         }
     }
     fclose(arquivo);
}

/*Buscar Clientes*/

void buscar(){
     int insc;
     arquivo = fopen("cliente.txt","rw");

    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
        printf("                                                                            \n");


     if(arquivo==NULL){
        printf("\n                   Erro ao abrir o arquivo\n");
     }
     printf("\n");
       printf("\n             Digite o Numero da Inscricao do Cliente  ");
     scanf("%d",&insc);
     /*Busca(insc)*/
     if(busca(insc == 0))
                      printf("\n\n           Numero de inscricao invalido\n");
                      else{
                      fread(&C, sizeof(C), 1, arquivo);
                      printf("\n");
                      printf("               Inscricao: %d\n\n", C.num);
                      printf("               Nome: %s\n\n", C.nome);
                      printf("               Conta: %s\n\n", C.conta);
                      printf("               Senha: %s\n\n", C.senha);
                      printf("               Saldo: %s\n\n", C.saldo);
                      printf("               Tipo Conta: %s\n\n", C.tipo_c);
                      getchar();
                      }
     
     fclose(arquivo);
}

void alterar(){
     int w=0;
     arquivo= fopen("cliente.txt","wb");

    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
        printf("                                                                            \n");
     
     if(arquivo==NULL){
        printf("                     Erro ao abrir o arquivo");
                       return;
     }
        printf("\n                 Alteracao de Cadastro Cliente\n");   
           printf("\n\n               Numero de Inscricao:");
    scanf("%d",&C.num); 
     
           printf("\n\n               Nome do Cliente:");
           fflush(stdin);
           gets(C.nome);
           printf("\n                 Conta:"); 
           fflush(stdin);     
           gets(C.conta);
           printf("\n                 Senha:");
           fflush(stdin);
           gets(C.senha);
           printf("\n                 Saldo:");
           fflush(stdin);
           gets(C.saldo);
           printf("\n                 Tipo Conta:");
           fflush(stdin);
           gets(C.tipo_c);
           fseek(arquivo, sizeof(C), SEEK_CUR);                             
 fwrite(&C, sizeof(C), 1, arquivo);
 fread(&C, sizeof(C), 1, arquivo); 
 fclose(arquivo);
}
     
     
void sair(){
     
    system ("cls");

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

        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("                                                                            \n");
        printf("              ADMINISTRADOR DO CAIXA ELETRONICO JOINUSBANC                  \n");
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
       exit(1);
       }

main(){
       
    
       
      char op; 
          while(op!='s'){
                     op = menu();
                     switch(op){
                                case'1': cad(); break;
                                case'2': listar(); break;
                                case'3': buscar(); break;
                                case'4': alterar(); break;
                                case'5': sair(); break;
                              
                                
                     }
                   
           
           
       getchar();
       getchar();

       }
}
