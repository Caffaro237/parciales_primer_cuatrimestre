#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

struct
{
    int id;
    char nombre[20];
    int recuperados;
    int infectados;
    int muertos;

}typedef e_pais;

void actualizar_muertos(e_pais pais[], int muertos_dia, int id, int tam);

void quitar_vocales(char cadena[]);

void ordenar_caracteres(char cadena[]);

void harcodear_paises(e_pais vec[], int cant);

int menu_paises();

#endif // PROTOTIPOS_H_INCLUDED
