#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
    float peso = 0.0;
    char servicio[50];
    char tela[50];
    char urgencia[50];
    float tarifabase = 0.0;
    float costo = 0.0;
    float costofinal = 0.0;
    int restolavados = 0;
    float PRECIOLAVADO = 2.0;
    float PRECIOSECADO = 1.5;
    float PRECIOPLANCHADO = 3.0;
    float RECARGOURGENTE = 1.5;
    float RECARGODELICADA = 1.3;
    printf("Ingrese el peso a lavar en kg \n");
    scanf("%f", &peso);
    printf("Infrese el tipo de servicio que desea: lavado, secado, planchado o completo\n");
    scanf("%s", &servicio);
    printf("Ingrese el tipo de tela: algodon, sintetica o delicada\n");
    scanf("%s", &tela);
    printf("Ingrese la urgencia: normal o urgente\n");
    scanf("%s", &urgencia);
    if (strcmp(servicio, "lavado\n") == 0)
    {
        tarifabase = PRECIOLAVADO;
    }
    else if (strcmp(servicio, "secado") == 0)
    {
        tarifabase = PRECIOSECADO;
    }
    else if (strcmp(servicio, "planchado") == 0)
    {
        tarifabase = PRECIOPLANCHADO;
    }
    else
    {
        // Servicio completo 'C'
        tarifabase = (PRECIOLAVADO + PRECIOSECADO + PRECIOPLANCHADO);
    }
    costo = (peso * tarifabase);
    costofinal = costo;

    if (strcmp(tela, "delicada") == 0)
    {
        costofinal = (costofinal * RECARGODELICADA);
    }

    if (strcmp(urgencia, "urgente") == 0)
    {
        costofinal = (costofinal * RECARGOURGENTE);
    }

    restolavados = ((int)peso % 5);

    // Presentar
    printf("Peso ingresado:%.2f Kg\n", peso);
    printf("Servicio seleccionado: %s\n", servicio);
    printf("Tipo de tela: %s\n", tela);
    printf("Nivel de urgencia: %s\n", urgencia);
    printf("Tarifa base por kg: %.2f$\n", tarifabase);
    printf("Costo total a pagar: %.2f$\n", costofinal);
    printf("Resto de kilos sobrantes en lotes de 5 kg:%d Kg", restolavados);
}