/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-30
Descrição: 4 - Contar quantas vezes uma letra aparece na string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    char palavra[100], letra;
    int i = 0, contador = 0;

    printf("Digite uma palavra:");
    fgets(palavra, sizeof(palavra), stdin);
    printf("Digite uma letra:");
    scanf("%c", &letra);


    while (palavra[i] != '\0')
    {
        if (palavra[i] == letra) //TODO: testar letra maiscula e minuscula
        {
            contador++;
        }
        i++;
    }
    printf("Quantidade de letras \"%c\": %d\n", letra, contador);
}