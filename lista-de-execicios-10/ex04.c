/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-06-04
Descrição: Média dos valores positivos em um vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main ()
{
    system("cls");

    float vetor[5] = {1,-2,3,-4,5};
    float media = 0;
    int i = 0, qntpositivos = 0;

    while(i < 5) {
        if (vetor[i] > 0){
            media = media + vetor[i];
            qntpositivos++;
        }
        i++;
    }
    media = media / (float) qntpositivos;

    printf("Media dos numeros positivos: %.2f", media);

}