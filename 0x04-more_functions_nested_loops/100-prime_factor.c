#include <stdio.h>

/**
 * main - func
 * Return: Always 0.
 */

int main(void)
{
	long num = 612852475143;
	long i = 2;
	long j = 0;

	while (num != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
			j = i;
		}
		i += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
