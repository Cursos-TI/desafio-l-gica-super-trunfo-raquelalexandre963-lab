#include <stdio.h>

int main() {
    
    // Declarando as variantes DA CARTA 1: SÃO PAULO 
    char estado1 = 'A';              
    char codigo1[4] = "A01";         
    char nomeCidade1[50] = "Sao Paulo"; 
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    
    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; 


    // Declarando as variantes DA CARTA 2: RIO DE JANEIRO 
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    
    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    // Mostrando os DADOS 
    printf(" CARTAS CADASTRADAS \n");
    printf("Carta 1: %s | Populacao: %d\n", nomeCidade1, populacao1);
    printf("Carta 2: %s | Populacao: %d\n", nomeCidade2, populacao2);
    

    // DUELO: SÃO PAULO VS RIO DE JANEIRO (Atributo: População) 
    printf(" DUELO DE POPULACAO \n");
    printf("%s (%d) VS %s (%d)\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: %s VENCEU! \n", nomeCidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("Resultado: %s VENCEU! \n", nomeCidade2);
    } 
    else {
        printf("Resultado: EMPATE! \n");
    }
    
    return 0;
}