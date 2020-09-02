#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"
#include "harcodeo.h"

void harcodear_notebooks(e_notebook vec[], int cant)
{
    //Harcodea las opciones para la prueba del programa
    for(int i = 0; i < cant; i++)
    {
        vec[i].id = ids[i];
        strcpy(vec[i].modelo,modelos[i]);
        vec[i].id_marca = ids_marcas[i];
        vec[i].id_tipo = ids_tipos[i];
        vec[i].id_servicio = ids_servicios[i];
        vec[i].precio = precios[i];
        vec[i].is_empty = 0;
    }
}
