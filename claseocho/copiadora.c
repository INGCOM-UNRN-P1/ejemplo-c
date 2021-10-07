/*
Algo que les quería comentar sobre la función `copiadora` pero entre la batería y mi memoria me terminé olvidando.
(sin tipos) el prototipo de la función es 
`copiadora(origen, destino, capacidad_destino);`
Y como les mostré, al tener el argumento `capacidad_destino` pueden hacer cosas que no son evidentes a simple vista (Thundercats HO!)
Hay una función en `<stdlib.h>` que es MUY parecida (con los argumentos al revés):
`void* memcpy ( void* destination, void* source, size_t num );`
La única diferencia concreta que los punteros son genéricos (`void*`) en lugar de strings `char*`

Teniendo en cuenta que el tamaño de un `char` es justo un byte, la función se puede usar para copiar bloques de memoria de cualquier tipo. Esto es posible solo porque no estamos cambios en el contenido, es solo copiado de un lugar a otro.

Por ejemplo:
```C
int arr_origen[5] = {9,8,7,6,5};
int arr_destin[5];
copiadora((char*)arr_origen, (char*)arr_destin, sizeof(int)*5);
```
**importante** esto funciona correctamente si la función copiadora no tiene el recaudo de agregar el `\0`
*/

#include <stdio.h>

#define ARR_SZ 5

void muestra_arreglo(int arreglo[], int tamano)
{
    for(int i = 0; i<tamano;i++)
    {
        printf("%d:%d|", i, arreglo[i]);
    }
    printf("\n");
}

/*olvidense de los chequeos y retornos informativos, esta es una implementación muy simple*/
int copiadora(char origen[], char destino[], int capacidad_destino)
{
    for(int i = 0;i<capacidad_destino;i++)
    {
        destino[i] = origen[i];
    }
}

int main()
{
    int arr_origen[ARR_SZ] = {9,8,7,6,5};
    int arr_destin[ARR_SZ];  //sin inicializar para mostrar el funcionamiento
    printf("origen\n");
    muestra_arreglo(arr_origen, ARR_SZ);
    printf("destino y sin inicializar\n");
    muestra_arreglo(arr_destin, ARR_SZ);
    copiadora((char*)arr_origen, (char*)arr_destin, sizeof(int)*5);
    printf("origen\n");
    muestra_arreglo(arr_origen, ARR_SZ);
    printf("destino\n");
    muestra_arreglo(arr_destin, ARR_SZ);
}
