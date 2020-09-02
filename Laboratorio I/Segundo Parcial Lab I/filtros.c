#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "LinkedList.h"
#include "Prototipos.h"

int filtrar_por_exito(void* un_pais)
{
    int ok = 0;
    e_pais* x;

    if(un_pais != NULL)
    {
        x = (e_pais*) un_pais;

        if(x->muertos >= 0 && x->muertos < 5000)
        {
            ok = 1;
        }
    }

    return ok;
}

int filtrar_por_riesgo(void* un_pais)
{
    int ok = 0;
    e_pais* x;

    if(un_pais != NULL)
    {
        x = (e_pais*) un_pais;

        if(x->infectados >= x->recuperados * 3)
        {
            ok = 1;
        }
    }

    return ok;
}
