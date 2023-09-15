#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

float cotacao,dolar;

printf("Informe a cotação do dolar em rais, por gentileza: \n");
scanf("%f", &cotacao);
printf("Quantos dólares você possui?\n");
scanf("%f", &dolar);

float reais = dolar * cotacao;

printf("Você possui %.2f reais\n", reais);

retun 0;

}