#include "main.h"

/**
*print_rev - prints a string in reverse followed by a new line
*@s: string to be printed
*
*Return: none
*/

void print_rev(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
