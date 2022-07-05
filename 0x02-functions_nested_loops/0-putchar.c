#include "main.h"
/*
*function to print _putchar
*Return Always 0(success).
*/int main(void)
{
	char c[] = "_putchar";
	int i;
	int size = sizeof(c)/ sizeof(c[0]);

	for (i = 0; i < size; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
