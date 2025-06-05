#include <stdio.h>

int esPalindromo(int n) {
    int original = n, invertido = 0;
    
    while(n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    
    return original == invertido;
}

int main() {
    int numero;
    
    printf("Identificador de números palíndromos\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    if(esPalindromo(numero)) {
        printf("%d es un número palíndromo.\n", numero);
    } else {
        printf("%d no es un número palíndromo.\n", numero);
    }
    
    return 0;
}
