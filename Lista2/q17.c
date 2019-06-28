#include <stdio.h>
#include <string.h>
int main(void) {
  int boneco = 0;
  int grupos;
  int comandos;
  
  scanf("%d", &grupos);
  scanf("%d", &comandos);
  
  for(int k=0; k<grupos; k++){
    for(int i=0;i<comandos;i++){
      char valor[50] = {0};
      fgets(valor,50, stdin);
      if(strlen(valor)>5){
        if(strcmp(valor,"RIGHT")){
          boneco -= 1;
        }else{
          boneco += 1;
        }
      }else{//SAME AS
        //escrever cóódigo
      }

    }
  }
}
