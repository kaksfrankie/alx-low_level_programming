#include "main.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to new space
*@str: pointer to be returned
*
*Return: char
*/

char *_strdup(char *str)
{
	int i, j;
	char *s;

	i = 0;
	j = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
