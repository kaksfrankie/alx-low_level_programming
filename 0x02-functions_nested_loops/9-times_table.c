#include "main.h"
/*
*print the 9 times table
*/void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j != 9)
			{
				if (product > 9)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
					}
					_putchar((product % 10) + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (product > 9)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
					}
					_putchar((product % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
