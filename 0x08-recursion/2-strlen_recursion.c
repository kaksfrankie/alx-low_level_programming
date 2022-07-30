#include "main.h"
/**
*_strlen_recursion - returns the length of a string
*@s: string
*
*Return: string length
*/

int _str_len_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_str_len_recursion(s) + 1);
}
