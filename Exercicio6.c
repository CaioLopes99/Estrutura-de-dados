#include <stdio.h>

  typedef unsigned char byte; // 0 a 255, ideal para valores pequenos
  typedef int inteiro; // apelido para int
  typedef double real; // apelido para valores com casas decimais

  int main() {

    byte idadeBebe = 1; inteiro numeroAlunos = 35;
    real mediaNotas = 8.75;

    printf("Idade do bebe: %u\n", idadeBebe);
    printf("Numero de alunos: %d\n", numeroAlunos);
    printf("Media das notas: %.2f\n", mediaNotas);

 return 0;
    
  }
