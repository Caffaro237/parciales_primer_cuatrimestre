#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "LinkedList.h"
#include "Prototipos.h"

int mostrar_pais_p(e_pais* pais)
{
    //Funcion para mostrar un solo pais
    int ok;

    ok = 0;

    if(pais != NULL)
    {
        ok = 1;
        printf("%02d   %-18s   %d      %d      %d\n", pais->id, pais->nombre, pais->recuperados, pais->infectados, pais->muertos);
    }
    return  ok;
}
