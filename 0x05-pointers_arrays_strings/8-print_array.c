#include "main.h"

/**
*print_array - prints the array
*@a: array to be printed
*@n: number for elements in the array
*
*return : none
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != (n-1))
		{
			printf("%d, ",a[c]);
		}
		
		else
		{
			printf("%d\n",a[c]);
		}
	}
}
