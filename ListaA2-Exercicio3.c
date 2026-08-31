#include <stdio.h>
#define TAMANHO 15

int main() {
    int vetor[TAMANHO];
    int i, numero, posicao = -1;

    // Leitura dos 15 números
    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Número a ser pesquisado
    printf("\nDigite o numero que deseja pesquisar: ");
    scanf("%d", &numero);

    // Busca no vetor
    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] == numero) {
            posicao = i;
            break; // encontrou, para a busca
        }
    }

    // Resultado
    if (posicao != -1) {
        printf("\nO numero %d foi encontrado na posicao %d do vetor.\n", numero, posicao);
    } else {
        printf("\nO numero %d nao foi encontrado no vetor.\n", numero);
    }

    return 0;
}
