#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMANHO 100

int main() {
    char nome[TAMANHO];
    int i, tamanho, vogais = 0, consoantes = 0, espacos = 0;

    // Leitura do nome completo
    printf("Digite o nome completo: ");
    fgets(nome, TAMANHO, stdin);

    // Remove o '\n' deixado pelo fgets, se existir
    tamanho = strlen(nome);
    if (nome[tamanho - 1] == '\n') {
        nome[tamanho - 1] = '\0';
        tamanho--; // ajusta o tamanho após remover a quebra de linha
    }

    // Percorre a string caractere por caractere
    for (i = 0; i < tamanho; i++) {
        char c = tolower(nome[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if (c == ' ') {
            espacos++;
        } else if (isalpha(c)) {
            consoantes++;
        }
    }

    // Resultado
    printf("\nNome digitado: %s\n", nome);
    printf("Quantidade de caracteres: %d\n", tamanho);
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos em branco: %d\n", espacos);

    return 0;
}
