#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void modificar_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    //declaracion de variables
    int id;
    int indice;
    char confirma;
    int nuevo_precio;
    int nuevo_tipo;
    char seguir;

    seguir = 's';

    system("cls");
    printf("*** Modificar notebook ***\n");
    printf("Ingrese ID: ");
    scanf("%d", &id); //Se ingresa el ID de la notebook a modificar

    indice = buscar_notebook(id, vec, tam); //Verifica que el ID ingresado corresponda a una notebook

    if(indice == -1)
    {
        //En el caso de que el ID ingresado no corresponda a una notebook muestra este mensaje
        printf("No hay registro de una notebook con el id %d\n\n", id);
    }
    else
    {
        //En el caso de que el ID ingresado si corresponda a una notebook entra al menu de modificacion
        do
        {
            //Llama al menu secundario de modificaciones
            switch(menu_modificacion(indice, vec, tam, marcas, tam_mar, tipos, tam_tip))
            {
                case 'a':
                    printf("Ingrese nuevo precio: ");
                    scanf("%d", &nuevo_precio); //Se ingresa el nuevo precio
                    vec[indice].precio = nuevo_precio;
                    printf("Se ha actualizado el precio con exito\n\n");
                    system("pause");
                    break;

                case 'b':
                    mostrar_tipos(tipos, tam_tip);
                    printf("Ingrese nuevo tipo: ");
                    scanf("%d", &nuevo_tipo); //Se ingresa el nuevo tipo
                    vec[indice].id_tipo = nuevo_tipo;
                    printf("Se ha actualizado el apellido con exito\n\n");
                    system("pause");
                    break;

                case 'c':
                    //Confirma la salida
                    printf("Confirma salir? s/n: ");
                    fflush(stdin);
                    scanf("%c", &confirma);
                    if(confirma == 's')
                    {
                        seguir = 'n';
                    }
                    printf("Saliendo del menu de modificacion\n\n");
                    break;

                default:
                    system("cls");
                    printf("*****Opcion invalida*****\n");
                    system("pause");
            }

        }while(seguir == 's');
    }
}
