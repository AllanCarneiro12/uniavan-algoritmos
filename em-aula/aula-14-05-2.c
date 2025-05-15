/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-14
Descrição: buscar primeira letra
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    
    char palavra[100], letra;

    printf("informe a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    printf("qual letra procurar: ");
    letra = getch();

    int i = 0, count = 1;

    while (palavra[i] != letra)
    {
        i++;
        count++;
    }
    printf("\na letra \"%c\" aparece pela primeira vez na posicao %d", letra, count);
    
}