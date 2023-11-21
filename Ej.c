/*Construya un programa en lenguaje C que:

    Cree una matriz cuyas dimensiones sean ingresadas por el usuario. La matriz puede tener cualquier dimensión.
    Inicialice toda la matriz en ceros.
    Imprima la matriz con la diagonal principal con valores en 1.

Entregue la URL a su repositorio de Github.*/
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n, m;//Variables enteras de las dimensiones de la matriz

    //bloque de ingreso por el usuario de las dimensiones de la matriz
    printf("Ingrese el numero de filas: ");
    scanf("%d%*c", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d%*c", &m);
    printf("Se va a mostrar una matriz nxm = %dx%d\n", n,m); //muestra como confirmación la dimensión de la matriz en pantalla


    return 0;
}
