#inlcude "main.h"

/**
*reverse_array - reverses an array
*@a: array
*@n: number of elements in a
*
*Return: none
*/
void reverse_array(int *a, int n)
{
	int *p, i, q, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		q = a[k];
		a[k] = *p;
		*p = q;
		p--;
	}
}
