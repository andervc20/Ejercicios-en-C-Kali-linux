#include <stdio.h>

int main() {
    int n;
    unsigned long factorial = 1;
    
    printf("Calculadora de factorial\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    // Usamos unsigned long para permitir valores más grandes
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("El factorial de %d es: %lu\n", n, factorial);
    
    return 0;
}
