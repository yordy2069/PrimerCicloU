#include <stdio.h>
#include <string.h>
int main()
{
    int x = 7;
    float p = 0.92;
    int num1 = 0;
    int sumaenteros = 0;
    // Conversión explícita
    num1 = (int)p;
    sumaenteros = (x + num1);
    // Evaluación de la expresión relacional
    if (sumaenteros != x)
    {
        printf("Evaluacion %d es diferente de %d\n", sumaenteros, x);
    }
    else
    {
        printf("Evaluacion %d es igual a %d \n", sumaenteros, x);
    }
    // Presentar
    printf("--- Valores de las variables ---\n");
    printf("Valor de x (entero): %d\n", x);
    printf("Valor de p (real): %.2f\n", p);
    printf("Valor de num1 (conversion explicita de p): %d\n", num1);
    printf("Suma de enteros (x + num1): %d\n", sumaenteros);
}