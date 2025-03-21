#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "somaFracao.h"
#include "subtraiFracao.h"
// #include "simplificaFracao.h"

/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-19
Descrição: Trabalho da N1

Um lojista atribui o preço de venda dos itens de sua
loja com um número racional (uma fração de inteiros).
Este comerciante precisa de uma calculadora capaz de
realizar as operações de soma, subtração,
multiplicação e divisão de frações, a qual exibe o
resultado como uma fração na forma mais simplificada
possível. Desenvolva um programa que implemente
esta calculadora.
*/

int main(int argc, char const *argv[])
{
    system("cls");

    char opcao = '1';

    while (opcao != '0')
    {
        printf("\n\nEscolha uma opcao: ");
        printf("\n1. somar\n2. subtrair\n3. multiplicar\n4. dividir fracoes\n0. sair\n");
        //printf("Pressione a tecla referente a acao que deseja fazer\n");

        opcao = getch();

        switch (opcao)
        {
        case '0':
            system("cls");
            printf("SAINDO DA CALCULADORA...");
            break;
        case '1':
            system("cls");
            printf("1. soma (selecionado)\n\n");
            somaFracao();
            break;
        case '2':
            system("cls");
            printf("2. subtracao (selecionado)\n\n");
            subtraiFracao();
            break;
        default:
            system("cls");
            printf("COMANDO INVALIDO");
            break;
        }
    }
    return 0;
}
