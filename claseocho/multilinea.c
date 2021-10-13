#include <stdio.h>
#include <string.h>

#define CADENA_MAX 50

/*Como seria una funcion con este ejemplo*/

int main()
{
    int lineas = 5;
    char mi_cadena[CADENA_MAX];
    int largo;
    printf("Ingresar %d lineas\n",lineas);
    for(;lineas>0;lineas--)
    {
        largo = strlen(mi_cadena);
        printf("%d caracteres, linea %d\n", largo, lineas); 
        fgets(mi_cadena+largo, CADENA_MAX-largo, stdin);
    }
    printf("El string cargado es\n<%s>\n",mi_cadena);
    return 0;
}
