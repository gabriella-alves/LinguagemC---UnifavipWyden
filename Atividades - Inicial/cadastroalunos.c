#include <stdio.h>
#include <string.h>


int main() {
    int matricula;
    char nome[100];
    int idade;
    char cpf[12];
    float n1, n2, n3, n4, media;

    printf("\n");
    printf("Olá! Bem-vindo ao sistema de cadastro/login de alunos.\n");

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Por favor, insira os seguintes dados do aluno:\n");

    printf("Matrícula: ");
    scanf("%d", &matricula);

    getchar();

    printf("Nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("CPF: ");
    scanf("%11s", cpf);

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("Digite a média de cada semestre (4 semestres):\n");
    printf("Semestre 1: ");
    scanf("%f", &n1);
    printf("Semestre 2: ");
    scanf("%f", &n2);
    printf("Semestre 3: ");
    scanf("%f", &n3);
    printf("Semestre 4: ");
    scanf("%f", &n4);

    printf("\n");
    printf("-------------------------------------------------\n");
    printf("\n");

    printf("\nCadastro do Aluno e Resultado do Ano:\n");

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);
    printf("Média Anual: %.2f\n", media);

    if (media >= 7.0) {
        printf("Resultado: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Resultado: Recuperação\n");
    } else {
        printf("Resultado: Reprovado\n");
    }

    return 0;
}