#include <stdio.h>
#include <stdlib.h>
/*
*betty code style for function main
*/int main(void)
{
	char x;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

