#include "main.h"
/*
*prints every minute of the day
*/ void jack_bauer(void);
{
	int i, j, x, y;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (x = 0; x <= 5; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
