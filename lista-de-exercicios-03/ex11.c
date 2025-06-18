#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 11. Calculando a média dos elementos do vetor
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};
    float media;

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        media += (float)vetor[i];
    }
    media /= (float)sizeof(vetor) / (float)sizeof(int);

    printf("media: %.2f", media);
}