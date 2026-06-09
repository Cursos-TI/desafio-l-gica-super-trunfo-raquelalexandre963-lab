#include <stdio.h>

int main() {
    int variavel;

    printf("digite um valor\n");
        scanf("%d", &variavel);
        switch (variavel) {
        case 1:
        printf("codigo a ser executado se variavel == 1\n");
        // 1break
        // o break e utilizado para parar a execucao do switch
        case 2:
        printf("codigo a ser executado se variavel == 2\n");
        break;
        default:
        printf("codigo a ser executado a variavel nao for 1 ou 2\n");
    }
}