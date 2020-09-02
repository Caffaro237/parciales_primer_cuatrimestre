#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int alta_notebook(int idx, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip)
{
    int prox_id;
    int indice;
    e_notebook aux_notebook;

    indice = buscar_libre(vec, tam); //Verifica que haya Lugar disponible
    prox_id = 0;

    system("cls");

    printf("*** Alta empleado ***\n\n");
    if(indice == -1) //Pregunta si hay lugar o no
    {
        //En caso de estar completo muestra este mensaje
        printf("Sistema completo, no hay lugar para dar el alta a una notebook\n\n");
    }
    else
    {
        //En caso de estar no completo se podra ingresar una nueva notebook
        aux_notebook.id = idx;

        printf("Ingrese modelo: ");
        fflush(stdin);
        fgets(aux_notebook.modelo, 20, stdin); //Se ingresa el modelo no mayor a 20 letras

        mostrar_marcas(marcas, tam_mar);
        printf("Ingrese marca: ");
        scanf("%d", &aux_notebook.id_marca); //Se ingresa el ID de la marca

        mostrar_tipos(tipos, tam_tip);
        printf("Ingrese tipo: ");
        scanf("%d", &aux_notebook.id_tipo); //Se ingresa el ID del tipo

        printf("Ingrese precio: ");
        scanf("%d", &aux_notebook.precio); //Se ingresa el precio

        aux_notebook.is_empty = 0; //Cambia el valor de is_empty para indicar que esta ocupado

        vec[indice] = aux_notebook; //Copio al vector el empleado nuevo

        prox_id = 1;

    } //Else exterior

    return prox_id;
}
