#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

#define TAM 4
#define TAM_MAR 4
#define TAM_TIP 4
#define TAM_SERV 4
#define TAM_TRAB 4


#define CANT_HARCODE 4 //Cantidad de elementos harcodeados


int main()
{
    //Declaracion de variables y seteos
    char confirma;
    char seguir = 's';
    int proximo_id = 1000;
    int flag_alta = 0;
    int proximo_id_trabajo = 20000;

    e_notebook lista[TAM];

    e_marca marcas[TAM_MAR] =
    {
        {1, "Compaq"},
        {2, "Asus"},
        {3, "Acer"},
        {4, "HP"}
    };

    e_tipo tipos[TAM_TIP] =
    {
        {1, "Gamer"},
        {2, "Disenio"},
        {3, "Ultrabook"},
        {4, "Normalita"}
    };

    e_servicio servicios[TAM_SERV] =
    {
        {1, "Bateria", 250},
        {2, "Antivirus", 300},
        {3, "Actualizacion", 400},
        {4, "Fuente", 600}
    };

    e_trabajo trabajos[TAM_TRAB];

    inicializar_notebooks(lista, TAM); //Llama a la funcion para inicializar todas las notebooks
    inicializar_trabajos(trabajos, TAM_TRAB);

    //Harcodeo para la prueba del programa
    harcodear_notebooks(lista, CANT_HARCODE);
    proximo_id = proximo_id + CANT_HARCODE;


    printf("            ***REPARACIONES PC MASTER***\n");
    printf("***Bienvenido al sistema para la carga de notebooks***\n");
    printf("        ***Para iniciar presione enter***\n\n");

    system("color 0F"); //Cambia a color negro de la consola y las letras a blanco brillante
    system("pause"); //Pausa la consola


    do //Estructura repetitiva
    {
        //Llama al menu principal para ver las opciones
        switch(menu())
        {
            case 1:
                //Se le da la alta a una notebook
                //Llama a la funcion para dar de alta notebooks
                if(alta_notebook(proximo_id, lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP))
                {
                    proximo_id = proximo_id + 1;
                    flag_alta = 1;
                }
                system("pause");
                break;
            case 2:
                //Se modifica una notebook si ya se ingreso alguna notebook
                if(proximo_id < 1001 && !flag_alta)
                {
                    system("cls");
                    //Mensaje de error que no hay notebooks ingresadas
                    printf("       ***No se cargo ninguna notebook***\n");
                    printf("***Primero debe ingresar al menos una notebook***\n\n");
                }
                else
                {
                    //Llama a la funcion para modificar notebooks
                    modificar_notebook(lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP);
                }
                system("pause");
                break;
            case 3:
                //Se le da la baja a una notebook si ya se ingreso alguna notebook
                if(proximo_id < 1001 && !flag_alta)
                {
                    system("cls");
                    //Mensaje de error que no hay notebooks ingresadas
                    printf("       ***No se cargo ninguna notebook***\n");
                    printf("***Primero debe ingresar al menos una notebook***\n\n");
                }
                else
                {
                    //Llama a la funcion para dar de baja notebooks
                    baja_notebook(lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP);
                }
                system("pause");
                break;
            case 4:
                //Se muestran las notebooks si ya se ingreso alguna notebook
                if(proximo_id < 1001 && !flag_alta)
                {
                    system("cls");
                    //Mensaje de error que no hay notebooks ingresadas
                    printf("       ***No se cargo ninguna notebook***\n");
                    printf("***Primero debe ingresar al menos una notebook***\n\n");
                }
                else
                {
                   //Llama a la funcion para mostrar las notebooks
                   mostrar_notebooks(lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP);
                }
                system("pause");
                break;
            case 5:
                //Llama a la funcion para mostrar las marcas
                mostrar_marcas(marcas, TAM_MAR);
                system("pause");
                break;
            case 6:
                //Llama a la funcion para mostrar los tipos
                mostrar_tipos(tipos, TAM_TIP);
                system("pause");
                break;
            case 7:
                //Llama a la funcion para mostrar los servicios
                mostrar_servicios(servicios, TAM_SERV);
                system("pause");
                break;
            case 8:
                alta_trabajo(proximo_id_trabajo, trabajos, TAM_TRAB, lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP, servicios, TAM_SERV);
                system("pause");
                break;
            case 9:
                mostrar_trabajos(lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP, trabajos, TAM_TRAB, servicios, TAM_SERV);
                system("pause");
                break;
            case 10:
                informar(lista, TAM, marcas, TAM_MAR, tipos, TAM_TIP);
                system("pause");
                break;
            case 11:
                //Confirma la salida
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

    system("cls");

    printf("****Gracias por operar con Reparaciones PC Master****\n");
    printf("               ***Hasta pronto***\n\n");

    return 0;
}

