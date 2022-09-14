#include <stdio.h>
/**
 * main - main func
 * Description: fibonacci numbers
 * followed by new line 
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int j = 0, n = 1, next;

	while (i < 50)
	{
		next = j + n;
		j = n;
		n = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
