#include<stdio.h>
int main()
{
    int numero = 10;
    void *ptr = &numero;

    printf("El numero es %d\n", *(int *)ptr);
    return 0;
}
