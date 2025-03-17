#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-16
Descrição: Exercicio 8

8. Faça um algoritmo para um terminal de auto-atendimento bancário que realiza
saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado e
deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O
programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina
possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a
quantidade de cédulas na seguinte ordem: 10,5,1.

*/

int main(int argc, char const *argv[])
{
    int saque;

    printf("valor do saque: ");
    scanf("%d", &saque);

    printf("Sedulas de 10: %d\n", saque / 10);
    printf("Sedulas de 5: %d\n", (saque % 10) / 5);
    printf("Sedulas de 1: %d", saque % 5);

    return 0;
}
