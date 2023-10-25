/*
Receba o valor do salário mínimo e o valor do salário de um funcionário. O algoritmo
deve calcular e apresentar a quantidade de salários mínimos que esse funcionário
recebe.
*/

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

    double Salario;
    double SalarioMinimo;
    double Quantidade;
    
    printf("Informe o valor do salário mínimo: \n");
    scanf("%lf", &SalarioMinimo);

    printf("Informe quanto você recebe: \n");
    scanf("%lf", &Salario);
    
   Quantidade = Salario / SalarioMinimo;

    printf("Você recebe %.2lf salário/s mínimo/s. \n", Quantidade);

    return 0;

}
