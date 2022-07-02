#include <stdio.h>
#include <stdlib.h>
/*
* Betty style coding for function main
*/int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
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
