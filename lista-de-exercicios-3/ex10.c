#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 10. Contando números maiores que 10
*/

void main()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};
    int contador = 0;

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (vetor[i] > 10)
        {
            contador++;
        }
    }
    printf("numeros maiores que 10: %d", contador);
}