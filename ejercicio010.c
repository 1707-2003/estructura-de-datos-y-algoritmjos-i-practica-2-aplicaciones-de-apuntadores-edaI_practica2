#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    for (int i = 0; i < tamaño - 1; i++) {
        
        for (int j = 0; j < tamaño - i - 1; j++) {
            
            if (*(arr + j) > *(arr + j + 1)) {
                // Si están en el orden incorrecto, los intercambia
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamaño = sizeof(arr) / sizeof(arr[0]);  // Calcula el tamaño del arreglo

    // Mostrar arreglo antes de ordenar
    printf("Arreglo original:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // función de ordenamiento
    ordenarBurbuja(arr, tamaño);

    // arreglo después de ordenar
    printf("Arreglo ordenado:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}
