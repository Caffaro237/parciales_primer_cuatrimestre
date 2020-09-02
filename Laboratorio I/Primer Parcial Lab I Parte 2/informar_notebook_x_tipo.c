#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void informar_notebook_x_tipo(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int tipo;
    int flag = 0;

    mostrar_tipos(tipos, tam_tip);
    printf("Ingrese tipo: ");
    scanf("%d", &tipo);

    system("cls");

    printf("             *****Lista de notebooks de ese tipo*****\n");
    printf("________________________________________________________________\n");
    printf("ID      Modelo      Marca        Tipo         Precio\n");
    printf("----------------------------------------------------------------\n");

    for(int i = 0; i < tam; i++)
    {
        if(vec[i].is_empty == 0 && vec[i].id_tipo == tipo)
        {
            mostrar_notebook(vec[i], marcas, tam_mar, tipos, tam_tip);
            printf("\n\n");
            flag = 1;
        }
    }

    if(!flag)
    {
        printf("\n***No hay notebooks que listar de ese tipo***\n\n");
    }
}
