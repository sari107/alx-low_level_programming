#include "main.h"
/**
 * print_alphabet - the function that hold the code
 * Return:0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar (alph);
		alph++;
	}
	_putchar('\n');
}
