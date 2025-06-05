#include <stdio.h>

int main() {
    int a, b;
    
    printf("Intercambiador de valores\n");
    printf("Ingrese el primer número (a): ");
    if(scanf("%d", &a) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    printf("Ingrese el segundo número (b): ");
    if(scanf("%d", &b) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    printf("Valores originales: a = %d, b = %d\n", a, b);
    
    // Intercambio usando variable temporal
    int temp = a;
    a = b;
    b = temp;
    
    printf("Valores intercambiados: a = %d, b = %d\n", a, b);
    
    return 0;
}
