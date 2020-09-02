#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

void quitar_vocales(char cadena[])
{
    int j;
    int s;

    j = ' ';
    s = strlen(cadena);

    for(int i = 0; i < s; i++)
    {
        if(cadena[i] == 'a' || cadena[i] == 'e'|| cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
        {
            cadena[i] = j;
        }
    }

    printf("Cadena sin vocales: %s\n\n", cadena);


}
