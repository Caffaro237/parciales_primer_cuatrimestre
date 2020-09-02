#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "LinkedList.h"
#include "Prototipos.h"

int guardar_datos_csv(char* nombre_archivo, LinkedList* lista)
{
    int ok;
    FILE* f;
    e_pais* nuevo_pais;

    f = fopen(nombre_archivo, "w"); //Abre el archivo en modo escritura de texto
    ok = 0;

    if(f != NULL)
    {
        ok = 1;
        fprintf(f, "ID, Pais, Recuperados, Infectados, Muertos\n"); //Coloca el encabezado

        for(int i = 0; i < ll_len(lista); i++)
        {
            nuevo_pais = (e_pais*) ll_get(lista, i); //Obtiene la informacion del nuevo_pais en la posicion i

            if(nuevo_pais != NULL)
            {
                fprintf(f, "%d, %s, %d, %d, %d\n", nuevo_pais->id, nuevo_pais->nombre, nuevo_pais->recuperados, nuevo_pais->infectados, nuevo_pais->muertos); //Escribe el nuevo pais en el archivo
            }
        }
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }

    fclose(f); //Cierra el archivo

    return ok;
}
