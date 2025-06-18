/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-03
Descrição: Desenvolver um algoritmo que leia os coeficientes (a , b e c) de uma equação do segundo grau e calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a classificação das raízes.
*/

#include <stdio.h>
#include <math.h>

void main ()
{
    system("cls");
    
    float a, b, c, delta, raiz1, raiz2;

    printf("Insira as variaveis a, b e c da equacao do segundo grau:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    raiz1 = (-b + sqrt(delta)) / (2*a);
    raiz2 = (-b - sqrt(delta)) / (2*a);

    if (delta > 0)
    {
        printf("Raizes reais e distintas:\n");
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    }
    else if (delta == 0)
    {
        printf("Raizes reais e iguais:\n");
        printf("Raiz: %.2f\n", raiz1);
    }
    else
    {
        printf("Nao existem raizes reais.\n");
    }
    
}