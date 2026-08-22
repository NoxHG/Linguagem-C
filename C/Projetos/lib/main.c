#include <stdio.h>
#include "lib.h"

int main(void)
{

    // Variaveis

    int num1, num2 = 0;
    float num3, num4 = 0;
    int soma, subtracao, multiplicacao, divisao = 0;

    soma = som(num1, num2);
    subtracao = sub(num1, num2);
    multiplicacao = mult(num3, num4);
    divisao = div(num3, num4);

    // Saida de dados

    printf("%d\n", soma);
    printf("%d\n", subtracao);
    printf("%d\n", multiplicacao);
    printf("%d\n", divisao);
}