#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 1. Criando e exibindo um vetor. Crie um vetor de 5 posições e exiba seus valores.
*/

int main(int argc, char const *argv[])
{
    system("cls");
    int vetor[5] = {1, 2, 3, 4, 5};

    // printf("%d", sizeof(vetor)/ sizeof(int));

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
