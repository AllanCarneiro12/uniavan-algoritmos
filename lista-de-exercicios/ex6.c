#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-16
Descrição: Exercicio 6

6. Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
aumento.

*/

int main(int argc, char const *argv[])
{
    float salario, aumento, salariofinal;

    printf("Insira seu salario: ");
    scanf("%f", &salario);
    printf("Insira o aumento em \%: ");
    scanf("%f", &aumento);

    salariofinal = salario + (salario * (aumento / 100));

    printf("seu aumento foi de R$%.2f \nseu salario agora e: R$%.2f", salario * (aumento / 100), salariofinal);

        return 0;
}
