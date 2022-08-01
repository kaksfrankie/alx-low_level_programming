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
	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
