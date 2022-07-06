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
			_putchar(product + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
