
#include <stdio.h>
int main()
{
 int numero;
    do
{
       printf("qual numero queres:\n");
       scanf_s("%d", &numero);
   if (numero != 0)
{
   if (numero % 2 == 0)
{
        printf("O numero %d e par.\n", numero);
        printf("seu numero e par meu chefe.\n");
}
   else
{
         printf("O numero %d e impar.\n", numero);
         printf("seu numero e impar meu chefe.\n");
}
}
   else
{
         printf("Digitar 0 sai do proprama.\n");
}
}  while (numero != 0);
    printf("Programa terminado.\n");
    return 0;
}