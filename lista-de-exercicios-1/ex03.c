#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-15
Descrição: Exercicio 3

3. Faça um algoritmo que calcule a velocidade média de um trajeto com base na
distância percorrida e no tempo (em decimal) usado para isso.
*/

int main(int argc, char const *argv[])
{
    int metros, segundos;
    float metrosps;

    printf("VELOCIDADE MEDIA EM M/S \n");

    printf("Insira a distancia percorrida (metros): ");
    scanf("%d", &metros);
    printf("Insira o tempo (segundos): ");
    scanf("%d", &segundos);

    metrosps = (float)metros / segundos;

    printf("velocidade media e de %.1fm/s", metrosps);

    return 0;
}
