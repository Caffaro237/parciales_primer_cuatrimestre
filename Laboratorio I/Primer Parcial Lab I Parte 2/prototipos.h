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
    int is_empty;

}typedef e_trabajo;

//Funciones de modificacion
int alta_notebook(int idx, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
int alta_trabajo(int idx, e_trabajo trabajo[], int tam_trab, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip, e_servicio servicios[], int tam_serv);
void baja_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
int cargar_descripcion_marca(char descripcion[], int id, e_marca marcas[], int tam);
int cargar_descripcion_servicio(char descripcion[], int id, e_servicio servicios[], int tam);
int cargar_descripcion_tipo(char descripcion[], int id, e_tipo tipos[], int tam);
void inicializar_notebooks(e_notebook vec[], int tam);
void inicializar_trabajos(e_trabajo trabajo[], int tam);
void modificar_notebook(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);


//Funciones de menu
int menu();
int menu_informes();
int menu_modificacion(int indice, e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);


//Funciones para mostrar
void mostrar_marcas(e_marca marcas[], int tam_mar);
void mostrar_notebook(e_notebook notebook, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip);
void mostrar_notebooks(e_notebook vec[], int tam, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip);
void mostrar_servicios(e_servicio servicios[], int tam);
void mostrar_tipos(e_tipo tipos[], int tam_tip);
void mostrar_trabajo(e_notebook notebook, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip, e_trabajo trabajos[], int tam_trab, e_servicio servicios[], int tam_serv);
void mostrar_trabajos(e_notebook vec[], int tam, e_marca marcas[], int tam_sec, e_tipo tipos[], int tam_tip, e_trabajo trabajos[], int tam_trab, e_servicio servicios[], int tam_serv);


//Funciones de busqueda
int buscar_libre(e_notebook vec[], int tam);
int buscar_libre_trabajo(e_trabajo trabajo[], int tam_trab);
int buscar_notebook(int id, e_notebook vec[], int tam);


//Informes
void informar(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void informar_mas_barata(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void informar_notebook_x_marca(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void informar_notebook_x_marca_tipo(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void informar_notebook_x_tipo(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void informar_notebooks_x_marcas(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);
void marca_mas_elegidas(e_notebook vec[], int tam, e_marca marcas[], int tam_mar, e_tipo tipos[], int tam_tip);


//Funcion de harcodeo
void harcodear_notebooks(e_notebook vec[], int cant);


#endif // PROTOTIPOS_H_INCLUDED
