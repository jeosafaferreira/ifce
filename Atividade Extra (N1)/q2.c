#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*2) Escreva um programa que recebe ‘n’ e ‘m’ do usuário e cria um arquivo, onde escreve nele ‘n’ palavras de tamanho no máximo ‘m’.*/

int main(){
	srand(time(NULL));

	int n, m;
	char palavra[255];

	//Pega dados
	printf("Digite o número N: ");
	scanf("%d", &n);
	printf("Digite o número M: ");
	scanf(" %d", &m);

	FILE *arq;
	char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	arq = fopen("meu_arquivo.txt", "w");

	if(arq == NULL){
		printf("Erro ao abrir arquivo.");
	}else{
		for(int i =0; i<n;i++){
			//Criando palavra
			int tamanho = rand() % m;
			
			for(int t = 0; t< tamanho; t++){
				palavra[t] = chars[rand()%51];
			}
			printf("%s\n", palavra);

			fputs(palavra, arq);
			fputs("\n", arq);
		}
	}

	printf("\nDados salvos com sucesso!");
	fclose(arq);

}
