/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-03
Descrição: Desenvolver um algoritmo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
*/

#include <stdio.h>
// #include <math.h>

void main ()
{
    system("cls");
    int numero;
    printf("insira um numero: ");
    scanf("%d", &numero);

    if (numero % 5 == 0 && numero % 3 == 0)
    {
        printf("numero divisivel por 5 e 3");
    }
    else
    {
        printf("numero nao divisivel por 5 e 3");
    }
}