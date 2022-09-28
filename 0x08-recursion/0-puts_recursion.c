#include "main.h"
/**
 * C-Recursion
 * Print String
 * Return Void
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
