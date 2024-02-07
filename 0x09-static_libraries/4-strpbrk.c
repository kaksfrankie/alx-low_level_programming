#include "main.h"

/**
*_strpbrk - searches for a string for any set of bytes
*@s: string
*@accept: source string
*
*Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
