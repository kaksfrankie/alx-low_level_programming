#include "main.h"
int _putchar(char c);
/*
*function to print _putchar
*Return Always 0(success).
*/int main(void)
{
	char c[] = "_putchar";
	int i;
	int size = sizeof c / sizeof c[0];

	for (i = 0; i < size; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
