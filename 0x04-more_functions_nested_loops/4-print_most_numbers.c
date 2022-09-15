#include "main.h"
/**
 * print_most_number - func
 * Descriptpion: Print number with _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		if ( i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
