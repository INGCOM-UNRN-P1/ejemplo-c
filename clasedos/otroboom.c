/*
Ejemplo de leer una cadena de texto con gets
Usando un array demasiado corto
*/

#include <stdio.h>

#define TAMANIO 4


int main()
{
    char cadena[TAMANIO] = "hola"; 
   
    scanf("%s", cadena);
    printf("La cadena leida es <%s>\n", cadena);

    return 0;
}
