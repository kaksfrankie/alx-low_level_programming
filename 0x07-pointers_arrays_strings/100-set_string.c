#include "main.h"

/**
*set_string - sets the value of a pointer to a char
*@s: value to modify
*@to: the value to assign
*
*Return: None
*/

void set_string(char **s, char *to)
{
	*s = to;
}
