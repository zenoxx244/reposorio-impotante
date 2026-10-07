#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale (LC_ALL, "");
	int p1, p2, p3, p4;
	double media;
	printf("diz o primeiro numero");
	scanf_s("%d", & p1);
	printf("diz o segundo numero");
	scanf_s("%d", &p2);
	printf("diz o terceiro numero");
	scanf_s("%d", &p3);
	printf("diz o quarto numero");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4.0;
	printf("%.2f", media);
	return 0;
}