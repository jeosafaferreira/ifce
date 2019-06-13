#include <stdio.h>
/*1) Escreva um programa em C que recebe do usuário um número “n”, uma frase qualquer e cria um arquivo com n linhas, onde cada linha é a frase digitada pelo usuário.*/

int main(void) {
	int n;
	char frase[255];

	//Pegando dados
	printf("Digite um número n: ");
	scanf("%d", &n);
	printf("Digite abaixo uma frase qualquer: (Sem espaços) \n");
	scanf("%s", frase);

	//Salvando arquivo	
	FILE *arq;
	arq = fopen("meu_arquivo.txt", "w");
	if(arq != NULL){
		for(int i =0; i<n;i++){
			fputs(frase, arq);
			fputs("\n", arq);
		}
	}else{
		printf("Erro ao abrir arquivo.");
	}
	fclose(arq);
  
  printf("\nDados salvos com sucesso!");
}
