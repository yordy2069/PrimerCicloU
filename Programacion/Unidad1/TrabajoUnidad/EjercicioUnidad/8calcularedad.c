#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[100];
    int anonacimiento = 0;
    int anoactual = 0;
    int edad = 0;
    float MAXIMO = 3.6;
    // Ingresar datos
    printf("Ingrese su nombre:\n");
    scanf("%s", nombre);
    printf("Ingrese su ano de nacimiento:\n");
    scanf("%d", &anonacimiento);
    printf("Ingrese el ano actual:\n");
    scanf("%d", &anoactual);
    // Proceso
    edad = (anoactual - anonacimiento);
    if (edad >= MAXIMO)
    {
        printf("%s, tienes %d anos y eres mayor de edad\n", nombre, edad);
    }
    else
    {
        printf("%s, tienes %d anos y eres menor de edad\n", nombre, edad);
    }
}