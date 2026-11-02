#include <stdio.h>
#include <string.h>
int main()
{
    char num1;
    char refe = 'M'; // literal de referencia ('M')
    // Ingresar datos
    printf("Ingrese un caracter:\n");
    scanf(" %c", &num1);
    if (num1 == refe)
    {
        printf("El caracter %c es igual al de referencia (%c)\n", num1, refe);
    }
    else
    {
        printf("El caracter %c no es igual al de referencia (%c)\n", num1, refe);
    }
    if (num1 >= 'A' && num1 <= 'Z')
    {
        printf("El caracter %c es una letra MAYUSCULA\n", num1);
    }
    else
    {
        printf("El caracter %c NO es una letra mayuscula\n", num1);
    }

    if (num1 >= '0' && num1 <= '9')
    {
        printf("El caracter %c es un DIGITO\n", num1);
    }
    else
    {
        printf("El caracter %c NO es un digito\n", num1);
    }
}