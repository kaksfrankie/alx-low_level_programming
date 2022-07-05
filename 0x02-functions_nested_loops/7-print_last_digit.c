#include "main.h"
int pos(int x);
int last(int b);
void twice(int c);
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
	return (twice(last(a)));
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
*twice output
*/void  twice(int c)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		_putchar(c);
	}
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
