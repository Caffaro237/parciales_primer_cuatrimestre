#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"


int menu_paises()
{
    system("cls");

    int opcion;

    printf("*****Menu de opciones*****\n");
    printf("1 - Francia\n");
    printf("2 - EEUU\n");
    printf("3 - China\n");
    printf("4 - Alemania\n");
    printf("5 - Brasil\n");
    printf("6 - No hubo muertos\n");

    printf("Indique su opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}
