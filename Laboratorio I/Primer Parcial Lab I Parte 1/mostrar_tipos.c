#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_tipos(e_tipo tipos[], int tam)
{
    //Muestra los tipos de notebooks
    system("cls");

    printf("*****Lista de marcas*****\n");
    printf("___________________________\n");
    printf("ID    Descripcion\n");

    for(int i = 0; i < tam; i++)
    {
        printf("%d  -  %-10s", tipos[i].id, tipos[i].descripcion);
        printf("\n\n");
    }
}
