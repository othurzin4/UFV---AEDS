#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H


typedef struct{
    int numConta;
    char nome[30];
    int CPF[11];
    char TipoConta;
    int AnoAbertura;
    float saldo;

} Cliente;

void inicializaCliente(Cliente *ptr, int numConta, char* nome, int* CPF, char TipoConta, int AnoAbertura, float saldo);
void imprimeCliente(Cliente *ptr);
void set_TipoConta(Cliente *ptr, char TipoConta);
char get_TipoConta(Cliente *ptr);

void set_nome(Cliente *ptr, char* nome);
char *get_nome(Cliente *ptr);

void set_saque(Cliente *ptr, float saque);
void set_deposito(Cliente *ptr, float deposito);
float get_saldo(Cliente *ptr);
int credito(Cliente *ptr);

#endif
