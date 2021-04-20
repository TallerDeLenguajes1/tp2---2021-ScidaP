#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int filas = 15;
    srand(time(NULL));
    int n = 20;
    int columnas = rand() % (11) + 5;
    int * matriz = (int *) malloc(filas * columnas * sizeof(int));
    printf("Cantidad de columnas: %d\n", columnas);
    printf("Cantidad de filas: %d\n", filas);
    for (int i = 0; i < filas; i++) {
        int cantPares = 0; // El contador se reinicia cada vez que se imprime una fila.
        for (int j = 0; j < columnas; j++) {
            matriz[i*columnas+j] = rand() % 999;
            printf("%4d", matriz[i*columnas+j]);
            if (matriz[i*columnas+j] % 2 == 0) {
                cantPares++;
            }
        }
        printf(" --- Cantidad pares de esta fila: %d", cantPares);
        printf("\n");
    }
    getchar();
    return 0;
}