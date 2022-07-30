#include "main.h"
/**
*_pow_recursion - returns a value of x to the power y
*@x: value
*@y: power
*
*Return: power value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
