/*
Calcule e apresente a área de um losango. As diagonais maior e menor do losango
devem ser informadas pelo usuário. OBS: AREA = (DIAGONAL MAIOR * DIAGONAL
MENOR) / 2.
*/

#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

  float DiagonalMenor, DiagonalMaior;
  
  printf("Informe qual o valor da diagonal maior do losango: \n");
  scanf("%f", &DiagonalMaior);
  
  printf("Informe qual o valor da diagonal menor do losango: \n");
  scanf("%f", &DiagonalMenor);
  
  float Area = (DiagonalMaior * DiagonalMenor)/2;
  
  printf("A área do losango é %.2f\n", Area);
  
  return 0;

}
