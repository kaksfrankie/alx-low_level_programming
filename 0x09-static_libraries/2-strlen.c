#include "main.h"

/**
*_strlen - returns the lenth of the string
*@s:string
*
*Return:lenth
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
