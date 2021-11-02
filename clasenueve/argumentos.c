// Este es un programa de ejemplo para el uso de 
// argumentos de linea de comandos.
// ejecuten el programa como siempre y luego de esta manera:
// ./a.out Hola Mundo!
// (siendo a.out, a.exe o el nombre que haya sido indicado)
// argv[0] siempre contienen el nombre del programa

#include<stdio.h>
  
int main(int argc, char* argv[])
{
    int contador;
    printf("El nombre del programa es: %s\n",argv[0]);
    if(argc == 1)
    {
        printf("No fueron recibidos argumentos adicionales\n");
    }
    if(argc >= 2)
    {
        printf("Fueron pasados %d argumentos\n",argc);
        printf("----Los cuales son:----\n");
        for(contador = 0;contador < argc ; contador++)
        {
            printf("\targv[%d]: %s\n",contador, argv[contador]);
        }
    }
    return 0;
}
