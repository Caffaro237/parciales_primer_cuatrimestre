#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int alta_trabajo(int idx, e_trabajo trabajo[], int tam_trab, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip, e_servicio servicios[], int tam_serv)
{
    int prox_id;
    int indice;
    e_trabajo aux_trabajo;

    indice = buscar_libre_trabajo(trabajo, tam_trab); //Verifica que haya lugar disponible
    prox_id = 0;

    system("cls");

    printf("*** Alta trabajo ***\n\n");
    if(indice == -1) //Pregunta si hay lugar o no
    {
        //En caso de estar completo muestra este mensaje
        printf("Sistema completo, no hay lugar para dar el alta a un trabajo\n\n");
    }
    else
    {
        //En caso de estar no completo se podra ingresar un nuevo trabajo
        aux_trabajo.id = idx;

        mostrar_notebooks(vec, tam, marcas, tam_mar, tipos, tam_tip); //Llama a la funcion para mostrar las notebooks
        printf("Elija una notebook: ");
        scanf("%d", &aux_trabajo.id_notebook);

        mostrar_servicios(servicios, tam_serv); //Llama a la funcion para mostrar los servicios
        printf("Elija un servicio: ");
        scanf("%d", &aux_trabajo.id_servicio);

        printf("Ingrese fecha: ");
        scanf("%d/%d/%d", &aux_trabajo.fecha.dia, &aux_trabajo.fecha.mes, &aux_trabajo.fecha.anio);

        aux_trabajo.is_empty = 0; //Cambia el valor de is_empty para indicar que esta ocupado

        trabajo[indice] = aux_trabajo; //Copio al vector el empleado nuevo

        prox_id = 1;

    }

    return prox_id;
}
