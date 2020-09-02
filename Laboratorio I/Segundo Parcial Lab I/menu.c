#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "Prototipos.h"

int menu()
{
    //Menu principal de opciones

    int opcion;

    system("cls"); //Limpia la consola
    system("color 0F"); //Cambia a color negro de la consola y las letras a blanco brillante

    printf("*****Menu de opciones*****\n");
    printf("1 - Cargar los datos de los paises desde el archivo pandemia.csv\n");
    printf("2 - Listar Paises\n");
    printf("3 - Generar recuperados, infectados y muertos aleatoriamente\n");
    printf("4 - Filtrar por paises exitosos\n");
    printf("5 - Filtrar por paises en riesgo\n");
    printf("6 - Ordenar por nivel de infeccion\n");
    printf("7 - Mostrar pais mas castigado\n");
    printf("8 - Salir\n");

    printf("Indique su opcion: ");
    fflush(stdin);
    scanf("%d", &opcion); //Ingresa la opcion

    return opcion;
}
