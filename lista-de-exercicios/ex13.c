#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-19
Descrição: Exercicio 13

13. Construa um algoritmo para calcular a distância entre dois pontos do plano
cartesiano. Cada ponto é um par ordenado (x,y).
*/

int main(int argc, char const *argv[])
{
    system("cls");
    float x1, x2, y1, y2, distanciaX, distanciaY, distancia;

    printf("insira o valor da primeira posicao\n");
    printf("X: ");
    scanf("%f", &x1);
    printf("Y: ");
    scanf("%f", &y1);
    printf("insira o valor da segunda posicao\n");
    printf("X: ");
    scanf("%f", &x2);
    printf("Y: ");
    scanf("%f", &y2);

    distanciaX = x1 - x2;
    distanciaY = y1 - y2;

    printf("%.0f",distanciaX);
    printf("%.0f",distanciaY);

    distancia = distanciaX * distanciaX + distanciaY* distanciaY;
    distancia = sqrt(distancia);

    printf("\n%f", distancia);

    return 0;
}
