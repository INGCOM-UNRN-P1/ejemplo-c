#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 64

struct estudiante {
    char nombre[MAX_NOMBRE];
    short cohorte;
    short edad;
};

typedef struct estudiante estudiante_t;

int main() {
    estudiante_t s = { "H. Simpson", 1999, 50 };

    printf("Un ejemplo de estudiante: %s, %d, %d\n", s.nombre, s.cohorte, s.edad);
    printf("Tamaño en memoria de uno: %lu\n", sizeof(estudiante_t));
    printf("Tamaño en memoria del nombre: %lu\n", sizeof(s.nombre));
    printf("Tamaño en memoria del short: %lu\n", sizeof(s.cohorte));

    return 0;
}
