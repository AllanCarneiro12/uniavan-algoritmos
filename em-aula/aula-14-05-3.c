/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-14
Descrição: alterar caracteres por outro
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    system("cls");

    char palavra[100], letra, letraNova;

    printf("informe a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    printf("qual letra alterar: ");
    scanf("%c", &letra);
    fflush(stdin);

    printf("para qual letra alterar: ");
    scanf("%c", &letraNova);

    int i = 0;

    while (palavra[i] != '\0')
    {
        if (palavra[i] == letra)
        {
            palavra[i] = letraNova;
        }
        i++;
    }
    
    printf("%s", palavra);
}