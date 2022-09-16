incude "main.h"

/**
 * print_diagonal - func
 * Desctiption : prints diagonal
 * @n: number of spaces
 * Return:void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j <= i - 1; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
