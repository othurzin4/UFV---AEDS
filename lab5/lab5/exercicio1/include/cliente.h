#ifndef CLIENTE_H
#define CLIENTE_H

#include "contaBancaria.h"

typedef struct Cliente {
    char nome[50];
    char cpf[12];
    ContaBancaria conta;
} Cliente;

void inicializaCliente(Cliente* cliente, char* nome, int cpf[]);
void imprimirCliente(Cliente* cliente);

void setNomeCliente(Cliente* cliente, char* nome);
void setCpf(Cliente* cliente, int cpf[]);

char* getCpf(Cliente* cliente);
char* getNomeCliente(Cliente* cliente);


#endif

