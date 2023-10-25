/*
Receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit.
OBS: F = (C * 1,8) + 32.
*/

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

    double Celsius;

    printf("Informe a temperatura em Celsius, por gentileza: \n");
    scanf("%lf", &Celsius);

    double Fahrenheit = (Celsius * 1.8) + 32.0;

    printf("%.2lf° Celsius equivalem a %.2lf° Fahrenheit\n", Celsius, Fahrenheit);

    return 0;

}
