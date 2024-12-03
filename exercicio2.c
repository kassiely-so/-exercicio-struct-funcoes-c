#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 3
#define MAX_DISCIPLINAS 4

typedef struct {
    char nome[50];
    char matricula[20];
    char dataNascimento[15];
    float notas[MAX_DISCIPLINAS];
    float media;
} Aluno;

float calcularMedia(float notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    Aluno alunos[MAX_ALUNOS];

    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        fgets(alunos[i].matricula, 20, stdin);
        alunos[i].matricula[strcspn(alunos[i].matricula, "\n")] = '\0';

        printf("Data de nascimento (DD/MM/AAAA): ");
        fgets(alunos[i].dataNascimento, 15, stdin);
        alunos[i].dataNascimento[strcspn(alunos[i].dataNascimento, "\n")] = '\0';

        printf("Digite as notas das %d disciplinas:\n", MAX_DISCIPLINAS);
        for (int j = 0; j < MAX_DISCIPLINAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        alunos[i].media = calcularMedia(alunos[i].notas, MAX_DISCIPLINAS);
    }

    printf("\nResultados:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Data de nascimento: %s\n", alunos[i].dataNascimento);
        printf("Média geral: %.2f\n", alunos[i].media);

        if (alunos[i].media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
        printf("----------------------\n");
    }

    return 0;
}
