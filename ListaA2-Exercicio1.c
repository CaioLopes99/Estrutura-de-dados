#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores na ordem digitada:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nValores na ordem inversa:\n");
    for (i = TAMANHO - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}
