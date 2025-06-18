/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-18
Descrição: Exercício 5: Verificar se uma palavra é palíndromo.
*/

#include <stdio.h>
#include <string.h>

void main ()
{
    system("cls");
    char palavra[100];
    int i, j, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    tamanho = strlen(palavra);

    j = tamanho - 1;
    for (i = 0; i < tamanho / 2; i++)
    {
        if (palavra[i] != palavra[j])
        {
            printf("A palavra '%s' nao eh um palindromo.\n", palavra);
            return;
        }
        j--;
    }
    printf("A palavra '%s' eh um palindromo.\n", palavra);
}