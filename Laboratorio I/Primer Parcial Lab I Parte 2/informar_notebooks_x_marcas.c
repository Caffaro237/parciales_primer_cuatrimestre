#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void informar_notebooks_x_marcas(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int flag;
    int marca;

    flag = 0;

    system("cls");
    printf("*****Informe notebooks por marca*****\n");

    //Recorro marcas
    for(int m = 0; m < tam_mar; m++)
    {
        marca = m + 1;
        printf("\nMarca %1d: %s\n", marca, marcas[m].descripcion);
        printf("------------------------------------------------------------------------------\n");

        //Recorro las notebooks buscando aquellos de la marca donde estoy parado
        for(int n = 0; n < tam; n++)
        {
            if(vec[n].is_empty == 0 && vec[n].id_marca == marcas[m].id)
            {
                mostrar_notebook(vec[n], marcas, tam_mar, tipos, tam_tip);
                printf("\n------------------------------------------------------------------------------\n");
                flag = 1;
            }
        }
        if(!flag)
        {
            printf("***No hay notebooks de esta marca***");
            printf("\n------------------------------------------------------------------------------\n");

            flag = 1;
        }
    }
}
