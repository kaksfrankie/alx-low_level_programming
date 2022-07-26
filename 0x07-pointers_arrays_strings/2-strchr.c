#include "main.h"

/**
*_strchr - locates character in a string
*@s: string
*@c: character to look for
*
*Return: c
*/
char *_strchr(char *s, char c)
{
	int a, b;

	a = 0;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
