#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

int a, b, c;


printf ("\nInforme a primeira nota: ");
scanf ("%d", &a);
printf ("\nInforme a segunda nota: ");
scanf ("%d", &b);
printf ("\nInforme a terceira nota: ");
scanf ("%d", &c);

float x = (a+b+c)/3;

printf("\nA média aritimética das três notas apresentadas é %.2f\n", x);

return 0;

}