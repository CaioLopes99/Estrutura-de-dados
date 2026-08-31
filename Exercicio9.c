#include <stdio.h>
#include <stdint.h>   
#define MAX_PRODUTOS 100 // macro 1: limite de produtos
#define ESTOQUE_MINIMO 5 // macro 2: alerta de reposicao
#define NOME_LOJA "TechStore" // macro 3: nome fixo usado no relatorio

    typedef struct {
    char nome[30];
    uint8_t quantidade; // tipo de tamanho fixo: 0 a 255, suficiente para estoque de um produto
    int32_t codigo; // tipo de tamanho fixo: garante 32 bits em qualquer plataforma

      } Produto;

       int main() {

        Produto p1 = {"Mouse sem fio", 12, 1001};

        printf("=== %s - Relatorio de Estoque ===\n", NOME_LOJA);
        printf("Produto: %s\n", p1.nome);
        printf("Codigo: %d\n", p1.codigo);
        printf("Quantidade em estoque: %u\n", p1.quantidade);
        printf("Limite maximo de produtos cadastrados: %d\n", MAX_PRODUTOS);

            if (p1.quantidade < ESTOQUE_MINIMO) {
            printf("Atencao: estoque abaixo do minimo!\n"); }

           else {
           printf("Estoque em nivel adequado.\n"); } 


          return 0;
    }
