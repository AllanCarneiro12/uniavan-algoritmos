/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-05-28
Descrição: Exercício 3: Inverter um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main ()
{
    system("cls");
    int vetor[5] = {1,2,3,4,5};
    int vetor2[5];
    // int temp;
    int a = 0;

    for (int i = 4; i >= 0; i--) {
        vetor2[a] = vetor[i];
        // printf("vetor1[%d] = %d\n",i, vetor[i]);
        printf("%d\n", vetor2[a]);
        a++;
    }

    // a = 0;
    // while (a < 5)
    // {
    //     printf("%d\n",vetor2[a]);
    //     a++;
    // }
    
}