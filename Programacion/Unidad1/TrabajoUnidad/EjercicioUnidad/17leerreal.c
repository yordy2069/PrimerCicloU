#include <stdio.h>
#define UMBRAL 3.14
int main()
{
    // Identificación de tipos de datos simples:
    float a = 0.0;         //  Real
    float b = 0.0;         //  Real
    float resultado = 0.0; //  Real
    // Ingresar datos desde el teclado
    printf("Ingrese el primer numero real \n");
    scanf("%f", &a);
    printf("Ingrese el segundo numero real:\n");
    scanf("%f", &b);
    // Proceso
    resultado = ((a + b) * UMBRAL) / 2.0;
    // Presentar
    printf("El resultado de la expresion aritmetica es: %.2f\n", resultado);
    printf("1. 'a' y 'b' (float): Se declaran como reales porque el enunciado requiere la lectura de numeros con decimales.\n");
    printf("2. 'UMBRAL' (float): Es una constante decimal con el valor 3.14.\n");
    printf("3. 'resultado' (float): Debe ser real obligatoriamente, ya que al operar con datos flotantes (a, b y UMBRAL), el resultado conserva la parte decimal.\n");
}