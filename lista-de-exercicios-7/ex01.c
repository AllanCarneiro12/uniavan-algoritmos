/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-30
Descrição: 1 - Contar o número de caracteres de uma string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    char palavra[100];
    int i = 0, contador = 0;

    printf("Digite uma palavra:");
    fgets(palavra, sizeof(palavra), stdin);

    while (palavra[i] != '\0')
    {
        contador++;
        i++;
    }
    printf("Quantidade de caracteres: %d\n", contador-1);

    
}