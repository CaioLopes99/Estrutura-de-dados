#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, maior, linhaMaior, colunaMaior;

    // Leitura da matriz
    printf("Digite os elementos da Matriz (5x5):\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa o maior com o primeiro elemento
    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    // Busca o maior elemento
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Exibe a matriz
    printf("\nMatriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Resultado
    printf("\nMaior elemento: %d\n", maior);
    printf("Linha: %d\n", linhaMaior);
    printf("Coluna: %d\n", colunaMaior);

    return 0;
}
