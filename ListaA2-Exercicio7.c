#include <stdio.h>
#include <string.h>
#define TAMANHO 100

int main() {
    char nome1[TAMANHO];
    char nome2[TAMANHO];
    int resultado;

    // Leitura do primeiro nome
    printf("Digite o primeiro nome: ");
    fgets(nome1, TAMANHO, stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // remove o '\n' do fgets

    // Leitura do segundo nome
    printf("Digite o segundo nome: ");
    fgets(nome2, TAMANHO, stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // remove o '\n' do fgets

    // Comparação usando strncmp
    resultado = strncmp(nome1, nome2, TAMANHO);

    if (resultado == 0) {
        printf("\nOs nomes sao iguais.\n");
    } else if (resultado < 0) {
        printf("\nOs nomes sao diferentes.\n");
        printf("\"%s\" e alfabeticamente maior que \"%s\".\n", nome2, nome1);
    } else {
        printf("\nOs nomes sao diferentes.\n");
        printf("\"%s\" e alfabeticamente maior que \"%s\".\n", nome1, nome2);
    }

    return 0;
}
