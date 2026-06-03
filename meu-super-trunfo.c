#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char estado1[3], codigo1[10], cidade1[50];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;

    // Carta 2 - Rio de Janeiro
    char estado2[3], codigo2[10], cidade2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;

    // Entrada Carta 1
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area em km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada Carta 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area em km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculos
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Saida
    printf("\n=== RESULTADO FINAL ===\n");
    printf("\nCarta 1 - %s:\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2 - %s:\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

        printf("01\n DUELOS 02\n");

    // DUELO DE POPULAÇÃO - maior vence
    printf("\n1. DUELO DE POPULAÇÃO\n");
    printf("%s (%lu) VS %s (%lu)\n", cidade1, populacao1, cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Resultado: EMPATE\n");
    }

    // DUELO DE DENSIDADE - menor vence
    printf("\n2. DUELO DE DENSIDADE\n");
    printf("%s (%.2f) VS %s (%.2f)\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Resultado: EMPATE\n");
    }

    // DUELO DE PIB PER CAPITA - maior vence
    printf("\n3. DUELO DE PIB PER CAPITA\n");
    printf("%s (%.2f) VS %s (%.2f)\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Resultado: EMPATE\n");
    }

    return 0;
}