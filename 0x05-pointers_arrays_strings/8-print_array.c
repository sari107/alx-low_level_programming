#include <stdio.h>
#include "main.h"

/**
 * print_array - func
 * @a : pointer
 * @n : variable
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
