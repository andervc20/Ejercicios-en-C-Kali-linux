#include <stdio.h>

int main() {
    float base, altura;
    
    printf("Calculadora de área de triángulo\n");
    printf("Ingrese la base: ");
    if(scanf("%f", &base) != 1 || base <= 0) {
        printf("Error: Ingrese un número positivo válido.\n");
        return 1;
    }
    
    printf("Ingrese la altura: ");
    if(scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Error: Ingrese un número positivo válido.\n");
        return 1;
    }
    
    float area = (base * altura) / 2;
    printf("Área: %.2f\n", area);
    
    return 0;
}
