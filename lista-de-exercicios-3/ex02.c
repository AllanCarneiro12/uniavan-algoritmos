#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 2. Preenchendo um vetor com entrada do usuário. Peça ao usuário para preencher
um vetor de 5 posições e exiba os valores digitados
*/

void main()
{
    system("cls");
    int vetor[5];

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        printf("insira a posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}