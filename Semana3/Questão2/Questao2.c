#include "Questao2.h"

// Corpo da função
void rotacionarValores(int* a, int* b, int* c) {
    int aux;

    // Recebendo do usuario os valores das variaveis
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", a, b, c);

    // Rotacionando os valores
    aux = *a;
    *a = *b;
    *b = *c;
    *c = aux;
}

int main() {
    int a, b, c;

    // Chamando a função
    rotacionarValores(&a, &b, &c);

    //Imprimindo os resultados
    printf("Os valores rotacionados de a, b e c sao: %d, %d, %d", a, b, c);

    return 0;
}