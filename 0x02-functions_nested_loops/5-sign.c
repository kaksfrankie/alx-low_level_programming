#include "main.h"
/*
*prints the number sign
*/int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		return (-1);
	}
	else
	{
		_putchar(0);
		_putchar(',');
		return (0);
	}
	_putchar('\n');
}
