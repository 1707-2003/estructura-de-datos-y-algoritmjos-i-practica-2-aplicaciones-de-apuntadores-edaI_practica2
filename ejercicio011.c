#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Recorremos el arreglo para buscar el valor
    for (int i = 0; i < tamaño; i++) {
        // Compara el valor en la posición arr[i] con el valor buscado
        if (*(arr + i) == valor) {
            return arr + i;  // Devolvemos la dirección del valor encontrado
        }
    }
    return NULL;  // Si no se encuentra el valor, devolvemos NULL
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamaño = sizeof(arr) / sizeof(arr[0]);  // Calcula el tamaño del arreglo
    int valor = 30;  // Valor que queremos buscar

    // Llamamos a la función para buscar el valor
    int *result = buscarElemento(arr, tamaño, valor);

    // Verificamos si encontramos el valor
    if (result != NULL) {
        printf("Valor %d encontrado en la dirección: %p\n", valor, (void*)result);
    } else {
        printf("Valor %d no encontrado en el arreglo.\n", valor);
    }

    return 0;
}
