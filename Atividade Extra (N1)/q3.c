#include <stdio.h>
#include <string.h>

/*3) Escreva um programa em C que recebe um caractere ‘c’ e conta a quantidade de ocorrências desse caractere no arquivo.*/

int main(void) {
  char c;
	char linha[255];
  char texto[9999];

  printf("Digite um caractere: ");
  scanf("%s", &c);

  //Abrindo arquivo
  FILE *arq;
  arq = fopen("arq.txt", "r");
  if(arq != NULL){
    while(fgets(linha, 255, arq) != NULL){
			strcat(texto, linha);
		}
  }else{
    printf("Erro ao abrir arquivo.");
  }
  fclose(arq);
  
	//Realizando contagem
	int total;
  for(int k=0; texto[k] != '\0';k++){
    if(texto[k] == c)
			total++;
	}
	
	// Imprimindo resultado
	printf("Total: %d", total);
  return 0;
}
