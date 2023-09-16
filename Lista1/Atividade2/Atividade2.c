#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {
  
  int AnoNascimento, AnoAtual;
  
  
  printf ("Em que ano você nasceu? \n");
  scanf ("%d", &AnoNascimento);
  printf ("\nEm que ano você está? \n");
  scanf ("%d", &AnoAtual);
  
  int IdadeAtual = AnoAtual - AnoNascimento;
  int Idade2050 = 2050 - AnoNascimento;
  
  
  printf("\nVocê tem %d anos\n", IdadeAtual);
  printf("\nEm 2050 você terá %d anos de idade\n", Idade2050);
  
  return 0;

}
