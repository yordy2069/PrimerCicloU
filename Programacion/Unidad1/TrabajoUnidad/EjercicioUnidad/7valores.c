#include <stdio.h>
#include <stdbool.h> // permite poner falso o verfadero
#include <string.h>
int main()
{
    int c = 25;       // Entero
    float z = 3.14;   // Real
    bool num1 = true; // Booleano (verdadero)
    char num2 = 'M';  // Carácter
    // Proceso
    num1 = (c > 20 && z < 4.0);
    if (num1)
    {
        num2 = 'F';
    }
    // Presentar
    printf("Valores finales :\n");
    printf("Valor de c  %d\n", c);
    printf("Valor de z  %.2f\n", z);
    printf("Valor de num1 : %s\n", num1 ? "verdadero" : "falso"); // evalua para mostrar una respuesta
    printf("Valor de num2 : %c\n", num2);
}