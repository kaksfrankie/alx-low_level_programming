#include <stdio.h>
/*
*Main - prints 10 rows of the alpahabet.
*
*Return - Always 0.
*/int main(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
	return (0);
}
