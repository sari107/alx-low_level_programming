#include "holberton.h"
/** 
 * main - prints _putchar
 * Return:0 on success
 */
int main(void)
{
	char c[10] = "_putchar";
	int i =0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
