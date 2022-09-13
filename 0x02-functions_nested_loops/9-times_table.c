#include "main.h"
/**
 * times_table - func
 * Return: void.
 */
void times_table(void)
{
	int x, y, m_value;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			m_value = x * y;
			_putchar(m_value);
			_putchar(',');
		}
		_putchar('\n');
	}
}
