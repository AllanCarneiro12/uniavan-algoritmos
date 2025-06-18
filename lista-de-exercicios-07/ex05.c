/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-07
Descrição: 5 - Converter uma string para letras maiúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    system("cls");

    char palavra[100];
    int i = 0;
    printf("digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    while (palavra[i] != '\0')
    {
        palavra[i] = toupper(palavra[i]);
        i++;
        // printf("teste");
    }
    printf("palavra: %s", palavra);

    // printf("%d", i);
    // i = 0;
    // printf("%d", i);
    // while (palavra[i] != '\0')
    // {
    //     printf("teste");
    //     printf("%c", palavra[i]);
    //     i++;
    // }

}
