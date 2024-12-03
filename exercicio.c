#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Estudante;

void inserirDados(Estudante *e) {
    printf("Digite o nome do estudante: ");
    fgets(e->nome, 50, stdin);
    e->nome[strcspn(e->nome, "\n")] = '\0';

    printf("Digite a idade do estudante: ");
    scanf("%d", &e->idade);

    printf("Digite a nota do estudante: ");
    scanf("%f", &e->nota);
    getchar();
}

void atualizarNota(Estudante *e, float novaNota) {
    e->nota = novaNota;
    printf("Nota atualizada com sucesso!\n");
}

void mostrarDados(Estudante *e, int dadosInseridos) {
    if (dadosInseridos) {
        printf("\nInformações do Estudante:\n");
        printf("Nome: %s\n", e->nome);
        printf("Idade: %d\n", e->idade);
        printf("Nota: %.2f\n", e->nota);
    } else {
        printf("\nNenhum dado do estudante foi inserido ainda.\n");
    }
}

int main() {
    Estudante estudante;
    int opcao, dadosInseridos = 0;
    float novaNota;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir dados do estudante\n");
        printf("2. Atualizar nota do estudante\n");
        printf("3. Mostrar dados do estudante\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                inserirDados(&estudante);
                dadosInseridos = 1;
                break;
            case 2:
                if (dadosInseridos) {
                    printf("Digite a nova nota do estudante: ");
                    scanf("%f", &novaNota);
                    atualizarNota(&estudante, novaNota);
                } else {
                    printf("Nenhum dado do estudante foi inserido ainda. Insira os dados primeiro.\n");
                }
                break;
            case 3:
                mostrarDados(&estudante, dadosInseridos);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
