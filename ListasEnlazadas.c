/** Ejemplo simple de Listas Enlazadas*/

#include <stdio.h>
#include <stdlib.h>

/** Estructura que define cada nodo de la lista*/
struct NODO {
	int nodoValor;
	struct NODO *siguiente;
};
// Definimos un nuevo tipo de dato
typedef struct NODO nodo;

/* PROTOTIPOS */
nodo *crearLista(nodo *inicial);
nodo *insertar(int valor, nodo *nodoInicial);
void imprimirLista(nodo *);

/* MAIN */
int main(int argc, char **argv) {

	nodo *lista;

	lista = crearLista(lista);
	lista = insertar(10, lista);
	lista = insertar(11, lista);
	lista = insertar(12, lista);
	lista = insertar(13, lista);

	imprimirLista(lista);

	return EXIT_SUCCESS;
}

// FUNCION PARA INICIAR LA LISTA
nodo *crearLista(nodo *nodoInicial) {
	return (nodoInicial = NULL);
}

// FUNCION PARA INSERTAR VALORES DENTRO DE LA LISTA
nodo *insertar(int valor, nodo *nodoInicial) {
	nodo *nodoAux;
	nodo *nuevoNodo = (nodo *) malloc(sizeof(nodo));

	if (nuevoNodo != NULL) {

		nuevoNodo->nodoValor = valor;
		nuevoNodo->siguiente = NULL;

		if (nodoInicial == NULL) { // Si la lista esta vacia inserta el valor ingresado

			nodoInicial = nuevoNodo;

		} else { // Si la lista no esta vacia ingresa el nuevo valor en el nodo siguiente

			nodoAux = nodoInicial;

			while (nodoAux->siguiente != NULL)
				nodoAux = nodoAux->siguiente;

			nodoAux->siguiente = nuevoNodo;
		}
	}

	return nodoInicial;
}

// FUNCIÓN QUE IMPRIME LOS VALORES DE LA LISTAS INGRESADOS
void imprimirLista(nodo *lista) {
	nodo *nodoAux = lista;

	printf("Contenido de la lista: valor-> ");
	while (nodoAux != NULL) {

		printf("%d ", nodoAux->nodoValor);

		nodoAux = nodoAux->siguiente;
	}
	printf("NULL\n");
	free(nodoAux);
	return;
}
