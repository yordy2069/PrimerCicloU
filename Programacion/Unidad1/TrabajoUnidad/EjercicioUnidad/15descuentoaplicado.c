#include <stdio.h>
int main()
{
    float compra = 0.0;
    float descuentoaplicado = 0.0;
    float montodescuento = 0.0;
    float totalpagar = 0.0;
    printf("Ingrese el valor de la compra:\n");
    scanf("%f", &compra);
    printf("Ingrese el porcentaje de descuento aplicado:\n");
    scanf("%f", &descuentoaplicado);
    // Proceso
    montodescuento = (compra * descuentoaplicado / 100);
    totalpagar = (compra - montodescuento);
    if (totalpagar > 0)
    {
        printf("El monto total a pagar es valido\n");
    }
    else
    {
        printf("El monto total a pagar no es mayor a cero.\n");
    }
    // Desglose de la operacion
    printf("El valor de compra: $%.2f\n", compra);
    printf("Descuento aplicado: %.2f%%\n", descuentoaplicado);
    printf("Monto del descuento: $%.2f\n", montodescuento);
    printf("Total a pagar: $%.2f\n", totalpagar);
    return 0;
}