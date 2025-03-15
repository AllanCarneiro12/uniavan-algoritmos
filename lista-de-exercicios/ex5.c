#include <stdio.h>
#include <stdlib.h>
 
/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-15
Descrição: Exercicio 5

5. Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
informar qual o valor em R$ a ser gasto com combustível na viagem.
*/

int main(int argc, char const *argv[])
{
    float km, kml, valor;

    printf("quantos kms serao percorridos: ");
    scanf("%f", &km);
    printf("quantos km/l seu carro faz: ");
    scanf("%f", &kml);
    printf("qual o valor do litro de combustível: ");
    scanf("%f", &valor);

    valor = (km/kml) * valor ;

    printf("estimativa de R$%.2f com gasto de combustivel");

    return 0;
}
