#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 18. A granja galinha feliz possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé
esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
para calcular o gasto total da granja para marcar todos os seus frangos.
*/

void main ()
{
    system("cls");
    int galinhas;
    float aneis;

    printf("insira a quantidade de galinhas: ");
    scanf("%d", &galinhas);

    aneis = (float)galinhas*4 + (float)galinhas*3.5*2;

    printf("gasto com aneis das galinhas: %.2f", aneis);
}