#include <stdio.h>
#include <string.h>
void main()
{
    int longitudtotal = 10;
    int posicioninicial = 4;
    int longitudobjetivo = 0;
    int estremomovible = 0;
    int canpoleas = 0;
    int y = 0;
    printf("Ingrese la longitud inicial\n");
    scanf("%d", &y);
    printf("Ingrese la longitud que se encuentra\n");
    scanf("%d", &longitudobjetivo);
    printf("Ingreese la canatidad de poleas\n");
    scanf("%d", &canpoleas);
    // proceso
    canpoleas = canpoleas * 2;
    estremomovible = longitudobjetivo * 0.5;
    y = 2 * estremomovible;
    printf(" la cuerdo de el e>tremo y es: %d\n", estremomovible);
    printf("el estremo movivle de la pocicion z es :%d\n");
}