#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void inicializar_notebooks(e_notebook vec[], int tam)
{
    //Inicializa todas las notebooks
    for(int i = 0; i < tam; i++)
    {
        vec[i].is_empty = 1;
    }
}
