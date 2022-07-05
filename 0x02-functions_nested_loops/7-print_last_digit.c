#include "main.h"
int pos(int x);
int last(int b);
int twice(int c);
/*
*return last digit
*/int print_last_digit(int a)
{
	int j, k;

	if (a < 0)
	{
		a = pos(a);
	}
	else
	{
		a = a;
	}
	j = last(a);
	k = twice(j);
	return (k);
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
*/int twice(int c)
{
	int i;

	if (c != 0)
	{
		i = (c * 10) + c;
		return (i);
	}
	else
		i = 0 + '0';
		return (i);
}
/*
*get the absolute value
*/int pos(int x)
{
	x = x * (-1);
	return (x);
}
