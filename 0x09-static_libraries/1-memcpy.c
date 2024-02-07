#include "main.h"
/**
*_memcpy - Copies memory
*@dest: destination
*@src: source
*@n: number of bytes to copy
*
*Return: destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
