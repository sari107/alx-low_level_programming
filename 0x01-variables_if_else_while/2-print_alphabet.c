#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main block
 * Retun: 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
