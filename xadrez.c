#include <stdio.h>

// Constantes para o número de movimentos de cada peça
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Exibição de título
    printf("=== Desafio de Xadrez ===\n\n");

    // ========================
    // Movimentação do Bispo
    // ========================
    printf("Movimentacao do Bispo (diagonal superior direita):\n");
    // O bispo anda na diagonal, ou seja, uma combinação de "Cima" + "Direita"
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Passo %d: Cima + Direita\n", i);
    }
    printf("\n");

    // ========================
    // Movimentação da Torre
    // ========================
    printf("Movimentacao da Torre (5 casas para a direita):\n");
    int i = 1;
    while (i <= MOV_TORRE) {
        printf("Passo %d: Direita\n", i);
        i++;
    }
    printf("\n");

    // ========================
    // Movimentação da Rainha
    // ========================
    printf("Movimentacao da Rainha (8 casas para a esquerda):\n");
    int contador = 1;
    do {
        printf("Passo %d: Esquerda\n", contador);
        contador++;
    } while (contador <= MOV_RAINHA);

    printf("\n=== Fim da simulacao ===\n");

    return 0;
}
