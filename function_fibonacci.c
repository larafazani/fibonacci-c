#include <stdio.h>

int calcular_fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int anterior = 0;
    int atual = 1;
    int proximo;

    for (int i = 2; i <= n; i++) 
    {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}
