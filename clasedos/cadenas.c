/*
Ejemplo de leer una cadena de texto con fgets y 
*/

#include <stdio.h>

#define TAMANIO 4


int main()
{
    char cadena[TAMANIO] = "hola"; 
    fgets(cadena, TAMANIO, stdin);
    printf("La cadena leida es <%s>\n", cadena);

    return 0;
}
