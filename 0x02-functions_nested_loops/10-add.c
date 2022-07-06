#include "main.h"
/*
*add - adds two integers
*/int add(int a, int b)
{
	int sum;

	sum = a + b;
	if (sum > 9)
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
	}
	else
	{
		_putchar(sum);
	}
	_putchar('\n');
	return (sum);
}
