#include <stdio.h>

int main() {
    char variavel;

    printf("digte um valor\n");
    scanf("%c", &variavel);

    switch (variavel) {
        case 'a':
        printf("codigo a ser executado se variavel == a\n");
        printf("teste do case1");
        break;
        case 'b':
        printf("codigo a ser executado se variavel == b\n");
        break;
        default:
        printf("codigo a ser executado a variavel nao for a ou b\n");

    }
}