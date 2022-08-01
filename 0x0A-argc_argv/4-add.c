#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: argument counter
*@argv: argument vector
*
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *e;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (j = 0; j < strlen(e); j++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}

			}

			sum += atoi(e);
			e++
		}
	}

	return (0);
}
