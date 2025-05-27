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

    int i, p, npro, ncli;
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

    printf("Simulacao para:\n");
    printf("  %d produtos\n", npro);
    printf("  %d clientes\n", ncli);
    printf("-------------------------------\n");
    printf("Cliente  | Produto | Valor\n");
    printf("-------------------------------\n");

    for (i = 0; i < ncli; i++)
    {
        total += preco[compra[i]];
        printf("  %-6d |  %-6d | R$ %7.2f\n", i, compra[i] + 1, preco[compra[i]]);
    }

    printf("-------------------------------\n");
    printf("TOTAL DE VENDAS    | R$ %7.2f\n", total);
}