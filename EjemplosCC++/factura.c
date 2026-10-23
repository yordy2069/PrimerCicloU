#include <stdio.h>
// #include <string.h>;
void main()
{
    /*crear un sistema que pida el valor total de la factura
    y de tipo es: si es por servicios profesionales
    se retiene el valor del 10%, si es por servicios educativos el 8%
    se debe devolver el valor retenido */
    // Datos
    float valorfactura = 0.0;
    int seleccion = 1; // 1 para profesionales 2 para educativos
    float profesionales = 0.10;
    float educativos = 0.08;
    float retencion = 0.0;
    // Entrada de datos
    printf("Ingrese el valor de la factura: \n");
    scanf("%f", &valorfactura);
    printf("Ingrese el tipo de factura.\n1. factura profesionales\n2. factura educativa\n");
    scanf("%d", &seleccion);
    // Proceso
    if (seleccion == 1)
    {
        retencion = valorfactura * profesionales;
    }
    else if (seleccion == 2)
    {
        retencion = valorfactura * educativos;
    }
    else
    {
        printf("Opcion no valida\n");
    }
    printf("El valor de la retencione es: $%.2f", retencion);
    ;
}