/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-03
Descrição: Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
*/

#include <stdio.h>

void main()
{
    system("cls");
    int n1, n2, n3, n4, soma = 0, maior;

    printf("insira 4 numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;

    soma = n1 + n2 + n3 + n4 - maior;


    //codigo que fiz da primeira vez
    // if (n1 < n2 || n1 < n3 || n1 < n4)
    // {
    //     soma = soma + n1;
    // }
    // if (n2 < n1 || n2 < n3 || n2 < n4)
    // {
    //     soma = soma + n2;
    // }
    // if (n3 < n2 || n3 < n1 || n3 < n4)
    // {
    //     soma = soma + n3;
    // }
    // if (n4 < n2 || n4 < n3 || n4 < n1)
    // {
    //     soma = soma + n4;
    // }

    printf("Soma dos tres menores: %d", soma);
}