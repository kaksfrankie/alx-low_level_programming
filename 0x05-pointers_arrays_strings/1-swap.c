#include "main.h"

/**
*swap_int - takes two values and swaps them
*@a:first value
*@b:second value
*
*Return: none
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
