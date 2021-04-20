#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    typedef struct compu {
        int velocidad;
        int cantidad;
        int anio;
        char *tipo_cpu;
    }PC;
    int cant;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    printf("Ingrese la cantidad de Computadoras que va a cargar: \n");
    scanf("%d", &cant);
    getchar();
    return 0;
}