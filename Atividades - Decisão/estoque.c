#include <stdio.h>

int main(){
    int temperatura;
    int umidade;

    printf("\n");
    printf("O resfriamento de produtos é essencial para preservar o estoque atual.\n");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Vamos verificar se o seu está em boas condições!\n");
    printf("\n");

    printf("Digite a temperatura (em °C): ");
    scanf("%d", &temperatura);
    printf("Digite a umidade (em %%): ");
    scanf("%d", &umidade);

    printf("\n");
    printf("------------------------RESULTADO-------------------------\n");
    printf("\n");

    if (temperatura >= 5){
        printf("\n");
        printf("A temperatura %d°C está acima do recomendado! O estoque pode ser comprometido.\n", temperatura);
    } else {
        printf("\n");
        printf("A temperatura %d°C está dentro do recomendado. \n", temperatura);
    }

    if (umidade < 85){
        printf("\n");
        printf("A umidade %d%% está abaixo do recomendado! O estoque pode ser comprometido.\n", umidade);
    } else {
        printf("\n");
        printf("A umidade %d%% está dentro do recomendado. \n", umidade);
    }

    return 0;
}