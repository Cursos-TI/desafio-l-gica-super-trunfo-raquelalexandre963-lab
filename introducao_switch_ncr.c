#include <stdio.h>

int main() {
  int opcao;
  float saldo = 1000.00;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ %f\n", saldo);
      break;
    case 2:
      printf("digite o banco que voce desejar depositar\n");
      printf("digite a agencia que voce desejar depositar\n");
      printf("digite a conta que voce desejar depositar\n");
      break;
    case 3:
      printf("digite o valor a sacar\n");
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}