#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int cargar_descripcion_servicio(char descripcion[], int id, e_servicio servicios[], int tam)
{
    //Carga la descripcion de los servicios
    int ok;

    ok = 0;

    for(int i = 0; i < tam; i++)
    {
        if(servicios[i].id == id)
        {
            strcpy(descripcion, servicios[i].descripcion);
            ok = 1;
        }
    }

    return ok;
}
