#include <stdio.h>
int main()
{
    // Declaración de variables
    int gb = 1024;
    float tamanoDeDocumento = 0.0;
    int cantidadDeDocumentos = 0;
    float tamanoDeImagenes = 0.0;
    int cantidadDeImagenes = 0;
    float tamanoDeVideos = 0.0;
    int cantidadDeVideos = 0;
    float tamanoDeProgramas = 0.0;
    int cantidadDeProgramas = 0;
    float tamanoDeDisco = 0.0;
    float espaciodocumentos = 0.0;
    float espacioimagenes = 0.0;
    float espaciovideos = 0.0;
    float espacioProgramas = 0.0;
    float espaciototal = 0.0;
    float espacioenGB = 0.0;
    int porcentaje = 0;
    // Solicitar al usuario el tamaño y cantidad de documentos
    printf("Ingrese el cantidad de los documentos: ");
    scanf(" %d", &cantidadDeDocumentos);
    printf("Ingrese el tamaño de los documentos (en MB): ");
    scanf(" %f", &tamanoDeDocumento);
    printf("Ingrese el cantidad de las imagenes: ");
    scanf(" %d", &cantidadDeImagenes);
    printf("Ingrese el tamaño de las imagenes (en MB): ");
    scanf(" %f", &tamanoDeImagenes);
    printf("Ingrese el cantidad de los videos: ");
    scanf(" %d", &cantidadDeVideos);
    printf("Ingrese el tamaño de los videos (en MB): ");
    scanf(" %f", &tamanoDeVideos);
    printf("Ingrese el cantidad de los programas: ");
    scanf(" %d", &cantidadDeProgramas);
    printf("Ingrese el tamaño de los programas (en MB): ");
    scanf(" %f", &tamanoDeProgramas);
    printf("Ingrese el tamaño del disco (en MB): ");
    scanf(" %f", &tamanoDeDisco);
    // proceso de calculo del espacio total
    espaciodocumentos = (cantidadDeDocumentos * tamanoDeDocumento);
    espacioimagenes = (cantidadDeImagenes * tamanoDeImagenes);
    espaciovideos = (cantidadDeVideos * tamanoDeVideos);
    espacioProgramas = (cantidadDeProgramas * tamanoDeProgramas);
    espaciototal = espaciodocumentos + espacioimagenes + espaciovideos + espacioProgramas;
    espacioenGB = espaciototal / gb;
    porcentaje = (espaciototal / tamanoDeDisco) * 100;
    // Mostrar resultados
    printf("El espacio de documentos es: %.2f MB\n", espaciodocumentos);
    printf("El espacio de imagenes es: %.2f MB\n", espacioimagenes);
    printf("El espacio de videos es: %.2f MB\n", espaciovideos);
    printf("El espacio de programas es: %.2f MB\n", espacioProgramas);
    printf("El espacio total es: %.2f MB\n", espaciototal);
    printf("El espacio total en GB es: %.2f GB\n", espacioenGB);
    printf("El porcentaje de espacio ocupado en el disco es: %.3d%%\n", porcentaje);
}