#include "main.h"
/**
 * print_most_number - func
 * Descriptpion: Print number with _putchar
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= 9; i++)
	{
		if (i == '2' || i == '4')
			;
		else
			_putchar(i);
	}
	_putchar('\n');

}
