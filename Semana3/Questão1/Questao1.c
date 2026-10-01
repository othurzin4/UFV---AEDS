#include "Questao1.h"

// Corpo da função
void zerarVariaveis(int *n1, int *n2) {
    //Recebendo do usuario o valor das variaveis
    printf("Insira o valor das duas variaveis: ");
    scanf("%d %d", n1, n2);

    // Zera os valores
    *n1 = 0;
    *n2 = 0;
}

int main() {
    int n1, n2;

    // Chama a função
    zerarVariaveis(&n1, &n2);

    printf("Valores das variaveis apos a função: %d, %d", n1, n2);

    return 0;
}