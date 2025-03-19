#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-18
Descrição: Exercicio 11

11. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3)
*/

int main(int argc, char const *argv[])
{
    system("cls");
    
    float n1, n2, n3, media;
    
    printf("Insira a Nota 1 (peso 1): ");
    scanf("%f", &n1);
    printf("Insira a Nota 2 (peso 2): ");
    scanf("%f", &n2);
    printf("Insira a Nota 3 (peso 3): ");
    scanf("%f", &n3);

    media = (n1 + n2 * 2 + n3 * 3) / 6;

    printf("a nota media e de %.1f", media);

    return 0;
}
