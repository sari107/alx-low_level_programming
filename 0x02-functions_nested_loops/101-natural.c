#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * Description: computes the sum of all the multiples of 3 or
 * 5 below and prints, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
