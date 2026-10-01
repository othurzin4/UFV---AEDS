#include "Questao4.h"

void preencheStruct(pessoa *pessoa) {
    // Preenche o nome
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa->nome);

    // Preenche a data de nascimento, preenchendo a outra struct dada
    printf("Digite a data de nascimento da pessoa (separada por espaço): ");
    scanf("%d %d %d", &pessoa->aniversario.dia, &pessoa->aniversario.mes, &pessoa->aniversario.ano);

    // Preenche o cpf
    printf("Digite o cpf da pessoa: ");
    scanf("%s", pessoa->cpf);
}

void imprimeStruct(pessoa *pessoa) {
    // Imprime as informações
    printf("As informacoes da pessoa sao:\n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de nascimento: %d/%d/%d\n", pessoa->aniversario.dia, pessoa->aniversario.mes, pessoa->aniversario.ano);
    printf("CPF: %s\n", pessoa->cpf);
}

int main() {
    pessoa pessoa;

    preencheStruct(&pessoa);
    imprimeStruct(&pessoa);
    return 0;
}