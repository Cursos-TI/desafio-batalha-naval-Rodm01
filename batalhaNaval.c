#include <stdio.h>

#define LARGURA 10 // Tabuleiro 10x1
#define TAM_HAB 5  // Tamanho das matrizes de habilidade (5x5)

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[LARGURA]) {
    for (int i = 0; i < LARGURA; i++) {
        tabuleiro[i] = 0;
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[LARGURA]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < LARGURA; i++) {
        printf("%d ", tabuleiro[i]);
    }
    printf("\n");
}

// Função para exibir uma matriz de habilidade
void exibirMatriz(int matriz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Matriz Cone (área expandindo para baixo)
void definirHabilidadeCone(int matriz[TAM_HAB][TAM_HAB]) {
    int padrao[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    for (int i = 0; i < TAM_HAB; i++)
        for (int j = 0; j < TAM_HAB; j++)
            matriz[i][j] = padrao[i][j];
}

// Matriz Cruz (área em cruz com centro afetado)
void definirHabilidadeCruz(int matriz[TAM_HAB][TAM_HAB]) {
    int padrao[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < TAM_HAB; i++)
        for (int j = 0; j < TAM_HAB; j++)
            matriz[i][j] = padrao[i][j];
}

// Matriz Octaedro (losango com ponto central afetado)
void definirHabilidadeOctaedro(int matriz[TAM_HAB][TAM_HAB]) {
    int padrao[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < TAM_HAB; i++)
        for (int j = 0; j < TAM_HAB; j++)
            matriz[i][j] = padrao[i][j];
}

int main() {
    int tabuleiro[LARGURA];
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    inicializarTabuleiro(tabuleiro);
    definirHabilidadeCone(cone);
    definirHabilidadeCruz(cruz);
    definirHabilidadeOctaedro(octaedro);

    exibirTabuleiro(tabuleiro);
    
    printf("\nHabilidade Cone:\n");
    exibirMatriz(cone);
    
    printf("\nHabilidade Cruz:\n");
    exibirMatriz(cruz);
    
    printf("\nHabilidade Octaedro:\n");
    exibirMatriz(octaedro);
    
    return 0;
}