#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num;
    printf("Digite um numero para dividir por 2: ");
    scanf("%f", &num);
    num = num / 2;
    printf("resultado: %f", num);
    return 0;
}
