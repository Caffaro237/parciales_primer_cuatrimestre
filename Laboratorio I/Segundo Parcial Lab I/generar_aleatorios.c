#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "LinkedList.h"
#include "Prototipos.h"

LinkedList* generar_aleatorios(LinkedList* lista)
{
    LinkedList* lista_mapeada = NULL;

    lista_mapeada = ll_map(lista, cargar_aleatorios);

    printf("Lista mapeada con exito\n\n");

    return lista_mapeada;
}

void* cargar_aleatorios(void* un_pais)
{
    e_pais* x;

    int recuperados;
    int infectados;
    int muertos;

    recuperados = aleatorio_recuperados();
    infectados = aleatorio_infectados();
    muertos = aleatorio_muertos();

    if(un_pais != NULL)
    {
        x = (e_pais*) un_pais;

        pais_set_recuperados(x, recuperados);
        pais_set_infectados(x, infectados);
        pais_set_muertos(x, muertos);
    }

    return x;
}


int aleatorio_recuperados()
{
    int aleatorio;

    aleatorio = rand() % (1000000) + 50000; //Esta linea va en la funcion que asigna el tiempo

    return aleatorio;
}

int aleatorio_infectados()
{
    int aleatorio;

    aleatorio = rand() % (2000000) + 40000; //Esta linea va en la funcion que asigna el tiempo

    return aleatorio;
}

int aleatorio_muertos()
{
    int aleatorio;

    aleatorio = rand() % (50000) + 1000; // esta linea va en la funcion que asigna el tiempo

    return aleatorio;
}
