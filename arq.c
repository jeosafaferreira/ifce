#include <stdio.h>

void show_menu();
void cadCli();
//void listCli();


int main(){
	show_menu();
}

void show_menu(){
  int opc;

  printf("Selecione uma opção:\n");
  printf("1.Cadastrar Novo Cliente\n2.Listar Clientes\n3.Sair");
  scanf("%d", &opc);
  switch (opc){
    case 1:
      cadCli();
      break;
    case 2:
  //    listCli();
      break;
  }
}

void cadCli(){
  struct cli{
    char id[6];
    char nome[100];
    char idade[4];
    char endereco[300];
  }cli;

  printf("Digite o id: ");
  fflush(stdin);
  scanf("%c", cli.id);

  printf("Digite o nome: ");
  scanf("%c", cli.nome);

  printf("Digite a idade: ");
  scanf("%c", cli.idade);

  printf("Digite o endereço: ");
  scanf("%c", cli.endereco);

  //Salva no arquivo txt
  FILE *fp;
  fp = fopen("clientes.csv", "a");
  if(fp == NULL){
    printf("Erro ao abrir arquivo.");
  }else{
    fputs(cli.id, fp);
    fputs(cli.nome, fp);
    fputs(cli.idade, fp);
    fputs(cli.endereco, fp);
  }
  fclose(fp);
}
