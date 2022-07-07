#include "main.h"

/**
*_isdigit -  checks for digits
*@c: digit to be checked
*
*Return: 1 if is digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
