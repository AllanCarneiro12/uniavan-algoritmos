#include <stdio.h>

#include "simplificaFracao.h"

void subtraiFracao()
{
    int numerador1, denominador1, numerador2, denominador2;

    printf("insira o numerador da primeira fracao: ");
    scanf("%d", &numerador1);
    printf("insira o denominador da primeira fracao: ");
    scanf("%d", &denominador1);
    printf("insira o numerador da segunda fracao: ");
    scanf("%d", &numerador2);
    printf("insira o denominador da segunda fracao: ");
    scanf("%d", &denominador2);

    numerador1 *= denominador2;
    numerador2 *= denominador1;

    numerador1 -= numerador2;

    denominador1 *= denominador2;

    printf("\n%d \n%d", numerador1, denominador1); // temporario para testes

    numerador2 = simplificaFracao(numerador1, denominador1);
    denominador2 = simplificaFracao(denominador1, numerador1);

    printf("\n%d \n%d", numerador2, denominador2);
}
