#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-15
Descrição: Exercicio 1

1. Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do
número digitado.
*/

int main(int argc, char const *argv[])
{
    float num;
    printf("Digite um numero para dividir por 2: ");
    scanf("%f", &num);
    num = num / 2;
    printf("resultado: %f", num);
    return 0;
}
