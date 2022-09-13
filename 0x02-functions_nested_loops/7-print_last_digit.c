#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to be checked
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
