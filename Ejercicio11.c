#include <stdio.h>

int main() {
    int n;
    
    printf("Calculadora de suma de los primeros N números naturales\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    // Versión con fórmula
    int suma_formula = n * (n + 1) / 2;
    
    // Versión con bucle
    int suma_bucle = 0;
    for(int i = 1; i <= n; i++) {
        suma_bucle += i;
    }
    
    printf("Suma usando fórmula: %d\n", suma_formula);
    printf("Suma usando bucle: %d\n", suma_bucle);
    
    return 0;
}
