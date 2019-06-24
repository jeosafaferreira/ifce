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

int main(void) {
  //Criando vetor
  srand(time(NULL));
  int vetor[100];
  for(int i=0;i<101;i++){
    vetor[i] = 1 + rand() % 499;
  }
}
