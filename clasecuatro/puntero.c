

#include <stdio.h>

int main()
{

    int numero = 10;
    int *puntero = &numero;

    printf("<%d>\n", numero);
    
    *puntero = *puntero + 1;
    
    printf("<%d>\n", numero);

    return 0;
}


