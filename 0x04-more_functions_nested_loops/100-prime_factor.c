#include <stdio.h>

/**
 * main - func
 * Return: Always 0.
 */

int main(void)
{
	long i, j;

	i = 612852475143;

	for (j = 2; i > j; j++)
	{
		while (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
