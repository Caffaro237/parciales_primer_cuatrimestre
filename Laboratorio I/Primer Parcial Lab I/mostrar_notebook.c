#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_notebook(e_notebook notebook, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    //Muestra las notebooks
    char marca[20];
    char tipo[20];

    cargar_descripcion_marca(marca, notebook.id_marca, marcas, tam_mar); //Llama a la funcion para hacer la carga de la descripcion de las marcas
    cargar_descripcion_tipo(tipo, notebook.id_tipo, tipos, tam_tip);//Llama a la funcion para hacer la carga de la descripcion de los tipos

    printf("%4d    %-10s  %-10s   %-10s   %d", notebook.id, notebook.modelo, marca, tipo, notebook.precio);
}


