#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void informar_mas_barata(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int menor;
    int flag;
    int posicion;

    menor = vec[0].precio;
    flag = 0;

    for(int i = 0; i < tam; i++)
    {
        if(vec[i].is_empty == 0 && vec[i].precio <= menor)
        {
            menor = vec[i].precio;
            flag = 1;
            posicion = i;
        }
    }

    system("cls");

    if(!flag)
    {
        printf("\n***No hay notebooks que listar***\n\n");
    }
    else
    {
        printf("La notebook mas barata es: \n");
        mostrar_notebook(vec[posicion], marcas, tam_mar, tipos, tam_tip); //Llama a la funcion para mostrar la notebook
        printf("\n\n");
    }
}
