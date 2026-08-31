#include <stdio.h>
#define TAMANHO_TURMA 10


void lerNotas(float notas[], int tamanho);
float calcularMedia(float notas[], int tamanho);
float encontrarMaiorNota(float notas[], int tamanho);
float encontrarMenorNota(float notas[], int tamanho);
void imprimirRelatorio(float notas[], int tamanho, float media, float maior, float menor);

int main() {
    float notas[TAMANHO_TURMA];
    float media, maiorNota, menorNota;

    lerNotas(notas, TAMANHO_TURMA);

    media = calcularMedia(notas, TAMANHO_TURMA);
    maiorNota = encontrarMaiorNota(notas, TAMANHO_TURMA);
    menorNota = encontrarMenorNota(notas, TAMANHO_TURMA);

    imprimirRelatorio(notas, TAMANHO_TURMA, media, maiorNota, menorNota);

    return 0;
}

    // Le as notas dos alunos e armazena no vetor
void lerNotas(float notas[], int tamanho) {
    int i;

    printf("Cadastro de notas da turma (%d alunos)\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

    // Calcula a media das notas do vetor
float calcularMedia(float notas[], int tamanho) {
    float soma = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}

    // Encontra a maior nota do vetor
float encontrarMaiorNota(float notas[], int tamanho) {
    float maior = notas[0];
    int i;

    for (i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

    // Encontra a menor nota do vetor
float encontrarMenorNota(float notas[], int tamanho) {
    float menor = notas[0];
    int i;

    for (i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    return menor;
}

    // Imprime o relatorio final com todas as notas e as estatisticas
void imprimirRelatorio(float notas[], int tamanho, float media, float maior, float menor) {
    int i;

    printf("\n===== RELATORIO DA TURMA =====\n");
    printf("Notas cadastradas:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("===============================\n");
}
