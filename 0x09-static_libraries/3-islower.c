#include "main.h"
/**
*_islower - checks for the lowercase character
*@c: the character to check
*Return: 1 if c is the lowercase, 0 otherwise..
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
