#include <stdio.h>

/*betty style code for function main */
int main(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x++)
	{
		if((x != 'e') && (x != 'q'))
		{
			putchar( x );
			putchar('\n');
		}
	}
	return (0);
}

