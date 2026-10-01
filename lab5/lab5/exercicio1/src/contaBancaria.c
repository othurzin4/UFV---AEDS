#include "../include/contaBancaria.h"
#include <string.h>
#include <stdio.h>

void inicializaContaBancaria(ContaBancaria* conta, int numero, char tipoConta, int ano, float saldo) {

    setTipoConta(conta, tipoConta);
    
    conta->numeroConta = numero;

    conta->anoAbertura = ano;
    conta->saldo = saldo;
}

void setTipoConta(ContaBancaria* conta, char tipo) {
    conta->tipoConta = tipo;
}

char getTipoConta(ContaBancaria* conta) {
    return conta->tipoConta;
}

void setSaldo(ContaBancaria* conta, float saldo) {
    conta->saldo = saldo;
}

float getSaldo(ContaBancaria* conta) {
    return conta->saldo;
}

void imprimirDadosContaBancaria(ContaBancaria* conta) {

    printf("\nCONTA BANCARIA\n");
    printf("Numero da conta: %d\n", conta->numeroConta);
    printf("Tipo da conta: %c\n", conta->tipoConta);
    printf("Ano de abertura: %d\n", conta->anoAbertura);
    printf("Saldo: %.2f\n", conta->saldo);
    printf("\n");
}

int realizarSaque(ContaBancaria* conta, float valor){

    if(conta->saldo - valor >= 0){
        conta->saldo-=valor;
        printf("Saque de %f realizado.\n",valor);
        return 1;
    }
    else{
        return 0;
    }
}

void depositarValor(ContaBancaria* conta, float valor){
    conta->saldo+=valor;
    printf("Deposito de %f realizado.\n",valor);
}

int avaliarEmprestimo(ContaBancaria* conta,int anoAtual){
    return (anoAtual - conta->anoAbertura) >= 2;
}