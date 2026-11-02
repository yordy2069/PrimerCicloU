#include <stdio.h>
#include <stdbool.h>
#define LIMITE 0.5
int main()
{
    // Identificación de tipos de datos de las variables (DATOS DE ENTRADA)
    char nombre[100];     // Cadena de caracteres
    int edad = 0;         // Entero
    float estatura = 0.0; // Real / Decimal
    bool resedad = false; // Lógico / Booleano
    bool restodo = false; // Lógico / Booleano
    // Ingresar datos (DATOS DE ENTRADA)
    printf("Ingrese su nombre:\n");
    scanf("%s", nombre);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);
    printf("Ingrese su estatura en metros :\n");
    scanf("%f", &estatura);
    // Proceso
    resedad = ((float)edad >= LIMITE);
    restodo = (estatura > 1.70 && (float)edad >= LIMITE);
    // Presentar (SALIDA)
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Estatura: %.2f m\n", estatura);
    printf("Resultado relacional: %s\n", resedad ? "verdadero" : "falso");
    printf("Resultado logico %s\n", restodo ? "verdadero" : "falso");
}