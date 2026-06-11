#include <stdio.h>

int main() {
  int opcao;

  printf("Menu Principal\n");
  printf("1. executar o Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Saindo\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("execucao o jogo...\n");
      // Código para executar o jogo
      break;
    case 2:
      printf("as regras sao.......\n");
      printf("1. Regra 1\n");
      printf("2. Regra 2\n");
      printf("3. Regra 3\n");
      // Código para exibir as regras
      break;
    case 3:
      printf("Saindo do jogo......\n");
      break;
    default:
      printf("Opção inválida.......\n");
  }

  return 0;
}