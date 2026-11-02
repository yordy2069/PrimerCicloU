#include <stdio.h>
#include <string.h>
int main()
{
    float serie = 0.0;
    char conesion[100];
    int resistencia1 = 0;
    int resistencia2 = 0;
    int voltaje = 0;
    int req = 0;
    float corriente = 0.0;
    float potencia = 0.0;

    printf("Ingrese la resistencia 1 \n");
    scanf("%d", &resistencia1);
    printf("Ingrese la resistencia 2 \n");
    scanf("%d", &resistencia2);
    printf("Ingrese de cuanto es la fuente de tension (voltaje) \n");
    scanf("%d", &voltaje);
    printf("Seleccion el tipo de cone>ion(serie o paralelo) \n");
    scanf("%s", &conesion);
    if (strcmp(conesion, "serie") == 0)
    {
        req = resistencia1 + resistencia2;
    }
    else if (strcmp(conesion, "paralelo") == 0)
    {
        req = ((resistencia1 * resistencia2) / (resistencia1 + resistencia2));
    }

    if (corriente < 2)
    {
        corriente = (float)voltaje / (float)req;
        printf("La corriente no sobrepasa el limite, corriente %f\n A", corriente);
    }
    else
    {
        printf("La corriente sobrepasa el limite ¡no hay calculo¡");
    }
    if (potencia < 20)
    {
        potencia = voltaje * corriente;
        printf("La potencia no sobrepasa el limite %f\n W", potencia);
    }
    else
    {
        printf("La potencia sobrepasa el limite ¡no hay calculo¡");
    }
    if (req > 3)
    {
        printf("La resitencia equivalente pasa el limite minimo %d\n", req);
    }
    else
    {
        printf("La resistencia no llega al limite minimo¡ no hay calculo¡");
    }
    if ((corriente < 2) && (potencia < 20) && (req > 3))
    {
        printf("El circuito es seguro");
    }
    else
    {
        printf("El circuito no es seguro");
    }
}