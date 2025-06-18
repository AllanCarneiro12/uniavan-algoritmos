#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 7. Multiplicando elementos de um vetor por 2. Multiplique cada elemento de um
vetor por 2.
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        vetor[i] *= 2;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}