#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"
#include "harcodeo.h"

void harcodear_paises(e_pais vec[], int cant)
{
    for(int i = 0; i < cant; i++)
    {
        vec[i].id =ids[i];
        strcpy(vec[i].nombre, paises[i]);
        vec[i].muertos = muertos[i];
    }
}
