#include "main.h"
/**
 * print_numbers - func
 * Return: 0
 */
void print_numbers(void)
{
	char i = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
