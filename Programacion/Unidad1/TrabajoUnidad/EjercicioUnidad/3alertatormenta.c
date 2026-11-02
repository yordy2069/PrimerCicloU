#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
    float temperatura = 0.0;
    float humedad = 0.0;
    float presion = 0.0;
    float viento = 0.0;
    float nubosidad = 0.0;
    char *nivelalerta;
    int resto = 0;
    int servicioactivo = 0;
    int personas = 0;
    float TEMPTORMENTA = 25.0;
    float HUMEDADMIN = 80.0;
    float PRESIONMIN = 1005.0;
    float VIENTOMIN = 30.0;
    float NUBOSIDAD = 45.0;
    // Informacion de entrada
    printf("Informacion de entrada\n");
    printf("Horas de servicio\n");
    scanf("%d", &servicioactivo);
    printf("Personas encargadas\n");
    scanf("%d", &personas);
    printf("Ingrese la temperatura ambiente en C°\n");
    scanf("%f", &temperatura);
    printf("Ingrese la humedad ambiente en %%\n");
    scanf("%f", &humedad);
    printf("Ingrese la presion ambiente en hPa\n");
    scanf("%f", &presion);
    printf("Ingrese el viento en km/h\n");
    scanf("%f", &viento);
    printf("Ingrese la nubosidad ambiente en %%\n");
    scanf("%f", &nubosidad);
    if (((temperatura >= TEMPTORMENTA) && (humedad >= HUMEDADMIN)) && ((presion <= PRESIONMIN) && (viento >= VIENTOMIN) && (nubosidad >= NUBOSIDAD)))
    {
        nivelalerta = "ALERTA ROJA: Tormenta Inminente";
    }
    else if ((temperatura == TEMPTORMENTA - 2) && (humedad >= HUMEDADMIN) && (presion <= PRESIONMIN))
    {
        nivelalerta = "ALERTA NARANJA: Riesgo Moderado de Tormenta";
    }
    else
    {
        nivelalerta = "ALERTA VERDE: Sin Riesgo";
    }
    resto = (servicioactivo % personas);
    // informacion de salida
    printf("Estado del tiempo registrado:\n");
    printf("La temperatura es%.2f °C\n", temperatura);
    printf("La humedad es: %.2f %%\n", humedad);
    printf("La presion es: %.2f hPa\n", presion);
    printf("El viento es: %.2f km/h \n", viento);
    printf("La nubosidad es:%.2f %%\n", nubosidad);
    printf("Nivel de alerta asignado: %s\n", nivelalerta);
    printf("Sobrante de horas del turno operativo:%d horas\n", resto);
}