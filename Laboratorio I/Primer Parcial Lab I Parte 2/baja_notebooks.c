#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void baja_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int id;
    int indice;
    char confirma;

    system("cls");
    printf("*** Baja notebook ***\n");
    printf("Ingrese ID: ");
    scanf("%d", &id); //Se ingresa el ID de la notebook a dar la baja

    indice = buscar_notebook(id, vec, tam); //Verifica que el ID ingresado corresponda a una notebook

    if(indice == -1)
    {
        //En el caso de que el ID ingresado no corresponda a una notebook muestra este mensaje
        printf("No hay registro de una notebook con el id %d\n\n", id);
    }
    else
    {
        //En el caso de que el ID ingresado si corresponda a una notebook pregunta si se le quiere dar la baja
        mostrar_notebook(vec[indice], marcas, tam_mar, tipos, tam_tip);
        printf("\nConfirma baja? s/n\n");
        fflush(stdin);
        scanf("%c", &confirma); //Ingresa s o n para confirmar

        if(confirma == 's')
        {
            //En el caso de que confirme muestra este mensaje
            vec[indice].is_empty = 1;
            printf("Se ha realizado la baja con exito\n\n");
        }
        else
        {
            //En el caso de que no confirme muestra este mensaje
            printf("Se ha cancelado la baja \n\n");
        }
    }
}
