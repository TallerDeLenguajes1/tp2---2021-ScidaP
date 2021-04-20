#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct compu {
    int velocidad;
    int cantidad;
    int anio;
    char *tipo_cpu;
}PC;

int main() {
    int cant;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    printf("Ingrese la cantidad de Computadoras que va a cargar: \n");
    scanf("%d", &cant);
    PC *arreglopc;
    arreglopc = (PC*)malloc(cant*sizeof(PC));
    getchar();
    return 0;
}

PC devolverPC(PC compu, char *tipo) {
    compu.velocidad = rand() % 4 + 1;
    compu.cantidad = rand() % 5 + 1;
    compu.anio = rand() % 17 + 2000;
    compu.tipo_cpu = (char*)malloc(sizeof(char) * 10);
    strcpy(compu.tipo_cpu, tipo + rand() % (6+1) * 10);
    return compu;
}

void mostrarpcs(PC *dato, int cant, char *tipo){
    for (int i = 0; i < cant; i++) {
        printf(" ---- PC N°%d \n", cant);
        printf("Anio de fabricacion: %d\n", (dato + i)->anio);
        printf("Cantidad de nucleos: %d\n", (dato + i)->cantidad);
        printf("Velocidad en GHZ: %d\n", (dato + i)->velocidad);
        printf("Tipo de cpu: %s\n", (dato + i)->tipo_cpu);
    }
}