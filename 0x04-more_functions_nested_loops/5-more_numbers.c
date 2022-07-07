#include "main.h"

/**
*more_numbers - print 10 times the from 0 to 14
*
*Return: 10 times numbers from 0 to 14;
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}

			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
