#include "main.h"

int check_prime(int n, int a);

/**
*is_prime_number - returns 1 if number is prime otherwise 0
*@n: number to be checked
*
*Return: 1 otherwise 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
*check_prime - checks for prime numbers
*@n: number to be checked
*@a: counter to check
*
*Return: 1 otherwise 0
*/

int check_prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}

	if ((n / a) < a)
	{
		return (1);
	}

	return (check_prime(n, a + 1));
}
