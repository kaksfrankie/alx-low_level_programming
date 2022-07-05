#include "main.h"
int pos(int x);
/*
*return last digit
*/int print_last_digit(int a)
{
	int y;

	if (a < 0)
	{
		a = pos(a);
	}
	else
	{
		a = a;
	}
	y = a % 10;
	_putchar(y);
	return (x);
	_putchar('\n');
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
