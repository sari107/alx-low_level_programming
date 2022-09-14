#include <stdio.h>
/**
 * main - main func
 * Desctiption: using fibonacci numbers add
 * numbers and that are < 4000000 and show their sum
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 1, next;
	int sum = 0;

	while (next < 4000000)
	{
		next = i + j;
		i = j;
		j = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
