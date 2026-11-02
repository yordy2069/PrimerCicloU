#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int masimo = 0;
    int residuo = 0;
    int minimo = 0;
    int residuo2 = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    // proes
    if (a < b)
    {
        a = b;
        b = a;
    }
    masimo = a / b;
    residuo = a % b;
    minimo = (a * b) / masimo;
    if (minimo == 0)
    {
        printf("El minimo comun es: %d", minimo);
    }
    else
    {
        masimo = b / residuo;
        residuo2 = b % residuo;
        minimo = (b * residuo) / masimo;
        if (minimo == 0)
        {
            printf("El minimo es : % d ", minimo);
        }
        else
        {
            masimo = residuo / residuo2;
            residuo = residuo % residuo2;
            minimo = (residuo * residuo2) / masimo;
            printf("El maximo divisor es:s %d", minimo);
        }
    }
}