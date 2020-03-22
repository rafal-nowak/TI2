#include <stdio.h>

float pole_powierzchni(float promien)
{
	return 3.14 * promien * promien;
}

float pole_powierzchni(float a, float b)
{
	return a * b;
}

int main(void)
{
	printf_s("Program ten sluzy do zaprezentowania przeciazania funkcji\n");
	printf_s("Pole prostokata wynosi %.2f\n", pole_powierzchni(5,10));
	printf_s("Pole kola wynosi %.2f\n", pole_powierzchni(5));

	return 0;
}
