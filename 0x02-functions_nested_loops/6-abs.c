#include "main.h"
/*
*compute the absolute value
*/int _abs(x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
	_putchar('\n');
}
