#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
2) Implemente um programa em C que cria duas matrizes quadradas 4x4 com valores aleat ́orios. 
O programa deve tamb ́em imprimir tais matrizes, calcular a determinante de cada uma delas e calcular o resultado da multiplica ̧c ̃ao das duas.
*/

int main(void){
  srand(time(NULL));
  int mat1[4][4];
  int mat2[4][4];

  //Populando matrizes
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      mat1[i][j] = rand() % 100;
      mat2[i][j] = rand() % 100;
    }
  }

  printf("Matriz 1:\n");
  for(int i=0;i<4;i++){
    printf("[");
    for(int j=0;j<4;j++){
      printf("%4.0d ",mat1[i][j]);
    }
    printf("]\n");
  }

  printf("\n Matriz 2:\n");
  for(int i=0;i<4;i++){
    printf("[");
    for(int j=0;j<4;j++){
      printf("%4.0d ",mat2[i][j]);
    }
    printf("]\n");
  }
  //aplicar laplace e sarrus
}
