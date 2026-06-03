#include <stdio.h>
#include <assert.h>
#include "function_fibonacci.c"

int main() 
{
    printf("TESTES AUTOMATIZADOS\n");

    assert(calcular_fibonacci(0) == 0);
    assert(calcular_fibonacci(1) == 1);
    assert(calcular_fibonacci(6) == 8);
    assert(calcular_fibonacci(9) == 34);

    printf("Testes concluidos\n");
    printf("Feito por: Lara Fazani");
}

    return 0;

