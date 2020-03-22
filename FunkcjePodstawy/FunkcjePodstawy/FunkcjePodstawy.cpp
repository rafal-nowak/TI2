#include <stdio.h>
#include "math_lib.h"



int main(void)
{
	int liczba_1 = 2, liczba_2 = 5, wynik = 0;

	printf_s("Program ten sluzy do obliczania sumy dwoch liczb\n");
	printf_s("Wpraowdz liczby ktore chcesz zsumowac (rozdziel je spacja)\n");
	scanf_s("%d %d", &liczba_1, &liczba_2);
	//wynik = liczba_1 + liczba_2;
	wynik = suma(liczba_1, liczba_2);
	printf_s("Suma wprowadzonych liczb wynosi %d\n", wynik);

	return 0;
}
