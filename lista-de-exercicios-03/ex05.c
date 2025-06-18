#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 5. Invertendo os elementos de um vetor. Crie um vetor e exiba seus elementos na
ordem inversa.
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 42, 53, 76, 1};

    for (int i = sizeof(vetor) / sizeof(int) - 1; i >= 0; i--)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}