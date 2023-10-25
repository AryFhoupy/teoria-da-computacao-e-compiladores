//Receba três notas, calcule e apresente a média aritmética delas.

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

  int a, b, c;
  
  
  printf ("\nInforme a primeira nota: \n");
  scanf ("%d", &a);
  printf ("\nInforme a segunda nota: \n");
  scanf ("%d", &b);
  printf ("\nInforme a terceira nota: \n");
  scanf ("%d", &c);
  
  float x = (a+b+c)/3;
  
  printf("\nA média aritimética das três notas apresentadas é: \n%.2f\n", x);
  
  return 0;

}
