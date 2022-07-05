#include "main.h"
int pos(int x);
/*
*return last digit
*/int print_last_digit(int a)
{
	int x, y;

	if (a < 0)
	{
		a = pos(a);
	}
	else
	{
		a = a;
	}
	y = a % 10;
	if (y > 0)
	{
		x = (y * 10) + y;
		return (x);
	}
	else
	{
		return ("00");
	}
	_putchar('\n');
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
