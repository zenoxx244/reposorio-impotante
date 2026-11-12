#include <stdio.h>
int main(void)
{
    int v[10];
    int i, e, c = 0, t = 0;
    printf("fala ai 10 numeros rei:\n");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &v[i]);
    }
    printf("1 - c quer sabes quantos neg tem?");
    printf("\n2 - ou c quer somar os neg");
    scanf_s("%d", &e);
    i = 0;
    while (i < 10)
    {
        if (v[i] < 0)
        {
            c++;
            t = t + v[i];
        }
        i++;
    }
    switch (e)
    {
    case 1:
        printf("tem %d numeros negativos paizao.", c);
        break;
    case 2:
        printf("A soma ai dos neg e %d.", t);
        break;
    }
    return 0;
}