/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-30
Descrição: codigo da aula do dia 30/04
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char minhaStringDouble[3] = "2.3";
    double d = atoi(minhaStringDouble);
    printf("\'O dobro de %f resulta em %f\'",d,d+d);
}