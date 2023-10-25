/*
Calcule e mostre a tabuada de multiplicação de um número informado pelo usuário no
teclado.
*/

#include <stdio.h>

int main() {
    double multiplicador;


    printf("Informe um número: ");
    scanf("%lf", &multiplicador);


    printf("\nTabuada de %.lf:\n", multiplicador);
    for (double i = 0; i <= 10; i++) {
        printf("%.lf x %.lf = %.lf\n", multiplicador, i, multiplicador * i);
    }

    return 0;
}