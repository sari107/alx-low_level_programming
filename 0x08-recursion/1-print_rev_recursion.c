#include "main.h"
/**
 * _print_rev_recursion - func
 * @s : string
 * Return : On success
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
