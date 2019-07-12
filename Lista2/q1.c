#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
1) Desenvolva um programa em C que crie um vetor de tamanho 100. Inicie ele com valores aleatorios
entre 1 e 500.
Crie 3 fun ̧c ̃oes, onde cada uma recebe um vetor com parˆametro:
uma fun ̧c ̃ao deve calcular a m ́edia do vetor,
outra para calcular a moda e outra para calcular a mediana.
Para calcular a mediana, e necess ́ario que o vetor esteja ordenado.
Logo, implemente tamb ́em uma fun ̧c ̃ao que ordene o vetor e chame-o antes de calcular a mediana 
(procure os pseudoc ́odigos do insertion sort ou bubble sort ou tente desenvolver uma l ́ogica pr ́opria).
*/
int media();
int moda();
int mediana();

int main(void) {
  srand(time(NULL));

  printf("Números gerados:\n");

  int vetor[100];
  //Criando vetor
  for(int i=0;i<101;i++){
    vetor[i] = 1 + rand() % 499;
    printf("%d,", vetor[i]);
  }
  printf("\n==============================================\n");
  printf("MÉDIA: %d\n", media(vetor));
  printf("==============================================\n");
  printf("MODA: %d\n", moda(vetor));
  printf("==============================================");
  printf("MEDIANA: %d", mediana(vetor));
  printf("\n==============================================\n");

}

int media(int vetor[]){
  int soma;
  for(int i=0;i<101;i++){
    soma += vetor[i];
  }
  return soma/101;
}

int moda(int vetor[]){
  
  int map[500];
  //limpando o lixo (zerando vetor)
  for(int i=0;i<501;i++)
    map[i] = 0;

  //contabilizando aparições
  for(int i=0;i<101;i++)
    map[vetor[i]]++;

  //buscando o mais repetido
  int moda = 0;
  int qtd = 0;
  for(int i=0;i<501;i++){
    if(map[i]> qtd){
      qtd = map[i];
      moda = i;
    }
  }
  return moda;
}

int mediana(int vetor[]){
  int escolhido, j, i;
  for (int i = 1; i < 101; i++) {
		escolhido = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
  printf("\nNúmeros ordenados:\n");
  for(int i=0; i<101;i++){
    printf("%d, ", vetor[i]);
  }
  printf("\n\n");
  return vetor[50];
}
