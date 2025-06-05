#include <stdio.h>

void decimalABinario(int n) {
    if(n > 1) {
        decimalABinario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int numero;
    
    printf("Conversor de decimal a binario\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    printf("El número %d en binario es: ", numero);
    decimalABinario(numero);
    printf("\n");
    
    return 0;
}
