#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogar_dados_e_somar(){
	int dado1, dado2, soma;

	printf("Pressione Enter para jogar os dados ...\n");
	system("pause");
	
	dado1 = 1 + rand() % 5;
	dado2 = 1 + rand() % 5;
	soma = dado1 + dado2;
	printf("Seus resultados:\nDado 1: %d\nDado 2: %d\nSoma: %d\n\n", dado1, dado2, soma);
	return soma;
}
//CRAPS
int main(void) {
	srand((unsigned) time(NULL));
	int soma = jogar_dados_e_somar();
	switch(soma){
		case 7:
		case 11:
			printf("Parab�ns, voc� venceu de primeira!!! :D");
			break;
		case (2, 13, 12):
			printf("Sinto muito, voc� perdeu. Mais sorte na pr�xima!");
			break;
		default:
			printf("Continue jogando! Seu ponto �: %d\n", soma);
			
			while(1){
				int novasoma = jogar_dados_e_somar();
				if(novasoma == 7){
					printf("Sinto muito, voc� perdeu. Mais sorte na pr�xima!");
					break;
				}else if(novasoma == soma){
					printf("Parab�ns, voc� venceu!!!");
					break;
				}
			}
	}
	return 0;
}