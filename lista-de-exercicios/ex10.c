#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-18
Descrição: Exercicio 10

10. A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as
quantidades de pães e de broas, e depois calcular os dados solicitados.

*/

int main(int argc, char const *argv[])
{
    int paesfranceses, broas;
    float valorvendido;

    printf("quantos paes franceses vendeu: ");
    scanf("%d", &paesfranceses);
    printf("quantas broas vendeu: ");
    scanf("%d", &broas);

    valorvendido = (float)paesfranceses*0.12 + (float)broas*1.5;

    printf("valor arrecadado: R$%.2f \nvoce ira guardar R$%.2f na poupanca", valorvendido, valorvendido*0.1);

    return 0;
}
