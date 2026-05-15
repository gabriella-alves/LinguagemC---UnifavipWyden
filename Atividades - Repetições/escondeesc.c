#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int esconderijo, comp, resultado;
    char opcao;
    int i = 1;
    srand(time(0));

    printf("\n");
    printf("-----------------------------------------------------------\n");
    printf("------------------JOGO DO ESCONDE-ESCONDE------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("\n");

    printf("Bem vindo ao Jogo do Esconde-Esconde!\n");
    printf("Haverá uma contagem de 1 a 10, e quando finalizar, você deve escolher onde se esconderá.\n");

    printf("\n");
    printf("Podemos começar? (Digite 'S' para sim ou 'N' para não): ");
    scanf("%c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        while (i <= 10) {
            printf("%d...\n", i);
            i++;
        }
    } else {
        printf("Jogo encerrado. Até a próxima!\n");
        return 0;
    }

    printf("\n");
    comp = rand() % 5 + 1;

    printf("Onde você se escondeu? (Digite um número de 1 a 5): \n");
    printf("1 - Atrás da porta\n");
    printf("2 - Debaixo da cama\n");
    printf("3 - Dentro do armário\n");
    printf("4 - Atrás da cortina\n");
    printf("5 - No sótão\n");
    printf("\n");
    scanf("%d", &esconderijo);

    printf("\n");
    
    switch(esconderijo){
        case 1:
            printf("Você escolheu Atrás da porta.\n");
            resultado = comp == esconderijo ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Debaixo da cama.\n");
            resultado = comp == esconderijo ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu Dentro do armário.\n");
            resultado = comp == esconderijo ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Atrás da cortina.\n");
            resultado = comp == esconderijo ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu No sótão.\n");
            resultado = comp == esconderijo ? 1 : 0;
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            break;
    }

    printf("\n");

    if (resultado == 1) {
        printf("*** Você foi encontrado.. Tente novamente! ***\n");
    } else {
        printf("*** Parabéns! Você não foi encontrado. ***\n");
    }

    return 0;

}