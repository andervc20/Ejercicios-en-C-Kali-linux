#include <stdio.h>

int main() {
    float base, altura;
    
    printf("Calculadora de área y perímetro de rectángulo\n");
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
    
    float area = base * altura;
    float perimetro = 2 * (base + altura);
    
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);
    
    return 0;
}
