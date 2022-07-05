#include "main.h"
/*
*return last digit
*/int print_last_digit(int a)
{
	int x;

	x = a % 10;
	return (x);
	_putchar(x);
	_putchar('\n');
}
