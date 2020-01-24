#include <ctype.h>
#include <string.h>
main()
{
      int x,y;      
      char login[10];
      char log[10] = "Edson";
      char letr[5];
      char comb[5] = "fdn";
      
      printf("Digite sua Senha.: => ");
      gets(login);
   
      if(strcmp(login,log))
      {
      
          printf("Usuario incorreto \n");
          getch();
                          
      }else{

           printf("Usuario correto \n");
           printf("Digite a Combinacao de Letras.: => ");
           gets(letr);


          if(strcmp(letr,comb))
          {
              printf("Seguencia de Letras Incorreta !!");
              getch();
              
          }else{

              system("cls");
              printf("Ola Edson Seja bem Vindo \n");
              getch();

          }

                
      }
      
}
