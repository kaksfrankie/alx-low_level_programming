#include "main.h"

int check_palindrome(char *s);

/**
*is_palindrome - Returns if a string is a palindrome
*@s: the string value
*
*Return: int value
*/

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (check_palindrome(s));
}

/**
*check_palindrome - checks if a string is a palindrome
*@s: the string to be checked
*
*Return: int
*/

int check_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
*_strlen_recursion - string length
*@s: string
*
*Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;

	return (_strlen_recursion(s) + 1);
}
