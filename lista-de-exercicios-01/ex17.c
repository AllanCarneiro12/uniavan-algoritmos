#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 17. A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
determinado funcionário. Considere que o salário líquido é igual ao salário bruto
descontando-se 10% de impostos.

*/

void main()
{
    system("cls");
    float salario, horas, horasExtras;

    printf("insira a quantidade de horas trabalhado: ");
    scanf("%f", &horas);
    printf("insira a quantidade de horas extras trabalhado: ");
    scanf("%f", &horasExtras);

    salario = (horas * 10 + horasExtras * 15);
    salario -= salario * 0.1;

    printf("salario: %.2f", salario);
}