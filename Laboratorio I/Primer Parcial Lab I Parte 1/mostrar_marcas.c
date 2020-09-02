#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_marcas(e_marca marcas[], int tam)
{
    //Muestra las marcas de las notebooks
    system("cls");

    printf("*****Lista de marcas*****\n");
    printf("___________________________\n");
    printf("ID    Descripcion\n");

    for(int i = 0; i < tam; i++)
    {
        printf("%d  -  %-10s", marcas[i].id, marcas[i].descripcion);
        printf("\n\n");
    }
}
