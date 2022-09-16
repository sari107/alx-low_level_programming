#include <stdio.h>
#include <math.h>

/**
 * main - func
 * Return: 0
 */

int main(void)
{
	long int number;

	number = 612852475143;

	if (isPrime(number) == 1)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}
