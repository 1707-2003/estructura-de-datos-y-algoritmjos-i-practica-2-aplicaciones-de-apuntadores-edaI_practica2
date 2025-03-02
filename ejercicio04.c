#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  printf("Valores originales:\n");
  for (int i = 0; i < 5; i++) {
    // Imprime los valores 
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  // Modifica los valores del arreglo multiplicándolos por 2
  for (int i = 0; i < 5; i++) {
    *(ptr + i) *= 2;  // Multiplica cada valor por 2
  }

  printf("\nValores modificados:\n");
  for (int i = 0; i < 5; i++) {
    // Imprime los valores modificados 
    printf("%d ", *(ptr + i));
  }
  printf("\n");

  return 0;
}
