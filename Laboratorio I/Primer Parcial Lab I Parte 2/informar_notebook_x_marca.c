#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void informar_notebook_x_marca(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int marca;
    int flag = 0;

    mostrar_marcas(marcas, tam_mar);
    printf("Ingrese marca: ");
    scanf("%d", &marca);

    system("cls");

    printf("                *****Lista de notebooks de esa marca*****\n");
    printf("________________________________________________________________\n");
    printf("ID      Modelo      Marca        Tipo         Precio\n");
    printf("----------------------------------------------------------------\n");

    for(int i = 0; i < tam; i++)
    {
        if(vec[i].is_empty == 0 && vec[i].id_marca == marca)
        {
            mostrar_notebook(vec[i], marcas, tam_mar, tipos, tam_tip);
            printf("\n\n");
            flag = 1;
        }
    }

    if(!flag)
    {
        printf("\n***No hay notebooks que listar de esa marca***\n\n");
    }

}
