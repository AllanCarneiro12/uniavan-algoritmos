/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-28
Descrição: Exercício 1: Soma de números pares de um vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// #define N 1000000

// Função com Do While
void somaParesDoWhile(int vetor[], int tamanho)
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

// Função com While
void somaParesWhile(int vetor[], int tamanho)
{
    int soma = 0;
    int i = 0;

    while (i < tamanho)
    {
        if (vetor[i] % 2 == 0)
        {
            soma += vetor[i];
            printf("Numero: %d; Soma: %d\n", vetor[i], soma);
        }
        i++;
    }

    printf("Soma dos numeros pares: %d\n", soma);
}

// Função com For
void somaParesFor(int vetor[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            soma += vetor[i];
            printf("Numero: %d; Soma: %d\n", vetor[i], soma);
        }
    }

    printf("Soma dos numeros pares: %d\n", soma);
}

void main()
{
    system("cls");

    clock_t inicio, fim;
    double tempo_gasto;

    // int soma = 0;

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    inicio = clock();
    // somaParesDoWhile(vetor, 10);
    // somaParesWhile(vetor, 10);
    somaParesFor(vetor, 10);
    fim = clock();

    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo gasto: %.6f segundos\n", tempo_gasto);
}