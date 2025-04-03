#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 3. Somando todos os elementos de um vetor. Calcule a soma de todos os elementos
de um vetor de 5 posições.
*/

void main()
{
    system("cls");
    int vetor[5] = {1, 3, 5, 3, 7};
    int soma;

    soma = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];
    printf("%d", soma);
}