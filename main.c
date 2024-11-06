#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "menu.h"

#define MAX_LINE 100

void obtenerFecha(char *fecha) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(fecha, "%04d/%02d/%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}

int validarUsuario(const char *usuario, const char *clave) {
    FILE *file = fopen("usuarios.txt", "r");
    if (!file) {
        perror("No se pudo abrir el archivo de usuarios");
        return 0;
    }

    char line[MAX_LINE];
    while (fgets(line, sizeof(line), file)) {
        char *user = strtok(line, ":");
        char *pass = strtok(NULL, "\n");

        if (user && pass && strcmp(user, usuario) == 0 && strcmp(pass, clave) == 0) {
            fclose(file);
            return 1;  
        }
    }

    fclose(file);
    return 0;  
}

// escribir en bitácora
void escribirBitacora(const char *usuario, const char *accion) {
    FILE *file = fopen("bitacora.txt", "a");
    if (!file) {
        perror("No se pudo abrir el archivo de bitácora");
        return;
    }

    char fecha[11];
    obtenerFecha(fecha);
    fprintf(file, "%s: %s – %s\n", fecha, usuario, accion);
    fclose(file);
}

int main() {
    char usuario[50], clave[50];
    int opcion;
    char repetir;

    printf("Ingrese usuario: ");
    scanf("%s", usuario);
    printf("Ingrese clave: ");
    scanf("%s", clave);

    if (!validarUsuario(usuario, clave)) {
        printf("Ingreso fallido: usuario o clave incorrecto\n");
        escribirBitacora(usuario, "Ingreso fallido usuario/clave erróneo");
        return 1;
    }

    printf("Ingreso exitoso al sistema\n");
    escribirBitacora(usuario, "Ingreso exitoso al sistema");

    do {
        printf("\nSeleccione una opción:\n");
        printf("1. Cálculo de área y perímetro (Figuras 2D)\n");
        printf("2. Cálculo de superficie y volumen (Figuras 3D)\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: menu2D(); escribirBitacora(usuario, "Triángulo"); break;
            case 2: menu3D(); escribirBitacora(usuario, "Cilindro recto"); break;
            case 3: printf("Saliendo del sistema...\n"); escribirBitacora(usuario, "Salida del sistema"); return 0;
            default: printf("Opción no válida. Intente nuevamente.\n");
        }

        printf("\n¿Desea realizar el análisis de otra figura geométrica? (s/n): ");
        scanf(" %c", &repetir);

    } while(repetir == 's' || repetir == 'S');

    escribirBitacora(usuario, "Salida del sistema");
    return 0;
}