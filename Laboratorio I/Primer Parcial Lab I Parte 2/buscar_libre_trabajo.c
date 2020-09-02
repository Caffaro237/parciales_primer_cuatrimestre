#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int buscar_libre_trabajo(e_trabajo trabajo[], int tam_trab)
{
    int indice;

    indice = -1;

    for(int i = 0; i < tam_trab; i++)
    {
        if(trabajo[i].is_empty) //Busca si en el vector en la posicion i esta en 1 is_empty
        {
            indice = i;
            break;
        }
    }

    return indice;
}
