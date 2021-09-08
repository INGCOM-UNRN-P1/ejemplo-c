#include <stdio.h>
#include <stdlib.h>

struct fraccion {
    int numerador;
    int denominador;
};

typedef struct fraccion fraccion_t;

void imprime_fraccion(fraccion_t fraccion)
{
    printf("numerador <%d> \n denominador %d\n", fraccion.numerador, fraccion.denominador);
}

int main()
{
    fraccion_t f1 = {1,4};
    fraccion_t f2 = f1;
    fraccion_t *pf;
    pf = &f1;

    printf("f1 es:");
    imprime_fraccion(f1);
    printf("f2 es:");
    imprime_fraccion(f2);
    printf("pf es:");
    imprime_fraccion(*pf);

    pf->numerador = 10;
    pf->denominador = 10;

    //(*pf).numerador = 40;

    printf("\n\nf1 es:");
    imprime_fraccion(*pf);

    return 0;
}
