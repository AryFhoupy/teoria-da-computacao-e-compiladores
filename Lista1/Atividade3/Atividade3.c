/*
Receba a cotação do dólar em reais e um valor que o usuário possui em dólares.
Imprima este valor em reais.
*/

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

  double cotacao,dolar;
  
  printf("Informe a cotação do dolar em rais, por gentileza: \n");
  scanf("%lf", &cotacao);
  printf("Quantos dólares você possui?\n");
  scanf("%lf", &dolar);
  
  double reais = dolar * cotacao;
  
  printf("Você possui %.2lf reais\n", reais);
  
  return 0;

}
