#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int cociente = 0;
    int residuo = 0;
    int residuo2 = 0;
    int residuo3 = 0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    // proes
    cociente = a / b;
    residuo = a % b;
    if (residuo == 0)
    {
        printf("El ma>imo divisor es: %d", cociente);
    }
    else
    {
        cociente = b / residuo;
        residuo2 = b % residuo;
        if (residuo2 == 0)
        {
            printf("El ma>imo divisor es : % d ", cociente);
        }
        else
            ;
        cociente = residuo / cociente;
        residuo3 = residuo % cociente;
    }

    // presentar
    printf("El maximo divisor es: %d", cociente);
}