#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

typedef struct ContaBancaria{

    int numeroConta;
    char tipoConta;
    int anoAbertura;
    float saldo;

} ContaBancaria; 

void inicializaContaBancaria(ContaBancaria* conta, int numero, char tipoConta, int ano, float saldo);

void setTipoConta(ContaBancaria* conta,char tipo);
void setSaldo(ContaBancaria* conta, float saldo);
float getSaldo(ContaBancaria* conta);
char getTipoConta(ContaBancaria* conta);

void imprimirDadosContaBancaria(ContaBancaria* conta);
int realizarSaque(ContaBancaria* conta, float valor);
void depositarValor(ContaBancaria* conta, float valor);

int avaliarEmprestimo(ContaBancaria* conta, int anoAtual);



#endif