// multiplica2.c

#include "funcoes.h"

void multiplica2(double *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] *= 2.0;
    }
}
