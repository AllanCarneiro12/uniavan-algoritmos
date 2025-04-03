#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 15. Calcule a área de uma pizza que possui um raio R (pi=3.14).
*/

void main ()
{
    system("cls");
    const pi = 3.14;
    float raio, area;

    printf("insira o raio da pizza: ");
    scanf("%f", &raio);

    area = pi * (raio*raio);

    printf("Area da pizza: %.2f", area);

}