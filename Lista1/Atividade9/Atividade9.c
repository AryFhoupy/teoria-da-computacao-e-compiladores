#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {
    
    float cateto1, cateto2, hipotenusa;
    
    printf("Informe o valor do primiro cateto: \n");
    scanf("%f", &cateto1);
    
    printf("Informe o valor do segundo cateto: \n");
    scanf("%f", &cateto2);

    hipotenusa  = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    
    printf("O valor da hipotenusa do triângulo é %.2f \n", hipotenusa);
    
    return 0;
    
}