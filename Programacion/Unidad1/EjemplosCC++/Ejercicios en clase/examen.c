#include <stdio.h>
int main()
{
    float multa, distancia, tiempo, velocidad, salario;
    printf("Ingrese la distancia recorrida en kilometros: \n");
    scanf("%f", &distancia);
    printf("Ingrese el tiempo en horas: \n");
    scanf("%f", &tiempo);
    printf("Ingrese el salario unificado: \n");
    scanf("%f", &salario);
    velocidad = distancia / tiempo;
    if (velocidad <= 50)
    {
        printf("Circulacion Permitida\n");
    }
    else if (velocidad > 50 && velocidad <= 70)
    {
        printf("Advertencia\n");
    }
    else if (velocidad > 70 && velocidad <= 90)
    {
        printf("Infracion moderada\n");
    }
    else if (velocidad > 90)
    {
        printf("Infracion grave\n");
    }
    if (velocidad > 90)
    {
        multa = (float)salario * 0.25;
        printf("Su multa es: %.2f\n", multa);
    }
    else if (velocidad >= 71 && velocidad <= 90)
    {
        multa = (float)salario * 0.15;
        printf("Su multa es: %.2f\n", multa);
    }
    else if (velocidad <= 70)
    {
        printf("No hay multa\n");
    }
    printf("Su velocidad es: %.2f km/h\n", velocidad);
}