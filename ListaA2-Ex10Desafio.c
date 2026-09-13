#include <stdio.h>
 
/* Protótipos das funções */
void inicializarTabuleiro(char tabuleiro[3][3]);
void exibirTabuleiro(char tabuleiro[3][3]);
int posicaoValida(int linha, int coluna);
int posicaoOcupada(char tabuleiro[3][3], int linha, int coluna);
void realizarJogada(char tabuleiro[3][3], int linha, int coluna, char jogador);
int verificarVitoria(char tabuleiro[3][3], char jogador);
int tabuleiroCheio(char tabuleiro[3][3]);
char trocarJogador(char jogadorAtual);
 
int main() {
    char tabuleiro[3][3];
    char jogadorAtual = 'X';
    int linha, coluna;
    int jogoTerminado = 0;
 
    inicializarTabuleiro(tabuleiro);
 
    printf("=== JOGO DA VELHA ===\n");
    printf("As posicoes vao de 1 a 3 (linha e coluna)\n");
    exibirTabuleiro(tabuleiro);
 
    while (!jogoTerminado) {
        printf("\nVez do jogador %c\n", jogadorAtual);
 
        do {
            printf("Digite a linha (1-3): ");
            scanf("%d", &linha);
            printf("Digite a coluna (1-3): ");
            scanf("%d", &coluna);
 
            if (!posicaoValida(linha, coluna)) {
                printf("Posicao invalida! Digite valores entre 1 e 3.\n");
            } else if (posicaoOcupada(tabuleiro, linha - 1, coluna - 1)) {
                printf("Essa posicao ja esta ocupada! Escolha outra.\n");
            }
 
        } while (!posicaoValida(linha, coluna) || posicaoOcupada(tabuleiro, linha - 1, coluna - 1));
 
        /* Converte para indice de 0 a 2 antes de gravar a jogada */
        realizarJogada(tabuleiro, linha - 1, coluna - 1, jogadorAtual);
        exibirTabuleiro(tabuleiro);
 
        if (verificarVitoria(tabuleiro, jogadorAtual)) {
            printf("\nO jogador %c venceu o jogo!\n", jogadorAtual);
            jogoTerminado = 1;
        } else if (tabuleiroCheio(tabuleiro)) {
            printf("\nO jogo empatou! Ninguem venceu.\n");
            jogoTerminado = 1;
        } else {
            jogadorAtual = trocarJogador(jogadorAtual);
        }
    }
 
    return 0;
}
 
/* Preenche todas as posicoes do tabuleiro com espaco em branco,
   indicando que estao livres */
void inicializarTabuleiro(char tabuleiro[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}
 
/* Mostra o tabuleiro formatado no console */
void exibirTabuleiro(char tabuleiro[3][3]) {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}
 
/* Verifica se a linha e a coluna digitadas estao dentro do tabuleiro (1 a 3) */
int posicaoValida(int linha, int coluna) {
    if (linha >= 1 && linha <= 3 && coluna >= 1 && coluna <= 3) {
        return 1;
    }
    return 0;
}
 
/* Verifica se a posicao (ja em indice de 0 a 2) ja esta ocupada */
int posicaoOcupada(char tabuleiro[3][3], int linha, int coluna) {
    if (tabuleiro[linha][coluna] != ' ') {
        return 1;
    }
    return 0;
}
 
/* Grava o simbolo do jogador na posicao escolhida */
void realizarJogada(char tabuleiro[3][3], int linha, int coluna, char jogador) {
    tabuleiro[linha][coluna] = jogador;
}
 
/* Verifica se o jogador passado por parametro venceu,
   conferindo as 3 linhas, as 3 colunas e as 2 diagonais */
int verificarVitoria(char tabuleiro[3][3], char jogador) {
    int i;
 
    /* linhas */
    for (i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return 1;
        }
    }
 
    /* colunas */
    for (i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return 1;
        }
    }
 
    /* diagonal principal */
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return 1;
    }
 
    /* diagonal secundaria */
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return 1;
    }
 
    return 0;
}
 
/* Verifica se todas as posicoes ja foram preenchidas (indica empate,
   caso ninguem tenha vencido ate esse momento) */
int tabuleiroCheio(char tabuleiro[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}
 
/* Alterna o jogador da vez entre 'X' e 'O' */
char trocarJogador(char jogadorAtual) {
    if (jogadorAtual == 'X') {
        return 'O';
    } else {
        return 'X';
    }
}
