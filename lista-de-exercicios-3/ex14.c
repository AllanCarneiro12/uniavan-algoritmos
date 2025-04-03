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

    // printf("%.2f\n", vetor[7]);

    // if (vetor[7] > vetor[0])
    // {
    //     printf("verdadeiro");
    // }

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (vetor[i] >= maior)
        {
            // printf("vetor[%d](%.1f) >= maior(%.1f)\n",i,vetor[i], maior);
            // printf("segunda maior: %.1f\n", segundamaior);
            segundamaior = maior;
            // printf("segunda maior: %.1f\n", segundamaior);
            // printf("maior: %.1f\n", maior);
            maior = vetor[i];
            // printf("maior: %.1f\n", maior);

            // printf("%.3f %.3f\n",maior, segundamaior);
        }
        else if (vetor[i] >= segundamaior)
        {
            segundamaior = vetor[i];
        }
    }
    printf("segunda maior nota %.1f", segundamaior);
}