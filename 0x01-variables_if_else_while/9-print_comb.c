#include <stdio.h>
#include <stdlib.h>

/*Betty code style for function main */
int main(void)
{
	char x;
	 for(x = '0'; x <= '9'; x++)
	 {
		 putchar(x);
		 putchar(',');
		 putchar(' ');
	 }
	 putchar('\n');
	 return (0);
}
