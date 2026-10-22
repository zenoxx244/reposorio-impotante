#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL,"");
	int km;
	float lg,mi,mf;
	printf("fala os litros de gasolina");
	scanf_s("%f", &lg);
	printf("fala os metros iniciais"); ​
		scanf_s("%f", mi);
	printf("fala os metros finais"); ​
		scanf_s("%f", mf);
	km = lg * 100 / (mf - mi);
	printf("O teu carro em 100km gasta : % 2f\n", km);
	return 0;
}