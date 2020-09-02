#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

#include "LinkedList.h"

struct
{
    int id;
    char nombre[20];
    int recuperados;
    int infectados;
    int muertos;

}typedef e_pais;


//Prototipos de Funciones
int cargar_paises(char* nombre_archivo, LinkedList* lista);
int guardar_datos_csv(char* nombre_archivo, LinkedList* lista);
int menu();
int mostrar_paises(LinkedList* lista);
int mostrar_pais_p(e_pais* pais);
LinkedList* generar_aleatorios(LinkedList* lista);
int aleatorio_recuperados();
int aleatorio_infectados();
int aleatorio_muertos();
void* cargar_aleatorios(void* un_pais);
int filtrar_por_exito(void* un_pais);
int filtrar_por_riesgo(void* un_pais);
int comparar_infectados_pais(void* a, void* b);


//Prototipos de Funciones para el LinkedList
e_pais* pais_nuevo_parametros(char* id_str, char* nombre_str, char* recuperados_str, char* infectados_str, char* muertos_str);
e_pais* pais_nuevo();
int pais_set_id(e_pais* pais, int id);
int pais_set_nombre(e_pais* pais, char* nombre);
int pais_set_recuperados(e_pais* pais, int recuperados);
int pais_set_infectados(e_pais* pais, int infectados);
int pais_set_muertos(e_pais* pais, int muertos);


#endif // PROTOTIPOS_H_INCLUDED
