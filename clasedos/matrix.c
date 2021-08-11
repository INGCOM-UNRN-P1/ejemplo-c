#include <stdio.h>

#define FILAS 4
#define COLUMNAS 2

int main(int argc, char *argv[])
{
    int matri[FILAS][COLUMNAS];
    int i,j;
    
    for(i=0;i<FILAS;i++)
    {
        for(j=0;j<COLUMNAS;j++)
        {
            scanf("%d", &matri[i][j]);
        }
    }
    
    for(i=0;i<FILAS;i++)
    {
        for(j=0;j<COLUMNAS;j++)
        {
            printf("%d ", matri[i][j]);
        }
        printf("\n");
    }
    return 0;
}
