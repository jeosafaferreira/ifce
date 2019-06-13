#include <stdio.h>

int main(void) {
  int qtd;
  printf("Digite o número de alunos: ");
  scanf("%d", &qtd);
  
  int nota;
  double soma;
  for(int i=0; i<qtd;i++){
    printf("Digite a nota do aluno %d: ",i+1);
    scanf("%d", &nota);
    soma += nota;
  }
  printf("\n\nMÉDIA GERAL = %3.2f", (soma/qtd));
  return 0;
}
