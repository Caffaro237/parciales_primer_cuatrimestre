#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void ordenar_caracteres(char cadena[])
{
    int auxiliar;
    int tam;

    tam = strlen(cadena);

    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(cadena[i] < cadena[j])
            {
                auxiliar = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = auxiliar;
            }
        }
    }

    printf("Cadena ordenada: %s\n\n", cadena);
}
