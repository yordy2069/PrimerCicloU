#include <stdio.h>

int main()
{
    float c1, c2, c3, promcertamen, notafinal, notalaboratorio, notacertamen;
    float factornotafinal = 0.7;
    float factornotalaboratorio = 0.3;
    // ingresar datos
    printf("Ingrese la primera nota c1\n");
    scanf("%f", &c1);
    printf("Ingrese la primera nota c2\n");
    scanf("%f", &c2);
    printf("Ingrese la nota de laboratorio\n");
    scanf("%f", &notalaboratorio);
    // proceso
    notacertamen = (60 - (notalaboratorio * factornotalaboratorio)) / 0.7;
    c3 = (3 * notacertamen) - c1 - c2;
    if (c3 < 0 && notacertamen <= -60)
    {
        printf("Supera la nota minima para pasar el certamen su nota es %.2f", notacertamen);
    }
    else
        printf("Nesesita sacar: %.2f en el tecer certamen para superar el minimo ", c3);
}