#include <stdio.h>


int maior(int a, int b);
int menor(int a, int b);
float media(float a, float b);
int fatorial(int n);

int main() {
    int num1, num2, n;
    float f1, f2;

    // Teste da função maior()
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("Maior valor: %d\n", maior(num1, num2));

    // Teste da função menor()
    printf("Menor valor: %d\n", menor(num1, num2));

    // Teste da função media()
    printf("\nDigite dois numeros reais: ");
    scanf("%f %f", &f1, &f2);
    printf("Media: %.2f\n", media(f1, f2));

    // Teste da função fatorial()
    printf("\nDigite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        printf("Fatorial de %d: %d\n", n, fatorial(n));
    }

    return 0;
}

// Retorna o maior entre dois inteiros
int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Retorna o menor entre dois inteiros
int menor(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

// Retorna a media entre dois numeros reais
float media(float a, float b) {
    return (a + b) / 2;
}

// Retorna o fatorial de n (n!)
int fatorial(int n) {
    int resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
