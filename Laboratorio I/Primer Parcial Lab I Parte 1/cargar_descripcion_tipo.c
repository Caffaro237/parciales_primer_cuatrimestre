#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int cargar_descripcion_tipo(char descripcion[], int id, e_tipo tipos[], int tam)
{
    //Carga la descripcion de los tipos
    int ok;

    ok = 0;

    for(int i = 0; i < tam; i++)
    {
        if(tipos[i].id == id)
        {
            strcpy(descripcion, tipos[i].descripcion);
            ok = 1;
        }
    }

    return ok;
}
