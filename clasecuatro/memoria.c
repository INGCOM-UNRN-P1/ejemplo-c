

#include <stdio.h>

int main()
{

    char texto[20] = "Hola Mundo";

    printf("<%s>\n", texto);
    printf("<%s>\n", (char*) texto+2);    
    
    return 0;
}



int muestra_arreglo(int *arreglo, int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf("%d:%d\n", i, arreglo[i]);
    }
    return i;
}
