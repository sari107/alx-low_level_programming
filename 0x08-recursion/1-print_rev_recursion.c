#include "main.h"

/**
 * 1-print_rev_recursion
 *
 * Return 
 */

void _print_rev_recursion(char *s)
{
	if(*s)
	{
		 _print_rev_recursion(s + 1);
		 _putchar(*s);
		 return;
	}
}
