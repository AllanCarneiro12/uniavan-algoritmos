/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-30
Descrição: 2 - Contar o número de palavras em uma string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main ()
{
    system("cls");
    char texto[200];
    int i = 0, palavras = 0, em_palavra = 0;
    
    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    while (texto[i] != '\0')
    {
        // printf("\nCatactere atual: %c %d %d", texto[i], palavras, em_palavra);
        if((texto[i] != ' ') && (texto[i] != '\n') && (em_palavra == 0))
        {
            em_palavra = 1;
            palavras++;
        }else if (texto[i] == ' ' || texto[i] == '\n') {
            em_palavra = 0;
        }
        i++;
        // printf("\n%d %d", palavras, em_palavra);
    }
    printf("\nquantidade de palavras: %d\n", palavras);
    
}
