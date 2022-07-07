#include "main.h"

/**
*print_most_numbers - print numbers from 0 to 9 without 2 and 4
*
*Return: Numbers from 0 to 9 without 2 and 4
*/

void print_most_numbers(void)
{
	int i;

	while ((i != 2) && (i != 4))
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
