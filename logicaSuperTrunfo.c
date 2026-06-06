#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 80

typedef struct {
    char codigo[MAX_TEXTO];
    char estado[MAX_TEXTO];
    char cidade[MAX_TEXTO];
    int populacao;
    double area;
    double pib;
    int pontosTuristicos;
} Carta;

void lerTexto(const char *prompt, char *destino, int tamanho) {
    printf("%s", prompt);
    if (fgets(destino, tamanho, stdin) != NULL) {
        size_t len = strlen(destino);
        if (len > 0 && destino[len - 1] == '\n') {
            destino[len - 1] = '\0';
        }
    }
}

int lerInteiro(const char *prompt) {
    int valor;
    char buffer[MAX_TEXTO];
    while (1) {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            return 0;
        }
        if (sscanf(buffer, "%d", &valor) == 1) {
            return valor;
        }
        printf("Entrada inválida. Digite um número inteiro.\n");
    }
}

double lerDouble(const char *prompt) {
    double valor;
    char buffer[MAX_TEXTO];
    while (1) {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            return 0.0;
        }
        if (sscanf(buffer, "%lf", &valor) == 1) {
            return valor;
        }
        printf("Entrada inválida. Digite um número válido.\n");
    }
}

double calcularDensidade(const Carta *carta) {
    if (carta->area <= 0.0) {
        return 0.0;
    }
    return carta->populacao / carta->area;
}

void imprimirCarta(const Carta *carta) {
    printf("Código: %s\n", carta->codigo);
    printf("Estado: %s\n", carta->estado);
    printf("Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área (km²): %.2f\n", carta->area);
    printf("PIB (R$): %.2f\n", carta->pib);
    printf("Pontos turísticos: %d\n", carta->pontosTuristicos);
    printf("Densidade populacional: %.2f\n", calcularDensidade(carta));
}

int main() {
    Carta carta1, carta2;
    int opcao;
    double valor1, valor2;

    printf("=== Super Trunfo - Países ===\n");
    printf("Cadastro da Carta 1:\n");
    lerTexto("Digite o código da cidade: ", carta1.codigo, MAX_TEXTO);
    lerTexto("Digite o estado: ", carta1.estado, MAX_TEXTO);
    lerTexto("Digite o nome da cidade: ", carta1.cidade, MAX_TEXTO);
    carta1.populacao = lerInteiro("Digite a populacao: ");
    carta1.area = lerDouble("Digite a area (km²): ");
    carta1.pib = lerDouble("Digite o PIB: ");
    carta1.pontosTuristicos = lerInteiro("Digite o numero de pontos turisticos: ");

    printf("\nCadastro da Carta 2:\n");
    lerTexto("Digite o código da cidade: ", carta2.codigo, MAX_TEXTO);
    lerTexto("Digite o estado: ", carta2.estado, MAX_TEXTO);
    lerTexto("Digite o nome da cidade: ", carta2.cidade, MAX_TEXTO);
    carta2.populacao = lerInteiro("Digite a populacao: ");
    carta2.area = lerDouble("Digite a area (km²): ");
    carta2.pib = lerDouble("Digite o PIB: ");
    carta2.pontosTuristicos = lerInteiro("Digite o numero de pontos turisticos: ");

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    opcao = lerInteiro("Opcao: ");

    switch (opcao) {
        case 1:
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            break;
        case 2:
            valor1 = carta1.area;
            valor2 = carta2.area;
            break;
        case 3:
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            break;
        case 4:
            valor1 = carta1.pontosTuristicos;
            valor2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor1 = calcularDensidade(&carta1);
            valor2 = calcularDensidade(&carta2);
            break;
        default:
            printf("Opcao invalida. Encerrando o programa.\n");
            return 1;
    }

    printf("\n=== Carta 1 ===\n");
    imprimirCarta(&carta1);
    printf("\n=== Carta 2 ===\n");
    imprimirCarta(&carta2);

    printf("\nResultado da comparacao:\n");
    if (opcao == 5) {
        if (valor1 < valor2) {
            printf("A Carta 1 vence por menor densidade populacional.\n");
        } else if (valor2 < valor1) {
            printf("A Carta 2 vence por menor densidade populacional.\n");
        } else {
            printf("Empate na densidade populacional.\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("A Carta 1 vence.\n");
        } else if (valor2 > valor1) {
            printf("A Carta 2 vence.\n");
        } else {
            printf("Empate no atributo selecionado.\n");
        }
    }

    return 0;
}
