#include "Questao3.h"

void funcaoHorario(int mnts, horario* horario) {
    // Define valores padrão
    horario->h = 0;
    horario->m = 0;

    // If para resolver a questão
    if (mnts < 60) {
        // Se menor que 60, são 0 horas e a quantidade de minutos
        horario->h = 0;
        horario->m = mnts;
    } else {
        // Se maior, horas recebe o resultado da divisão, e minutos o valor do modulo 
        horario->h = mnts / 60;
        horario->m = mnts % 60;
    }
}

int main() {
    int mnts;
    horario horario;

    // Recebe do usuario mnts
    printf("Escreva a quantidade de minutos: ");
    scanf("%d", &mnts);

    // Chama a função
    funcaoHorario(mnts, &horario);

    // Imprime o resultado
    printf("Os valores da struct horario sao: %d h e %d m", horario.h, horario.m);

    return 0;
}