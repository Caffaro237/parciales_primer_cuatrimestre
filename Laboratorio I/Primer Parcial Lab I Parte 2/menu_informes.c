#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int menu_informes()
{
    //Menu secundario de opciones para la muestra de informes

    char opcion;

    system("cls");
    printf("*** Informe de Noteboks ***\n");
    printf(" *****Menu de informes*****\n");
    printf("a - Listar notebook de un tipo seleccionado\n");
    printf("b - Listar notebooks de una marca seleccionada\n");
    printf("c - Informe notebook mas barata\n");
    printf("d - Listar notebooks por marca\n");
    printf("e - Listar notebooks por tipo y marca selecionada\n");
    printf("f - Informe marcas mas elegidas\n\n");
    printf("g - Salir\n\n");

    printf("Indique su opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);

    return opcion;
}
