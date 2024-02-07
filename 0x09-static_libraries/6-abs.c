#include "main.h"
/**
*_abs - computes the avsolute value of an integer
*@x: the int to check
*Return: the absolute value of an int
*/
int _abs(int x)
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
