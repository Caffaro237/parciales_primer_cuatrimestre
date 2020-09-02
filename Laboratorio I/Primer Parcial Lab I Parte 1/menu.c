#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int menu()
{
    //Menu principal de opciones

    int opcion;

    system("cls");
    printf("*****Menu de opciones*****\n");
    printf("1 - Alta notebook\n");
    printf("2 - Modificar notebook\n");
    printf("3 - Baja notebook\n");
    printf("4 - Listar notebook\n");
    printf("5 - Listar marcas\n");
    printf("6 - Listar tipos\n");
    printf("7 - Listar servicios\n");
    printf("8 - Alta trabajo\n");
    printf("9 - Listar trabajos\n");
    printf("10 - Salir\n");

    printf("Indique su opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}
