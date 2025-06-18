#include <stdio.h>
#include <stdlib.h>

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-16
Descrição: Exercicio 7

7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
B
*/

int main(int argc, char const *argv[])
{
    int A, B , C;

    printf("insira o valor de A: ");
    scanf("%d", &A);
    printf("insira o valor de B: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("A: %d \nB: %d", A, B);

    return 0;
}
