#include <stdio.h>

#define TAMANHO 10  // Tamanho do tabuleiro 10x10
#define NAVIO 3      // Valor que representa os navios

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linha1 = 2, coluna1 = 4; // Navio horizontal começando em (2,4)
    int linha2 = 5, coluna2 = 7; // Navio vertical começando em (5,7)

    // Posiciona o navio horizontal (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = NAVIO;
    }

    // Posiciona o navio vertical (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = NAVIO;
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO]; // Declaração do tabuleiro

    inicializarTabuleiro(tabuleiro); // Inicializa com água (0)
    posicionarNavios(tabuleiro);     // Posiciona os navios (3)
    exibirTabuleiro(tabuleiro);      // Exibe o tabuleiro no console

    return 0;
}