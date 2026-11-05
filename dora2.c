#include <stdio.h>
int main() {
    int op;
    float n1, n2, r;
    printf("1-Somar  2-Subtrair  3-Multiplicar  4-Dividir\n");
    scanf_s("%d", &op);
    printf("Digite dois numeros: ");
    scanf_s("%f %f", &n1, &n2);
    if (op == 1)
        r = n1 + n2;
    if (op == 2)
        r = n1 - n2;
    if (op == 3)
        r = n1 * n2;
    if (op == 4)
       r = n1 / n2;
    printf("Resultado: %.2f\n", r);
    return 0;
}