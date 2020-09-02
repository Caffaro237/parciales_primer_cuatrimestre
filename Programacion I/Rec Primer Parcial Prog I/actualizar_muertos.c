#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void actualizar_muertos(e_pais pais[], int muertos_dia, int id, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        if(pais[i].id == id)
        {
            printf("Muertos antes de la actualizacion %d\n\n", pais[i].muertos);

            pais[i].muertos = pais[i].muertos + muertos_dia;

            printf("Muertos despues de la actualizacion %d\n\n", pais[i].muertos);

            system("pause");
        }
    }
}
