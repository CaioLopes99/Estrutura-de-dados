#include <stdio.h>
#define TAMANHO 20

int main() {
    int vetor[TAMANHO];
    int i, maior, menor, pares = 0, impares = 0;
    float soma = 0, media;

   
    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 0; i < TAMANHO; i++) {
     
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

      
        soma += vetor[i];

   
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    media = soma / TAMANHO;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}
