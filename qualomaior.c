#include <stdio.h>
int main()
{
	int n1, n2, n3, maior;
	printf("me fala o primeiro numero: ");
	scanf_s("%d", &n1);
	printf("me fala o segundo numero: ");
	scanf_s("%d", &n2);
	printf("me fala o terceiro numero: ");
	scanf_s("%d", &n3);
	maior = n1;
	if (maior < n2)
	{
		maior = n2;
	}
	if (maior < n3)
	{
		maior = n3;
	}
	printf("o maior numero e esse meu nobre: %d\n", maior);

	return 0;
}