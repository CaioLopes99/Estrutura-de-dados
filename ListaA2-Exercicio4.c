#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main() {
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizSoma[LINHAS][COLUNAS];
    int i, j;

    // Leitura da matriz A
    printf("Digite os elementos da Matriz A (3x3):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Leitura da matriz B
    printf("\nDigite os elementos da Matriz B (3x3):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Soma das matrizes
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Exibe a Matriz A
    printf("\nMatriz A:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }

    // Exibe a Matriz B
    printf("\nMatriz B:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d ", matrizB[i][j]);
        }
        printf("\n");
    }

    // Exibe a Matriz Soma
    printf("\nMatriz Soma (A + B):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
