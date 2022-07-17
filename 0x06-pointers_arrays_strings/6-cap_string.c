#include "main.h"

/**
*cap_string - capitalizes all words
*@s: string to be capitalized
*
*Return: char value
*/
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int space_counter = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < space_counter)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}

			i++;
		}

		a++;
	}

	return (s);
}
