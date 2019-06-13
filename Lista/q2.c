#include <stdio.h>

int main(void) {
	int nota;
	int qtd=0;
	double soma;

	while(1){
		printf("Digite a nota do aluno %d: ",qtd+1);
		scanf("%d", &nota);
		if(nota == -1){
			break;
		}
		soma += nota;
		qtd++;
	}
  
	printf("\n\nMÉDIA GERAL = %3.2f", (soma/qtd));
	return 0;
}