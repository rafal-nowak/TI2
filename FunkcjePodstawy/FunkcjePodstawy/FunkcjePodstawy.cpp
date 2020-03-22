#include <stdio.h>

void foo(int a, int b = 2, int c = 5, int d = 10)
{
	printf_s("\n");
	printf_s("a = %d\n", a);
	printf_s("b = %d\n", b);
	printf_s("c = %d\n", c);
	printf_s("d = %d\n", d);
	printf_s("\n");
}

int main(void)
{
	printf_s("Program ten sluzy do zaprezentowania wartosci domyslnych parametrow funkcji\n");
	foo(1, 2, 3, 4);
	foo(1, 2, 3);
	foo(1, 2);

	return 0;
}
