/*
 * Programa de ejemplo para compilación de multiples archivos
 * 
 * compilar con:
 * gcc -o salida principal.c holalib.c
 * Programacion 1 - UNRN Andina
 */

#include <stdio.h>
#include "holalib.h"


int main(int argc, char *argv[])
{
    
    printf("Hola mundo. %d \n", suma(10,3));
    return 0;
}
