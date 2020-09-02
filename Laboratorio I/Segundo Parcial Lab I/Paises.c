#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "LinkedList.h"
#include "Prototipos.h"

e_pais* pais_nuevo()
{
    e_pais* nuevo_pais = (e_pais*) malloc(sizeof(e_pais)); //Asigna memoria dinamica

    if(nuevo_pais != NULL) //Setea todo vacio
    {
        nuevo_pais->id = 0;
        strcpy(nuevo_pais->nombre, "");
        nuevo_pais->recuperados = 0;
        nuevo_pais->infectados = 0;
        nuevo_pais->muertos = 0;
    }

    return nuevo_pais;
}

e_pais* pais_nuevo_parametros(char* id_str, char* nombre_str, char* recuperados_str, char* infectados_str, char* muertos_str)
{
    e_pais* nuevo_pais = pais_nuevo(); //Llama a la funcion para escribir un nuevo empleado

    if(nuevo_pais != NULL)
    {
        //Llama a las funciones SET para colocar los valores

        if(!(pais_set_id(nuevo_pais, atoi(id_str))
                && pais_set_nombre(nuevo_pais, nombre_str)
                && pais_set_recuperados(nuevo_pais, atoi(recuperados_str))
                && pais_set_infectados(nuevo_pais, atoi(infectados_str))
                && pais_set_muertos(nuevo_pais, atoi(muertos_str))))
        {
            //Si uno de los valores no se carga se limpia el pais cargado
            free(nuevo_pais);
            nuevo_pais = NULL;
        }
    }
    return nuevo_pais;
}

int pais_set_id(e_pais* pais, int id)
{
    //Funcion para setear el ID
    int ok;

    ok = 0;

    if(pais != NULL && id >=0)
    {
        pais->id = id;
        ok = 1;
    }

    return ok;
}

int pais_set_nombre(e_pais* pais, char* nombre)
{
    //Funcion para setear el nombre
    int ok;

    ok = 0;

    if(pais != NULL && nombre != NULL && strlen(nombre) >= 3 && strlen(nombre)< 20)
    {
        strcpy(pais->nombre, nombre);
        ok = 1;
    }

    return ok;
}

int pais_set_recuperados(e_pais* pais, int recuperados)
{
    //Funcion para setear los recuperados
    int ok;

    ok = 0;

    if(pais != NULL && recuperados >=0)
    {
        pais->recuperados = recuperados;
        ok = 1;
    }

    return ok;
}

int pais_set_infectados(e_pais* pais, int infectados)
{
    //Funcion para setear los infectados
    int ok;

    ok = 0;

    if(pais != NULL && infectados >=0)
    {
        pais->infectados = infectados;
        ok = 1;
    }

    return ok;
}

int pais_set_muertos(e_pais* pais, int muertos)
{
    //Funcion para setear los fallecidos
    int ok;

    ok = 0;

    if(pais != NULL && muertos >=0)
    {
        pais->muertos = muertos;
        ok = 1;
    }

    return ok;
}

int comparar_infectados_pais(void* a, void* b)
{
    //Funcion para comparar el ID de dos empleados
    int ok;

    e_pais* pais_1;
    e_pais* pais_2;

    ok = 0;

    if(a != NULL && b != NULL)
    {
        pais_1 = (e_pais*) a;
        pais_2 = (e_pais*) b;
    }

    if(pais_1->infectados > pais_2->infectados)
    {
        ok = 1;
    }
    else
    {
        if(pais_1->id < pais_2->id)
        {
            ok = -1;
        }
    }

    return ok;
}
