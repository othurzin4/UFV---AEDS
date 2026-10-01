#ifndef QUESTAO4_H
#define QUESTAO4_H

// Inclusão das bibliotecas que vão ser utlizadas no programa
#include <stdio.h>
#include <string.h>

// Definição das estruturas
typedef struct {
    int dia;
    int mes;
    int ano;
} data;

typedef struct {
    char nome[50];
    data aniversario;
    char cpf[15];
} pessoa;

// Definição das funções
void preencheStruct(pessoa *pessoa);
void imprimeStruct(pessoa *pessoa);

#endif