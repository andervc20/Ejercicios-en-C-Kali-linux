#include <stdio.h>

int main() {
    int numero, original, invertido = 0;
    
    printf("Inversor de números\n");
    printf("Ingrese un número entero positivo: ");
    if(scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    original = numero;
    
    while(numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    
    printf("Número original: %d\n", original);
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
