#include <stdio.h>

int main() {
    int dia;

    printf("entre o valor do dia!\n");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("domingo\n");
    } else if (dia == 2) {
        printf("segunda-feira\n");
    } else if (dia == 3) {
        printf("terça-feira\n");
    } else if (dia == 4) {
        printf("quarta-feira\n");
    } else if (dia == 5) {
        printf("quinta-feira\n");
    } else if (dia == 6) {
        printf("sexta-feira\n");
    } else if (dia == 7) {
        printf("sábado\n");
    }
    
}