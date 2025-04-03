#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 9. Copiando um vetor para outro. Crie um segundo vetor e copie os valores do
primeiro
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};
    int vetor2[5];

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        vetor2[i] = vetor[i];
    }

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        printf("vetor2[%d] = %d\n", i, vetor2[i]);
    }
}