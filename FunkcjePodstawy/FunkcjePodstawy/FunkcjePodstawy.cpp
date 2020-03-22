#include <stdio.h>

enum IloscMiejscZerowych {ZERO, ONE, INF = 1000};

enum IloscMiejscZerowych ilosc_miejsc_zerowych_funkcji_liniowej(float a, float b)
{
  //funkcja posiada nieskonczenie wiele miejsc zerowych f(x) = ax + b
	if (a == 0 && b == 0) return INF;
	//funkcja nie posiada miejsc zerowych
	if (a == 0 && b != 0) return ZERO;
	//funkcja posiada jednomiejsce zerowe
	return ONE;
}

int main(void)
{
	printf_s("Program ten sluzy do zaprezentowania procesu projektowania funkcji\n");
	printf_s("Funkcja posiada %d miejsc zerowych\n", ilosc_miejsc_zerowych_funkcji_liniowej(5,10));
	printf_s("Funkcja posiada %d miejsc zerowych\n", ilosc_miejsc_zerowych_funkcji_liniowej(0, 0));
	printf_s("Funkcja posiada %d miejsc zerowych\n", ilosc_miejsc_zerowych_funkcji_liniowej(0, 2));

	return 0;
}
