#include <stdio.h>

#define TAMANHO 10  // Tamanho do tabuleiro 10x10
#define NAVIO 3      // Valor que representa os navios
//por: Rodolfo Assunção

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) { // Percorre as linhas do tabuleiro
        for (int j = 0; j < TAMANHO; j++) { // Percorre as colunas do tabuleiro
            tabuleiro[i][j] = 0; // Inicializa todas as posições com 0 (água)
        }
    }
}

// Função para posicionar os navios no tabuleiro
void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linha1 = 2, coluna1 = 4; // Navio horizontal começando na posição (2,4)
    int linha2 = 5, coluna2 = 7; // Navio vertical começando na posição (5,7)

    // Posiciona o navio horizontal (tamanho 3)
    for (int i = 0; i < 3; i++) { // Percorre as três posições do navio
        tabuleiro[linha1][coluna1 + i] = NAVIO; // Atribui o valor 3 às posições consecutivas
    }

    // Posiciona o navio vertical (tamanho 3)
    for (int i = 0; i < 3; i++) { // Percorre as três posições do navio
        tabuleiro[linha2 + i][coluna2] = NAVIO; // Atribui o valor 3 às posições consecutivas
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("Tabuleiro:\n"); // Título da exibição
    for (int i = 0; i < TAMANHO; i++) { // Percorre as linhas do tabuleiro
        for (int j = 0; j < TAMANHO; j++) { // Percorre as colunas do tabuleiro
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da posição atual
        }
        printf("\n"); // Nova linha após imprimir uma linha inteira do tabuleiro
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO]; // Declaração da matriz que representa o tabuleiro

    inicializarTabuleiro(tabuleiro); // Chama a função para inicializar o tabuleiro com água (0)
    posicionarNavios(tabuleiro);     // Chama a função para posicionar os navios (3)
    exibirTabuleiro(tabuleiro);      // Chama a função para exibir o tabuleiro no console

    return 0; // Retorna 0 para indicar execução bem-sucedida
}
