#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-03
Descrição: 16. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit
(pesquise como fazer este tipo de conversão).
*/

void main()
{
    system("cls");
    float temperatura;
    printf("insira a temperatura em celcius: ");
    scanf("%f", &temperatura);

    temperatura = 1.8 * temperatura + 32;

    printf("temperatura em fahrenheit: %.2f", temperatura);
}