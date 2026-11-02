#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
    float calorias, proteinas, carbohidratos, grasas;
    int dietabalaceada = 0; // 1 cumple, 0 no cumple
    int resto;
    char tipodieta[100];
    float caloriasmin = 1500.0, caloriasmas = 2500.0, protmin = 15.0, carmin = 45.0, grasmas = 30.0;
    printf("Ingrese las calorias\n");
    scanf("%f", &calorias);
    printf("Ingrese las proteinas\n");
    scanf("%f", &proteinas);
    printf("Ingrese los carbohidratos\n");
    scanf("%f", &carbohidratos);
    printf("Ingrese la cantidad de grasa\n");
    scanf("%f", &grasas);
    printf("Ingre el tipo de dieta: omnivora, vegetariana, keto\n");
    scanf("%s", tipodieta);
    if (strcmp(tipodieta, "omnivora") == 0)
    {
        printf("Su tipo de dieta seleccionada es: %s \n", tipodieta);
        if ((calorias >= caloriasmin && calorias <= caloriasmas) && (proteinas > protmin) && (carbohidratos > carmin) && (grasas > grasmas))
        {
            dietabalaceada = 1;
        }
        else
        {
            dietabalaceada = 0;
        }
    }
    else if (strcmp(tipodieta, "vegetariana") == 0)
    {
        printf("Su tipo de dieta seleccionada es:  %s \n", tipodieta);
        if ((calorias <= caloriasmin) && (proteinas >= protmin) && (carbohidratos <= carmin) && (grasas < grasmas))
        {
            dietabalaceada = 1;
        }
        else
        {
            dietabalaceada = 0;
        }
    }
    else if (strcmp(tipodieta, "keto") == 0)
    {
        printf("Su tipo de dieta seleccionada es:  %s \n", tipodieta);
        if ((calorias >= caloriasmin) && (proteinas > protmin) && (carbohidratos < carmin) && (grasas > grasmas))
        {
            dietabalaceada = 1;
        }
        else
        {
            dietabalaceada = 0;
        }
    }
    if (dietabalaceada == 1)
    {
        printf("Resultado: Cumple con la dieta %s\n", tipodieta);
    }
    else
    {
        printf("Resultado: NO cumple con la dieta %s\n", tipodieta);
    }
    resto = ((int)calorias % 500);
    printf("El resto de la division de calorias es: %d \n", resto);
}