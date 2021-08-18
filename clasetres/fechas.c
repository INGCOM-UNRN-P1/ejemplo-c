/*
Implementar la funcion compara_fechas que recibe como argumentos dos cadenas de caracteres en el formato "dia/mes/año" y las compare de forma que retorne

-1 si la primera fecha es anterior a la segunda
0 si las fechas son iguales
1 si la primera fecha es posterior a la segunda
*/
#include <stdio.h>
#include <stdlib.h>

#define SEGMENTO 3
#define CADENA_FECHA 9

int largo(char* cadena);
int extrae(char* destino, char* origen, int inicio, int largo);
int compara_fechas(char* primera, char* segunda);

int main()
{
    char cadenauno[] = "10/01/21";
    char cadenados[] = "15/11/21";
    int resultado = 90;

    char subcadena[1000];
    extrae(subcadena, cadenauno, 0, 2000);
    subcadena[8] = '_';
    subcadena[17] = '_';
    printf("subcadena es: %s\n", subcadena);

    resultado = compara_fechas(cadenauno, cadenados);
    printf("El resultado de comparar es %d\n", resultado);
    return 0;
}

int largo(char* cadena)
{
    for(int i = 0;i<CADENA_FECHA;i++)
    {
        if(cadena[i] == '\0')
        {
            return i;
        }
    }
    return -1;
}
/*
extrae(retorno, "Hola Mundo\0", 5, 3) -> "Mun\0"

0 H
1 o
2 l
3 a
4 " "
5 M
6 u
7 n
8 d
9 o
10 \0
*/

int extrae(char* destino, char* origen, int inicio, int largo)
{
    int i = 0;
    for(int contador = inicio;contador<inicio+largo;contador++)
    {
        destino[i] = origen[contador];
        i++;
    }
    destino[i] = '\0';
    return i;
}

/**
El patron de la fecha es como está estructurada.
YY/MM/DD
DD/MM/YY
MM/DD/YY
*/
int validar_fecha(char* fecha, char* patron);


int compara_fechas(char* primera, char* segunda, char* patron)
{
    char segmento1[SEGMENTO];
    char segmento2[SEGMENTO];
    int valor = 0;
    int resultado = 0;
    int contador1 = 0;
    int contador2 = largo(primera);
    
    segmento1[0]=primera[6];
    segmento1[1]=primera[7];
    segmento1[2]='\0';
    
    segmento2[0]=segunda[6];
    segmento2[1]=segunda[7];
    segmento2[2]='\0';
    
    printf("%s %s %s ", primera, segmento1, segmento2);
    valor = atoi(segmento1);
    return valor;
}






