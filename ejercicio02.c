#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {
  short arr[5] = {1, 2, 3, 4, 5}, *apArr;
  apArr = &arr[0]; // apArr = arr;

  // Imprime la dirección de memoria del arreglo en la posición [0]
  printf("Dirección del arreglo en la primera posición: %p\n", (void*)&arr[0]);

  // Imprime la dirección de memoria del arreglo 
  //el nombre del arreglo es un apuntador
  
  printf("Dirección del arreglo: %p\n", (void*)&arr);
  printf("Dirección del arreglo: %p\n", (void*)arr);

  // Imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Dirección almacenada en el apuntador: %p\n", (void*)apArr);

  printf("*apArr = %i\n", *apArr);

  // Suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n", *(apArr + 1));
  printf("*(apArr+2) = %i\n", *(apArr + 2));
  printf("*(apArr+3) = %i\n", *(apArr + 3));
  printf("*(apArr+4) = %i\n", *(apArr + 4));

  // Recorre el arreglo usando un apuntador
  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  // Modifica apArr
  apArr = &arr[3];

  // Accede al elemento con índice -2 usando el apuntador
  printf("Elemento -2: %d\n", apArr[-2]);
  printf("Elemento 0: %d\n", apArr[0]);
  printf("Elemento -3: %d\n", apArr[-3]);

  
  for (int i = -3; i < 2; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  return 0;
}
