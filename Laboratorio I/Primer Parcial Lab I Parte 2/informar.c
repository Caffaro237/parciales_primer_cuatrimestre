#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void informar(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    //Declaracion de variables
    char seguir;
    char confirma;

    //Inicializacion de variables
    seguir = 's';

    do //Estructura repetitiva
    {
        //Llama al menu secundario de modificaciones
        switch(menu_informes())
        {
            case 'a':
                //Llama a la funcion para informar las notebooks por el tipo que se ingrese
                informar_notebook_x_tipo(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'b':
                //Llama a la funcion para informar las notebooks por la marca que se ingrese
                informar_notebook_x_marca(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'c':
                //Llama a la funcion para informar la notebook mas barata
                informar_mas_barata(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'd':
                //Llama a la funcion para informar la notebook de cada marca
                informar_notebooks_x_marcas(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'e':
                //Llama a la funcion para informar las notebooks por la marca y el tipo que se ingrese
                informar_notebook_x_marca_tipo(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'f':
                //Llama a la funcion para informar la notebook de la marca mas elegida
                marca_mas_elegidas(vec, tam, marcas, tam_mar, tipos, tam_tip);
                system("pause");
                break;
            case 'g':
                //Confirma la saida
                printf("Confirma salir? s/n: ");
                fflush(stdin);
                scanf("%c", &confirma);
                if(confirma == 's')
                {
                    seguir = 'n';
                }
                break;
            default:
                system("cls");
                printf("*****Opcion invalida*****\n\n");
                system("pause");
        }

    }while(seguir == 's'); //Si seguir es igual a 's' sigue repitiendo
}

