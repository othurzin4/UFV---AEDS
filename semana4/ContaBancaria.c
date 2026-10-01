#include "ContaBancaria.h"
#include <string.h>
#include <stdio.h>
void inicializaCliente(Cliente *ptr, int numConta, char* nome, int* CPF, char TipoConta, int AnoAbertura, float saldo) {
    
    ptr->numConta = numConta;
    set_nome(ptr, nome);
    for (int i = 0; i < 11; i++) {
    ptr->CPF[i] = CPF[i];
    }   
    set_TipoConta(ptr, TipoConta);
    ptr->AnoAbertura = AnoAbertura;
    ptr->saldo = saldo;

}
void imprimeCliente(Cliente *ptr){
    
    printf("Número da Conta: %d\n", ptr->numConta);
    printf("Nome: %s\n", get_nome(ptr));
    printf("CPF: ");
    for(int i = 0; i < 11; i++) {
        printf("%d", ptr->CPF[i]);
    }
    printf("\n");
    printf("Tipo de Conta: %c\n", get_TipoConta(ptr));
    printf("Ano de Abertura: %d\n", ptr->AnoAbertura);
    printf("Saldo: %.2f\n", get_saldo(ptr));
}
void set_TipoConta(Cliente *ptr, char TipoConta){
    ptr->TipoConta = TipoConta;
}
char get_TipoConta(Cliente *ptr){
    return ptr->TipoConta;
}

void set_nome(Cliente *ptr, char* nome){
    strcpy(ptr->nome, nome);
    
}
char *get_nome(Cliente *ptr){
    return ptr->nome;
}

void set_saque(Cliente *ptr, float saque){
    ptr->saldo -= saque;
}

void set_deposito(Cliente *ptr, float deposito){
    ptr->saldo += deposito;
}

float get_saldo(Cliente *ptr){
    return ptr->saldo;
}

int credito(Cliente *ptr){
    if (2026 - ptr->AnoAbertura > 2) {
        return 1; // Crédito permitido
    } else {
        return 0; // Crédito não permitido
    }
}