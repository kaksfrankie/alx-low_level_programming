#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string to be printed
*
*return : void
*/

void puts2(char *str)
{
	int i, j;

	j = 0;


	while (str[j] != '\0')
	{
		j++;
	}

	for (c = 0; c < j; c += 2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
