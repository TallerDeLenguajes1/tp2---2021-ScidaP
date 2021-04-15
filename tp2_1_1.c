#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int filas = 4;
    int columnas = 4;
    int * matriz = (int *) malloc(filas * columnas * sizeof(int));
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            *(matriz + i * columnas + j) = i * columnas + j;
            printf("%4d", *(matriz + i * columnas + j));
        }
        printf("\n");
    }
    getchar();
    return 0;
}