#include <stdio.h>
#include <stdlib.h>
/*
*Betty style code for function main
*/int main(void)
{
	int x, y, i, j;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				for (j = y + 1; j <= '9'; j++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(i);
					putchar(j);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
