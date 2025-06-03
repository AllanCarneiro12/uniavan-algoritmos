#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 6. Contando números pares em um vetor. Conte quantos números pares existem em
um vetor.
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};
    int contator = 0;

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (vetor[i] % 2 == 0)
        {
            contator++;
        }
    }
    printf("quantidade de pares: %d", contator);
}