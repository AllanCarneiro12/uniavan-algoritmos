/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-18
Descrição: Exercício 6: Contar pares e ímpares.
*/

#include <stdio.h>
#include <string.h>

void main ()
{
    system("cls");
    int numeros[100], i, n, pares = 0, impares = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
}
