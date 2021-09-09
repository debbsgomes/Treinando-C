#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, subtracao, subtracao2, multi, div, div2;

    printf("Calculadora 1.0\n");
    printf("Entre os 2 numeros a serem processados:\n");
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    subtracao2 = num2 - num1;
    multi = num1 * num2;
    div = num1 / num2;
    div2 = num2 / num1;

    printf("A soma e: %i\n", soma);
    printf("A subtracao e: %i\n", subtracao);
    printf("A subtracao e: %i\n", subtracao2);
    printf("A multiplicacao e: %i\n", multi);
    printf("A divisao e: %i\n", div);
    printf("A divisao e: %i\n", div2);

    return 0;
}
