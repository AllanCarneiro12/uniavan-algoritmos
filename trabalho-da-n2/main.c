/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-21
Descrição: Trabalho da N2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRODUTOS 200
#define CLIENTES 50

int random(int n)
{
    return rand() % n;
}

void main()
{
    system("cls");

    int i, j, p, npro, ncli;
    int compra[CLIENTES];
    float preco[PRODUTOS];
    float total;

    srand((unsigned)time(NULL));

    npro = random(PRODUTOS) + 1;
    for (i = 0; i < npro; i++)
    {
        p = 5 + random(96);
        preco[i] = p;
    }

    ncli = random(CLIENTES) + 1;
    for (i = 0; i < ncli; i++)
    {
        compra[i] = random(npro) + 1;
    }
}