#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-16
Descrição: Exercicio 9

9. A imobiliária AJB vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno
*/

int main(int argc, char const *argv[])
{
    int ladoA, ladoB;

    printf("tamanho do lado A (metros):");
    scanf("%d", &ladoA);
    printf("tamanho do lado B (metros):");
    scanf("%d", &ladoB);

    printf("area total: %dm^2", ladoA * ladoB);

    return 0;
}
