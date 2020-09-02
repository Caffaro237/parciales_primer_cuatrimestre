#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_notebooks(e_notebook vec[], int tam, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip)
{
    //Muestra las notebooks
    int flag = 0;

    system("cls");

    printf("                *****Lista de notebooks*****\n");
    printf("________________________________________________________________\n");
    printf("ID      Modelo   Marca        Tipo     Precio\n");
    printf("----------------------------------------------------------------\n");

    for(int i = 0; i < tam; i++)
    {
        if(vec[i].is_empty == 0)
        {
            mostrar_notebook(vec[i], marcas, tam_sec, tipos, tam_tip); //Llama a la funcion para mostrar una sola notebook
            printf("\n");
            flag = 1;
        }
    }
    printf("\n");

    if(!flag)
    {
        //En caso de no haber notebooks ingresadas muestra este mensaje
        printf("***No hay notebooks que listar***\n\n");
    }
}
