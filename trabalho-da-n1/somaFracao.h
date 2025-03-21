#include <stdio.h>
#include <stdlib.h>

void somaFracao()
{
    int numerador1, denominador1, numerador2, denominador2, aux;

    printf("insira o numerador da primeira fracao: ");
    scanf("%d",&numerador1);
    printf("insira o denominador da primeira fracao: ");
    scanf("%d",&denominador1);
    printf("insira o numerador da segunda fracao: ");
    scanf("%d",&numerador2);
    printf("insira o denominador da segunda fracao: ");
    scanf("%d",&denominador2);

    numerador1 *= denominador2;
    numerador2 *= denominador1;

    numerador1 += numerador2;

    denominador1 *= denominador2;

    printf("\n%d \n%d", numerador1, denominador1); //temporario para testes

    aux = numerador1 <= denominador1 ? numerador1 : denominador1; //coleta o menor numero

    for (int i = 2; i <= aux; i++)
    {
        if (numerador1 % i == 0 && denominador1 % i == 0)
        {
            numerador1 /= i;
            denominador1 /= i;
            aux /= i; //otimização
        }
        
    }
    
    printf("\n%d \n%d", numerador1, denominador1);

}
