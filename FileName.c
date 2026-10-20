#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero: ");
        scanf_s("%d", &numero);

 if (numero == 0) {
            printf("Digitou 0 - vai sair do programa.\n");
 
 
 }
 else if (numero % 2 == 0) {
     printf("O numero %d e par.\n", numero);

 
 }
 else {
   printf("O numero %d e impar.\n", numero);
 
 
}


   } while (numero != 0);

    return 0;
}