#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numj, numc, resultado;
    char tipoc;
    srand(time(0));

    numc = rand() % 100 + 1;

    printf("\n");
    printf("--------------------------------------------------\n"); 
    printf("------------------JOGO DO MAIOR, MENOR OU IGUAL------------------\n");
    printf("--------------------------------------------------\n"); 
    printf("\n");
    printf("Você deve escolher um tipo de comparação (digite a letra): \n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("I - Igual\n");
    scanf("%c", &tipoc);
    printf("\n");

    printf("Escolha um número entre 1 a 100: ");
    scanf("%d", &numj);
    printf("\n");

    switch(tipoc){
        case 'M':
        case 'm':
            printf("Você escolheu Maior. O número do computador é %d.\n", numc);
            resultado = numj > numc ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu Menor. O número do computador é %d.\n", numc);
            resultado = numj < numc ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu Igual. O número do computador é %d.\n", numc);
            resultado = numj == numc ? 1 : 0;
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }

    printf("\n");
    
    if(resultado == 1){
        printf("*** Você venceu! ***\n");
    } else {
        printf("*** Você perdeu. ***\n");
    }

    return 0;

}