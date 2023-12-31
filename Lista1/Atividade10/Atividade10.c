/*
Receba o raio, calcule e apresente:

a. O comprimento de uma esfera: C = 2 * π * R.
b. A área de uma esfera: A = π * R2
c. O volume de uma esfera: V = 3⁄4 * π * R3
*/

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {
    
    float comprimento, area, volume, raio;
    float pi = 3.141;
    
    printf("Informe o raio: \n");
    scanf("%f", &raio);
    
    comprimento = 2 * pi * raio;
    area = pi * (pow(raio,2));
    volume = (3.0 / 4.0) * pi * pow(raio,3);
    
    printf("\nO raio da esfera é: \n%.2f  \n", comprimento);
    printf("A area da esfera é: \n%.2f \n", area);
    printf("O volume da esfera é: \n%.2f \n\n", volume);
    
    return 0;
    
}
