/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-28
Descrição: Exercício 1: Soma de números pares de um vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void somaPares(int vetor[], int tamanho)
{
    int soma = 0;
    int i = 0;

    do 
    {
        if (vetor[i] % 2 == 0)
        {
            soma += vetor[i];
            printf("Numero: %d; Soma: %d\n", vetor[i], soma);
        }
        i++;
    } while (i < tamanho);
    
    printf("Soma dos numeros pares: %d\n", soma);
}

void main ()
{
    system("cls");
    
    // int soma = 0;

    int vetor[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    somaPares(vetor, 10);

    // int tamanho = strlen(vetor);

    // printf("%d", tamanho);

    // for (int i = 0; i < 10; i++)
    // {
    //     if (vetor[i] % 2 == 0)
    //     {
    //         soma += vetor[i];
    //     }
    // }

    // int i = 0;

    // do {
    //     if (vetor[i] % 2 == 0)
    //     {
    //         soma += vetor[i];
    //         printf("Soma parcial: %d\n", vetor[i]);
    //     }
    //     i++;
    // } while (i < 10);
    
    
    // printf("Soma dos numeros pares: %d\n", soma);
}