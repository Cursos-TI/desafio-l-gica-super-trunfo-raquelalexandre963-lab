#include <stdio.h>

// Este programa verifica se um número é par ou ímpar.
int main() {
  
    int numero = 5;
    int resultado;

    resultado = numero % 2;

    printf("A variavel resultado é: %d\n", resultado);
  
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

  return 0;
}
