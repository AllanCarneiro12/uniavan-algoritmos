#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após
o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o
aumento e o salário final.
*/

void main()
{
    system("cls");

    float salario;

    printf("qual o salario atual? ");
    scanf("%f", &salario);

    salario = salario + salario * 0.15 - salario * 0.08;

    printf("aumento de 15 menos importo de 8 = %.2f", salario);
}