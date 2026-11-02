#include <stdio.h>
#include <string.h>
int main()
{
    int totalsegundos = 0;
    int H, M, S, restosegundos;
    // Ingresar datos
    printf("Ingrese la cantidad de segundos:\n");
    scanf("%d", &totalsegundos);
    // Proceso
    H = totalsegundos / 3600;
    restosegundos = totalsegundos % 3600;
    M = restosegundos / 60;
    S = restosegundos % 60;
    // Presentar resultado
    printf("%d segundos equivalen a %d horas, %d minutos y %d segundos\n", totalsegundos, H, M, S);
}