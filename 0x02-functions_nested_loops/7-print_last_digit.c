#include "main.h"
int pos(int x);
/*
*return last digit
*/int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = pos(last);
	}
	_putchar(last + '0');
	return (last);
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
