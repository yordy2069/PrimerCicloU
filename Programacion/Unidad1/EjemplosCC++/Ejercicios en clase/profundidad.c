#include <stdio.h>
#define DENSIDADAGUA 1000.0
#define GRAVEDAD 9.81
#define PRESIONATM 101325.0
int main()
{
    float profundidad = 0.0;
    float presionhidro = 0.0;
    float presiontotal = 0.0;
    int resto = 0;
    printf("Ingrese la profundidad del agua en metros:\n");
    scanf("%f", &profundidad);
    // Proceso
    presionhidro = DENSIDADAGUA * GRAVEDAD * profundidad;
    presiontotal = presionhidro + PRESIONATM;
    if (profundidad > 0.0)
    {
        printf("Profundidad ingresada: %.2f m\n", profundidad);
        printf("Presion del agua: %.2f Pa %.2f kPa\n", presionhidro, presionhidro / 1000.0);
        printf("Presion total: %.2f Pa %.2f kPa\n", presiontotal, presiontotal / 1000.0);
    }
    else
    {
        printf("Error: La profundidad debe ser un numero positivo mayor a cero.\n");
    }
}