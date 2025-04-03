#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 15. Ordenar os elementos do vetor de forma crescente (Bubble Sort). Ordene os
elementos de um vetor usando o método Bubble Sort.
*/

void main()
{
    system("cls");
    int vetor[] = {12, 32, 43, 56, 87, 55, 33, 23, 42, 57, 98, 3};
    int aux;

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(vetor) / sizeof(int); j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    // printf("-------------\n");

    for (int k = 0; k < sizeof(vetor) / sizeof(int); k++)
    {
        printf("%d", k);
        printf("vetor[%d] = %d\n", k, vetor[k]);
    }
}