#include "main.h"

/**
*puts_half - pritns half of the string
*@str: print half of it
*
*return : none
*/

void puts_half(char *str)
{
	int c, j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		for (c = ((j - 1) / 2); c < j; c++)
		{
			_putchar(str[c]);
		}
	}

	else
	{
		for (c = (j / 2); c < j; c++)
		{
			_putchar(str[c]);
		}
	}
	 _putchar('\n');
}
