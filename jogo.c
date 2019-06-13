#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int modo;//1 para Single Player; 2 para Multiplayer.
  
  struct personagem{
    int classe_id;//1 para Bárbaro; 2 para arqueiro; 3 para mago.
    char classe_desc[10];
    char nickname[10];
  };

  struct personagem p1, p2, boss;
  system("clear");
  printf("Bem-vindo!\n\n");
  printf("Selecione o modo de jogo:\n");
  printf("1.SINGLE PLAYER\n");
  printf("2.MULTIPLAYER\n\n");
  printf("Sua opção: ");
  fflush(stdin);
  scanf("%d", &modo); //salvando modo de jogo
  system("clear");

  printf("Opção selecionada: %s", (modo)==1?"Single Player\n\n": "Multiplayer\n\n");
  
  modo==1?printf("Selecione seu personagem:\n"):printf("Selecione o personagem 1:\n");
  
  //CRIANDO PERSONAGEM 1
  printf("1.Bárbaro\n");
  printf("2.Arqueiro\n");
  printf("3.Mago\n\n");
  printf("Sua opção: ");
  fflush(stdin);
  scanf("%d", &p1.classe_id);
  	  switch(p1.classe_id){
     case 1:
       strcpy(p1.classe_desc, "Barbeiro");
       break;
     case 2:
       strcpy(p1.classe_desc, "Arqueiro");
       break;
     case 3:
       strcpy(p1.classe_desc, "Mago");
       break;
  }

  printf("Personagem selecionado: %s\n\n", p1.classe_desc);
    
  //CRIANDO PERSONAGEM 2  
  // if(modo==2){//Multiplayer
  //   printf("Selecione seu personagem 2");
  //   printf("1.Bárbaro\n");
  //   printf("2.Arqueiro\n");
  //   printf("3.Mago\n\n");
  //   printf("Sua opção: ");
  //   fflush(stdin);
  //   scanf("%d", &p1.classe_id);
  //   switch(p1.classe_id){
  //     case 1:
  //       strcpy(p1.classe_desc, "Barbeiro");
  //     case 2:
  //       strcpy(p1.classe_desc, "Arqueiro");
  //     case 3:
  //       strcpy(p1.classe_desc, "Mago");
  //   }
  // }
}
