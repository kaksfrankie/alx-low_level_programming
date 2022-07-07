#include "main.h"

/**
*_isupper -Check if the letter is upper
*@c - value to be checked
*
*Return: 1 for upper and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
