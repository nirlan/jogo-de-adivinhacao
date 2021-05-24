#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	// imprime o cabe�alho do nosso jogo
	setlocale(LC_ALL, "Portuguese");
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;
	int tentativas = 1;
	double pontos = 1000;

	while(1) {

		printf("Tentativa %d\n", tentativas);
		printf("Qual � o seu chute? ");	
			
		scanf("%d", &chute);
		printf("Seu chute foi %d\n", chute);

		if(chute < 0) {
			printf("Voc� n�o pode chutar n�meros negativos!\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

		if(acertou) {
			printf("Parab�ns! Voc� acertou!\n");
			printf("Jogue de novo, voc� � um bom jogador!\n");

			break;
		}

		else if(maior) {			
			printf("Seu n�mero foi maior que o n�mero secreto\n");
		}

		else {			
			printf("Seu chute foi menor que o n�mero secreto\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double)2;
		pontos = pontos - pontosperdidos;
	}

	printf("Fim de jogo!\n");
	printf("Voc� acertou em %d tentativas!\n", tentativas);
	printf("Total de pontos: %.1f\n", pontos);
}