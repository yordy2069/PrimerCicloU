#include <stdio.h>
#include <string.h>
#define APROBADO 7.0 // Constante simbólica para la nota mínima de aprobación
int main()
{
    char estudiante[100];
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float promedio = 0.0;
    // Ingresar datos
    printf("Ingrese el nombre del estudiante:\n");
    scanf("%s", estudiante);
    printf("Ingrese la primera nota:\n");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota:\n");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota:\n");
    scanf("%f", &nota3);
    // Proceso
    promedio = ((nota1 + nota2 + nota3) / 3.0);
    // Presentar
    if (promedio >= APROBADO)
    {
        printf("El estudiante %s con promedio de %.2f ha APROBADO\n", estudiante, promedio);
    }
    else
    {
        printf("El estudiante %s con promedio de %.2f ha REPROBADO\n", estudiante, promedio);
    }
    return (0);
}