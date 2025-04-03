#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 14. Encontrar a segunda maior nota de um aluno. Dado um vetor de 10 notas, encontre a
segunda maior nota.
*/

void main()
{
    system("cls");
    float vetor[10] = {9.0, 10.0, 8.0, 6.0, 7.0, 5.0, 8.5, 9.5, 9.1, 2.0};
    float maior, segundamaior = 0;

    printf("%d", vetor[7]);

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (maior <= vetor[i])
        {
            segundamaior = maior;
            maior = vetor[i];

            // printf("%.3f %.3f\n",maior, segundamaior);
        }
    }
    printf("segunda maior nota %.1f", segundamaior);
}