/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-14
Descrição: Descrição do código
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarNumeros(char str[])
{
    int i = 0, count = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
        i++;
    }
    return count;
}

void main()
{
    system("cls");

    char palavra[100];

    printf("digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    int contador = contarNumeros(palavra);

    printf("quantidade de numeros: %d", contador);
}
