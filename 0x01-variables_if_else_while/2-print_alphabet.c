#include <stdio.h>
#include <stdlib.h>
/*
*betty doc for function main
*/int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}
