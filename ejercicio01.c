#include <stdio.h>

int main() {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t'; 

  // Imprimir la dirección de c
  ap = &c;
  printf("Direccion de memoria de c: %p\n", (void*)ap); 
  printf("Caracter: %c\n", *ap);                        // Carácter apuntado por ap (c)
  printf("Codigo ASCII: %d\n", *ap);                    

  // Imprimir la dirección de d
  ap = &d;
  printf("Dirección de memoria de d: %p\n", (void*)ap); // Dirección de memoria de d
  printf("Carácter: %c\n", *ap);                        // Carácter apuntado por ap (d)
  printf("Código ASCII: %d\n", *ap);                    

  // Imprimir la dirección de e
  ap = &e;
  printf("Direccion de memoria de e: %p\n", (void*)ap); // Dirección de memoria de e
  printf("Caracter: %c\n", *ap);                        // Carácter apuntado por ap (e)
  printf("Codigo ASCII: %d\n", *ap);                    

  return 0;
}
