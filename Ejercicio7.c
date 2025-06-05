#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Identificador del mayor de tres números\n");
    printf("Ingrese el primer número: ");
    if(scanf("%d", &num1) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    printf("Ingrese el segundo número: ");
    if(scanf("%d", &num2) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    printf("Ingrese el tercer número: ");
    if(scanf("%d", &num3) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    int mayor = num1;
    if(num2 > mayor) mayor = num2;
    if(num3 > mayor) mayor = num3;
    
    printf("El mayor número es: %d\n", mayor);
    
    return 0;
}
