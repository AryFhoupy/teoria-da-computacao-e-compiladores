#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

float Salario;

printf("Infome qual o seu salário atual, por gentileza: ");
scanf("%f/n", &Salario);

float Aumento = Salario * 0.25;
float NovoSalario = Salario + Aumento;

printf("Seu novo salário é: %.2f\n", NovoSalario);

return 0;

}