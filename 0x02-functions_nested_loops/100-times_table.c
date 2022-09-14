#include "main.h"
/**
 * print_times_table - func
 * @n : times table in us
 * Return:Void
 */
void print_times_table(int n)
{
	int i = 0, rep, j;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			rep = i * j;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) /10);
				_putchar('0' + rep % 10);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
