#include <stdio.h>

// Función para intercambiar los valores de dos variables
void intercambiar(int *a, int *b) {
    int temp = *a;  // Guardamos el valor de *a en temp
    *a = *b;         // Asignamos el valor de *b a *a
    *b = temp;       // Asignamos el valor de temp a *b
}

int main() {
    int arr[] = {5, 10};  // Arreglo con dos elementos

    // valores originales
    printf("Valores originales: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    // para intercambiar los valores
    intercambiar(&arr[0], &arr[1]);

    // los valores después del intercambio
    printf("Valores después del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}

