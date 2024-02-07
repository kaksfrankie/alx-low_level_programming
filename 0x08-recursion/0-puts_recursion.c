#include "main.h"
/**
*_puts_recursion - prints a string, floowed by a new line
*@s: string to print
*/
void _putsrecursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
