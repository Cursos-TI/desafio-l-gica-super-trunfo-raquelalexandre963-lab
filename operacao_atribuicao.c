#include <stdio.h>

/*
atribuicao com subtracao (-=)
atribuicao com multiplicar (*=)
atribuicao com divisao (/=)
*/

int main(){
    int numero2, resultado; // ADICIONEI O ; AQUI
    
    resultado = 10; // TIRA O // DA FRENTE
    printf("resultado: %d\n", resultado);
    
    //resultado = resultado + 20;
    resultado += 20;
    printf("resultado: %d\n", resultado);
    
    //resultado = resultado - numero1;
    numero2 = 5; // INICIALIZA O NUMERO2
    resultado -= numero2;
    printf("resultado: %d\n", resultado);
    
    return 0;
}
