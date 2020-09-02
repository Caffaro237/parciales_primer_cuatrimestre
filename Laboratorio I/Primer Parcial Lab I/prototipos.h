#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED


//Estructura de la fecha
struct
{
    int dia;
    int mes;
    int anio;

}typedef e_fecha;

//Estructura de la marca
struct
{
    int id;
    char descripcion[20];

}typedef e_marca;

//Estructura del tipo
struct
{
    int id;
    char descripcion[20];

}typedef e_tipo;

//Estructura de la notebook
struct
{
    int id;
    char modelo[20];
    int id_marca;
    int id_tipo;
    int id_servicio;
    int precio;
    int is_empty;

}typedef e_notebook;

//Estructura del servicio
struct
{
    int id;
    char descripcion[25];
    int precio;

}typedef e_servicio;

//Estructura del trabajo
struct
{
    int id;
    int id_notebook;
    int id_servicio;
    e_fecha fecha;

}typedef e_trabajo;

//Funciones de modificacion
int alta_notebook(int idx, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void baja_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
int cargar_descripcion_marca(char descripcion[], int id, e_marca marcas[], int tam);
int cargar_descripcion_tipo(char descripcion[], int id, e_tipo tipos[], int tam);
void inicializar_notebooks(e_notebook vec[], int tam);
void modificar_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);


//Funciones de menu
int menu();
int menu_modificacion(int indice, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);


//Funciones para mostrar
void mostrar_marcas(e_marca marcas[], int tam_mar);
void mostrar_notebook(e_notebook notebook, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip);
void mostrar_notebooks(e_notebook vec[], int tam, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip);
void mostrar_servicios(e_servicio servicios[], int tam);
void mostrar_tipos(e_tipo tipos[], int tam_tip);


//Funciones de busqueda
int buscar_libre(e_notebook vec[], int tam);
int buscar_notebook(int id, e_notebook vec[], int tam);


//Funcion de harcodeo
void harcodear_notebooks(e_notebook vec[], int cant);


#endif // PROTOTIPOS_H_INCLUDED
