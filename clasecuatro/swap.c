#include <stdio.h>
#include <stdlib.h>

void intertrucho(int valor, int otrovalor)
{
    printf("valor %d - otrovalor %d\n", valor, otrovalor);
    int tmp = valor;
    valor = otrovalor;
    otrovalor = tmp;
    printf("valor %d - otrovalor %d\n", valor, otrovalor);
}

void intercambiar(int *valor, int *otrovalor)
{
    int tmp = *valor;
    *valor = *otrovalor;
    *otrovalor = tmp;
}

int main()
{
    int x = 42;
    int y = 13;
    printf("x es %d, y es %d\n", x, y);
    intertrucho(x, y);
    printf("x es %d, y es %d\n", x, y);
    return 0;
}
