#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time (0));

    // colocando a  tres opcao no jog jokenpô
    printf("***jogo de jokenpô ***\n");
    printf("escolha uma opcao: \n");
    printf("1 pedra\n");
    printf("2 papel\n");
    printf("3 tesoura\n");
    printf("escolha: ");
    scanf("%d", &escolhaJogador);


    // colocando a opcao do computador: 1, 2, 3:
    escolhaComputador = rand () % 3 + 1;

switch (escolhaJogador)
{
    case 1:  // dois pontos aqui
        printf("jogador: pedra - ");
        break;
        
    case 2:  // dois pontos aqui
        printf("jogador: papel - ");
        break;
        
    case 3:  // dois pontos aqui
        printf("jogador: tesoura - ");
        break;
        
    default:
        printf("opcao invalida\n");
        break;
}
    

   switch (escolhaComputador)
{
    case 1:  // <- dois pontos
        printf("computador: pedra\n");
        break;
    case 2:  // <- dois pontos
        printf("computador: papel\n");
        break;
    case 3:  // <- dois pontos
        printf("computador: tesoura\n");
        break;
}
    if(escolhaComputador == escolhaJogador) 
    {
        printf("### jogo empatou! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
    (escolhaJogador == 2) && (escolhaComputador == 1) || 
    (escolhaJogador == 3) && (escolhaComputador == 2))
{ 

    printf("### Parabens, vocẽ ganhou! ###\n");
} else {
    printf("### você perdeu! ###\n");

}

    return 0;

}

