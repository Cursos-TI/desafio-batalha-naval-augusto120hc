#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // DSAFIO NOVATO
    int tabuleiro[10][10];

    int i, j;

    for(i = 0; i <  10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // insere 0
        }
    printf("\n"); // pula para a proxima linha
    }

    //primeiro NAVIO
    tabuleiro[4][2] = 3; // navio Horizontal
    tabuleiro[4][3] = 3; 
    tabuleiro[4][4] = 3; 

    // sgundo NAVIO
    tabuleiro[2][7] = 3; // navio vertical
    tabuleiro[3][7] = 3; 
    tabuleiro[4][7] = 3; 
    tabuleiro[5][7] = 3;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
