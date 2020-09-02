#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "LinkedList.h"
#include "Prototipos.h"

int main()
{
    LinkedList* lista_empleados = ll_nueva_linkedlist(); //Llama a la funcion para comenzar una nueva lista
    LinkedList* lista_mapeada = NULL;
    LinkedList* lista_filtrada = NULL;
    char seguir;
    int bandera_carga;
    int bandera_mapeo;

    seguir = 's';
    bandera_carga = 0;
    bandera_mapeo = 0;

    if(lista_empleados == NULL)
    {
        printf("No se pudo asignar espacio de memoria\n");
        exit(EXIT_FAILURE);
    }

    do
    {
        switch(menu()) //Llama a la funcion para mostrar la sopciones principales
        {
            case 1:
                if(cargar_paises("pandemia.csv", lista_empleados))
                {
                    printf("Paises cargados\n");
                    bandera_carga = 1;
                }
                else
                {
                    printf("No se pudieron cargar los paises\n");
                }

                system("pause");
                break;

            case 2:
                if(bandera_mapeo)
                {
                    mostrar_paises(lista_empleados);
                }
                else
                {
                    printf("Primero se deben generar los datos - OPCION 3\n\n");
                }

                system("pause");
                break;

            case 3:
                if(bandera_carga)
                {
                    lista_mapeada = generar_aleatorios(lista_empleados);
                    guardar_datos_csv("Lista Mapeada.csv", lista_mapeada);
                    bandera_mapeo = 1;
                }
                else
                {
                    printf("Primero se deben cargar los datos - OPCION 1\n\n");
                }

                system("pause");
                break;

            case 4:
                if(bandera_carga && bandera_mapeo)
                {
                    lista_filtrada = ll_filter(lista_empleados, filtrar_por_exito);
                    printf("Lista filtrada con exito\n\n");
                    guardar_datos_csv("Lista Filtrada Exito.csv", lista_filtrada);
                }
                else
                {
                    printf("Primero se deben cargar y generar los datos - OPCION 1 y OPCION 3\n\n");
                }

                system("pause");
                break;

            case 5:if(bandera_carga && bandera_mapeo)
                {
                    lista_filtrada = ll_filter(lista_empleados, filtrar_por_riesgo);
                    printf("Lista filtrada con exito\n\n");
                    guardar_datos_csv("Lista Filtrada Riesgo.csv", lista_filtrada);
                }
                else
                {
                    printf("Primero se deben cargar y generar los datos - OPCION 1 y OPCION 3\n\n");
                }

                system("pause");
                break;

            case 6:
                if(bandera_carga && bandera_mapeo)
                {
                    ll_sort(lista_empleados, comparar_infectados_pais, 0);
                    mostrar_paises(lista_empleados);
                }
                else
                {
                    printf("Primero se deben cargar y generar los datos - OPCION 1 y OPCION 3\n\n");
                }

                system("pause");
                break;

            case 7:
                printf("Informar mayor cantidad de muertes\n");
                system("pause");
                break;

            case 8:
                system("cls");
                printf("    ****Saliendo del programa****\n\n\n");

                seguir = 'n';
                break;
            default:
                printf("Opcion invalida\n");
                system("pause");
        }

    }while(seguir == 's');


    return 0;
}

