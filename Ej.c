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
    int n, m; // Variables enteras de las dimensiones de la matriz

    // bloque de ingreso por el usuario de las dimensiones de la matriz
    printf("Ingrese el numero de filas: ");
    scanf("%d%*c", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d%*c", &m);
    printf("Se va a mostrar una matriz nxm = %dx%d\n", n, m); // muestra como confirmación la dimensión de la matriz en pantalla

    // Declaración de la matriz
    int matriz[n][m];

    // bloque donde inicializamos toda la matriz en ceros
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // bloque donde mostramos en pantalla que la matriz se inicializo en ceros
    printf("La matriz inicializada en ceros es:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n"); // aqui se hace el  salto de linea para cada fila de la matriz
    }
    printf("\n----------------------------------------------------------------------------------------\n");

    // bloque donde cambiamos los elementos de la diagonal por valores igual a 1
    printf("La matriz con la diagonal principal llena de valores 1 es:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
        }
    }

    // bloque donde mostramos en pantalla que la matriz con la diagonal cambiada
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
