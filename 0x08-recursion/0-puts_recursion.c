#include "main.h"
/**
 * C-Recursion
 * Print String
 * Return Void
 */
void _puts_recursion(char*s)
{
	if(*s == '/0')
		return;
	printf("%c\n",*s);
	printf(++s);
}
