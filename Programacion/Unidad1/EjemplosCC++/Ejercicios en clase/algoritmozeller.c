#include <stdio.h>
int main()
{
    int anio, mes, dia, k, j = 0;
    int divisor = 7;
    int diasemana = -1;
    int ajustemes = 12;
    printf("Ingrese el anio: \n");
    scanf("%d", &anio);
    printf("Ingrese el mes en numero enero 1, febrero 2, etc.:\n ");
    scanf("%d", &mes);
    printf("Ingrese el dia en valor numerico:\n ");
    scanf("%d", &dia);
    // proceso
    if (mes > 0 && mes <= 2)
    {
        mes = mes + ajustemes;
        anio = anio - 1;
    }
    k = anio % 100;
    j = anio / 100;
    diasemana = (dia + (13 * (mes + 1) / 5) + k + (k / 4) + (j / 4) + (5 * j)) % divisor;
    printf("El dia de la semana es: %d\n", diasemana);
}