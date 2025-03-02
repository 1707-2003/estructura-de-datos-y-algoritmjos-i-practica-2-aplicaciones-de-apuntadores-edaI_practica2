// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    int suma = 0;

    // repetir sobre el arreglo con apuntadores
    for (int i = 0; i < tamaño; i++) {
        suma += *(arr + i);  // Sumar los valores de los elementos
    }
    
    return suma;  // Devolver la suma total
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};

    // Calcular la suma de los elementos del arreglo
    printf("La suma de los elementos del arreglo es: %d\n", sumaArreglo(numeros, 5));

    // Imprimir los elementos del arreglo
    
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(numeros + i));  // Mostrar cada elemento
    }
    
    return 0;
}


