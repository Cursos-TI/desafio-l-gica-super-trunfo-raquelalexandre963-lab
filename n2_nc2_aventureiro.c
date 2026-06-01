#include <stdio.h>
 
int main(){
    /*
    soma (+)
    subtracao (-)
    multiplicar (*)
    divisao (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicar, divisao;

    printf("entre com numero 1: \n");
    scanf("%d", &numero1);
    printf("entre com numero2: \n");
    scanf("%d", &numero2);

    // operacao soma
    soma = numero1 + numero2;

    // operacao subtracao
    subtracao = numero1 - numero2;

    // operacao multiplicar
    multiplicar = numero1 * numero2;

    // operacao divisao
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A subtracao é: %d\n", subtracao);
    printf("A multiplicar é: %d\n", multiplicar);
    printf("A divisao é: %d\n", divisao);

}