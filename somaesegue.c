#include <stdio.h>
int main()
{
  int total, valor, resultado = 0, i;
     printf("quando queres pai: ");
     scanf_s("%d", &total);
   for (i = 1; i <= total; i++)
{
     printf("Introduza o %d numero: ", i);
     scanf_s("%d", &valor);
        resultado = resultado + valor;
}
     printf("ta ai o resultado chefe: %d\n", resultado);

    return 0;
}
