#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int cargar_descripcion_marca(char descripcion[], int id, e_marca marcas[], int tam)
{
    //Carga la descripcion de las marcas
    int ok;

    ok = 0;

    for(int i = 0; i < tam; i++)
    {
        if(marcas[i].id == id)
        {
            strcpy(descripcion, marcas[i].descripcion);
            ok = 1;
        }
    }

    return ok;
}
