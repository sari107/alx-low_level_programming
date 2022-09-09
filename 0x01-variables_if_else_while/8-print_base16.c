#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main block
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char c = 'a';

	while (c <= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
