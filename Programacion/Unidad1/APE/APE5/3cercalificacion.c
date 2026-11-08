#include <stdio.h>
#define NOTAAPROBATORIA 60.0 // nota mínima final de aprobación
int main()
{
    float C1, C2, NotaLaboratorio, NotaCertamen, C3;
    // Ingresar datos
    printf("Ingrese la nota del certamen 1 (C1):\n");
    scanf("%f", &C1);
    printf("Ingrese la nota del certamen 2 (C2):\n");
    scanf("%f", &C2);
    printf("Ingrese la nota de laboratorio (NL):\n");
    scanf("%f", &NotaLaboratorio);
    // Proceso
    // Calcular nc
    NotaCertamen = (NOTAAPROBATORIA - (NotaLaboratorio * 0.3)) / 0.7;
    // encontrar c3 despejando la formula
    C3 = (3.0 * NotaCertamen) - C1 - C2;
    // Presentar
    printf("Resumen de Notas y Resultado \n");
    printf("Nota Certamen 1: %.2f\n", C1);
    printf("Nota Certamen 2: %.2f\n", C2);
    printf("Nota Laboratorio: %.2f\n", NotaLaboratorio);
    printf("Promedio de certamenes necesario (NC): %.2f\n", NotaCertamen);
    printf("Calificacion minima requerida en C3: %.2f\n", C3);
    if (C3 < 0)
    {
        printf("Cuenta con las notas suficiente para aprobar");
    }
}