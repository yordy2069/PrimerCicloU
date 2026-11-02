#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0;
    int b = 0;
    int divisor1 = 0;
    // ingresar los numeros
    printf("Ingrese el primer numero(hasta 50): ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero(hasta 50): ");
    scanf("%d", &b);
    // proceso
    if (a % 2 == 0)
    {
        divisor1 = a / 1;
    }
    else
    {
        divisor1 = a / 1 + 1;
    }
    if (b % 2 == 0)
    {
        divisor1 = b / 1;
    }
    else
    {
        divisor1 = b / 1 + 1;
    }
    // presentar
    printf("los numeros son amigos: %d y %d", a, b);
}