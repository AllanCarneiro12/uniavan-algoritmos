
/*
Nome: Allan Carneiro da Cunha Silveira
Data: 2025-03-21
Descrição: Simplifica a fração informado os dois numeros da fração em inteiros
*/

int simplificaFracao(int simplificado, int fracionador)
{
    int aux;

    aux = simplificado <= fracionador ? simplificado : fracionador; // coleta o menor numero

    for (int i = 2; i <= aux; i++)
    {
        if (simplificado % i == 0 && fracionador % i == 0)
        {
            simplificado /= i;
            fracionador /= i;
            aux /= i; // otimização
        }
    }
    return simplificado;
}
