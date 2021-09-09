#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    num1=15;
    num2=20;

    int soma = num1+num2;
    printf("O resultado da soma é: %i\n", soma);

    int subtracao = num2-num1;
    printf("O resultado da subtração é: %i\n", subtracao);

    int multi = num1 * num2;
    printf("O resultado da multiplição é: %i\n", multi);

    int div = num2 / 3;
    printf("O resultado da divisão é: %i\n", div);

    return 0;
}
