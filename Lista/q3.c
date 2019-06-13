#include <stdio.h>
#include <math.h>

int main(void) {
	
	float raio, altura, total_fundo, total_laterais;

	printf("Digite o raio do lago: ");
	scanf("%f", &raio);
	printf("Digite a altura do lago: ");
	scanf("%f", &altura);
	
	total_fundo = raio * M_PI;
	total_laterais = 2 * M_PI * raio * altura;

	printf("\nMATERIAIS NECESSÁRIOS:\n");
	printf("-Para o fundo: %.2f m²\n",total_fundo);
	printf("-Para as laterais: %.2f m²\n", total_laterais);
}