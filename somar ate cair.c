#include <stdio.h>
int main()
{
   int numero, soma = 0, contador = 0, media;
 do
 {
  printf("Digite um numero: ");
  scanf_s("%d", &numero);
        soma += numero;
        contador++;
 }
 while (soma < 1000);
        media = soma / contador;
  printf("A media dos numeros digitados e: %d\n", media);
  return 0;
}