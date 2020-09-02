#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void inicializar_trabajos(e_trabajo vec[], int tam)
{
    //Inicializa todas los trabajos
    for(int i = 0; i < tam; i++)
    {
        vec[i].is_empty = 1;
    }
}
