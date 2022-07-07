#include "main.h"

/**
*print_line - draws a straight line through the terminal
*@n : number of times it should be drawn
*
*Return: straight line
*/

void print_line(int n)
{
	int i;

	while (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
