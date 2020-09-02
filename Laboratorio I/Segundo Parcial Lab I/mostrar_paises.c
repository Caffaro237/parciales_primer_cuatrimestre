#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "LinkedList.h"
#include "Prototipos.h"

int mostrar_paises(LinkedList* lista)
{
    //Funcion para mostrar los paises

    //Declaracion de variables
    int ok;
    int tam;
    int bandera;
    e_pais* aux_pais;

    //Inicializacion de variables
    ok = 0;
    bandera = 0;


    if(lista != NULL)
    {
        ok = 1;
        tam = ll_len(lista);

        printf("ID     Pais     Recuperados   Infectados     Muertos\n");
        printf("-----------------------------------------------------\n");

        for(int i = 0; i < tam; i++)
        {
            aux_pais = (e_pais*) ll_get(lista, i); //Lee al pais en la posicion i

            if(aux_pais != NULL)
            {
                mostrar_pais_p(aux_pais); //Llama a la funcion para mostrar un pais en la posicion que se leyo
                bandera = 1;
            }
        }

        if(!bandera)
        {
            printf("No hay paises que listar");
        }

        printf("\n\n");
    }

    return ok;
}

