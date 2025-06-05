#include <stdio.h>
#include <math.h>

#define PI M_PI

int main() {
    float radio;
    
    printf("Calculadora de perímetro de círculo\n");
    printf("Ingrese el radio: ");
    if(scanf("%f", &radio) != 1 || radio <= 0) {
        printf("Error: Ingrese un número positivo válido.\n");
        return 1;
    }
    
    float perimetro = 2 * PI * radio;
    printf("Perímetro: %.2f\n", perimetro);
    
    return 0;
}
