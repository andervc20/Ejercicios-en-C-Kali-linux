#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool esPrimo(int n) {
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;
    
    printf("Identificador de números primos\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    if(esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }
    
    return 0;
}
