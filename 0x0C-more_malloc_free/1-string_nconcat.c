#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes
*
*Return: char
*/

char *string_nconcat(char *s1, char *s2, int n)
{
	unsigned int i, j, k, l;
	char *str;

	i = j = k = l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}

		j++;
	}

	str[j] = '\0';
	return (str);
}
