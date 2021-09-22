#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
    char *cadptr;
    char cadena[] = "Programacion 1";

    cadptr = (char *) malloc(sizeof(char)*30);
    strcpy(cadptr, cadena);
    printf("Puntero Cadena  = %s,  Direccion = %p\n", cadptr, cadptr);
    printf("Cadena \t\t= %s,  Direccion = %p\n", cadena, cadena);


    return 0;
}
