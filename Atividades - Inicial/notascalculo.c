#include <stdio.h>

int main() {
    int matricula;
    float n1, n2, n3, media;

    printf("\n");
    printf("Olá! Bem-vindo ao sistema de cálculo de notas dos alunos.\n");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Por favor, insira os seguintes dados do aluno:\n");

    printf("Matrícula: ");
    scanf("%d", &matricula);

    printf("Carregando dados do aluno...\n");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Digite três notas para calcular a média: \n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    n1++;
    n3 += 2;
    media = (n1 + n2 + n3) / 3;

    printf("\n");
    printf("A média das notas, com bônus arquivados no sistema, é: %.2f\n", media);

    return 0;
}