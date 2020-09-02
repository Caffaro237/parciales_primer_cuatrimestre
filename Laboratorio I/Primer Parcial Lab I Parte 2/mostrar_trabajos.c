#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void mostrar_trabajos(e_notebook vec[], int tam, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip, e_trabajo trabajos[], int tam_trab, e_servicio servicios[], int tam_serv)
{
    //Muestra los trabajos
    int flag = 0;

    system("cls");

    printf("                *****Lista de notebooks*****\n");
    printf("_______________________________________________________________________\n");
    printf("ID      Modelo      Marca        Tipo         Precio       Servicio\n");
    printf("-----------------------------------------------------------------------\n");

    for(int i = 0; i < tam; i++)
    {
        if(trabajos[i].is_empty == 0)
        {
            mostrar_trabajo(vec[i], marcas, tam_sec, tipos, tam_tip, trabajos, tam_trab, servicios, tam_serv); //Llama a la funcion para mostrar un solo trabajo
            printf("\n");
            flag = 1;
        }
    }
    printf("\n");

    if(!flag)
    {
        //En caso de no haber trabajos ingresadas muestra este mensaje
        printf("***No hay trabajos que listar***\n\n");
    }
}
