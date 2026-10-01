#include <stdio.h>
#include <stdlib.h>

#include "../exercicio1/include/cliente.h"
#include "include/listaTransacoes.h"

int main() {

    Cliente cliente;
    ListaTransacoes lista;
    TransacaoBancaria transacao;

    int cpf[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};

    inicializaCliente(&cliente, "Joao", cpf);

    inicializaContaBancaria(&cliente.conta, 1001, 'C', 2026, 1000.00);

    inicializaLista(&lista);

    imprimirCliente(&cliente);
    imprimirDadosContaBancaria(&cliente.conta);

    //OPERACAO: DEPOSITO

    depositarValor(&cliente.conta, 500.00);

    inicializaTransacao(&transacao,&cliente, 1, 0, 1001, "07/09/2026", "10:30:00", DEPOSITO, 500.00);
    insereTransacao(&lista, transacao);

    // OPERACAO: SAQUE

    realizarSaque(&cliente.conta, 200.00);

    inicializaTransacao(&transacao, &cliente, 2, 1001, 0, "07/09/2026", "14:15:00", SAQUE, 200.00);
    insereTransacao(&lista, transacao);

    //OPERACAO: DEPOSITO

    depositarValor(&cliente.conta, 1000.00);

    inicializaTransacao(&transacao, &cliente, 3, 0, 1001, "07/09/2026", "16:45:00", DEPOSITO, 1000.00);
    insereTransacao(&lista, transacao);

    //SALDO FINAL

    printf("\nSALDO FINAL\n");
    printf("Saldo: %.2f\n", getSaldo(&cliente.conta));

    printf("\nLISTA DE TRANSACOES\n");
    imprimeLista(&lista);

    // REMOVENDO TRANSACAO

    printf("\nREMOVENDO TRANSACAO 2\n");

    if (removeTransacao(&lista, 2)) {
        printf("Transacao removida com sucesso.\n");
    } else {
        printf("Transacao nao encontrada.\n");
    }

    printf("\nLISTA APOS REMOCAO\n");
    imprimeLista(&lista);

    return 0;
}