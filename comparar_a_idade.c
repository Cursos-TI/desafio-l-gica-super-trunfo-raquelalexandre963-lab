#include <stdio.h>

// Este programa compara a idade de duas pessoas e verifica qual é mais velha.
int main() {
  int idade1 = 44;
  int idade2 = 30;

  // Verifica se a idade da Pessoa 1 é maior que a idade da Pessoa 2  
  if (idade1 >= idade2) {
    printf("Pessoa 1 é mais velha que Pessoa 2\n");
  }

  printf("fora IF\n");
  return 0;
}