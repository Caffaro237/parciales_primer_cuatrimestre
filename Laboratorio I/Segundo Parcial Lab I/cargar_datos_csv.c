#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "LinkedList.h"
#include "Prototipos.h"

int cargar_paises(char* nombre_archivo, LinkedList* lista)
{
    system("cls");

    int ok;
    int cant;
    char buffer[5][128];
    FILE* f;
    e_pais* nuevo_pais;

    f = fopen(nombre_archivo, "r");
    ok = 0;

    if(f != NULL)
    {
        fscanf(f, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
        //printf("%s %s %s %s %s\n\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);

        while(!feof(f))
        {
            cant = fscanf(f, "%[^,], %[^,], %[^,], %[^,], %[^\n]\n", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);

            //printf("%d\n", cant);

            if(cant == 5)
            {
                nuevo_pais = pais_nuevo_parametros(buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]); //Llama a la funcion para asignar memoria a los empleados
                ll_add(lista, nuevo_pais); //Llama a la funcion para dar de alta a los empleados
                //printf("%02d, %-18s, %d, %d, %d\n", atoi(buffer[0]), buffer[1], atoi(buffer[2]), atoi(buffer[3]), atoi(buffer[4]));
            }
            else
            {
                break;
            }
        }

        ok = 1;
    }
    else
    {
        printf("No se pudo abrir el archivo\n");
    }

    fclose(f);

    return ok;
}
