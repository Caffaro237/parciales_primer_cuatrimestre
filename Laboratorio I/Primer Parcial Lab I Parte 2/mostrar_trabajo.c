#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_trabajo(e_notebook notebook, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip, e_trabajo trabajos[], int tam_trab, e_servicio servicios[], int tam_serv)
{
    //Muestra un trabajo
    char marca[20];
    char tipo[20];
    char servicio[20];
    int indice;

    indice = buscar_libre_trabajo(trabajos, tam_trab);

    if(indice == -1) //Pregunta si hay lugar o no
    {
        //En caso de estar completo muestra este mensaje
        printf("Sin servicios\n\n");
    }
    else
    {
        cargar_descripcion_servicio(servicio, trabajos[indice].id_servicio, servicios, tam_serv); //Llama a la funcion para hacer la carga de la descripcion de los servicios
    }

    cargar_descripcion_marca(marca, notebook.id_marca, marcas, tam_mar); //Llama a la funcion para hacer la carga de la descripcion de las marcas
    cargar_descripcion_tipo(tipo, notebook.id_tipo, tipos, tam_tip); //Llama a la funcion para hacer la carga de la descripcion de los tipos

    printf("%4d    %-10s  %-10s   %-10s   %-10d   %-15s", notebook.id, notebook.modelo, marca, tipo, notebook.precio, servicio);
}
