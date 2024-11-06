#include <stdio.h>
#include "menu.h"

int main() {
    int opcion;
    char repetir;

    do {
        printf("\nSeleccione una opción:\n");
        printf("1. Cálculo de área y perímetro (Figuras 2D)\n");
        printf("2. Cálculo de superficie y volumen (Figuras 3D)\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: menu2D(); break;
            case 2: menu3D(); break;
            case 3: printf("Saliendo del programa...\n"); return 0;
            default: printf("Opción no válida. Intente nuevamente.\n");
        }
        
        printf("\n¿Desea realizar el análisis de otra figura geométrica? (s/n): ");
        scanf(" %c", &repetir);

    } while(repetir == 's' || repetir == 'S');

    return 0;
}
