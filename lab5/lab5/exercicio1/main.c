#include <stdio.h>
#include <stdlib.h>

#include "include/cliente.h"

int main() {

    Cliente cliente;

    int cpf[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};

    inicializaCliente(&cliente, "Joao", cpf);

    printf("CLIENTE\n");
    printf("Nome: %s\n", getNomeCliente(&cliente));

    inicializaContaBancaria(&cliente.conta, 1001, 'C', 2027, 1000.00);

    imprimirDadosContaBancaria(&cliente.conta);

    depositarValor(&cliente.conta, 500.00);
    realizarSaque(&cliente.conta, 200.00);

    printf("\nAPOS OPERACOES\n");
    printf("Saldo: %.2f\n", getSaldo(&cliente.conta));

    int anoAtual = 2028;

    printf("\nAvaliacao de emprestimo:\n");

    if (avaliarEmprestimo(&cliente.conta, anoAtual)) {
        printf("Emprestimo aprovado!\n");
    } else {
        printf("Emprestimo negado!\n");
    }

    return 0;
}