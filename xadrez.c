#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    

    printf("\nMovimento do Bispo:\n");
	i = 0;
	while (i <= 5){
		printf("Cima, Direita\n"); // Imprimir a direção do Movimento do Bispo
		i++;
	}
	
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Torre:\n");
	for (i = 0; i < 5; i++){
		printf("Direita\n"); // Imprimir a direção do movimento da Torre
	}
	
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
	printf("\nMovimento da Rainha:\n");
	i = 1;
	do{
		printf("Esquerda\n"); // Imprimir a direção do Moviemnto da Rainha
		i++;
	} while (i <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    const int casas_baixo = 2;
    const int casas_esquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    for (i = 1; i <= casas_baixo; i++) {
        printf("Baixo\n"); // Imprimir o movimento do Cavalo para baixo
    }

    int j = 0;
    while (j < casas_esquerda) {
        printf("Esquerda\n"); // Imprimir o movimento do Cavalo para Esquerda
        j++;
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
