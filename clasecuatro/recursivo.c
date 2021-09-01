#include <stdio.h>

int factorial(int numero)
{
    printf("%d\n", numero);
    int retorno;
    if (numero > 1)
    {
        retorno = numero * factorial(numero - 1);
    }
    else
    {
        retorno = 1 * 1;
        //no es necesario pero es tecnicamente correcto
    }
    printf("%d!=%d\n",numero, retorno);
    return retorno;
}


int main()
{
    int un_numero = 10;
    int resultado = factorial(un_numero);
    printf("factorial de %d, es %d\n", un_numero, resultado);
    return 0;
}


