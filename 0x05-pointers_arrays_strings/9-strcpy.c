#include "main.h"

/**
*_strcpy - copies a string.
*@dest: destination
*@src: source
*
*Return : char
*/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
