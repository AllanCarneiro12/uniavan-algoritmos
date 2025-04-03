#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-02
Descrição: 12. Encontrar a posição de um elemento no vetor. Solicite ao usuário um número e exiba
sua posição dentro do vetor
*/

void main ()
{
    system("cls");
    int vetor[5] = {12, 45, 70, 31, 2};
    int numero;

    printf("insira um numero do vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < sizeof(vetor) / sizeof(int); i++)
    {
        if (numero == vetor[i])
        {
            printf("numero na posicao %d", i);
            exit(0);
        }
    }
    printf("numero nao existe no vetor");
}