#include <stdio.h>
#include <string.h>
int main()
{
    int x, num2, c;
    float promedio = 0.0;
    // Ingresar datos
    printf("Ingrese el valor de x:\n");
    scanf("%d", &x);
    printf("Ingrese el valor de num2:\n");
    scanf("%d", &num2);
    printf("Ingrese el valor de c:\n");
    scanf("%d", &c);
    // PROCESO
    promedio = (x + num2 + c) / 3.0;
    if (x > promedio)
    {
        printf("El valor %d esta por encima del promedio\n", x);
    }
    if (num2 > promedio)
    {
        printf("El valor %d esta por encima del promedio\n", num2);
    }
    if (c > promedio)
    {
        printf("El valor %d esta por encima del promedio\n", c);
    }
    printf("El promedio es: %.2f\n", promedio);
}