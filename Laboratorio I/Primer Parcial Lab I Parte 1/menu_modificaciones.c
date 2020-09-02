#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int menu_modificacion(int indice, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    //Menu secundario de opciones para la modificacion
    char opcion;

    system("cls");

    printf("             *****Menu de modificacion*****\n");
    printf("______________________________________________\n");
    printf("ID      Modelo   Marca        Tipo     Precio\n");
    printf("----------------------------------------------\n");
    mostrar_notebook(vec[indice], marcas, tam_mar, tipos, tam_tip);//llama la funcion para mostrar la notebook seleccionada

    printf("\n\na - Modificar precio\n");
    printf("b - Modificar tipo\n");
    printf("c - Salir\n");

    printf("Indique su opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);

    return opcion;
}
