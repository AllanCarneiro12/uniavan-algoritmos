#include <stdio.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-23
Descrição: Funções de calculo da calculadora

tentei fazer um arquivo header para cada função por conveniencia porem ocorream varios erros de conflito de declaração de include e funções
*/

int simplificaFracao(int simplificado, int fracionador)
{
    int aux;

    aux = simplificado <= fracionador ? simplificado : fracionador; // coleta o menor numero

    for (int i = 2; i <= aux; i++)
    {
        if (simplificado % i == 0 && fracionador % i == 0)
        {
            simplificado /= i;
            fracionador /= i;
            aux /= i; // otimização
            i = 1;    // no fim do loop do for é sempre adicionado +1
        }
    }
    return simplificado;
}

void somaFracao()
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

    numerador1 += numerador2;

    denominador1 *= denominador2;

    // printf("\n%d \n%d", numerador1, denominador1); // temporario para testes

    numerador2 = simplificaFracao(numerador1, denominador1);
    denominador2 = simplificaFracao(denominador1, numerador1);

    // codigo transformado na função simplificaFracao

    // aux = numerador1 <= denominador1 ? numerador1 : denominador1; //coleta o menor numero

    // for (int i = 2; i <= aux; i++)
    // {
    //     if (numerador1 % i == 0 && denominador1 % i == 0)
    //     {
    //         numerador1 /= i;
    //         denominador1 /= i;
    //         aux /= i; //otimização
    //     }

    // }

    printf("\nRESULTADO:\n%d\n--\n%d", numerador2, denominador2);
}

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

    // printf("\n%d \n%d", numerador1, denominador1); // temporario para testes

    numerador2 = simplificaFracao(numerador1, denominador1);
    denominador2 = simplificaFracao(denominador1, numerador1);

    printf("\nRESULTADO:\n%d\n--\n%d", numerador2, denominador2);
}

void multiplicaFracao()
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

    numerador1 *= numerador2;
    denominador1 *= denominador2;

    // printf("\n%d \n%d", numerador1, denominador1); // temporario para testes

    numerador2 = simplificaFracao(numerador1, denominador1);
    denominador2 = simplificaFracao(denominador1, numerador1);

    printf("\nRESULTADO:\n%d\n--\n%d", numerador2, denominador2);
}

void divideFracao()
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
    denominador1 *= numerador2;

    // printf("\n%d \n%d", numerador1, denominador1); // temporario para testes

    numerador2 = simplificaFracao(numerador1, denominador1);
    denominador2 = simplificaFracao(denominador1, numerador1);

    printf("\nRESULTADO:\n%d\n--\n%d", numerador2, denominador2);
}
