/*
 * Lectura de archivos caracter a caracter.
 */

#include <stdio.h>

int main () {
    FILE *fp;
    int c;
//    unsigned char c;

    fp = fopen("archivo.txt","r");
    if(fp == NULL || ferror(fp)) {
       perror("Ooops");
       return(-1);
    }
    while(1) {
       c = fgetc(fp);
       if( feof(fp) ) {
          break ;
       }
       printf("%c", c);
    }
    fclose(fp);
    return(0);
}
