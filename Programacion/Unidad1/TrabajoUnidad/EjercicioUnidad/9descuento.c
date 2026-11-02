#include <stdio.h>
#include <string.h>
#include <math.h>
#define DESCUENTO 1.5 // preprocesa la constante y lo guarda en la memoria
int main()
{
    int c = 0;           // Dato de entrada
    float residuo = 0.0; // Información procesada
    // Ingresar datos (Dato de entrada)
    printf("Ingrese el valor entero de c:\n");
    scanf("%d", &c);
    // Proceso (Informacion procesada)
    residuo = fmod((double)c, DESCUENTO);
    if (residuo == 0 && c > 0)
    {
        printf("El residuo es cero y el numero c es positivo\n");
    }
    else
    {
        printf("No se cumple la condicion logica\n");
    }
    // Presentacion de informacion Procesada
    printf("Resumen de datos\n");
    printf("Dato de entrada c: %d\n", c);
    printf("Informacion procesada: %.2f\n", residuo);
}