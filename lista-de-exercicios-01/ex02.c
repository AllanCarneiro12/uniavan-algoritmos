#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-15
Descrição: Exercicio 2

2. Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor.
*/

int main(int argc, char const *argv[])
{
    float num;
    printf("insira um numero para dobrar o valor: ");
    scanf("%f", &num);
    num = num * 2;
    printf("resultado: %f", num);
    return 0;
}
