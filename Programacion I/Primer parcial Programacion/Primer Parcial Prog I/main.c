#include <stdio.h>
#include <stdlib.h>


struct
{
    int id;
    char descripcion[20];

}typedef e_marca;

struct
{
    int id;
    char procesador[20];
    int id_marca;
    int precio;
    int is_empty;

}typedef e_notebook;


float aplicar_descuento(float precio);

int contar_caracteres(char cadena_1[], int caracter);



int main()
{
    float precio = 10;
    float descuento;
    char cadena_1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 3, 5, 7, 9};
    int caracter_buscado = 2;
    int caracter_encontrado;

    //printf("Ingrese el precio: ");
    //scanf("%d", precio);

    descuento = aplicar_descuento(precio);

    printf("El descuento es %.2f\n\n", descuento);

    //printf("Ingrese caracter a buscar: ");
    //scanf("%d", caracter_buscado);

    caracter_encontrado = contar_caracteres(cadena_1, caracter_buscado);

    printf("El caracter %d se encuentra %d veces en la cadena\n\n", caracter_buscado, caracter_encontrado);

    return 0;
}

float aplicar_descuento(float precio)
{
    float descuento_final;
    float descuento;
    float porcentaje = 5;

    porcentaje = porcentaje / 100;

    descuento = precio * porcentaje;

    descuento_final = precio - descuento;

    return descuento_final;
}

int contar_caracteres(char cadena_1[], int caracter)
{
    int contador = 0;

    for(int i = 0; cadena_1[i] != '\0'; i++)
    {
        if(cadena_1[i] == caracter)
        {
            contador = contador + 1;
        }
    }

    return contador;
}
