#include <stdio.h>
int main()
{
    // Identificación de tipos de datos de las variables:
    int num1 = 0;    // Entero  - Guarda el número ingresado por teclado
    int residuo = 0; // Entero - Guarda el resto de la división entre num1 y 10
    // Ingresar datos
    printf("Ingrese un numero entero:\n");
    scanf("%d", &num1);
    // proceso
    residuo = num1 % 10;
    if (residuo == 0)
    {
        printf("Es multiplo\n");
    }
    else
    {
        printf("No es multiplo\n");
    }
    printf("El residuo da %d", residuo);
}