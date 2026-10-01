#include <stdio.h>
#include <string.h>
#include "../include/transacaoBancaria.h"

void inicializaTransacao(TransacaoBancaria* transacao, Cliente* cliente, int identificador, int numeroContaOrigem, int numeroContaDestino, char* data, char* hora, TipoOperacao tipoOperacao, float valor) {
    transacao->identificador = identificador;
    transacao->numeroContaOrigem = numeroContaOrigem;
    transacao->numeroContaDestino = numeroContaDestino;
    strcpy(transacao->data, data);
    strcpy(transacao->hora, hora);
    transacao->tipoOperacao = tipoOperacao;
    transacao->valor = valor;
    transacao->cliente = cliente;
}

void imprimirTransacao(TransacaoBancaria* transacao) {
    printf("Identificador: %d\n", transacao->identificador);
    printf("Cliente: %s\n",transacao->cliente->nome);
    printf("Conta origem: %d\n", transacao->numeroContaOrigem);
    printf("Conta destino: %d\n", transacao->numeroContaDestino);
    printf("Data: %s\n", transacao->data);
    printf("Hora: %s\n", transacao->hora);

    printf("Tipo de operacao: ");

    switch (transacao->tipoOperacao) {
        case SAQUE:
            printf("Saque\n");
            break;

        case DEPOSITO:
            printf("Deposito\n");
            break;

        case EMPRESTIMO:
            printf("Emprestimo\n");
            break;
    }

    printf("Valor: %.2f\n", transacao->valor);
}