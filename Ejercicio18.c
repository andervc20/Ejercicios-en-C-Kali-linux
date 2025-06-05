#include <stdio.h>

int main() {
    int numero, original, suma = 0;
    
    printf("Sumador de dígitos\n");
    printf("Ingrese un número entero: ");
    if(scanf("%d", &numero) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    original = numero;
    
    // Manejar números negativos
    if(numero < 0) {
        numero = -numero;
    }
    
    while(numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    
    printf("La suma de los dígitos de %d es: %d\n", original, suma);
    
    return 0;
}
