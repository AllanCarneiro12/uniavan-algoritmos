#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-19
Descrição: Exercicio 12

12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma
sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a
uma venda, e a máquina informe quanto será o valor arrecadado.

*/

int main(int argc, char const *argv[])
{
    int tamanhoP, tamanhoM, tamanhoG;
    float valor;

    system("cls");

    printf("Quantidade de tamanho P vendidas: ");
    scanf("%d", &tamanhoP);
    printf("Quantidade de tamanho M vendidas: ");
    scanf("%d", &tamanhoM);
    printf("Quantidade de tamanho G vendidas: ");
    scanf("%d", &tamanhoG);

    valor = (float)tamanhoP * 10 + (float)tamanhoM * 12 + (float)tamanhoG * 15;

    printf("valor arrecadado: R$%.2f", valor);

    return 0;
}
