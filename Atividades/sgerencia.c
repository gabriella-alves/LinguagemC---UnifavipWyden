#include <stdio.h>
#include <string.h>

int main(){
    char produtoA[50];
    char produtoB[50];

    float valorA;
    float valorB;

    unsigned long int estoqueA;
    unsigned long int estoqueB;

    unsigned int estoqueMinimoA = 1000;
    unsigned int estoqueMinimoB = 500;

    double valorTotalA;
    double valorTotalB;

    unsigned long int resultadoA;
    unsigned long int resultadoB;

    printf("\n");
    printf("Olá! Bem-vindo ao sistema de gerenciamento de estoque e vendas.\n");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Por favor, insira os seguintes dados do produto A:\n");
    printf("Nome do produto A: ");
    fgets(produtoA, 50, stdin);
    produtoA[strcspn(produtoA, "\n")] = 0;

    printf("Valor do produto A: ");
    scanf("%f", &valorA);
    getchar(); 

    printf("Estoque do produto A: ");
    scanf("%lu", &estoqueA);
    getchar(); 

    printf("Nome do produto B: ");
    fgets(produtoB, 50, stdin);
    produtoB[strcspn(produtoB, "\n")] = 0;

    printf("Valor do produto B: ");
    scanf("%f", &valorB);
    getchar(); 

    printf("Estoque do produto B: ");
    scanf("%lu", &estoqueB);
    getchar(); 

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O(a) %s tem estoque suficiente? %s\n", produtoA, resultadoA ? "Sim" : "Não");
    printf("O(a) %s tem estoque suficiente? %s\n", produtoB, resultadoB ? "Sim" : "Não");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("O valor total do estoque do(a) %s é: %.2f\n", produtoA, valorTotalA);
    printf("O valor total do estoque do(a) %s é: %.2f\n", produtoB, valorTotalB);

    return 0;
}