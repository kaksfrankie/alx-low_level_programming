#include "main.h"
int pos(int x);
int last(int b);
/*
*return last digit
*/int print_last_digit(int a)
{

	if (a < 0)
	{
		a = pos(a);
	}
	else
	{
		a = a;
	}
	last(a);
	return (last(a));
	_putchar('\n');
}
/*
*return last digit
*/int last(int b)
{
	int x;

	x = b % 10;
	return (x);
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
