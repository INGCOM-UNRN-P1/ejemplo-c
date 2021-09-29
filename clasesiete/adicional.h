#ifndef ADICIONAL_H
#define ADICIONAL_H

#define SIN_INTENTOS -1

/**
 * Esta funcion se encarga de obtener un numero natural del usuario\
 * parametro mensaje: un mensaje a imprimir al solicitar el ingreso
 * parametro intentos: es la cantidad de veces que se reintentará
 * devuelve: El numero natural ingresado por el usuario o
             numeros negativos en situaciones de error
 */
int lee_numero_natural(char mensaje[], unsigned short intentos);

#endif
