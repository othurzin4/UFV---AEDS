#include <stdio.h>
#include "ContaBancaria.h"

int main() {

    Cliente cliente;

    int CPF[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1};

    inicializaCliente(&cliente,12345,"Beatriz",CPF,
        'C',2020,1000.00);

    printf("=== DADOS DO CLIENTE ===\n");
    imprimeCliente(&cliente);

    printf("\n=== ALTERANDO NOME ===\n");

    set_nome(&cliente, "Maria");
    printf("Novo nome: %s\n", get_nome(&cliente));

    printf("\n=== ALTERANDO TIPO DE CONTA ===\n");

    set_TipoConta(&cliente, 'P');
    printf("Novo tipo: %c\n", get_TipoConta(&cliente));

    printf("\n=== DEPOSITO ===\n");

    set_deposito(&cliente, 500.00);
    printf("Saldo: %.2f\n", get_saldo(&cliente));

    printf("\n=== SAQUE ===\n");

    set_saque(&cliente, 200.00);
    printf("Saldo: %.2f\n", get_saldo(&cliente));

    printf("\n=== CREDITO ===\n");

    if (credito(&cliente)) {
        printf("Cliente elegivel para credito.\n");
    } else {
        printf("Cliente nao elegivel para credito.\n");
    }

    return 0;
}