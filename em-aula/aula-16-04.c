#include <stdio.h>
#include <stdlib.h>


/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-04-16
Descrição: codigo da aula do dia 16/04
*/

void obter_fracoes();
void somar_fracoes(int x, int y, int u, int v);
void subtrair_fracoes(int x, int y, int u, int v);
void multiplicar_fracoes(int x, int y, int u, int v);
void dividir_fracoes(int x, int y, int u, int v);
void simplificar_fracoes(int x, int y);

int a, b, c, d;

int main()
{
    char r;

    while (1)
    {
        // system("cls"); // não funciona no linux 

        printf("1. somar\n");
        printf("2. subtrais\n");
        printf("3. multiplicar\n");
        printf("4. dividir\n");
        printf("9. sair\n");
        printf("O que deseja? ");

        r = getchar();

        if (r == '9')
            break;

        obter_fracoes();

        switch (r)
        {
            case '1': somar_fracoes(a, b, c, d); break;
            case '2': subtrair_fracoes(a, b, c, d); break;
            case '3': multiplicar_fracoes(a, b, c, d); break;
            case '4': dividir_fracoes(a, b, c, d); break;
        }
    }

    return 0;
}

void obter_fracoes()
{
    printf("\n1a fracao: ");
    scanf("%d %d", &a, &b);
    printf("\n2a fracao: ");
    scanf("%d %d", &c, &d);
}

void somar_fracoes(int x, int y, int u, int v)
{
    int n, d;
    n = x* v + u *y;
    d = y *v;
    simplificar_fracoes(n, d);
}

void subtrair_fracoes(int x, int y, int u, int v)
{
    int n, d;
    n = x* v - u *y;
    d = y *v;
    simplificar_fracoes(n, d);
}

void multiplicar_fracoes(int x, int y, int u, int v)
{
    int n, d;
    n = x * u;
    d = y * v;
    simplificar_fracoes(n, d);
}

void dividir_fracoes(int x, int y, int u, int v)
{
    int n, d;
    n = x * v;
    d = y * u;
    simplificar_fracoes(n, d);
}

int mdc(int x, int y)
{
    int r = 1;
    while (r != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void simplificar_fracoes(int x, int y)
{
    int m, n, d;
    m = mdc(x, y);
    n = x / m;
    d = y / m;
    printf("Resultado: %d / %d\n", n, d);
    // system("PAUSE"); // não funciona no linux 
}