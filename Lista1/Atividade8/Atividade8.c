#include <stdio.h>//printf (), scanf().
#include <math.h>//pow().

int main() {

    float Peso, Engorda, Emagrece, Aumento, Reducao;

    printf("Informe qual o seu peso: \n");
    scanf("%f", &Peso);
    
    Aumento  = Peso * 0.15;
    Engorda  = Peso + Aumento;
    
    Reducao  = Peso * 0.20;
    Emagrece = Peso - Reducao;
    
    printf("Se você engordar terá %.2f kilos.\nSe você emagrecer terá %.2f kilos.", Engorda, Emagrece);

    return 0;

}