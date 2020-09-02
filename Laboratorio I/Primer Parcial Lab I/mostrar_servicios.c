#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_servicios(e_servicio servicios[], int tam)
{
    //Muestra los servicios
    system("cls");

    printf("*****Lista de servicios*****\n");
    printf("___________________________\n");
    printf("ID    Descripcion       Precio\n");

    for(int i = 0; i < tam; i++)
    {
        printf("%d  -  %-15s   $%d", servicios[i].id, servicios[i].descripcion, servicios[i]. precio);
        printf("\n\n");
    }
}
