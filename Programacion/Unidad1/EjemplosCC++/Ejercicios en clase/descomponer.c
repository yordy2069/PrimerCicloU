#include <stdio.h>

int main()
{
    int a = 0;
    int centena = 0;
    int decena = 0;
    int unidad = 0;
    int suma = 0;
    printf("Ingre un numero de # dijitos\n");
    scanf("%d", &a);
    centena = a / 100;

    decena = a / 10;

    unidad = a % 10;
    suma = centena + decena + unidad;
    printf("la centenas son %d00 \n ", centena);
    printf("la decenas son %d \n ", decena);
    printf("la unidades son %d \n ", unidad);
    printf("La suma es%d \n", suma);
}