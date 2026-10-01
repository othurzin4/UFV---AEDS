#include "../include/cliente.h"
#include <string.h>
#include <stdio.h>

void inicializaCliente(Cliente* cliente, char* nome, int cpf[]) {
    setNomeCliente(cliente, nome);
    setCpf(cliente, cpf);
}

void setNomeCliente(Cliente* cliente, char* nome) {
    strcpy(cliente->nome, nome);
}

void setCpf(Cliente* cliente, int cpf[]) {
    for (int i = 0; i < 11; i++) {
        cliente->cpf[i] = cpf[i];
    }
}

char* getCpf(Cliente* cliente) {
    return cliente->cpf;
}

char* getNomeCliente(Cliente* cliente) {
    return cliente->nome;
}

void imprimirCliente(Cliente* cliente) {
    printf("CLIENTE\n");
    printf("Nome: %s\n", cliente->nome);

    printf("CPF: ");
    for (int i = 0; i < 11; i++) {
        printf("%d", cliente->cpf[i]);
    }
    printf(" \n");
    printf("\n");

}