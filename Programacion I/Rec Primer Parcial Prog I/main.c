#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

#define TAM 5

#define CANT_HARCODE 5

int main()
{
    e_pais pais[TAM];
    char cadena_vocales[20];
    char cadena_orden[20];
    char confirma;
    int id;
    int muertos_dia;

    confirma = 's';

    harcodear_paises(pais, CANT_HARCODE);

    printf("Hay muertos para actualizar? s/n: ");
    scanf("%c", &confirma);

    while(confirma == 's')
    {
        switch(menu_paises())
        {
            case 1:
                id = 1000;

                printf("Cuantos muertos hubo en Francia hoy?: ");
                scanf("%d", &muertos_dia);
                actualizar_muertos(pais, muertos_dia, id, TAM);

                break;

            case 2:
                id = 1001;

                printf("Cuantos muertos hubo en EEUU hoy?: ");
                scanf("%d", &muertos_dia);
                actualizar_muertos(pais, muertos_dia, id, TAM);

                break;

            case 3:
                id = 1002;

                printf("Cuantos muertos hubo en China hoy?: ");
                scanf("%d", &muertos_dia);
                actualizar_muertos(pais, muertos_dia, id, TAM);

                break;

            case 4:
                id = 1003;

                printf("Cuantos muertos hubo en Alemania hoy?: ");
                scanf("%d", &muertos_dia);
                actualizar_muertos(pais, muertos_dia, id, TAM);

                break;

            case 5:
                id = 1004;

                printf("Cuantos muertos hubo en Brasil hoy?: ");
                scanf("%d", &muertos_dia);
                actualizar_muertos(pais, muertos_dia, id, TAM);

                break;

            case 6:

                confirma = 'n';

                break;
        }
    }

    system("cls");

    printf("Ingrese una palabra para quitarle las vocales: ");
    fflush(stdin);
    fgets(cadena_vocales, 20, stdin); //Se ingresa el nombre
    cadena_vocales[strlen(cadena_vocales) - 1] = '\0'; //Elimina el \n de el fgets

    quitar_vocales(cadena_vocales);

    printf("Ingrese una palabra para ordenar sus caracteres: ");
    fflush(stdin);
    fgets(cadena_orden, 20, stdin); //Se ingresa el nombre
    cadena_orden[strlen(cadena_orden) - 1] = '\0'; //Elimina el \n de el fgets

    ordenar_caracteres(cadena_orden);

    return 0;
}
