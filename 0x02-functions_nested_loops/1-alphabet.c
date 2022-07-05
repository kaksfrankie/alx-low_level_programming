#include <stdio.h>
/*
*function main
*return : Always 0.
*/int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	};
	putchar('\n');
	return (0);
}
