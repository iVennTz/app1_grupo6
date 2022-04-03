#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "libros.h" 
#include "archivo.h" //leer y escribir



Libro libros[1500]; //HACEMOS LA ARRAY GLOBAL PARA PODER EDITARLA DENTRO DE TODAS LAS FUNCIONES
int contador_libro; //Cantidad de libros
enum OPTIONS {BUSCAR = 1, NUEVO = 2, QUITAR = 3, ADD_SEDE, QUITAR_SEDE, EDIT_LIBRO, CAMBIAR_SEDE, CAMBIAR_SECCION, CAMBIAR_PISO, AGREGAR_SECCIONES, 
              ELIMINAR_SECCIONES, AGREGAR_PISOS, QUITAR_PISOS,  SALIR = 14};


void menu(); //Protipo menu


int main(int argc, char *argv[]){

  int option = 0;
  leer(argc,argv); //en archivo.c
  int salir = 0;
  while (salir == 0){
    menu();
    scanf("%d", &option);
    switch (option)
    {
    case BUSCAR: //Buscar libro
      printf("Ingrese el nombre del libro a buscar\n");
      char nombre[50];
      scanf(" %[^\n]",nombre);
      infoLibro(buscar(nombre));
      printf("Presione enter para vovler al menu");
      getchar();
      getchar(); //Dos veces porque el switch hace que el primer getchar se "ignore"
      option = 0;
      break;
    
    case NUEVO:
      nuevo(contador_libro);
      printf("Libro creado, presione enter para vovler al menu");
      getchar();
      getchar(); //Dos veces porque el switch hace que el primer getchar se "ignora"
      break;

    case QUITAR:
      printf("Ingrese el nombre del libro a quitar\n");
      char nombre_q[50];
      scanf(" %[^\n]",nombre_q);
      borrar_libro(nombre_q);
      printf("Libro quitado, presione enter para vovler al menu");
      getchar();
      getchar(); //Dos veces porque el switch hace que el primer getchar se "ignora"
      break;

    case ADD_SEDE:

      break;

    case QUITAR_SEDE:

      break;

    case EDIT_LIBRO:

      break;

    case CAMBIAR_SEDE:

      break;

    case CAMBIAR_SECCION:

      break;

    case CAMBIAR_PISO:

      break;

    case AGREGAR_SECCIONES:

      break;

    case ELIMINAR_SECCIONES:

      break;

    case AGREGAR_PISOS:

      break;

    case QUITAR_PISOS:

      break;
      
    case SALIR:
      guardar(argc,argv);
      salir = 1;
    
    default:
      break;
    }
  }

    return 0;
}




void menu(){
        printf("\n**************************************\n");
        printf("\nBienvenido al inventario de libros UAI\n");
        printf("Ingrese uno de los siguientes numeros para hacer la accion a su derecha\n");
        printf("1.  Buscar un libro\n");
        printf("2.  Agregar un libro nuevo\n");
        printf("3.  Quitar un libro existente\n");
        printf("4.  Agregar una sede\n");
        printf("5.  Quitar una sede\n"); //Solo si no tiene libros asociados
        printf("6.  Editar un libro\n");
        printf("7.  Cambiar un libro de sede\n");
        printf("8.  Cambiar un libro de seccion\n");
        printf("9.  Cambiar un libro de piso \n");
        printf("10. Agregar secciones\n");
        printf("11. Eliminar secciones\n"); //Solo si no tiene libros asociados
        printf("12. Agregar pisos\n");
        printf("13. Quitar pisos\n"); //Solo si no tiene libros asociados
        printf("14. Salir y guardad\n");
        printf("\n**************************************\n");
}
