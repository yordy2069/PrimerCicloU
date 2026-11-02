#include <stdio.h>
int main()
{
    // Identificación de variables y tipos de datos
    int m = 0;      // Dato de entrada: entero
    float m2 = 0.0; // Dato de entrada: real
    char z;         // Dato de entrada y salida: carácter
    // Ingresar datos (DATOS DE ENTRADA)
    printf("Ingrese un numero entero :\n");
    scanf("%d", &m);
    printf("Ingrese un numero con decimales:\n");
    scanf("%f", &m2);
    printf("Ingrese una letra :\n");
    scanf(" %c", &z);
    // proceso
    if (z >= 'a' && z <= 'z')
    {
        printf("Su caracter en una letra minuscula (%c)\n", z);
        z = z - 32; // Restar 32 convierte el código ASCII de minúscula a mayúscula
    }
    // Presentar información procesada (DATOS DE SALIDA)
    printf("Resumen de datos\n");
    printf("Valor entero ingresado: %d\n", m);
    printf("Valor real ingresado: %.2f\n", m2);
    printf("El código ASCII de '%c' es: %d\n", z, z);
    printf("Caracter procesado en mayuscula: %c\n", z);
}