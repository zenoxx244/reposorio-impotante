#include<stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int c;
	char sei;
	do {
		printf("Diz um numero entre 0 e 2\n");
		scanf_s("%i", &c);
		char* carros[3] = { "corolla","mercedes","bmw\n" };
		printf("%s", carros[c]);
		if (c < 0 || c>2)
			printf("e entre 2 e 0");
		else
			printf("Queres continuar (s ou n) \n");
		getchar();
		scanf_s("%c", &sei);
	} while (sei != 'n');
	return 0;
}