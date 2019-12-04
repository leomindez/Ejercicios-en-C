#include <stdio.h>
#include <memory.h>
#include <string.h>
typedef struct lista{
    unsigned x;
    unsigned y;
    char color;
    struct lista *sig;
}lista;
int main()
{
    char opcion;
    printf("Bienvenido a listas entrelazadas simples\n");
    printf("\n Selecciona 'a' para: Crear lista");
    printf("\n Selecciona 'b' para: Insertar por adelante");
    printf("\n Selecciona 'c' para: Insertar por detras");
    printf("\n Selecciona 'd' para: Eliminar por adelante");
    printf("\n Selecciona 'e' para: Eliminar por detras");
    printf("\n Selecciona 'f' para: Listar de adelante hacia atras");
    printf("\n Selecciona 'g' para: Eliminar lista");
    printf("\n Selecciona 'h' para: Salir del programa");
    printf("\n Ha Seleccionado:");
    scanf("%c", &opcion);
    unsigned x,y;
        char color;
        int bandera;
    switch (opcion){
        case 'a':
        *CreaListaS();
        printf("\nDe coordenada x:");
        scanf("%u", &x);
        printf("\nDe coordenada y:");
        scanf("%u", &y);
        printf("\nDe un color:");
        scanf("%c", &color);
        break;
        case 'b':
        break;
        case 'c':
        break;
        case'd':
        break;
        case 'e':
        break;
        case 'f':
        break;
        case 'g':
        break;
        case 'h':
        break;
    }
    return 0;
}
//Nombre de la función: CreaNodo
//Descripcion de la función: Crea una una conexiones
//Entradas: una variable tipo lista
//Salidas: un apuntador
lista *CreaNodo(lista item){
	lista *apc=0;
	apc=malloc(sizeof(lista));
	*(apc)=item;
	apc->sig=0;
	return apc;
}
//Nombre de la función: CreaListaS
//Descripcion de la función: Crea una lista simple
//Entradas: ningun parametro
//Salidas: un primer centinela para la lista
lista *CreaListaS(){
    lista *H=0;
    lista x;
    H=CreaNodo(x);
    return H;
}
//Nombre de la función: InsertaxDelanteLs
//Descripcion de la función: Inserta un nuevo elemento por delante de la lista
//Entradas: un apuntador tipo lista, y un item tipo lista que sera insertado
//Salidas: un valor positivo sin signo diciendo si se puede agregar o no un nuevo centinela (banderas 0 y 1)

int InsertaxDelanteLS(lista *H, lista *item){
    item->sig = H->sig;
	H->sig = item;
	return 0;
}
//Nombre de la función: InsertaxDtLS
//Descripcion de la función: Inserta un nuevo elemento por detras
//Entradas: un puntero tipo lista, un nuevo item
//Salidas: un numero entero diciendo si se puede o no
int  InsertaxDtLS(lista *H, lista item){ //por detras
    lista *newitem=0;
    lista *apc=H;
    while(apc->sig!=apc){
        apc=apc->sig;
    }
    newitem=CreaNodo(item);
    if(newitem==0){
        return 0;
    }
    else
    {
    apc->sig=newitem;
    return 1;
    }
}
//Nombre de la función: ElimnaxDelante
//Descripcion de la función: Elimina un elemento por delante
//Entradas: un puntero tipo lista
//Salidas: nada
int EliminaxDelante(lista *H)
{
    lista *item = H->sig;
	item->sig=H;
	free(item);
	return 0;
}
//Nombre de la función: ElimnaxDetras
//Descripcion de la función: Elimina un elemento por detras 
//Entradas: una variable lista apuntador h
//Salidas: nada
void EliminaxDetras(lista *H){
        lista *apc=H;
        if(apc->sig==apc)
        {
            return;
        }
        else
        {
        while(apc->sig->sig!=apc)
        {
            apc=apc->sig;
        }
        free(apc->sig);
        apc->sig=apc;
        return;
    }
}
//Nombre de la función: ListaxAhA
//Descripcion de la función: Enlista de adelante hastra atras todos los elementos
//Entradas: una variable tipo puntero lista
//Salidas: 
void ListarxAhA(lista *H){ //listar por adelante hacia atras solamente recorre la lista, no la modifica.
   if(H->sig=H){
       return;
   }
   lista *apc1=H;
   while(apc1->sig!=apc1->sig->sig){
       printf("\n[%u]: x=%u \t y=%u \t Color=%c \n", apc1->x, apc1->y, apc1->color);
       apc1=apc1->sig;
   }
   return;
}
//Nombre de la función: ElimnaxDelante
//Descripcion de la función: Crea una lista simple
//Entradas: ningun parametro
//Salidas: un primer centinela para la lista
void BorrarLista(lista *H){ //Borra la lista, regresando al SO la memoria.
   free(H->sig);
   return;
}
