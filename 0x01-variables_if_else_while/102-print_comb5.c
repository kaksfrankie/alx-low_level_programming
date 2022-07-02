#include <stdio.h>
#include <stdlib.h>
/*
*Betty style code for function main
*/int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
