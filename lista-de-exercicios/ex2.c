#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float num;
    printf("insira um numero para dobrar o valor: ");
    scanf("%f", &num);
    num = num * 2;
    printf("resultado: %f", num);
    return 0;
}
