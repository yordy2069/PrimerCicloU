#include <stdio.h>
void main()
{
    float Iva = 0.15;
    int NumProd = 0;
    float Precio = 0.0;
    float Total = 0.0;
    float subtotal = 0.0;
    printf("Ingrese el numero de productos: ");
    scanf("%d", &NumProd);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &Precio);
    subtotal = NumProd * Precio;
    Total = subtotal + (subtotal * Iva);
    printf("El total a pagar es: %.2f\n", Total);
}