#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int stockactual = 0;
    int stockseguridad = 0;
    int tiemporeposicion = 0;
    int resto = 0;
    float ventasdiarias = 0.0;
    float puntoreorden = 0.0;
    float diasrestantes = 0.0;
    char provedor[100]; // cuantos carcteres puede tener el nombre del provedor
    int diasreposicionlocal = 3;
    int diasreposicionimportado = 15;
    float factor = 0.0;
    int diasreales = 0;
    // Ingresar datos
    printf("Ingrese el stock actual:\n");
    scanf("%d", &stockactual);
    printf("Ingrese el promedio de ventas diarias:\n");
    scanf("%f", &ventasdiarias);
    printf("Ingrese el stock de seguridad:\n");
    scanf("%d", &stockseguridad);
    printf("Ingrese el nombre del proveedor(local/importado):\n");
    scanf("%s", provedor);
    // proceso
    if (strcmp(provedor, "local") == 0)
    {
        factor = 1.0;
        tiemporeposicion = diasreposicionlocal;
    }
    else if (strcmp(provedor, "importado") == 0)
    {
        factor = 2.0;
        tiemporeposicion = diasreposicionimportado;
    }
    else
    {
        printf("Error\n");
        exit(1);
    }
    puntoreorden = ((ventasdiarias * tiemporeposicion) + stockseguridad);
    if (stockactual <= puntoreorden)
    {
        printf("Se necesita pedido stock actual es crítico\n");
    }
    else
    {
        printf("Stock suficiente cubre la demanda esperada\n");
    }
    diasrestantes = (stockactual / ventasdiarias);
    resto = (stockactual % (int)ventasdiarias); // INT en modulo sirve para convertir explicitamente a entero
    diasreales = diasrestantes * factor;
    if (diasrestantes <= diasreales)
    {
        printf("El stock se acabara en %d dias\n", diasreales); //%d debe detenerse y buscar el valor
    }
    else
    {
        printf("Tiene margen suficiente le sobran %d dias\n", diasreales);
    }
    // presentar datos ingresados
    printf("Detalles del Stock:\n");
    printf("Stock actual: %d\n", stockactual);
    printf("Ventas diarias promedio: %.2f\n", ventasdiarias);
    printf("Stock de seguridad: %d\n", stockseguridad);
    printf("Proveedor seleccionado: %s\n", provedor);
    printf("El resto es: %d\n", resto);
}
