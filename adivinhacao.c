#include <stdio.h>
#include <locale.h>

int main() {

	// imprime o cabeçalho do nosso jogo
	setlocale(LC_ALL, "Portuguese");
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhação *\n");
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;

	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	int acertou = (chute == numerosecreto);

	if(acertou) {
		printf("Parabéns! Você acertou!\n");
		printf("Jogue de novo, você é um bom jogador!\n");
	} 
	else {
		
		int maior = (chute > numerosecreto);
		if(maior) {
			printf("Seu número foi maior que o número secreto\n");
		} else {
			printf("Seu chute foi menor que o número secreto\n");
		}
	}

}