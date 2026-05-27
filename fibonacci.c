#include <stdio.h>
#include "function_fibonacci.c"

int main() {
    int posicao, resultado;

    printf("FIBONACCI\n");
    
    printf("Digite a posição desejada na sequência (maior ou igual a 0): ");
    scanf("%d", &posicao);

    if (posicao < 0) {
        printf("Por favor, insira um número inteiro maior ou igual a zero.\n");
        return 1;
    }

    resultado = calcular_fibonacci(posicao);

    printf("\nO número de Fibonacci na posição %d é: %d\n", posicao, resultado);
    printf("Feito por : Lara Fazani");

    return 0;
}
