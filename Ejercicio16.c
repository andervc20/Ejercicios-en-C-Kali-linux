#include <stdio.h>

int main() {
    float num1, num2;
    char operador;
    
    printf("Calculadora simple\n");
    printf("Ingrese el primer número: ");
    if(scanf("%f", &num1) != 1) {
        printf("Error: Ingrese un número válido.\n");
        return 1;
    }
    
    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    printf("Ingrese el segundo número: ");
    if(scanf("%f", &num2) != 1) {
        printf("Error: Ingrese un número válido.\n");
        return 1;
    }
    
    float resultado;
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: División por cero no permitida.\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Error: Operador no válido.\n");
            return 1;
    }
    
    printf("Resultado: %.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);
    
    return 0;
}
