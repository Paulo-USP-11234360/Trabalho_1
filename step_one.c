#include <stdio.h>

void soma2(double *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] += 2.0;
    }
}

void subtrai2(double *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] -= 2.0;
    }
}

void multiplica2(double *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] *= 2.0;
    }
}

int main() {
    double array1[] = {1.0, 2.0, 3.0};
    double array2[] = {2.0, 3.0, 4.0, 5.0};
    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);

    printf("Array1 antes das operações:\n");
    for (int i = 0; i < tamanho1; i++) {
        printf("%.2lf ", array1[i]);
    }
    printf("\n");

    printf("Array2 antes das operações:\n");
    for (int i = 0; i < tamanho2; i++) {
        printf("%.2lf ", array2[i]);
    }
    printf("\n");
    printf("-----------------------------\n");


    soma2(array1, tamanho1);
    soma2(array2, tamanho2);
    printf("Array1 após somar 2:\n");
    for (int i = 0; i < tamanho1; i++) {
        printf("%.2lf ", array1[i]);
    }
    printf("\n");

    printf("Array2 após somar 2:\n");
    for (int i = 0; i < tamanho2; i++) {
        printf("%.2lf ", array2[i]);
    }
    printf("\n");
    printf("-----------------------------\n");
    
    multiplica2(array1, tamanho1);
    multiplica2(array2, tamanho2);
    printf("Array1 após multiplicar por 2:\n");
    for (int i = 0; i < tamanho1; i++) {
        printf("%.2lf ", array1[i]);
    }
    printf("\n");
    printf("Array2 após multiplicar por 2:\n");
    for (int i = 0; i < tamanho2; i++) {
        printf("%.2lf ", array2[i]);
    }
    printf("\n");
    printf("-----------------------------\n");
    
    
    subtrai2(array1, tamanho1);
    subtrai2(array2, tamanho2);
    printf("Array1 após subtrair por 2:\n");
    for (int i = 0; i < tamanho1; i++) {
        printf("%.2lf ", array1[i]);
    }
    printf("\n");
    printf("Array2 após subtrair por 2:\n");
    for (int i = 0; i < tamanho2; i++) {
        printf("%.2lf ", array2[i]);
    }
    printf("\n");
    printf("-----------------------------\n");
    
    
    return 0;
}
