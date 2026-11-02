#include <stdio.h>
int main()
{
    // Identificación de tipos de datos de las variables:
    int dato1 = 0;        // Entero
    int c = 0;            // Entero
    int x = 0;            // Entero
    int suma = 0;         // Entero
    int producto = 0;     // Entero
    float promedio = 0.0; // Real
    printf("Ingrese el primer numero entero :\n");
    scanf("%d", &dato1);
    printf("Ingrese el segundo numero entero15:\n");
    scanf("%d", &c);
    printf("Ingrese el tercer numero entero :\n");
    scanf("%d", &x);
    // Proceso
    suma = (dato1 + c + x);
    producto = (dato1 * c * x);
    promedio = (float)suma / 30.0;
    // Presentar
    printf("La suma es %d, el producto es %d y el promedio es %.2f\n", suma, producto, promedio);
    printf("El promedio se declara como real \nporque el resultado de una division puede dar un numero real\n");
}