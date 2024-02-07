#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: initial segment of string
*@accept:gives the bytes
*
*Return: number of bytes in substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, t;

	a = 0;
	t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
