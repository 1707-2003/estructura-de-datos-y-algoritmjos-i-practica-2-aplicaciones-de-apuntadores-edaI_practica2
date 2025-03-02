#include <stdio.h>

// Se imprimen 3 valores de un arreglo a través de aritmética de direcciones.

int main () {
  int *ap;
  int nums[3][3] = {{99, 88, 77},
                    {66, 55, 44},
                    {33, 22, 11}};
  ap = &nums[0][0];  // ap apunta al primer elemento del arreglo

  // para recorrer
  for (int i = 0; i < 9; i++) {
    if ((i % 3) == 0)
      printf("\n");
    // Se imprime la dirección y el valor del elemento usando ap
    printf("%p %d\t", (void*)(ap + i), *(ap + i));
  }
  printf("\n");

  // Recorrer el arreglo bidimensional usando punteros
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      // Calculamos la dirección correctamente con la aritmética de punteros
      printf("%p %d\t", (void*)(ap + i * 3 + j), *(ap + i * 3 + j));
    }
    printf("\n");
  }

  return 0;
}

