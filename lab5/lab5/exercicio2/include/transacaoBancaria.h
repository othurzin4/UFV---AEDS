#ifndef TRANSACAOBANCARIA_H
#define TRANSACAOBANCARIA_H

#include "../../exercicio1/include/cliente.h"

typedef enum TipoOperacao {
    SAQUE,
    DEPOSITO,
    EMPRESTIMO
} TipoOperacao;

typedef struct TransacaoBancaria {
    int identificador;
    int numeroContaOrigem;
    int numeroContaDestino;
    char data[11];
    char hora[9];
    TipoOperacao tipoOperacao;
    float valor;
    Cliente* cliente;
} TransacaoBancaria;

void inicializaTransacao(TransacaoBancaria* transacao, Cliente* cliente, int identificador, int numeroContaOrigem, int numeroContaDestino, char* data, char* hora, TipoOperacao tipoOperacao, float valor);

void imprimirTransacao(TransacaoBancaria* transacao);

#endif