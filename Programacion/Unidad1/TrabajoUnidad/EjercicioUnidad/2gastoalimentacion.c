#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int comidasdiarias = 0;
    float cosprom = 0.0;
    int numperson = 0;
    int diames = 0;
    char tipodieta[100];
    float factor = 0.0;
    float gastomensual = 0.0;
    int resto = 0;
    float gasto = 0.0;
    // leer
    printf("Numero de comidas diarias\n");
    scanf("%d", &comidasdiarias);
    printf("Ingrese el costo promedio:\n");
    scanf("%f", &cosprom);
    printf("Ingrese el numeros de personas:\n");
    scanf("%d", &numperson);
    printf("Ingrese los dias:\n");
    scanf("%d", &diames);
    printf("Ingrese el tipo de dieta omnivora, vegetariana, gourmet: \n");
    scanf("%s", &tipodieta);
    // proceso
    if (strcmp(tipodieta, "omnivora") == 0)
    {
        factor = 1.0;
    }
    else if (strcmp(tipodieta, "vegetariana") == 0)
    {
        factor = 0.85;
    }
    else if (strcmp(tipodieta, "gourmet") == 0)
    {
        factor = 1.8;
    }
    else
    {
        printf("Error\n");
        exit(1);
    }
    gastomensual = (comidasdiarias * cosprom * numperson * diames * factor);
    resto = comidasdiarias % numperson;
    if (gastomensual > 0.0)
    {
        printf("Su alimentacion es %s\n", tipodieta);
        printf("Gasto total en alimentacion mensual %.2f\n", gastomensual);
        printf("El resto del numero de personas para las comidas diarias es: %d\n ", resto);
    }
    else
    {
        printf("No hay gasto");
    }
}