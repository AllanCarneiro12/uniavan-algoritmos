/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-28
Descrição: Exercício 2: Contar vogais em uma string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    char str[100];
    int i, count = 0;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // str[strcspn(str, "\n")] = 0;


    while (str[i] != '\0')
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
        i++;
    }
    printf("A string '%s' possui %d vogais.\n", str, count);

}