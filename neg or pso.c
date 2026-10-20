#include <stdio.h>
#include <locale.h>
int main() {
    int numero;
do {
   printf("Introduza um numero: ");
   scanf_s("%d", &numero);

 if (numero > 0) {
  printf("O numero e positivo.\n");
}
 else if (numero < 0) {
      printf("O numero e negativo.\n");
   }
 else {
      printf("Digitou 0 - vai sair do programa.\n");
  }

  } while (numero != 0);

    
return 0;
}

	