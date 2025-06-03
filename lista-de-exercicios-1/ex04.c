#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-15
Descrição: Exercicio 4

4. Faça um algoritmo que recebe dois valores representando as medidas da base e da
altura de um triângulo qualquer e exiba a área deste triângulo.
*/

int main(int argc, char const *argv[])
{
    float base, altura, R;

    printf("insira o tamanho da base do triangulo (metros): ");
    scanf("%f", &base);
    printf("insira o tamanho da altura do triangulo (metros): ");
    scanf("%f", &altura);

    R = (base * altura) / 2;

    // tentei utilizar "m²" no print porem o CMD não lé o caractere elevado então coloquei como "m^2"
    printf("a area do triangulo e de %.1fm^2", R);

    return 0;
}
