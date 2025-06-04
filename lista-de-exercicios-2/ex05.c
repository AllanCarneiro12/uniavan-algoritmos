/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-03
Descrição: Desenvolver um algoritmo para pedir um mês e ano e exibir o número de dias do mês / ano digitados.
*/

#include <stdio.h>

void main()
{
    system("cls");
    int mes, ano, dias;

    printf("Insira o mes (1-12): ");
    scanf("%d", &mes);
    printf("Insira o ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0)
    {
        if (mes == 2)
        {
            dias = 29;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            dias = 30;
        }
        else
        {
            dias = 31;
        }
    }
    else
    {
        if (mes == 2)
        {
            dias = 28;
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            dias = 30;
        }
        else
        {
            dias = 31;
        }
    }

    printf("o mes %d do ano %d tem %d dias.\n", mes, ano, dias);
}