#include <stdio.h>
#include <string.h>
int main()
{
    int dato2 = 0; //  Entero (int)
    float b = 0.0; //  Real  (float)
    char dato1;    //  Caracter (char)
    printf("Ingrese un numero entero (dato2):\n");
    scanf("%d", &dato2);
    printf("Ingrese un numero real (b):\n");
    scanf("%f", &b);
    printf("Ingrese un caracter (dato1):\n");
    scanf(" %c", &dato1);
    // Proceso
    if (dato2 > 0 && b > 0.0 && dato1 != ' ')
    {
        printf("Todos los valores son validos (positivos y no vacios)\n");
    }
    else
    {
        printf("Uno o mas valores NO son validos\n");
    }
}