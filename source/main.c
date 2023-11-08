#include <stdio.h>
#include "../librerias/archivo.h"
#include "../librerias/archivo2.h"
#include "../librerias/archivo3.h"
#include "../librerias/archivo4.h"

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingrese el 1er valor: ");
    scanf("%d", &a);
    printf("Ingrese el 2do valor: ");
    scanf("%d", &b);
    printf("\n RESULTADOS: \n");
    printf("Suma: %d \n", suma (a,b));
    printf("Resta: %d \n", resta (a,b));
    printf("Multiplicacion: %d \n", multiplicacion (a,b));
    printf("Division: %d \n", division (a,b));

    return 0;
}
