#include <stdio.h>

int main(void) {
	
	int numeros[2], maior_numero = 0;

	for(int i=0; i<3;i++){
		printf("Digite o n�mero %d: ", i+1);
		scanf("%d", &numeros[i]);
		
		if(numeros[i] > maior_numero){
			maior_numero = numeros[i];
		}
	}
	printf("\nMaior n�mero: %d", maior_numero);
	return 0;
}