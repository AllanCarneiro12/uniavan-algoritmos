/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-03
Descrição: Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de “y” de acordo com as condições abaixo:
y = x , se x < 1;
y = 0 , se x = 1;
y = x² , se x > 1;
*/

#include <stdio.h>

void main()
{
    system("cls");
    float x, y;
    printf("Insira um numero: ");
    scanf("%f", &x);

    if (x < 1)
    {
        y = x;
    }
    else if (x == 1)
    {
        y = 0;
    }
    else // x > 1
    {
        y = x * x;
    }

    printf("o valor de y e: %.2f\n", y);
}