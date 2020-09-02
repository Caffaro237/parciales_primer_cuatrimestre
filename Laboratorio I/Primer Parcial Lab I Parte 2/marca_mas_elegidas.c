#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void marca_mas_elegidas(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int contador;
    int contador_iguales;
    int flag;
    char marca[20];
    int mayor;
    char marca_mayor[20];

    flag = 0;
    mayor = -1;
    contador_iguales = 0;

    system("cls");

    printf("***Cantidad de computadoras de cada marca***\n\n");
    printf("Marca       Cantidad de notebooks\n");
    printf("_________________________________\n");

    //Recorro marcas
    for(int m = 0; m < tam_mar; m++)
    {
        contador = 0;
        strcpy(marca, marcas[m].descripcion);

        //Recorro las notebooks buscando aquellos de la marca donde estoy parado
        for(int n = 0; n < tam; n++)
        {
            if(vec[n].is_empty == 0 && vec[n].id_marca == marcas[m].id)
            {
                contador = contador + 1;
                flag = 1;
            }
        }

        printf("%-10s  %d\n\n", marca, contador);

        if(contador > mayor)
        {
            mayor = contador;
            strcpy(marca_mayor, marcas[m].descripcion);
        }

        if(contador == mayor)
        {
            contador_iguales = contador_iguales + 1;
        }
    }

    if(!flag)
    {
        printf("***No hay notebooks que mostrar***");
        flag = 1;
    }
    else
    {
        if(contador_iguales == tam_mar)
        {
            printf("Todas las marcas tienen la misma cantidad de notebooks\n\n");
        }
        else
        {
            printf("La marca %s es la que mas computadoras tiene\n\n", marca_mayor);
        }
    }
}
