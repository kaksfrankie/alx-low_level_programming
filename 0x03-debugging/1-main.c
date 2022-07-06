#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 0)
	{
		putchar(i); /* i should be incremented after this*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
