#include <stdio.h>
#include "adicional.h"

int lee_numero_natural(char mensaje[], unsigned short intentos)
{
    int valor;
    printf("Ingrese un numero natural- %s :\n", mensaje);
    for(;intentos>0;intentos--)
    {
        scanf("%d", &valor);
        if (valor>=0)
        {
            return valor;
        }
        else
        {
            printf("%d no era un numero natural, quedan %d intentos\n", valor, intentos);
        }
    }
    return SIN_INTENTOS;
}
