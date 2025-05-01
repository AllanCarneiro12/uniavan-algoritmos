/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-30
Descrição: 3 - Contar o numero de vogais numa string.
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
        if (palavra[i] == 'a' ||palavra[i] == 'e' ||palavra[i] == 'i' ||palavra[i] == 'o' ||palavra[i] == 'u' ||palavra[i] == 'A' ||palavra[i] == 'E' ||palavra[i] == 'I' ||palavra[i] == 'O' ||palavra[i] == 'U')
        {
            contador++;
        }
        i++;
    }
    printf("Quantidade de vogais: %d\n", contador);
}
