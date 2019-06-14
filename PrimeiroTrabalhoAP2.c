#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
/*
Escreva um programa em C que recebe dois números: ‘n’ e ‘m’ do usuário.
O programa deve então gerar n palavras de tamanho máximo ‘m’ e salvar em um arquivo.
Crie também uma função que, ao ler um arquivo contendo palavras (seja o arquivo com palavras aleatórias criado ou outro arquivo qualquer de texto), conte a ocorrência de cada palavra no arquivo e salve tal informação em um arquivo.
*/

int main(){
	FILE *arq = fopen("palavras.txt", "w");
	if(arq == NULL){
		printf("Erro ao criar arquivo.");
	}else{
	  int n; //Quantidade
	  int m; //Tamanho
		srand(time(NULL));

		printf("Digite o número n: ");
		scanf("%d", &n);

		printf("Digite o número m: ");
		scanf(" %d", &m);

		//Gerando palavras
		char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   	
    int i, j ,size;
    char palavras[m];
		for(i=0; i<n; i++){
      //Limpamdo memória
      memset(palavras, 0, m*sizeof(int));
      
      //Definindo tamanho da palavra atual
			size = 1 + rand() % (m-1);
			
      //Formando palavra de forma aleatória.
      //Para cada posição do vetor, uma letra rand
      for(j=0;j<size;j++){
				palavras[j] = letras[rand() % 51];
			}
			
      printf("ID: %d\nTamanho: %d\nPalavra: %s\n", (i+1), size, palavras);
			printf("--------------------------\n");
			
			//Salvando no arquivo
			fprintf(arq,"%s\n",palavras);
		}
		fclose(arq);
	}
}
