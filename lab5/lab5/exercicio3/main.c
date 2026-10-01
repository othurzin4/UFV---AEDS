#include <stdio.h>
#include <stdlib.h>

#include "../exercicio1/include/cliente.h"

int main() {

    Cliente* clientes;

    clientes = (Cliente*) malloc(5 * sizeof(Cliente));

    if (clientes == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int cpf1[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};
    int cpf2[11] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 9};

    inicializaCliente(&clientes[0], "Joao", cpf1);
    inicializaCliente(&clientes[1], "Maria", cpf2);

    printf("Cliente 1: %s\n", getNomeCliente(&clientes[0]));
    printf("Cliente 2: %s\n", getNomeCliente(&clientes[1]));

    free(clientes);

    return 0;
}