#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Prototipos de funciones
float areaRectangulo(float base, float altura);
float areaTriangulo(float base, float altura);
float perimetroCirculo(float radio);
float celsiusAFahrenheit(float celsius);
bool esPar(int numero);
void intercambiar(int *a, int *b);
int mayorDeTres(int a, int b, int c);
void tablaMultiplicar(int numero);
unsigned long factorial(int n);
bool esPrimo(int n);
int sumaNaturales(int n);
int invertirNumero(int n);
int contarDigitos(int n);
void decimalABinario(int n);
void fibonacci(int terminos);
float calcular(float num1, float num2, char operador);
bool esPalindromo(int n);
int sumaDigitos(int n);
bool esArmstrong(int n);

int main() {
    int opcion;
    
    do {
        printf("\n=== MENÚ INTERACTIVO ===\n");
        printf("1. Área de rectángulo\n");
        printf("2. Área de triángulo\n");
        printf("3. Perímetro de círculo\n");
        printf("4. Conversión Celsius a Fahrenheit\n");
        printf("5. Verificar si número es par\n");
        printf("6. Intercambiar valores\n");
        printf("7. Mayor de tres números\n");
        printf("8. Tabla de multiplicar\n");
        printf("9. Factorial de un número\n");
        printf("10. Verificar si número es primo\n");
        printf("11. Suma de primeros N números naturales\n");
        printf("12. Invertir número\n");
        printf("13. Contar dígitos de número\n");
        printf("14. Convertir decimal a binario\n");
        printf("15. Serie Fibonacci\n");
        printf("16. Calculadora simple\n");
        printf("17. Verificar si número es palíndromo\n");
        printf("18. Sumar dígitos de número\n");
        printf("19. Mostrar números Armstrong de 3 cifras\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        
        if(scanf("%d", &opcion) != 1) {
            printf("Error: Ingrese un número válido.\n");
            while(getchar() != '\n'); // Limpiar buffer
            continue;
        }
        
        switch(opcion) {
            case 1: {
                float base, altura;
                printf("Ingrese base y altura del rectángulo: ");
                if(scanf("%f %f", &base, &altura) != 2 || base <= 0 || altura <= 0) {
                    printf("Error: Valores inválidos.\n");
                    break;
                }
                printf("Área: %.2f\n", areaRectangulo(base, altura));
                break;
            }
            // ... (implementar los demás casos de manera similar)
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
        
    } while(opcion != 0);
    
    return 0;
}

// Implementaciones de las funciones (similar a los ejercicios anteriores)
float areaRectangulo(float base, float altura) {
    return base * altura;
}

float areaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

// ... (implementar las demás funciones)
