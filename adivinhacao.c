#include <stdio.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {

	// imprime o cabe�alho do nosso jogo
	setlocale(LC_ALL, "Portuguese");
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;

	for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

		printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
		printf("Qual � o seu chute? ");	
			
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		int acertou = (chute == numerosecreto);

		if(acertou) {
			printf("Parab�ns! Voc� acertou!\n");
			printf("Jogue de novo, voc� � um bom jogador!\n");

			break;
		} 
		else {
			
			int maior = (chute > numerosecreto);
			if(maior) {
				printf("Seu n�mero foi maior que o n�mero secreto\n");
			} else {			
				printf("Seu chute foi menor que o n�mero secreto\n");
			}		
		}
	}
	printf("Fim de jogo!");
}