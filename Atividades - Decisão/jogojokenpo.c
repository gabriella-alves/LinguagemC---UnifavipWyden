#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int menuescolha;
    int escolhaj, escolhac, resultado;
    char tipoc;
    srand(time(0));
    
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("\n");

    printf("Este é o menu do Jogo do Jokenpô.\n");
    printf("O que deseja fazer? (digite o número)\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Regras do Jogo\n");
    printf("3 - Sair\n");
    scanf("%d", &menuescolha);

    switch(menuescolha){
        case 1:
            break;
        case 2:
            printf("\n");
            printf("Regras do Jogo do Jokenpô:\n");
            printf("- Pedra vence Tesoura\n");
            printf("- Tesoura vence Papel\n");
            printf("- Papel vence Pedra\n");
            printf("\n");
            break;
        case 3:
            printf("\n");
            printf("Saindo do jogo. Até a próxima!\n");
            break;
        default:
            printf("\n");
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            break;
    }

    printf("\n");
    printf("--------------------------------------------------\n"); 
    printf("------------------JOGO DO JOKENPÔ------------------\n");
    printf("--------------------------------------------------\n"); 
    printf("\n");
    printf("Escolha uma opção (digite o número):\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &escolhaj);

    printf("\n");

    escolhac = rand() % 3 + 1;

    switch(escolhaj){
        case 1:
            printf("Você escolheu Pedra.\n");
            break;
        case 2:
            printf("Você escolheu Papel.\n");
            break;
        case 3:
            printf("Você escolheu Tesoura.\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }

    switch(escolhac){
        case 1:
            printf("O computador escolheu Pedra.\n");
            break;
        case 2:
            printf("O computador escolheu Papel.\n");
            break;
        case 3:
            printf("O computador escolheu Tesoura.\n");
            break;
    }

    printf("\n");

    if (escolhac == escolhaj){
        printf("Empate!\n");
    } else if ((escolhaj == 1 && escolhac == 3) || (escolhaj == 2 && escolhac == 1) || (escolhaj == 3 && escolhac == 2)){
        printf("*** Você venceu! ***\n");
    } else {
        printf("*** O computador venceu! ***\n");
    }

    return 0;

}