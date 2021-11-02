#include <stdio.h>
#include <string.h>

#define MAXIMO 5

//Usando VLA (Variable Lenght Arrays)
void muestra(int fila, int columna, char matrix[fila][columna])
{
    int i;
    int j;

    for(i=0; i<fila; i++)
    {
        for(j=0; j<columna; j++)
        {
            putc(matrix[i][j],stdout);
        }
        putc('\n',stdout);
    }
}

//Martillando un arreglo para que se parezca a una matriz
void muestra_2(char *matrix, int fila, int columna)
{
    int i;
    int j;

    for(i=0; i<fila; i++)
    {
        for(j=0; j<columna; j++)
        {
            putc(matrix[i * columna + j],stdout);
        }
        putc('\n',stdout);
    }
}

//El mejor ejemplo, de doble puntero a matriz (vean como es el llamado)
void muestra_3(char *matrix, int fila, int columna)
{
    int i;
    int j;
    char (*ptr)[fila] = (void*) matrix;
    
    for(i=0; i<fila; i++)
    {
        for(j=0; j<columna; j++)
        {
            putc(ptr[i][j],stdout);
        }
        putc('\n',stdout);
    }
}

int main()
{

    char mp[MAXIMO][MAXIMO*2];

    memset(mp,'-',MAXIMO*MAXIMO*2); //esto pone en - la matriz
    
    //esto tambien se puede hacer con un cast.
    //pero al usar memoria dinamica es mas natural
    //arrancar directamente de un puntero asi.
    
    mp[1][0]= '*';
   
    muestra(MAXIMO, MAXIMO*2, mp);
    putc('\n',stdout);
    muestra_2(*mp, MAXIMO, MAXIMO*2);
    putc('\n',stdout);
    muestra_3((char*)mp, MAXIMO, MAXIMO*2);
    return 0;
}


