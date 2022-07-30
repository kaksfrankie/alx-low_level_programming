#include "main.h"

int _rt(int n, int a);

/**
*_sqrt_recursion - return the netural square root of a number
*@n: the square
*
*Return: root
*/

int _sqrt_recursion(int n)
{
	return (_rt(n, 1));
}

/**
*_rt - calculates the root
*@n: square
*@a: counter to check square
*
*Return: root
*/

int _rt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (a);
	}

	return (_rt(n, a + 1));
}
