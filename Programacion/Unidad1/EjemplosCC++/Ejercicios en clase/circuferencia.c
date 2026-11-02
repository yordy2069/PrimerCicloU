#include <stdio.h>
#include <string.h>
#include <math.h>>// sqrt(numero)/ pow(base e>ponente)
void main(){
    double radio1, radio2, centro, z1, y1, y2, z2, sumaradios, diferencia;
    double distancia;
    printf("Ingrese z");
    scanf("%f", &z1);
    printf("Ingrese y");
    scanf("%f", &y1);
    printf("Ingrece el radio ");
    scanf("%f", &radio1); 
    printf("Ingrese z");
    scanf("%f", &z2);
    printf("Ingrese y");
    scanf("%f", &y2);
    printf("Ingrece el radio ");
    scanf("%f", &radio2); 
    if (radio1 && radio2 > 0)
    {
        printf("Los radios son positivos\n");
    }
    else 
    {
        printf("Los radios son negativos\n");
    }
    distancia = (sqrt(pow(z2 - z1, 2)+ pow(y2 -y1, 2)));    
    printf("La distancia entre los centros es %lf\n", distancia);
    
    if ((z1 == z2) && (y1 ==y2))
    {
        printf("Los centros son iguales");
    }
    else 
    {
        printf("Los centros no son iguales");
    }
    sumaradios = radio1 + radio2;
    diferencia = radio1 - radio2;
    if ((distancia == sumaradios)|| (distancia == diferencia));
    printf("La disrancia es igual a la suma de radios");
    else 
    {
        printf("La distancia no es igual a la suma de radios")
    }
}