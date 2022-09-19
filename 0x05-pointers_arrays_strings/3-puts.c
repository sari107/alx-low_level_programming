#include "main.h"

/**
 * _puts - func
 *  @str - pointer
 *  Return: void
 */

void _puts(char *str)
{
int j = 0;

while (str[j])
{
	_putchar(str[j]);
	j++;
}
_putchar('\n');
}
