#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 4. Encontrando o maior elemento de um vetor. Identifique e exiba o maior número
dentro de um vetor de 5 posições
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 53, 65, 34, 8};
    int maior = 0;

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (maior <= vetor[i])
        {
            maior = vetor[i];
        }
    }
    printf("%d", maior);
}