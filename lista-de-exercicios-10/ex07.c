/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-18
Descrição: Exercício 7: Apresentar maior e menor número em vetor
*/

#include <stdio.h>

void main ()
{
    system("cls");
    int numeros[100], i, n, maior, menor;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (i = 1; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}
